# BYCOMBO4 Platform Protocol — Redragon K671-KS (K710-RGB) & K580RGB-PRO

Platform codename in the installer: **BYCOMBO4**. Apps: `Redragon_K671-KS_Software`,
`Redragon_K580RGB-PRO_FR_DE_ES_Setup_v2.0_20260512`. Two device classes in one app:
keyboard (`CDevG5KB`) and mouse (`CDevG5MS`) — the K580PRO bundle also ships a
mouse (`tc_ms_led*` strings).

Evidence: Ghidra decomp `RE/K671KS_BYCOMBO4.decomp.c`, `RE/K580PRO_BYCOMBO4.decomp.c`;
`app/Dev/kb/KB.ini` (GBK); `app/Text/{en,sc}/text.xml`.

---

## 1. USB identification (verified from `Dev/kb/KB.ini` + Cfg, GBK)

| Device | VID | PID | Notes |
|---|---|---|---|
| KB (wired) | `0x258A` | `0x010C` | Both apps |
| KB (wireless dongle) | `0x3554` | `0xFA09` | `VID_Wireless`/`PID_Wireless` |

Other `KB.ini` keys: `Fw=24`, `CRC=1`, `LayerNum=4`, `MacroBufferSize=1024`,
`IC2481=1` (K671-KS only), `Psd=3,0,0,0,1,d6` (K671-KS) vs `3,0,0,0,0,79` (K580PRO).
K671-KS Cfg Title: "Redragon K710-RGB".

`Fw=24` (0x18) is **protocol-significant**: it selects the report ID for keyboard
writes (see §2.2).

## 2. Transport framing

Two framing variants, both feature reports, payload chunked at **0x200 bytes**,
all writes confirmed by 3 retries before abort (`err 0x48f/6` → abort).

### 2.1 Mouse-class: `CDevG5MS::AccessData` — `FUN_0049d7d0`

```
buf[0]    = 0x09                                  # report ID
buf[1]    = checksum                              # sum of bytes [2..0x207], folded (low byte)
buf[2]    = cmdID
buf[3]    = oper                                  # 1 = write, 2 = read
buf[4]    = pages                                 # chunk count
buf[5]    = seq                                   # chunk sequence number
buf[6:7]  = size (uint16 LE)                      # total payload length
buf[8..]  = data                                  # first chunk (≤0x200 B)
```

- Read: `GetFeature` returns the response; `buf[2]` must still echo `cmdID`,
  else log `"AccessData CRC err for nCmdID=%x, retry now"` and retry (×3).
- Param validation: `"CDevG5MS::AccessData Param err, hDev=%x"`.
- Errors: `"AccessData: SetFeature nErr=%d, nCmdID=%x"`,
  `"AccessData: GetFeature Failed, cmd id unmatch, Buffer[2]=%x, bBuf[2]=%x"`.

### 2.2 Keyboard-class: `CDevG5KB::…` write — `FUN_00498f60`

```
buf[0]    = report ID = ((devinfo[+0x18] != 0x18) - 1) & 0xFD) + 9
                # devinfo[+0x18] == Fw == 24 (0x18)  → reportID = 0x06
                # otherwise                          → reportID = 0x09
buf[1]    = cmdID
buf[2]    = (unused / subcmd)
buf[3]    = 0x00
buf[4]    = pages
buf[5]    = seq
buf[6:7]  = size (uint16 LE)
buf[8..]  = data
```

No checksum byte (unlike MS class). Reads answer with `cmdID | 0x80` at `buf[1]`.

**Key implication**: with `Fw=24` the vendor app writes on report **0x06** —
which is exactly the report OpenRGB's `SinowealthKeyboard10c` driver uses
(§5 in `redragon-apps_vs_openrgb.md`).

### 2.3 Read data (button/macro polling)

`FUN_00497e50` (MS class, header `0x15`) / `FUN_00493cb0` (KB class, header `0x13`),
cmds `0x42 / 0x49 / 0x4A / 0x5A`, poll period 500 ms,
error log `"ReadData: send err=0x%x, cmd=0x%x"`.

### 2.4 Music/stream upload: `SendMusicData` — `FUN_00495b20`

```
buf[0]=0x08  buf[1]=0x0A  buf[2]=0x7A  buf[3]=0x01  + payload[4..]
total size 0x17E  (4 + 126×3 bytes = 10 RGB-frame slots)
rejects length ≥ 0x17B
```

Matches OpenRGB's 10c `SetLEDsDirect` shape (`[0]=06 [1]=08 [4]=01 [6]=7A [7]=01`
is the same sub-header embedded in the AccessData write, see §5).

## 3. Command tables

### 3.1 Mouse class (`CDevG5MS`)

Write (`oper=1`):

| cmdID | Name | Evidence |
|---|---|---|
| 0x03 | SetMacro | `FUN_0049…` via AccessData write |
| 0x04 | SetLED | |
| 0x06 | Reset | |
| 0x08 | SetRealData | |
| 0x0A | SetOnBoard (profile) | |
| 0x0B | SetScreenParam | |
| 0x0D | SetGIFParam | |
| 0x0F | SendSelfData | |
| 0x11 | ResetDevice | |

Read (`oper=2`): response at `buf[2]` = `cmdID | 0x40` for `GetMacro` (0x43),
`GetLED` (0x44), `GetOnBoard` (0x4A), `GetRealData` (0x88); raw cmd for
`GetPassword` (5), `GetOnline` (7), `GetPower` (9); plus `0x41`.

Read entry points: `FUN_0049ea20/00499fd0` GetPassword, `FUN_0049ef40` GetOnline,
`FUN_0049ec70` GetPower, `FUN_00499690/0049e140` GetLED,
`FUN_00499440/0049de50` GetMacro, `FUN_004998f0` GetGame,
`FUN_00499d30` GetLedRgbTab, `FUN_00499b00/0049e730` GetRealData,
`FUN_0049e460` GetOnBoard.

### 3.2 Keyboard class (`CDevG5KB`)

Write — call-site order (decomp line numbers in `K671KS_BYCOMBO4.decomp.c`):

| line | cmdID | Name |
|---|---|---|
| 12022 | `0x0D` | SetGIFParam |
| 12059 | `0x11` | ResetDevice |
| 12078 | `0x08` | **LED frame write** (pages = caller param, retry ×7) |
| 12093 | `0x0E` | (custom/unknown) |
| 12112 | `0x0B` | SetScreenParam |
| 12131 | `0x0F` | SendSelfData |
| 12150 | `0x03` | (custom key / primary unknown) |
| 12169 | `0x05` | SetMacro |
| 12192 | `0x04` | SetLED (mode/config) |
| 12216 | `0x06` | SetGame (game color slots) |
| 12239 | `0x0A` | SetLedRgbTab (tab/zone colors) |

Read — `cmdID | 0x80` responses:
`GetPassword=0x82`, `GetLED=0x84` (`FUN_00499690`), `GetMacro=0x85` (`FUN_00499440`).

**KB write cmd `0x08` = direct per-key LED frame**, size `0x017A` (378) —
this is precisely OpenRGB 10c `SetLEDsDirect` (see comparison report §2).

## 4. LED modes & UI features (from `app/Text/en/text.xml`)

- **Keyboard**: `tc_kb_led1` … `tc_kb_led20` — 20 modes
  (Fixed_on … OFF; K671-KS EN list starts Fixed_on, …, `tc_kb_led20` = OFF).
- **Mouse**: `tc_ms_led1` … `tc_ms_led10` — 10 modes (Colorful Streaming … LED OFF).
- **Game profiles**: `tc_game1` … `tc_game5` — FN+1..5 hardware slots.
- **Music modes**: `tc_music_mode1` … `tc_music_mode10`
  - K671-KS EN: Audio dance – soft; Dazzling – rock; Clouds rise and snow fly –
    routine; Light Field Change – voice; The gurgling stream – regular;
    Blooming – passion; Pearl falling jade plate – rock; Clouds follow the moon –
    passion; Mountains and Flowing Waters – regular; Raining like silk – regular.
  - K580PRO ES: `Danza de audio – suave` … `LLuvia como seda – regular` (same 10).
- **Music tuning**: `tc_music1` … `tc_music9` (Music, Gain factor, …Efeect,
  Smoothness).
- **Firmware update**: `tc_update1` … `tc_update8`.
- **Macro editor**: `tc_macro_msg1` … `tc_macro_msg25`, macro file import/export,
  4 layers (`LayerNum=4`), `MacroBufferSize=1024`.
- Chinese UI text: `app/Text/sc/text.xml` (GBK files decoded via `iconv`).

## 5. Differences between the two apps

| | K671-KS | K580RGB-PRO |
|---|---|---|
| KB PID | `258A:010C` | `258A:010C` |
| IC2481 | 1 | — |
| Psd | `3,0,0,0,1,d6` | `3,0,0,0,0,79` |
| kb modes (tc_kb_led*) | 20 | 20 |
| music modes EN/ES | EN present | ES present (v2.0, FR/DE/ES bundle) |
| mouse support strings | `tc_ms_led1-10` present | same |

The wire protocol (AccessData framing, cmd tables, report IDs) is identical —
`KB.ini` `Fw=24` is the same in both, so both write LEDs on report **0x06**.

## 6. Summary for OpenRGB porting

Feature-report writes:

```
KB: [0x06][cmd][0x00][0x00][pages][seq][size_lo][size_hi][data …]
    (0x06 because Fw=24; 0x09 for pre-Fw24 units)
    direct LED frame = cmd 0x08, size 0x017A, RGB at payload offset 0
    → identical to OpenRGB SinowealthKeyboard10cController::SetLEDsDirect
MS: [0x09][sum][cmd][oper(1=w,2=r)][pages][seq][size LE][data …]
```

PID to claim for keyboard control: `258A:010C` (already claimed by OpenRGB as
`RGB_KEYBOARD_010CPID`, but with a feature subset — see comparison report).
Wireless dongle `3554:FA09` is unsupported by OpenRGB.
