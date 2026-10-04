# Redragon K668WBO-RGB — reverse engineering & OpenRGB support

Reverse engineering of the vendor Windows app **KeyboardDrv.exe V1.6.6**
(from `Redragon_K668WBO-RGB_Setup_V1.6.6_20230612.exe`) for the Sinowealth
`258A:0049` "Redragon K668WBO-RGB" keyboard, plus the OpenRGB controller that
implements the same protocol.

## Contents

### Documentation
| File | What |
|---|---|
| `K668_RE_vs_OPENRGB.md` | Main spec: command set, profile/palette/frame layouts, effects, keycap view, firmware decryption, side-bar findings, OpenRGB mapping, static verification. |
| `APP_SPEC.md` | Earlier protocol notes (superseded by the above, kept for history). |
| `vendor-app-features-not-in-openrgb.md` | Feature diff vs. the vendor app. |
| `openrgb-keycap-bug-report.md` | Bug report (drafted) for the upstream OpenRGB `DeviceView` uninitialised `disable_expansion` bug. |

### Firmware
| File | What |
|---|---|
| `firmware/K668WBO-RGB_V1.6.6_plain.bin` | Decrypted 61,440-byte 8051 firmware (reset vector `02 00 66`). |
| `firmware/K668WBO-RGB_V1.6.6_payload_enc.bin` | The encrypted payload as shipped in the updater overlay. |
| `decrypt_ota.py` | Reproducible decryptor (TEA variant; `delta=0x61C89647`, `s0=0xC6ED3720`, key = overlay's trailing 4 bytes). |

The updater itself (`K668_20230425_V0105.exe`) is not redistributed here; the
decryptor reads it directly. A read-only ISP dump of the same board matched the
decrypted image 99.3% (the diffs are the runtime config blob at `0xB606-0xB7F9`).

### Vendor data
| File | What |
|---|---|
| `vendor/Cfg.ini` | The app's config: 108-key layout with per-key LED indices, `LedOpt` effect table, `LEDParam`. |
| `vendor/text-en.xml` | The app's UI string table (effect names `tc_led_modeN`, feature names). |

### Tooling
- `ghidra_scripts/` — Ghidra headless scripts used to decompile the driver, the
  updater, and to disassemble the plaintext 8051 firmware.
- `k668_probe.py`, `k668_verify.py`, `sidebar_test.py` — raw hidraw probes
  (command/readback, per-effect, side-bar slot test).
- `usb-reset.sh`, `grant-access.sh`, `install-udev.sh` — device access helpers.


## Safety notes

- **Never** issue the key-matrix write (report `0x06` / opcode `0x04` / addr `0xD4`);
  a bad write wipes the typing layout. Only the read is used.
- The side bars are not host-addressable (see `K668_RE_vs_OPENRGB.md` §5/§10/§14).
