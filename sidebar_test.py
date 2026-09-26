#!/usr/bin/env python3
"""Light only the 18 Cfg.ini-unmapped LED slots of the K668WBO-RGB (258a:0049),
to find out whether the side/edge bars are host-addressable.

Phases (watch the keyboard):
  1. only the 18 unmapped slots bright white   (5 s)
  2. only the 108 key slots bright white       (5 s)
  3. restore hardware Rainbow effect
"""
import fcntl
import os
import sys
import time

_IOC_READ = 2
_IOC_WRITE = 1


def _ioc(direction, type_char, nr, size):
    return (direction << 30) | (size << 16) | (ord(type_char) << 8) | nr


def get_feature(fd, size, report=0x06):
    buf = bytearray(size)
    buf[0] = report
    fcntl.ioctl(fd, _ioc(_IOC_READ | _IOC_WRITE, "H", 0x07, size), buf, True)
    return bytes(buf)


def set_feature(fd, data):
    buf = bytearray(data)
    fcntl.ioctl(fd, _ioc(_IOC_READ | _IOC_WRITE, "H", 0x06, len(buf)), buf, True)


def vendor_node():
    base = "/sys/class/hidraw"
    for name in sorted(os.listdir(base)):
        dev = os.path.realpath(os.path.join(base, name, "device"))
        if "258A:0049" not in dev.upper():
            continue
        fd = None
        try:
            fd = os.open("/dev/" + name, os.O_RDWR)
            set_feature(fd, bytes([0x05, 0x83, 0xB6, 0, 0, 0]))
            time.sleep(0.05)
            for _ in range(6):
                r = get_feature(fd, 1032)
                if r[1] == 0x83 and r[2] == 0xB6:
                    print("vendor interface:", name)
                    return fd, r
                time.sleep(0.05)
        except OSError:
            pass
        if fd is not None:
            os.close(fd)
    return None, None


KEYS = set()
import re
cfg = open("/home/asdf/k668-re/fresh/app/Cfg.ini", encoding="latin-1").read()
for m in re.finditer(r"^K(\d+)=(.*)$", cfg, re.M):
    KEYS.add(int([x.strip() for x in m.group(2).split(",")][7]))
UNMAPPED = [i for i in range(126) if i not in KEYS]


def frame(lit_slots):
    buf = bytearray(382)
    buf[0], buf[1], buf[2], buf[3] = 0x08, 0x0A, 0x7A, 0x01
    for s in lit_slots:
        buf[4 + s * 3 + 0] = 0xFF
        buf[4 + s * 3 + 1] = 0xFF
        buf[4 + s * 3 + 2] = 0xFF
    return bytes(buf)


def set_mode(fd, profile, mode):
    p = bytearray(profile)
    p[0], p[1], p[2] = 0x06, 0x03, 0xB6
    p[0x15] = mode
    set_feature(fd, bytes(p))
    time.sleep(0.25)


def main():
    fd, profile = vendor_node()
    if fd is None:
        print("no 258a:0049 vendor node")
        return 1

    print("entering per-key mode")
    set_mode(fd, profile, 0x15)

    print("phase 1: only the %d unmapped slots lit:" % len(UNMAPPED), UNMAPPED)
    set_feature(fd, frame(UNMAPPED))
    time.sleep(5)

    print("phase 2: only the 108 key slots lit")
    set_feature(fd, frame(sorted(KEYS)))
    time.sleep(5)

    print("restoring Rainbow (mode 3)")
    set_mode(fd, profile, 0x03)
    os.close(fd)
    return 0


if __name__ == "__main__":
    sys.exit(main())
