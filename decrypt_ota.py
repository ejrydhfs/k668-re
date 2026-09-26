#!/usr/bin/env python3
"""Decrypt the Redragon K668WBO-RGB firmware update image.

The vendor updater (K668_20230425_V0105.exe) carries the image as an overlay:

    5A A5 "SINO" | VID(BE) | PID(BE) | size(BE u16) | <ciphertext> | <4-byte key>

It decrypts it before sending over ISP (KeyboardDrv.exe FUN_00403970 ->
FUN_004038E0).  The cipher is a TEA variant:

    8-byte ECB, 32 rounds, delta = 0x61C89647, s0 = 0xC6ED3720
    key = the 4 trailing bytes of the overlay (added as bytes, not words)
    data is read/written as big-endian 32-bit words

Usage:
    decrypt_ota.py <updater.exe> [out.bin]
"""
import struct
import sys

DELTA = 0x61C89647
S0 = 0xC6ED3720
M = 0xFFFFFFFF


def decrypt_payload(payload: bytes, key: bytes) -> bytes:
    k = list(key)
    n = len(payload) // 4
    words = [struct.unpack_from(">I", payload, i * 4)[0] for i in range(n)]

    for b in range(0, n - 1, 2):
        v0, v1 = words[b], words[b + 1]
        s = S0
        for _ in range(32):
            v1 = (v1 - ((((v0 >> 5) + k[3]) & M) ^ (((v0 << 4) + k[2]) & M) ^ ((s + v0) & M))) & M
            s2 = (s + v1) & M
            s = (s + DELTA) & M
            v0 = (v0 - ((((v1 >> 5) + k[1]) & M) ^ (((v1 << 4) + k[0]) & M) ^ s2)) & M
        words[b], words[b + 1] = v0, v1

    out = bytearray()
    for w in words:
        out += struct.pack(">I", w)
    out += payload[n * 4:]
    return bytes(out)


def main() -> int:
    if len(sys.argv) < 2:
        print(__doc__)
        return 1

    data = open(sys.argv[1], "rb").read()
    off = data.find(b"\x5a\xa5SINO")
    if off < 0:
        print("no 5A A5 'SINO' overlay found")
        return 1

    size = struct.unpack_from(">H", data, off + 10)[0]
    payload = data[off + 12: off + 12 + size]
    key = data[off + 12 + size: off + 12 + size + 4]
    plain = decrypt_payload(payload, key)

    out = sys.argv[2] if len(sys.argv) > 2 else "fw_plain.bin"
    open(out, "wb").write(plain)
    print("overlay @ 0x%x  size %d  key %s" % (off, size, key.hex()))
    print("decrypted -> %s  (reset vector %s)" % (out, plain[:3].hex()))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
