# Vendor app features NOT in OpenRGB (K668WBO-RGB)

Sources: `KeyboardDrv.exe` V1.6.6 (`Cfg.ini`, `Text/en/text.xml` = 204 UI strings,
Ghidra decompilation) vs the OpenRGB fork (`openrgb-k668`,
`Controllers/SinowealthController/SinowealthKeyboardController/`).

Legend: **K668** = feature exists for this exact model in the vendor app. Out-of-scope =
OpenRGB is a lighting controller and never did this by design.

---

## A. Lighting features the vendor app has, OpenRGB does not expose

| # | Vendor feature | Where in vendor app | OpenRGB K668 status |
|---|---|---|---|
| A1 | **Music / audio visualizer mode** (`tc_music1..10`, `ShowMusic=1`) | Report `0x08` `[0x0A,0x7A,0x01]` frame; 10 music sub-modes + Gain factor + Smoothness + Effect + Color/Colorful + ON/OFF | **Not present.** Host-side (app does audio analysis). The wire command is already implemented (per-key `BuildLedFrame`), but OpenRGB core has no audio. Available via the OpenRGB Effects Plugin / SDK clients (Keyboard Visualizer, Artemis…). |
| A2 | **Game mode** (`tc_game_mode1..5` Define1–5, `GaoshouIndex=20`, `GaoshouKey1..5`, `clrGaoshou`) | Highlight 5 user-defined key groups in a fixed colour | **Not present as a feature.** Achievable manually via the Custom (per-key) mode, but no game-mode concept. |
| A3 | **Transient / key-press effects** — Flash Away (N4), Ripples Shining (N7), Shadow Disappear (N9), Reaction (N12) | `LedOpt4/7/9/12`; `ReactionEffect=1` | **Implemented** (exposed as OpenRGB modes; the firmware drives them on key press). |
| A4 | **Collision (N19) / Perfect (N20)** | `LedOpt19/20` exist in firmware; hidden by `LedMask=0xC0000` | **Not exposed** (firmware supports them; vendor hides them; OpenRGB skips them too). |

## B. Keyboard/client features the vendor app has (out of OpenRGB's scope)

| # | Vendor feature | Where in vendor app | OpenRGB status |
|---|---|---|---|
| B1 | **Key assignment / remapping** (`tc_page1`) — remap any key to another key, combination, mouse button, media, Windows key, Fire key, DPI, snipe, Disable; Fn layer | `SetKeyMatrix` (report 0x06 opcode 0x04 addr 0xD4) + `Cfg.ini [KEY]` | **Not present** (OpenRGB never remaps keys; and this firmware command is the one that bricks typing — deliberately excluded). |
| B2 | **Macro editor** (`tc_page2`, `tc_macro_*`) — record, key down/up/delay events, loop modes, folders, batch import/export | `SetMacroData` (report 0x06 opcode 0x05) | **Not present.** Out of scope for a lighting tool. |
| B3 | **Media / multimedia key assignment** (`tc_page3`, `tc_media`, `tc_vol_up` …) | media HID usages | **Not present.** |
| B4 | **Multiple / onboard profiles**, import/export (`tc_protitle`, `tc_msg32/33/35`, "Keep at least one profile") | profile block (0x88 B) read/written via report 0x06 opcode 0x03 addr 0xB6 | **Partly.** OpenRGB has *software* profiles saved to disk; it does **not** manage the keyboard's onboard profiles (switch/import/export on the device). |
| B5 | **Language selection** (`tc_page4`) | `Lang1/Lang2` | Not applicable (OpenRGB has its own i18n). |
| B6 | **Firmware update** (`tc_update`) | separate updater `K668_20230425_V0105.exe` | Not present (not a controller feature). |

## C. App-level UX (not applicable to OpenRGB)

| # | Vendor feature | OpenRGB status |
|---|---|---|
| C1 | Tray icon (`TrayIcon=2`), Apply-now (`ApplyNow=1`), Sync keyboard (`SyncKB=1`) | OpenRGB has its own UI model. |

## D. Checked and NOT a gap

- **Direction control** (`tc_adv_str13`) — every K668 `LedOpt` row has the `direct` column = 0, so this model's firmware has no per-effect direction; OpenRGB correctly omits `MODE_FLAG_HAS_DIRECTION_*`.
- **Static / Self-define / OFF** — vendor `Fixed_on`, `Self-define`, `OFF` map to OpenRGB **Static**, **Custom**, **Off** (all present).
- **Per-key custom colour editor** — present as OpenRGB's **Custom** (per-LED) mode.
- **Speed / Brightness / Random-vs-fixed colour** — present for the exposed effects.
- **Side bars** — neither the app nor the firmware exposes them (see `K668_RE_vs_OPENRGB.md` §5/§10/§14), so there is nothing to port.

---

## Short version

The vendor app does much more than lighting. OpenRGB-for-K668 is missing, specifically:

1. **Music / audio-visualizer mode** (10 sub-modes + gain/smoothness) — plugin/SDK territory.
2. **Game mode** (5 key-group highlights).
4. **2 hidden effects** (Collision, Perfect).
5. **Key remapping / Fn layer** (out of scope; dangerous command).
6. **Macros** (out of scope).
7. **Media-key assignment** (out of scope).
8. **Onboard profile management** (OpenRGB only has software profiles).
9. **Firmware update** (separate tool).

Of these, only **(1)** is realistically an OpenRGB feature (via the Effects Plugin / SDK);
(2)–(4) are lighting and could be added to the controller; (5)–(7) are keyboard-firmware
features OpenRGB intentionally doesn't touch; (8) would need onboard-profile commands.
