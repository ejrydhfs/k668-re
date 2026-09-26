#!/usr/bin/env python3
"""Minimal K668WBO-RGB HID feature-report probe using only kernel hidraw ioctls."""
import fcntl
import os
import struct
import sys
import time

_IOC_READ = 2
_IOC_WRITE = 1


def _ioc(direction, type_char, nr, size):
    return (direction << 30) | (size << 16) | (ord(type_char) << 8) | nr


def get_feature(fd, size):
    buf = bytearray(size)
    fcntl.ioctl(fd, _ioc(_IOC_READ | _IOC_WRITE, "H", 0x07, size), buf, True)
    return bytes(buf)


def set_feature(fd, data):
    buf = bytearray(data)
    fcntl.ioctl(fd, _ioc(_IOC_READ | _IOC_WRITE, "H", 0x06, len(buf)), buf, True)
    return bytes(buf)


def candidates():
    if len(sys.argv) > 1:
        return [sys.argv[1]]
    out = []
    base = "/sys/class/hidraw"
    for name in sorted(os.listdir(base)):
        dev = os.path.realpath(os.path.join(base, name, "device"))
        if "258A:0049" in dev.upper():
            out.append("/dev/" + name)
    return out


def probe(path):
    fd = os.open(path, os.O_RDWR)
    try:
        set_feature(fd, bytes([0x05, 0x83, 0xB6, 0, 0, 0]))
        time.sleep(0.05)
        for _ in range(6):
            r = get_feature(fd, 1032)
            if r[1] == 0x83 and r[2] == 0xB6:
                return fd, r
            time.sleep(0.05)
    except OSError:
        pass
    os.close(fd)
    return None, None


def main():
    for path in candidates():
        fd, resp = probe(path)
        if resp is not None:
            print("vendor node:", path)
            print("profile read ok: len=%d opcode=%02x addr=%02x" % (len(resp), resp[1], resp[2]))
            print("mode byte @0x15 = 0x%02x" % resp[0x15])
            print("profile[0x0E..0x30]:", resp[0x0E:0x30].hex(" "))
            print("per-effect table (0x24..0x4B):", resp[0x24:0x4B].hex(" "))
            print("handshake 5A A5 present:",
                  any(resp[i] == 0x5A and resp[i + 1] == 0xA5 for i in range(3, 24)))
            os.close(fd)
            return 0
    print("no 258A:0049 hidraw node answered the vendor command")
    return 1


if __name__ == "__main__":
    sys.exit(main())
