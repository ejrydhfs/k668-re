# Redragon K668WBO-RGB — vendor app RE vs. the OpenRGB implementation

Device: Sinowealth `258A:0049`, "Redragon K668WBO-RGB", 108 keys / 126-LED frame.
Vendor app: `KeyboardDrv.exe` V1.6.6 from `Redragon_K668WBO-RGB_Setup_V1.6.6_20230612.exe`
(sha256 `2f4ac3a68d42a1cf9bb5d0bf321dadb85cefd5cc0748333255368586efed0888`).
OpenRGB fork: `openrgb-k668/Controllers/SinowealthController/SinowealthKeyboardController/`.

## 0. Method (reproducible)

```sh
# extract the Inno Setup installer
innoextract -e -d fresh Redragon_K668WBO-RGB_Setup_V1.6.6_20230612.exe
# decompile all driver functions (Ghidra 12.1.4 headless)
analyzeHeadless proj K668 -import fresh/app/KeyboardDrv.exe \
    -postScript DumpRe.java -scriptPath ghidra_scripts
# cross-check call sites
objdump -d fresh/app/KeyboardDrv.exe > kd.asm
```

All addresses below are image VAs (base `0x400000`). Byte offsets were confirmed by
disassembling the functions and, where noted, by reading the device live.

---

## 1. Transport

| Vendor function | Address | Behaviour |
|---|---|---|
| `SendCommand` | `FUN_00445460` | prepends report id `0x06`, `HidD_SetFeature(report, 0x408)`, 3 attempts / 200 ms |
| `GetCommand` | `FUN_004453d0` | puts report id in `[0]`, `HidD_GetFeature`, copies `response[1..]` out; 3 attempts / 200 ms |

The OpenRGB transport (`SendK668Report` / `GetK668Report`) reproduces both, including the
report-id framing and the 3×/200 ms retry policy.

## 2. Command set

| Command | Report | opcode `[1]` | addr `[2]` | payload | Vendor fn |
|---|---|---|---|---|---|
| GetPsd | `0x05` | `0x81` | `0x00` | 6 | `FUN_00445690` |
| GetProfile | `0x05` | `0x83` | `0xB6` | reads `0x88` | `FUN_004458c0` |
| **SetProfile** | `0x06` | `0x03` | `0xB6` | `0x407` | `FUN_004457c0` |
| **GetKeyMatrix** | `0x05` | `0x84` | `0xD4` | reads `0x400` | `FUN_00445bc0` | *read-only, USED* |
| SetKeyMatrix | `0x06` | `0x04` | `0xD4` | `0x400` | `FUN_00445aa0` | *excluded — see §9* |
| SetMacroData | `0x06` | `0x05` | `0xDC/E0/E4/E8` | `0x400` | `FUN_00445dc0` | *excluded — see §9* |
| **SetLedRgbTab** | `0x06` | `0x08` | `0xB8` | `N*21` | `FUN_00445ce0` |
| **SetLedMatrix** | `0x06` | `0x09` | `0xBC` **and** `0xC0` | `0x400` ×2 | `FUN_004459f0` |
| **SendMusicData** | `0x08` | `0x0A` | `0x7A` | `[3]=1` + `0x17A` | `FUN_004455a0` |

High-level "apply" (`FUN_0040d4e0`) call sites: `SetLedRgbTab`→`0x40d7b1`,
`SetLedMatrix`→`0x40da2b` (`0xBC`) + `0x40da6c` (`0xC0`), `SetProfile`→`0x40dc93`.
The vendor sends the palette **before** the profile.

## 3. Profile layout (report `0x06` / opcode `0x03` / addr `0xB6`)

Raw feature report, `[0]`=report id, `[1]`=opcode, `[2]`=addr, `[3..]`=profile block.

| Report offset | Meaning |
|---|---|
| `0x15` | **light-mode / effect id = `LedOpt` RowIndex N (1..20)**, `0x15` = per-key |
| `0x24 + 2N` | effect N colour mode: `0x00` fixed / `0x07` random (vendor `LEDParam=07,44,…`) |
| `0x25 + 2N` | effect N `speed<<4 \| brightness` (speed 1..4, brightness 0..4) |

`GetProfile` reads the block back; `SetProfile` patches only `0x15` and the selected
effect's two bytes, so every other user setting survives. This was **verified live**:
mode byte `0x15`, effect 6 pair at `0x30/0x31` → `07 23` for speed 2 / brightness 3.

## 4. Palette layout (report `0x06` / opcode `0x08` / addr `0xB8`)

`FUN_00445ce0` builds payload `[0]=0x08`, `[1]=0xB8`, `[2]=0x00`, `[3]=0x40`,
`[4..5]=0`, then memcpy's the palette to payload offset `0x1C`. With the prepended
report id the palette lands at **report offset `0x1D`**.

The palette itself is built in `FUN_0040d4e0` via three pointers (`DAT_005e16a8/9/aa`,
which resolve to byte offsets 0/1/2) advanced by `0x15` per effect:

```
puVar11[-3]=src[0]; puVar13[-3]=src[1]; puVar14[-3]=src[2];   // colour 0
*puVar11    =src[4]; *puVar13    =src[5]; *puVar14    =src[6]; // colour 1
... 7 colours, source stride 4 (COLORREF), destination stride 3
```

So each effect = **7 interleaved R,G,B triples = 21 bytes**, contiguous per effect.
`FUN_00404930` (called just before the send) is only a debug hex-dump logger, not a
transform, so the wire layout is exactly the interleaved triples OpenRGB writes.

There is **no read-back** for the palette, so the host must cache it.

## 5. Per-key LED frame (report `0x08` / `0x0A / 0x7A / 0x01`)

`FUN_004455a0` sends `[0x08,0x0A,0x7A,0x01]` + `0x17A` (= 378) bytes. The renderer
(`FUN_004453d0`… music thread, `0x447xxx`) writes a colour at
`frame[led_index*3 + {0,1,2}]` where `led_index` is the Cfg.ini `[KEY]` LED column and
the three bytes are the low/mid/high bytes of a Windows `COLORREF` (0x00BBGGRR) → **R,G,B**.
Report offset = `4 + slot*3`.

The 108-entry key→slot table (`K668Protocol::LED_INDEX`) is exactly the Cfg.ini
`[KEY]` 8th column (verified 108/108) and the vendor's `DAT_005dcd94` table.

## 6. SetLedMatrix layout (report `0x06` / opcode `0x09` / addr `0xBC` + `0xC0`)

Used by the vendor's static/per-key output. `FUN_004459f0` emits payload
`[0x09, addr, 0x00, 0x40, 0, 0]` + `0x400` bytes; data starts at report offset **8**.
The builder (`FUN_0040d4e0` lines ~906-970) writes three 126-byte planes indexed by the
same LED slot: `matrix[(base+3g)+slot]`, with `base` = 0/1/2 → R/G/B planes for group g.
The vendor calls it twice (`0xBC`, then `0xC0`).

OpenRGB exposes this as `BuildLedMatrix`/`SetLedMatrixSlot`, but per-key output uses the
live-verified report `0x08` frame instead.

## 7. Effects (`LedOpt` rows ↔ firmware ids ↔ vendor UI names)

`Cfg.ini` `LedOptN = hwId,previewId,speedFlag,brightFlag,directFlag,randomFlag,colorFlag`
— `hwId` is the row number N and **that** is what goes in profile `0x15`; `previewId`
(the old OpenRGB bug) is rejected by the firmware. Names come from
`Text/en/text.xml` `tc_led_modeN`. `LedMask=0xC0000` hides indices 18/19 in the vendor UI
(rows 19 `Collision`, 20 `Perfect`) — exactly the effects that drew nothing on hardware.

| N | tc_led_mode | OpenRGB mode | colour flag |
|---|---|---|---|
| 1 | Fixed_on | Static (hardware effect) | yes |
| 2 | Respire | Respire | yes |
| 3 | Rainbow | Rainbow | no |
| 4 | Flash_away | Flash Away | yes |
| 5 | Raindrops | Rain Drops | yes |
| 6 | Rainbow_wheel | Rainbow Wheel | no |
| 7 | Ripples_shining | Ripples Shining | yes |
| 8 | Stars_twinkle | Stars Twinkle | yes |
| 9 | Shadow_disappear | Shadow Disappear | yes |
| 10 | Retro_snake | Retro Snake | yes |
| 11 | Neon_stream | Neon Stream | yes |
| 12 | Reaction | Reaction | yes |
| 13 | Sine_wave | Sine Wave | yes |
| 14 | Retinue scanning | Retinue Scanning | yes |
| 15 | Rotating windmill | Rotating Windmill | no |
| 16 | Colorful waterfall | Colorful Waterfall | no |
| 17 | Blossoming | Blossoming | no |
| 18 | Rotating storm | Rotating Storm | yes |
| 19/20 | Collision / Perfect | *(hidden by LedMask)* | — |

## 8. OpenRGB mapping (post-change)

| Operation | OpenRGB call | Report bytes |
|---|---|---|
| read profile | `GetProfile()` | `05 83 B6 00 00 00` → `06` read |
| read PSD | `ReadFirmwareInfo()` | `05 81 00 00 00 00` |
| read key matrix (diagnostics) | `GetKeyMatrix()` | `05 84 D4 00 00 00` |
| select effect/mode | `SetMode()` → `BuildSetProfile` | `06 03 B6` + patch `0x15`, `0x24+2N`, `0x25+2N` |
| enter per-key | `SetK668DirectMode()` → `BuildSetProfileMode` | `06 03 B6`, `[0x15]=0x15` |
| fixed colour | `SetK668RgbTab()` → `BuildRgbTab` | `06 08 B8 00 40` + palette at `0x1D` |
| per-key frame | `SetLEDsDirect()` → `BuildLedFrame` | `08 0A 7A 01` + `R,G,B` at `4+slot*3` |
| static | `SetStaticColor()` → `SetMode(MODE_STATIC, …MODE_SPECIFIC, c)` | effect 1 + palette |

Fixed-colour ordering now matches the vendor: palette first, profile second.

## 9. Qt keycap view (Device View)

OpenRGB's `qt/DeviceView.cpp` is identical to upstream and already renders a keycap keyboard
map for `ZONE_TYPE_MATRIX` zones: it draws a labelled cell per matrix position, then widens
`KEY_EN_TAB`, `KEY_EN_CAPS_LOCK`, `KEY_EN_LEFT_SHIFT`, `KEY_EN_RIGHT_SHIFT`,
`KEY_EN_BACKSPACE`, `KEY_EN_ANSI_ENTER`, `KEY_EN_NUMPAD_0/ENTER/PLUS` and `KEY_EN_SPACE`
into adjacent `NA` gaps, and takes labels from `led_label_lookup` keyed by the LED display
name. It appears when the active mode is Per-LED ("Custom").

For the K668 to use it, two things were fixed in `RGBController_SinowealthKeyboard.cpp`:
1. LED names changed from short strings (`"Esc"`, `"Tab"`, …) to the standard `KEY_EN_*`
   constants (K order), so the lookup/expansion recognises them.
2. The 6×22 `k668_matrix_map` previously stored **physical LED slots** (values up to 124,
   out of range for the 108-entry LED array, so most cells were skipped). It now stores
   **LED-array indices (0..107)** with `NA` gaps, all 108 keys covered, laid out like the
   physical full-size board.

## 10. Side bars — empirically not host-addressable

Lighting only the 18 Cfg.ini-unmapped slots (`6,23,29,41,47,70,71,75,76,77,87,88,93,99,100,
113,123,125`) as a report-`0x08` frame left the side bars unchanged (they "just reset"),
i.e. they are **not** driven by the main LED frame. Combined with §5 (no side-bar feature in
the wired vendor app) the bars are not separately controllable through any command OpenRGB
can issue today. Confirming whether the *firmware* has a hidden side-LED command requires a
firmware image (see below).

## 11. Safety: read key matrix, never write it

`SetKeyMatrix` (`report 0x06 opcode 0x04 addr 0xD4`, `FUN_00445aa0`) stores the physical
key-code map; a malformed or partial write wipes the layout and the keyboard stops typing.
It is therefore **not defined or implemented anywhere in OpenRGB**, and the
`K668Protocol.h` opcode list documents that exclusion so it cannot be reintroduced by
accident. `SetMacroData` (opcode `0x05`) is likewise excluded.

The **read** path `GetKeyMatrix` (`report 0x05 opcode 0x84 addr 0xD4`, `FUN_00445bc0`) is
read-only and *is* implemented — it is useful to display to users which keys are mapped /
controlled. It never issues a write to `0xD4`.

## 12. Static verification

`tests/k668_proto_test.cpp` asserts every builder against the offsets above and the
108-entry Cfg.ini mapping (parsing the real `Cfg.ini` when a path is given):

```sh
cd Controllers/SinowealthController/SinowealthKeyboardController/tests
g++ -std=gnu++17 -I.. k668_proto_test.cpp -o /tmp/k668_proto_test
/tmp/k668_proto_test /path/to/Cfg.ini
# -> 41 checks, 0 failures
```

## 13. Known gaps / risks

- Hardware verification of the palette, effect list and per-key frame is still pending
  (the board in the prior session disconnected every ~2 min).
- `SetKeyMatrix` and `SetMacroData` are deliberately absent; `GetKeyMatrix` is present
  read-only (see §9).
- The `0xC0` half of `SetLedMatrix` is not currently sent by OpenRGB (report `0x08` is
  used for output); only the builder is provided.
- No palette read-back exists, so OpenRGB seeds the whole palette on the first fixed
  colour and caches it thereafter.

## 14. Firmware: update image decryption and side-bar answer

The updater `K668_20230425_V0105.exe` embeds the image as an overlay:
`5A A5 "SINO" | 258A | 0049 | 0xF000 | <61440-byte payload>` + 4 trailing key bytes.
The updater decrypts it before sending (`FUN_00403970` → `FUN_004038E0`):

- cipher: TEA-family, 8-byte ECB, 32 rounds, `delta = 0x61C89647`, `s0 = 0xC6ED3720`
- key: bytes at overlay offset `0x20A80C` = `32 88 E6 98` (added as 4 separate bytes, not words)
- data is read/written as big-endian 32-bit words

Decrypting the 61440-byte payload yields plaintext 8051 firmware (reset vector `02 00 66`),
matching a live ISP dump of the same board 99.3% (the 416 diffs are the runtime config blob
at `0xB606–0xB7F9`). Saved as `flash/fw_plain.bin`.

### Side bars are not firmware-addressable either

Disassembling the plaintext firmware (Ghidra 8051) shows the report-`0x06` command
dispatcher at `0x04F0` (`JMP @A+DPTR`, table `0x0506`) accepts only opcodes `0x03`–`0x09`:

| opcode | handler |
|---|---|
| `0x03` | `LCALL 0xA3F5` (SetProfile) |
| `0x04`/`0x06`/`0x07`/`0x08` | `0x0527 → 0x0532 → LCALL 0x9AAF` |
| `0x05` | `0x0522 → LCALL 0x9AAF` (macro) |
| `0x09` | `0x0529 → LCALL 0x9AAF` (SetLedMatrix) |
| `≥0x0A` | rejected |

There is no side-LED opcode and no second LED buffer — the LED engine is the single
126-slot frame. This corroborates §10 and the app RE: the bars are not independently
controllable over the documented USB protocol.
