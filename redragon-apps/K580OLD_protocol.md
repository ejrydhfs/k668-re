# K580OLD (EVision) Protocol — Redragon K580 legacy MFC/InstallShield app

Installer: `K580_v1`/`K580_IS` (InstallShield, no Inno). App is a MFC GUI that
talks to the K580 old hardware over a checksummed feature-report protocol —
the same protocol family OpenRGB implements as **EVisionKeyboardController V1**.

Evidence: Ghidra decomp `RE/K580OLD.decomp.c`;
`K580_IS/DefaultComponent/Lang0409.ini` (UTF-16LE) for mode names;
`Test.pdf` → `/tmp/opencode/k580_test.txt`.

---

## 1. USB identification

| Device | VID | PID |
|---|---|---|
| K580 old (primary) | `0x320F` | `0x5000` |
| Alternate (alt ID seen in app) | `0x0C45` | `0x5004` |

Both are **already registered** in OpenRGB (`EVisionKeyboardControllerDetect.cpp`):
`0x320F:5000` under the V1 detector (Sonix `0x0C45` PID list includes 5004).

## 2. Report framing (verified)

All traffic is a **64-byte feature report with report ID `0x04`**:

```
buf[0] = 0x04                 # report ID
buf[1] = checksum low         # sum of bytes [3..0x3F]  → lo byte
buf[2] = checksum high        #                          → hi byte
buf[3] = command ID
buf[4] = subcommand / param
buf[5:6] = offset (uint16 LE)
buf[7..] = payload
```

Checksum: sum of bytes `0x03 .. 0x3F`, split into lo/hi at `buf[1]/buf[2]`.
Byte-for-byte the same algorithm as OpenRGB's `EVisionKeyboardController`
`ComputeChecksum()` (which sums `0x03..63` → `buf[0x01]/buf[0x02]`).

I/O primitives (both via `WriteFile`/`ReadFile`, 64 bytes, no HID.DLL —
the app opens the HID device through Win32 handle):

- `FUN_00440b60` — Send + wait for response (full duplex)
- `FUN_00440c80` — Send only (fire-and-forget writes)

## 3. Command builders

One builder function per command; each validates/length-checks and calls the
send primitive. High-level UI semantics for cmds 7–0xF are **unresolved**
(no string xrefs pin them down) — documented here as builder contracts only.

| Builder | cmd | Layout / notes |
|---|---|---|
| `FUN_00440d30` | `0x01` | plain write |
| `FUN_00440de0` | `0x02` | plain write |
| `FUN_00440ea0` | `0x03` | `sub[4]=0x2C`; expects **44-byte response** |
| `FUN_00440f70` | `0x04` | plain write |
| `FUN_00441030` | `0x05` | `[4]=2` |
| `FUN_00441100` | `0x06` | `[4]=2` |
| `FUN_004411c0` | `0x07` | plain write |
| `FUN_00441330` | `0x08` | plain write |
| `FUN_004414a0` | `0x09` | plain write |
| `FUN_004415f0` | `0x0A` | `[4]=size` |
| `FUN_00441730` | `0x0B` | plain write |
| `FUN_004417e0` | `0x0C` | plain write |
| `FUN_004418a0` | `0x0D` | plain write |
| `FUN_00441950` | `0x0E` | plain write |
| `FUN_00441a00` | `0x0F` | plain write |
| `FUN_00441b40` | `0x10` | `[4]=param`, `[5:6]=offset` (relative/absolute read) |
| `FUN_00441c30` | `0x11` | **color write**: offset = `DAT_006e1cec*0x200 + param_3*3`, data at `buf[8..]` (i.e. 512-byte LED banks, 3 B/color) |
| `FUN_00441de0` | `0x05` (param'd) | variant of cmd 5 with explicit parameter |
| `FUN_00441d10` | `0x06` (param'd) | variant of cmd 6 |

Known callers (high-level flows):

- `FUN_00435c60` → cmd `0x03` (poll/state read, 44-byte reply)
- `FUN_004378a0` → profile save; sequence `cmd1 → cmdA → cmd8 → cmd2`
  (logged constraint: `"EXTRA_PROFILE_SPACE_TIGHT"`)
- `FUN_0043dc10` → `cmd7, cmd9` (settings apply)

Cmd `0x11` (color write) with `[8..]` RGB triples over 0x200-byte banks is
equivalent to OpenRGB V1 `WRITE_CUSTOM_COLOR_DATA (0x11)` layout:
`[4]=param_size, [5]=param, data[8..]`.

## 4. LED modes (19, from `Lang0409.ini` `[MODE]` section)

1. Go with the stream
2. Clouds fly
3. Winding paths
4. The trial of light
5. Breathing
6. Normally on
7. Pass without trace
8. Ripple graff
9. Fast run without trace
10. Snow winter jasmine
11. Flowers blooming
12. Swift action
13. Hurricane
14. Accumulate
15. Digital Times
16. Both ways
17. Surmount
18. Fast and the Furious
19. Coastal

Other UI sections: `[TEXT]`, `[LIGHT]`. Test doc: `Test.pdf` (extracted to
`/tmp/opencode/k580_test.txt`).

## 5. OpenRGB comparison notes

- OpenRGB V1 detect list **includes `320F:5000`**, so the old K580 is already
  claimed; V1 mode list has 17 modes vs the app's 19 (missing from OpenRGB:
  compare section lists — see comparison report).
- OpenRGB's cmd subset (`BEGIN=0x01, END=0x02, SET_PARAMETER=0x06,
  READ_CUSTOM_COLOR_DATA=0x10, WRITE_CUSTOM_COLOR_DATA=0x11`) covers only 5 of
  the app's 16 distinct builders; cmds `0x03` (44-byte state read) and the
  profile-save flow (`1,0xA,8,2`) are unimplemented in OpenRGB.
- Checksum + report `0x04` + `WriteFile 64B` are identical — no wire-format
  gap, only feature/cmd coverage gap.
