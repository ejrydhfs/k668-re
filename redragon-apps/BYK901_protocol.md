# BYK901 Platform Protocol — Redragon K552-KR & K671 (OemDrv.exe)

Platform codename in the installers: **BYK901** (Inno Setup scripts: `Redragon_K552-KR_Software`, `Redragon_K671_Software`).
Both apps share the same binary family (`OemDrv.exe`, vendor HID logic); differences are config strings and, in K671's case, an indirect HID wrapper DLL.

Evidence sources:
- Ghidra 12.1.4 decompilations: `RE/K552_KBYK901.decomp.c`, `RE/K671_KBYK901.decomp.c`
- Full disassembly of K671 `OemDrv.exe`: `/tmp/opencode/k671_oemdrv.asm` (objdump -d; imagebase `0x400000`)
- `app/Cfg.ini` (plain ASCII) from both installer trees (`app/text.xml` is UTF-16LE)
- `app/text.xml` mode strings

---

## 1. USB identification (verified from `app/Cfg.ini`, `strings -el`)

| App | VID | PID | Notes |
|---|---|---|---|
| K552-KR | `0x258A` | `0x002A` | |
| K671    | `0x258A` | `0x013B` | |

No OpenRGB device detector currently matches either PID (see `redragon-apps_vs_openrgb.md`).

## 2. Transport layer

### 2.1 K552 — direct HID.DLL imports

`OemDrv.exe` imports `HID.DLL` directly and calls:

- `HidD_SetFeature` — used by SendCommand
- `HidD_GetFeature` — used by GetCommand

### 2.2 K671 — dynamic `Lowerdev.dll`

K671 has **no static HID.DLL import**. At startup it loads `Lowerdev.dll`
(UTF-16 string at VA `0x58b0cc`, "load dll failed." error path) via
`LoadLibraryW` + `GetProcAddress` for:

```
OpenHidDevice, SetFeature, GetFeature, GetProductString,
GetInputReport, GetVersionNumber   (strings @ 0x58b0e8 … 0x58b140)
```

Resolved pointers are stored in the device struct:
`+4` hLib, `+8` OpenHidDevice, `+0xC` SetFeature, `+0x10` GetFeature, …

`Lowerdev.dll` itself statically imports `HidD_SetFeature`, `HidD_GetFeature`,
`HidD_GetProductString`, `HidD_GetInputReport` from HID.DLL — i.e. it is a thin
wrapper with the same semantics, so the wire protocol is **identical** for both apps.

### 2.3 SendCommand / GetCommand

Both apps implement the same two functions with the same log strings
(`"SendCommand err=%d"`, `"GetCommand err=%d"`).

**K671** (verified via objdump callers):
- `SendCommand` = `FUN 0x42c720`
- `GetCommand`  = `FUN 0x42c7b0`

**K552** (via Ghidra decomp):
- `SendCommand` = `FUN_0042e280`
- `GetCommand`  = `FUN_0042e310`

Behavior (both):

```
SendCommand(reportID, payload, length):
    buf[0]        = reportID
    buf[1..]      = payload            (memcpy, K671 via call 0x530420)
    call SetFeature(handle, buf, length+1)     # K671: fn-ptr [ebp+0xc] (Lowerdev)
    on failure: Sleep(200 ms), retry, up to 3 attempts
    log "SendCommand err=%d"

GetCommand(reportID, outBuf, length):
    buf[0]        = reportID
    call GetFeature(handle, buf, length+1)
    on failure: Sleep(200 ms), retry, up to 3 attempts
    outBuf[0..]   = buf[1..]           # response payload, report id stripped
    log "GetCommand err=%d"
```

Note: payload is shifted by one byte — report ID occupies `buf[0]`, all command
data starts at `buf[1]`, and `length` is the *payload* length (transfer size is
`length + 1`).

## 3. Report table (verified from callers in both apps)

| Report ID | Dir | Payload size | Function | Strings / evidence |
|---|---|---|---|---|
| `0x09` | R (`GetFeature`) | `0x1F8` (504) | Key matrix **read** | `"Get matrix"`; K552 `FUN_0042e310(9,…,0x1f8)`; K671 call @ `0x4037fa push 0x1f8` |
| `0x09` | W (`SetFeature`) | `0x1F9` (505) | Key matrix **write** | `"Set matrix"`; K671 @ `0x4038da movb $0x9`, `push 0x1f9`, 3 retries @ `0x403901` |
| `0x0A` | R/W | `0x29` (41) | LED state (mode/brightness/direct colors) | `"Get LED Failed."`, `"Set led data, err=0x%x"`; K552 `FUN_0042e280(0xa,0x29,…)`; K671 Send @ `0x4033ae`, Get @ `0x403299` |
| `0x0B` | R/W | `0x7E` (126) | Game-color groups (5 slots) | `"Game Color Data: (clrKey[0] is group index)"`; K671 Send @ `0x4034f4` |
| `0x0C` | W | `0x780` (1920) | Macro buffer upload | `SetFeature(0xc, …, 0x781)`, `"Set macro buffer"`, `memset` of `0x780` buffer; K671 @ `0x403730` |
| `0x0C` | R | up to `0x780` | Macro buffer download | via GetCommand |

All transfers use HID **feature reports** (`HidD_SetFeature` / `HidD_GetFeature`
or the Lowerdev equivalents) on an unknown (vendor) usage page; no interrupt-IN
traffic is used for the protocol.

Log/diagnostic strings common to both apps (confirmed with `strings`):
`"SendCommand err=%d"`, `"GetCommand err=%d"`, `"Get matrix"`, `"Set matrix"`,
`"Get LED Failed."`, `"Set led data, err=0x%x"`,
`"Game Color Data: (clrKey[0] is group index)"`.

App-specific extras:
- K552: `"FindDev: GetCommand Err"` (device discovery probe)
- K671: `"load dll failed."` (Lowerdev.dll load failure)

## 4. LED modes (from `app/text.xml`)

### K552 — 9 modes (`tc_led_mode1` … `tc_led_mode9`)

1. Steady
2. Shadow_disappear
3. Breathing
4. Gaming Special Key
5. Marquee effect
6. Diagonal transformation
7. Retro_Snake
8. Flowing light and color
9. Stars

### K671 — 13 modes (`tc_led_mode1` … `tc_led_mode13`)

1. Steady
2. Respire
3. Reaction
4. Neon_stream
5. Horizontal running horse
6. Sine_wave
7. Retro_snake
8. Gaoshan Waterfall
9. Dripping ripples
10. Rain falling bead curtain
11. Rotating windmill
12. Custom
13. OFF

Modes are selected via report `0x0A` (the LED-state report); custom mode =
per-key matrix written via report `0x09`.

## 5. Other app features (string evidence)

- **Macro editor**: import/export of macro files (`Add_Macro` with
  `dwMagicNumber` validation), `"The number of macro is up to the maximum"`,
  4 layers, per-key record/playback — encoded into the `0x0C` 0x780-byte buffer.
- **Game color**: 5 groups of custom RGB assigned to key clusters, report `0x0B`.
- **Profile save/load** to the keyboard's onboard EEPROM (same report `0x0A`
  payload region as LED state).

## 6. Summary for OpenRGB porting

A BYK901 driver needs only feature reports:

```
SetFeature: [reportID][payload …]
GetFeature: [reportID][payload …]
```

with retry ×3 / 200 ms. Report `0x0A` (41 B) switches mode + brightness,
`0x09` (0x1F8/0x1F9) moves the full per-key matrix, `0x0B` handles grouped game
colors, `0x0C` handles macros. PIDs to claim: `258A:002A` (K552),
`258A:013B` (K671).
