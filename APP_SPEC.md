# Redragon K668WBO-RGB — vendor app protocol (reverse-engineered)

Device: Sinowealth keyboard, USB `258A:0049`, "Redragon K668WBO-RGB", 108 keys + a 126-LED frame.
App analysed: `KeyboardDrv.exe` V1.6.6 (`Redragon_K668WBO-RGB_Setup_V1.6.6_20230612.exe`).
Also analysed: `OemDrv.exe` V2.0 (`Redragon_K668WBO-WL_Software.exe`, `258A:010C` / wireless `3554:FA09`).
Method: innoextract + Ghidra 12.1.4 headless (all 12285 / 14170 functions dumped), objdump, Cfg.ini/KB.ini/text.xml.

## 1. Command set (all `Cfg.ini [OPT]` addresses: ProAddr=0xB6, RgbTabAddr=0xB8, GameAddr=0xBC, KeyAddr=0xD4)

| # | Command | Report | opcode | addr | payload | notes |
|---|---|---|---|---|---|---|
| 1 | GetPsd | 0x05 | 0x81 | 0x00 | 6 | `FUN_00445690` |
| 2 | GetProfile | 0x05 | 0x83 | 0xB6 | reads 0x88 | `FUN_004458c0` |
| 3 | **SetProfile** | **0x06** | **0x03** | **0xB6** | 0x407 (report 0x408) | `FUN_004457c0` |
| 4 | **SetLedRgbTab** | **0x06** | **0x08** | **0xB8** | ≤0x400 | `FUN_00445ce0` |
| 5 | SetLedMatrix | 0x06 | 0x09 | 0xBC **and** 0xC0 | 0x400 ×2 | `FUN_004459f0` |
| 6 | SetKeyMatrix | 0x06 | 0x04 | 0xD4 | 0x400 | `FUN_00445aa0` |
| 7 | GetKeyMatrix | 0x05 | 0x84 | 0xD4 | reads 0x400 | `FUN_00445bc0` |
| 8 | SetMacroData | 0x06 | 0x05 | 0xDC/E0/E4/E8 | 0x400 | `FUN_00445dc0` |
| 9 | SendMusicData | 0x08 | 0x0A | 0x7A | `[3]=1` + 378 | `FUN_004455a0`; 126×RGB LED frame |

Transport: `SendCommand`=FUN_00445460 (`[0]=0x06` report id, then payload, `HidD_SetFeature`, ×3 retries/200 ms);
`GetCommand`=FUN_004453d0 (`HidD_GetFeature` report id 0x06, copies `response[1:]`).

### Per-key LED frame (what OpenRGB uses)
`SendMusicData` = `[0x08,0x0A,0x7A,0x01]` + 378 bytes (126 slots × 3). OpenRGB writes the 108 key
colours at `4 + slot*3` in **R,G,B**. The vendor app instead sends per-key colours via
`SetLedMatrix(0xBC)` + `SetLedMatrix(0xC0)` (report 0x06 opcode 0x09) — equivalent result.

## 2. SetProfile layout (report 0x06 opcode 0x03 addr 0xB6)

```
[0x00]=0x06 report id | [0x01]=0x03 opcode | [0x02]=0xB6 addr | [0x03..0x07]=0
[0x08 .. 0x8F] = profile data (0x88 bytes)
```
| buffer off | meaning |
|---|---|
| 0x15 | **light-mode / effect id = LedOpt row number N (1..20)** — NOT the row's 2nd column |
| 0x16 | speed level |
| 0x24 + 2*N | per-effect colour-mode byte: 0x07 random / 0x00 fixed |
| 0x25 + 2*N | per-effect `speed<<4 \| brightness` (nibbles: speed 1..4, brightness 0..4) |

`GetProfile` (opcode 0x83) reads the profile back; only the mode byte is patched so all other user
settings survive (this is `CacheK668Profile()` in the fork). `LEDParam=07,44,07,44,…` (20 pairs) is the
factory per-effect (colour, speed/brightness) table; 0x07 = random, 0x44 = speed 4 / brightness 4.

## 3. SetLedRgbTab layout (report 0x06 opcode 0x08 addr 0xB8)

Carries every effect's 7-colour palette: 7 RGB triples per effect, contiguous, in effect order.
```
[0]=0x06 | [1]=0x08 | [2]=0xB8 | [3]=0x00 | [4]=0x40 | [5..0x1C]=0
[0x1D] = effect 0: R0G0B0 R1G1B1 … R6G6B6   (21 bytes)
[0x1D + 21*e] = effect e's palette
```
Payload starts at report offset **0x1D** (stack-frame simulated from `FUN_00445ce0`; the palette is
memcpy'd to the local buffer at +0x1C and `SendCommand` prepends the 0x06 report id).
The profile only chooses random(0x07) vs fixed(0x00); the actual fixed colour lives here.
Note: there is no read-back command for the RgbTab, so a host must keep its own palette cache.

## 4. Effect ids and names (v1.6.6 `Text/en/text.xml`, `tc_led_modeN`)

| N | name | N | name | N | name |
|---|---|---|---|---|---|
| 1 | Fixed_on (Static) | 8 | Stars_twinkle | 15 | Rotating windmill |
| 2 | Respire | 9 | Shadow_disappear* | 16 | Colorful waterfall |
| 3 | Rainbow | 10 | Retro_snake | 17 | Blossoming |
| 4 | Flash_away* | 11 | Neon_stream | 18 | Rotating storm |
| 5 | Raindrops | 12 | Reaction* | 19 | Collision (hidden) |
| 6 | Rainbow_wheel | 13 | Sine_wave | 20 | Perfect (hidden) |
| 7 | Ripples_shining* | 14 | Retinue scanning | 21 / 22 | Self-define / OFF |

`*` = key-press-triggered transient effects. **Hidden:** `Cfg.ini LedMask=0xC0000` filters effect
indices 18/19 out of the vendor UI list (`if ((LedMask & (1<<i)) == 0) show`) → rows 19/20
(Collision/Perfect) are unsupported and were exactly the ones the camera found dark.

`LedOptN` rows are 7 numbers `//hw effect speed light direct random color`; `value0` = firmware effect
id = row number N (this is what goes to profile 0x15). `value1` is the app's internal preview id
(2,5,…,23,26..31) — **writing that was the original OpenRGB bug** (ids >22 draw nothing).

## 5. Side light bars
- The K668WBO-RGB v1.6.6 app has **no side-bar feature** (`ShowSideLED`, `SideLedOpt`,
  `ChannelMask`, `DefSideLedIndex` are all absent; `LedMask` is the effect filter above, not an LED mask).
- Hardware probing earlier: no single slot 0..125 drives a bar alone — the edge strip mirrors the frame.
- The V2.0 WL app *does* have side-LED support for a device type code `0x1a`
  (`FUN_0049e320`: `ShowSideLED`, `DefSideLedIndex`, `SideLedOpt1..11`, log
  `SideLED: mode=%d, nLight=%d, nSpeed=%d, nColor=%d`, params written to the RgbTab buffer at +0x32..0x35),
  but the shipped K668WBO-WL `KB.ini` defines no `SideLedOpt*`, so the K668 bars are not separately
  controlled through a documented table even there.

## 6. OpenRGB fork diff status
- Effect selection profile/opcode/offset, effect id = row number, colour/speed offsets, speed/brightness
  nibbles: **match the vendor app**.
- `SetLedRgbTab` fixed-colour palette: **now implemented** in the fork (`SetK668RgbTab`, report
  0x06/0x08/0xB8, palette at 0x1D) with a host-side palette cache; other effects keep random colour so
  the zero-initialised cache is harmless.
- `LedMask` rows 19/20 (Collision/Perfect) removed from the exposed mode list.
- Side bars: no separate command found for this model; presumably mirror the frame.

## 7. Open items
- No read-back for the RgbTab palette (host cache only).
- Hardware verification of the new palette path and of the effect list still pending (board must be plugged in).
