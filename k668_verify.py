#!/usr/bin/env python3
"""Live protocol verification for the Redragon K668WBO-RGB (258a:0049)."""
import fcntl
import os
import sys
import time

_IOC_READ = 2
_IOC_WRITE = 1


def _ioc(direction, type_char, nr, size):
    return (direction << 30) | (size << 16) | (ord(type_char) << 8) | nr


PROFILE_SIZE = 1032
COLOR_BASE = 0x24
MODE_OFFSET = 0x15
RGBTAB_OFFSET = 0x1D
RGBTAB_ADDR = 0xB8


def vendor_node():
    base = "/sys/class/hidraw"
    for name in sorted(os.listdir(base)):
        dev = os.path.realpath(os.path.join(base, name, "device"))
        if "258A:0049" in dev.upper() and name.endswith("3"):
            return "/dev/" + name
    for name in sorted(os.listdir(base)):
        dev = os.path.realpath(os.path.join(base, name, "device"))
        if "258A:0049" in dev.upper():
            return "/dev/" + name
    raise SystemExit("no 258A:0049 hidraw node")


class Kb:
    def __init__(self):
        self.fd = os.open(vendor_node(), os.O_RDWR)

    def set(self, data):
        buf = bytearray(data)
        fcntl.ioctl(self.fd, _ioc(_IOC_READ | _IOC_WRITE, "H", 0x06, len(buf)), buf, True)

    def get(self, size=PROFILE_SIZE, report=0x06):
        for _ in range(8):
            buf = bytearray(size)
            buf[0] = report
            try:
                fcntl.ioctl(self.fd, _ioc(_IOC_READ | _IOC_WRITE, "H", 0x07, size), buf, True)
                return bytes(buf)
            except OSError:
                time.sleep(0.05)
        return None

    def get_profile(self):
        self.set([0x05, 0x83, 0xB6, 0, 0, 0])
        time.sleep(0.05)
        return self.get()

    def set_profile(self, mode, colour=0x07, speed_level=4, bright_level=4, patch=None):
        profile = bytearray(self.get_profile())
        profile[0] = 0x06
        profile[1] = 0x03
        profile[2] = 0xB6
        profile[MODE_OFFSET] = mode
        idx = COLOR_BASE + (mode * 2)
        profile[idx] = colour
        profile[idx + 1] = (speed_level << 4) | (bright_level & 0x0F)
        if patch:
            for off, val in patch.items():
                profile[off] = val
        self.set(bytes(profile))
        time.sleep(0.25)

    def set_rgbtab(self, mode, rgb):
        tab = bytearray(20 * 21)
        base = (mode - 1) * 21
        for slot in range(7):
            tab[base + slot * 3 + 0] = rgb[0]
            tab[base + slot * 3 + 1] = rgb[1]
            tab[base + slot * 3 + 2] = rgb[2]
        packet = bytearray(PROFILE_SIZE)
        packet[0] = 0x06
        packet[1] = 0x08
        packet[2] = RGBTAB_ADDR
        packet[3] = 0x00
        packet[4] = 0x40
        packet[RGBTAB_OFFSET:RGBTAB_OFFSET + len(tab)] = tab
        self.set(bytes(packet))
        time.sleep(0.25)


def main():
    kb = Kb()
    p = kb.get_profile()
    print("baseline mode@0x15 = 0x%02x" % p[MODE_OFFSET])

    print("\n-- SetProfile write test --")
    kb.set_profile(mode=6, colour=0x07, speed_level=2, bright_level=3)
    p = kb.get_profile()
    idx = COLOR_BASE + 6 * 2
    print("mode@0x15 = 0x%02x (expect 06)" % p[MODE_OFFSET])
    print("pair@0x%02x = %02x %02x (expect 07 23)" % (idx, p[idx], p[idx + 1]))

    print("\n-- SetLedRgbTab test (mode 6 -> green) --")
    kb.set_rgbtab(6, (0x00, 0xFF, 0x00))
    p = kb.get_profile()
    print("mode@0x15 = 0x%02x, pair = %02x %02x" % (p[MODE_OFFSET], p[0x30], p[0x31]))

    print("\n-- fixed-colour profile (mode 6, colour byte 0x00) --")
    kb.set_rgbtab(6, (0x00, 0xFF, 0x00))
    kb.set_profile(mode=6, colour=0x00, speed_level=2, bright_level=3)
    p = kb.get_profile()
    print("mode@0x15 = 0x%02x, colour@0x30 = 0x%02x (expect 00)" % (p[MODE_OFFSET], p[0x30]))

    print("\nreadback after writes:")
    print("  mode =", p[MODE_OFFSET], " table:", p[0x24:0x34].hex(" "))
    return 0


if __name__ == "__main__":
    sys.exit(main())
