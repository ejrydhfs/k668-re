# The three vendor protocols vs. the K668 driver in our OpenRGB tree

Companion one-pager summarizing how the three newly reverse-engineered Redragon
platform protocols (BYK901, BYCOMBO4, EVision) differ from the protocol our
OpenRGB tree already implements for the K668.
Full detail with addresses/line citations: `redragon-apps_vs_openrgb.md`,
`BYK901_protocol.md`, `BYCOMBO4_protocol.md`, `K580OLD_protocol.md`,
`../../../K668_RE_vs_OPENRGB.md`.

## The reference: our K668 driver (Sinowealth, `258A:0049`)

Our tree's K668 protocol is **address-based command framing over fixed-size
feature reports**:

```
[0]=reportID   [1]=opcode   [2]=address   [3..]=payload
writes: report 0x06   reads: report 0x05   music: report 0x08
transfer = 0x408 bytes (0x407 payload), no checksum, retry 3×/200 ms
```

The address byte names the object — `0xB6` profile, `0xB8` palette,
`0xD4` matrix, `0xDC…` macro — and reads answer with `0x80|opcode`
(`0x81`, `0x83`, `0x84`). One transfer moves a whole object
(the 0x400 matrix fits in a single report).

## Side-by-side

| | K668 (ours) | BYK901 (K552/K671) | BYCOMBO4 (K671-KS/K580PRO) | EVision (K580 old) |
|---|---|---|---|---|
| Framing | `[id][opcode][addr][data]` | `[id][data]` — **report ID *is* the command** | `[id][cmd][oper/pages/seq][u16 size][≤0x200 chunk]` (+checksum on mouse class) | `[0x04][cksum lo/hi][cmd][param][u16 offset][data]` |
| Report IDs | `0x05` R / `0x06` W / `0x08` music | `0x09` matrix, `0x0A` LED, `0x0B` game, `0x0C` macro (same ID for R and W) | `0x06` KB write when Fw=24, else `0x09`; `0x09` mouse; reads = `cmd\|0x80` (KB) / `cmd\|0x40` (MS) | `0x04` only |
| Read mechanism | separate read report + `addr`, `0x80\|op` echo | same report; GetFeature vs SetFeature distinguishes direction | cmd bit-flip echo, no address byte | cmd + `[5:6]` offset field, send+read (`FUN_00440b60`) |
| Transfer size | one fixed `0x408` | per-report constants: `0x29`, `0x7E`, `0x1F8/0x1F9`, `0x780/0x781` | chunked 520 B (8-B header + `0x200`), multi-page with seq | 64 B; banking via `offset = bank*0x200 + idx*3` |
| Checksum | none | none | mouse class: sum folded into `[1]`; keyboard class: none | mandatory: sum `[3..0x3F]` → `[1]/[2]` |
| Retry | 3×/200 ms | 3×/200 ms (same policy) | 3× generic, **7×** for LED frames (`cmd 0x08`) | none visible — single send, response check |
| API | `HidD_Set/GetFeature` static import | K552: static HID.DLL; **K671: dynamically loaded `Lowerdev.dll`** (wire-identical) | feature reports via device-class methods | raw `WriteFile`/`ReadFile` on 64-B handle, no HID.DLL |

## The four key takeaways

1. **BYK901 drops the opcode/address layer entirely.** K668 multiplexes
   functions through one report pair differentiated by `[1]`/`[2]`; BYK901
   gives each function its own report ID with fixed per-report payload sizes.
   It's the simplest of the four — closest in spirit to our transport
   (same 3×/200 ms retry, feature reports only) — but a driver can't reuse
   any of the K668 framing code.

2. **BYCOMBO4 replaces addressing with a chunked stream protocol.** No
   address byte — a header carries `cmd, oper, pages, seq, size` so payloads
   larger than one report stream across multiple 0x200-byte chunks (LED frame
   is 1 chunk; macro/profile can be several). Its `cmd|0x80` read convention
   is clearly the same Sinowealth family as our K668 `0x81/0x83/0x84` reads,
   and the report ID even *depends on firmware* (`Fw=24` → `0x06`, else
   `0x09`) — a variable our K668 driver hardcodes. Notably, its music frame
   (`[0]=08 [1]=0A [2]=7A [3]=01 + 0x17A`) is **byte-identical to K668's
   `SendMusicData`** — the one piece directly reusable between the two
   drivers. And the in-tree 10c driver already speaks this framing
   byte-for-byte for direct mode (`SetLEDsDirect` = header of `cmd 0x08`,
   size `0x017A`, 520-B feature report) — but only as fire-and-forget Direct,
   none of the cmd machinery around it.

3. **EVision is the only one of the three our tree already implements** —
   `EVisionKeyboardController` V1 uses the same report `0x04`, same checksum
   algorithm, same data offset `[8..]`, same cmd subset
   (`0x01/0x02/0x06/0x10/0x11`). The differences vs the vendor app are
   *coverage*, not wire format: the app has 16 builders (including the
   `1→0xA→8→2` profile-save flow and a 44-byte `cmd 0x03` state read) against
   OpenRGB's 5, and 19 vendor modes against OpenRGB V1's 17. Its 64-byte
   packets + explicit checksum + offset banking are structurally the
   *opposite* of K668's chunk-everything-into-0x408 approach.

4. **Coverage vs K668 is inverted.** Our K668 driver has near-full protocol
   parity (documented in `K668_RE_vs_OPENRGB.md`). Against these three:
   BYK901 = zero code in the tree, BYCOMBO4 = one op (Direct) of a ~11-cmd
   protocol, EVision = 5 of 16 cmds. The shared DNA across all four is only
   the Sinowealth-style `0x80|opcode` read echo and (for two of them) the
   3×/200 ms retry — everything else is per-platform.
