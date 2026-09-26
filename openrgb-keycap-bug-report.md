# [Bug Report] Device view key expansion does not apply on a default config (uninitialised `disable_expansion`)

> Filed against OpenRGB (`gitlab.com/CalcProgrammer1/OpenRGB`), following
> `.gitlab/issue_templates/Bug Report.md`. Title must start with `[Bug Report]`.
> This is an OpenRGB bug, not a Qt bug: `DeviceView` is OpenRGB's own widget and the
> defect is an uninitialised C++ member, not framework behaviour.

### Description of Bug

The graphical Device View fails to widen large keys (Tab, Caps Lock, Left/Right Shift,
Backspace, Enter, Space and the numpad keys) into their keycap shapes on a **default
configuration**. Every LED renders as a fixed 1×1 cell, so a keyboard zone looks like a
uniform grid instead of a keyboard — and on some machines it happens to work only because
the indeterminate value coincidentally reads as "expansion enabled".

**Reproduction**
1. Use a fresh OpenRGB config (no `disable_key_expansion` key present) — or delete the key
   from the settings file.
2. Start OpenRGB and select a keyboard with a matrix zone whose LED names use the
   `KEY_EN_*` constants (e.g. Redragon K668WBO-RGB).
3. Switch the mode to the per-LED ("Custom") mode so the Device View is shown.

**Actual behaviour:** all keys are drawn the same size (no wide keys).
**Expected behaviour:** wide keys are drawn 1 unit wider, as upstream does for e.g. the
Razer Huntsman Elite.

**Root cause (from source)**
- `qt/DeviceView.cpp` `DeviceView::DeviceView()` never initialises the `disable_expansion`
  member (it initialises `changed`, `controller`, `mouse_down`, `numerical_labels`,
  `per_led`, `size`, but not `disable_expansion`).
- `qt/OpenRGBDevicePage/OpenRGBDevicePage.cpp` only calls
  `ui->DeviceViewBox->SetDisableKeyExpansion(...)` **when** `ui_settings.contains(
  "disable_key_expansion")`. With a default config that key is absent, so the getter keeps
  its indeterminate value and `InitDeviceView()` may skip the `!disable_expansion` block
  that widens keys.
- A/B confirmation: with the setting absent, every key is 27 px; after explicitly setting
  `disable_key_expansion: false`, wide keys become 63 px (Backspace, Caps, both Shifts,
  Enter, Space, numpad). So the widening code is correct — it is only ever skipped because
  the flag is garbage by default.

**Minimal fix**
Initialise the member in the constructor:

```cpp
// qt/DeviceView.cpp, DeviceView::DeviceView(...)
disable_expansion   = false;
```

(Alternatively, default it in the header / call `SetDisableKeyExpansion(false)` when the
setting key is absent, but the constructor initialiser is the smallest correct change.)
The same omission exists on upstream `master`.

### Attached Log
<!-- Verbose log: run OpenRGB with '--loglevel 6' and attach it. Not strictly needed for
     this bug (it is a UI-state bug with no log output), but the template asks for it. -->

### Operating System
~"OS - Linux"
(Linux, Ubuntu 26.04, Qt5 build from source.)

### Hardware Configuration
Redragon K668WBO-RGB — Sinowealth `258A:0049`, 108-key full-size matrix zone using
`KEY_EN_*` LED names. Not device-specific: any keyboard whose zone uses the keycap
expansion path is affected when `disable_key_expansion` is unset.
