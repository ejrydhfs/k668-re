# Redragon vendor apps (BYK901 / BYCOMBO4 / EVision) vs. OpenRGB

Scope: 5 installers — K552-KR + K671 (BYK901), K671-KS + K580RGB-PRO (BYCOMBO4),
K580 old (EVision/MFC) — compared against the OpenRGB tree at
`/home/asdf/projects/openrgb-k668`.
Companion docs with full protocol detail: `BYK901_protocol.md`,
`BYCOMBO4_protocol.md`, `K580OLD_protocol.md` (same directory).

## 0. Method

```sh
innoextract -e -d <dir> <Inno installer.exe>        # 4 of 5 apps
unshield extract …                                  # K580_IS InstallShield
analyzeHeadless proj <name> -import <app> -postScript DumpRe2.java   # Ghidra 12.1.4
objdump -d <exe> > asm                              # cross-check (imagebase 0x400000)
strings -el <Cfg.ini>                               # UTF-16LE configs
iconv -f UTF-16LE / GBK …                           # text.xml, KB.ini, Lang0409.ini
```

All addresses/line numbers cited below are from `RE/*.decomp.c` (Ghidra) or
`/tmp/opencode/k671_oemdrv.asm` (objdump); OpenRGB line numbers from the files
in `openrgb-k668/` as-is.

---

## 1. Device map: who supports what

| App / platform | USB ID | Vendor app capability | OpenRGB status |
|---|---|---|---|
| K552-KR (BYK901) | `258A:002A` | full (9 modes, matrix, macro, game colors, profiles) | **no detector, no driver** |
| K671 (BYK901) | `258A:013B` | full (13 modes, same protocol) | **no detector, no driver** |
| K671-KS / K580PRO (BYCOMBO4) | `258A:010C` | full (20 kb modes, 10 mouse modes, 5 game slots, 10 music modes, macro, FW update) | `SinowealthKeyboard10c` detected (`SinowealthControllerDetect.cpp:47`), but **Off + Direct only** |
| BYCOMBO4 wireless dongle | `3554:FA09` | full over dongle | **no detector, no driver** |
| K580 old (EVision) | `320F:5000` (alt `0C45:5004`) | full (19 modes, profiles) | EVision **V1** detected (`EVisionKeyboardControllerDetect.cpp:76`, usage page `0xFF1C`), 17 modes, cmd subset |

`grep 0x013B|0x002A|0xFA09` over `openrgb-k668/` → zero matches outside
irrelevant deps (mbedtls/QMK keycodes). Confirmed absent.

## 2. `258A:010C` — BYCOMBO4 keyboard: framing matches exactly

OpenRGB `SinowealthKeyboard10cController::SetLEDsDirect`
(`SinowealthKeyboard10cController.cpp:65–83`):

```
buf[0x00]=0x06  buf[0x01]=0x08  buf[0x04]=0x01  buf[0x06]=0x7A  buf[0x07]=0x01
RGB at 0x08+i*3 … hid_send_feature_report(dev, buf, 520) … sleep 1 ms
```

Vendor `CDevG5KB` write (`FUN_00498f60`) with `KB.ini Fw=24`:

```
buf[0] = ((Fw != 0x18)-1 & 0xFD) + 9 = 0x06     # 0x09 when Fw < 24
buf[1] = cmd 0x08        (LED frame, decomp line 12078)
buf[4] = pages = 0x01    buf[5] = seq = 0
buf[6:7] = size = 0x017A (LE)   buf[8..] = RGB triples
chunk = 0x200 (report length 8+0x200 = 520 ✔), retry ×7 for cmd 8
```

**Verdict: byte-identical.** OpenRGB's `SetLEDsDirect` is the vendor
AccessData LED-frame write (`cmd 0x08`, report `0x06`, size `0x017A`,
126 LEDs × 3 B). The wire path is solved — the gap is purely *feature*:

| Feature | Vendor | OpenRGB 10c |
|---|---|---|
| Direct per-key control | ✔ (cmd 0x08) | ✔ |
| Hardware effect modes | 20 (`tc_kb_led1–20`) | ✖ only `Off` + `Direct` (`RGBController_SinowealthKeyboard10c.cpp:46,53`) |
| Game profiles 1–5 (FN+1..5) | ✔ (cmd 0x06 SetGame) | ✖ |
| Music modes ×10 + gain/effect/smoothness | ✔ | ✖ |
| Macro editor (4 layers, 1024 B) | ✔ (cmd 0x05) | ✖ |
| Profile save/read | ✔ (cmd 0x0A / 0x8A) | ✖ |
| Firmware update (`tc_update1–8`) | ✔ | ✖ |
| Mouse side (10 modes, MS framing) | ✔ (K580PRO bundle) | ✖ (no MS detection) |
| Wireless dongle `3554:FA09` | ✔ | ✖ |

The music-frame helper `SendMusicData FUN_00495b20`
(`[0]=0x08,[1]=0x0A,[2]=0x7A,[3]=1 + 0x17A data, total 0x17E`) is the **same
frame the K668 app uses** (`K668_RE_vs_OPENRGB.md §5`) — i.e. one music-LED
implementation would cover K668 + BYCOMBO4.

## 3. `258A:002A` / `258A:013B` — BYK901: no OpenRGB support at all

Both apps share one transport (see `BYK901_protocol.md`): feature reports with
report ID at `buf[0]`, payload from `buf[1]`, `HidD_SetFeature/GetFeature`,
3 × 200 ms retry. K671 reaches those two HID calls through a dynamically
loaded `Lowerdev.dll` — wire-identical to K552's direct HID.DLL calls.

Report set a driver must implement:

| Report | Size | Purpose |
|---|---|---|
| `0x09` R/W | `0x1F8` / `0x1F9` | key matrix read/write |
| `0x0A` R/W | `0x29` | LED state: mode/brightness/direct colors |
| `0x0B` R/W | `0x7E` | game color groups (5 slots) |
| `0x0C` W | `0x780` | macro buffer |

Effort: this is the smallest of the three — one controller class + an
RGBController with `Direct` (matrix `0x09`), N hardware modes (`0x0A`
payload byte = mode id, plus speed/brightness), and PID detection for two
devices. Blocking issue: **no OpenRGB detector claims these PIDs today.**

## 4. `320F:5000` — K580 old (EVision V1): wire format matches, coverage doesn't

- Checksum identical: vendor sums bytes `[3..0x3F]` → `buf[1]=lo, buf[2]=hi`;
  OpenRGB `ComputeChecksum` sums `0x03..63` → `buf[0x01]/buf[0x02]`.
- Report `0x04`, 64-byte `WriteFile`/feature reports, data at `buf[8..]`:
  identical.
- Vendor cmd `0x11` color write (offset = `bank*0x200 + idx*3`, data `[8..]`)
  = OpenRGB `WRITE_CUSTOM_COLOR_DATA 0x11` (`[4]=param_size,[5]=param`).
- Vendor cmd `0x10` = OpenRGB `READ_CUSTOM_COLOR_DATA 0x10`; cmd `0x06` =
  `SET_PARAMETER 0x06`; cmds `0x01/0x02` = `BEGIN/END`.

Coverage gap (vendor builders vs OpenRGB V1 cmd subset):

| Vendor builder | cmd | OpenRGB V1 |
|---|---|---|
| `FUN_00440d30` / `FUN_00440de0` | 0x01 / 0x02 | ✔ BEGIN/END |
| `FUN_00441100` | 0x06 | ✔ SET_PARAMETER |
| `FUN_00441b40` / `FUN_00441c30` | 0x10 / 0x11 | ✔ read/write custom color |
| `FUN_00440ea0` | 0x03 (44-byte state read) | ✖ |
| `FUN_004415f0` | 0x0A (size-carrying write) | ✖ |
| profile-save flow `1 → 0xA → 8 → 2` (`FUN_004378a0`) | 0x01,0x0A,0x08,0x02 | ✖ (only BEGIN/END reused) |
| `FUN_00441030/11c0/1330/14a0/1730/17e0/18a0/1950/1a00/1de0/1d10` | 0x05–0x0F variants | ✖ |

Modes: vendor `Lang0409.ini [MODE]` lists **19** (Go with the stream …
Coastal); OpenRGB V1 RGBController has **17** effect modes (Custom, Color
Wave, Color Wave (Short), Color Wheel, Spectrum Cycle, Breathing, Hurricane,
Accumulate, Starlight, Visor, Static, Rainbow Circle, Vertical Rainbow,
Blooming, Reactive, Reactive Ripple, Reactive Line); V2's RGBController
carries ~31 named modes (adds Direct, Off, Yoyo, Blink, Freeze, Surmount,
Starlight slow, Rainbow Wave vertical, …). Vendor names are poetic
paraphrases, so the 19↔17↔31 sets cannot be mapped 1:1 without firmware
effect IDs — treat mode-name parity as **unverified**, counts as fact.

## 5. Vendor features present in no OpenRGB driver (all platforms)

1. **BYK901 entirely** — two devices, zero OpenRGB code.
2. **Hardware effect modes everywhere**: 9 (K552) / 13 (K671) / 20+10
   (BYCOMBO4 kb+mouse) / 19 (EVision) vs OpenRGB 0/0/(Off+Direct)/17.
3. **Game profile slots**: BYK901 report `0x0B`, BYCOMBO4 cmd `0x06`, FN+1..5 —
   absent in OpenRGB for all three platforms.
4. **Music-reactive modes** (10 per app, with gain/effect/smoothness tuning) —
   absent; vendor pushes frames via `SendMusicData` (K668/BYCOMBO4) or
   `0x0A` LED-state mode (BYK901).
5. **Macro edit + 4-layer storage** (K671 strings, `LayerNum=4`,
   `MacroBufferSize=1024`) — OpenRGB has no macro support on any of these.
6. **Onboard profile save/load** — BYK901 via `0x0A`, BYCOMBO4 via cmd
   `0x0A/0x8A`, EVision via `1,0xA,8,2` flow — all absent.
7. **Firmware update** (`tc_update1–8`, BYCOMBO4; EVision's `tc_…` updater)
   — absent (K668 OTA decrypt exists in `k668-re/` but not wired here).
8. **Wireless transport** `3554:FA09` — absent everywhere.
9. **Mouse control** (K580PRO bundle, MS-class framing) — absent.
10. **Low-level read helpers**: BYK901 `"FindDev: GetCommand Err"` probe,
    BYCOMBO4 `ReadData` 500 ms polling (`0x42/0x49/0x4A/0x5A`),
    EVision cmd `0x03` 44-byte state — OpenRGB reads only what direct mode needs.

## 6. Porting priorities (evidence-based)

1. **`258A:010C` gap-close (cheapest high-value)**: wire format already proven
   byte-identical by OpenRGB's own `SetLEDsDirect`; add mode enum (20 modes) by
   mapping `tc_kb_led*` → payload mode byte via one live session or by extending
   cmd `0x04` SetLED writes; detectors already exist.
2. **BYK901 driver**: fully documented in `BYK901_protocol.md`; new detector +
   one controller class; 4 reports only; two PIDs at once.
3. **EVision V1 enrichment**: add cmd `0x03` read + profile flow; reconcile
   19 vs 17 modes (needs effect-ID table, not derivable from static RE alone).
4. **Wireless `3554:FA09`**: blocked until someone captures dongle traffic —
   static RE of the apps shows they treat it as the same AccessData protocol
   with a different PID (KB.ini `VID_Wireless`), so likely trivial, but
   unverified on hardware.

## 7. Static-verification checklist

- [x] K552/K671 report IDs + sizes from ≥2 independent callers each (objdump)
- [x] K671 `Lowerdev.dll` resolution path (strings + GetProcAddress chain)
- [x] VID/PID per app from `Cfg.ini`/`KB.ini` (`strings -el` / iconv)
- [x] BYCOMBO4 framing header bytes vs OpenRGB `SetLEDsDirect` byte-for-byte
- [x] EVision checksum algorithm vendor vs `ComputeChecksum`
- [x] OpenRGB detector presence/absence per PID (repo-wide grep)
- [x] Mode-string lists from `text.xml` / `Lang0409.ini` (counts + names)
- [ ] EVision vendor↔OpenRGB mode-name 1:1 mapping — needs firmware IDs (open)
- [ ] Wireless dongle on-wire traffic — needs live capture (open)
