#!/usr/bin/env python3
"""Camera-assisted visual checks for the K668WBO-RGB (dark room)."""
import os
import subprocess
import sys
import time

sys.path.insert(0, "/home/asdf/k668-re")
import k668_verify as v
from PIL import Image

TMP = "/home/asdf/k668-re/burst.mjpg"


def capture(count=25):
    subprocess.run(
        ["v4l2-ctl", "-d", "/dev/video0", "--set-fmt-video=width=1280,height=720,pixelformat=MJPG",
         "--stream-mmap", "--stream-count=%d" % count, "--stream-to=" + TMP],
        stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL, timeout=30)
    data = open(TMP, "rb").read()
    imgs, i = [], 0
    while True:
        s = data.find(b"\xff\xd8\xff", i)
        if s < 0:
            break
        e = data.find(b"\xff\xd9", s)
        if e < 0:
            break
        imgs.append(data[s:e + 2])
        i = e + 2
    if not imgs:
        return None, None
    big = max(imgs, key=len)
    path = "/home/asdf/k668-re/shot.jpg"
    open(path, "wb").write(big)
    im = Image.open(path).convert("RGB")
    # keyboard occupies roughly the middle band; sample the bright pixels only
    w, h = im.size
    crop = im.crop((int(w * 0.20), int(h * 0.35), int(w * 0.85), int(h * 0.85)))
    px = list(crop.getdata())
    px.sort(key=lambda p: sum(p), reverse=True)
    top = px[:max(1, len(px) // 20)]  # brightest 5%
    r = sum(p[0] for p in top) / len(top)
    g = sum(p[1] for p in top) / len(top)
    b = sum(p[2] for p in top) / len(top)
    return path, (round(r), round(g), round(b))


def main():
    kb = v.Kb()
    print("baseline (Rainbow random):", capture())

    print("\n== palette differential on mode 2 (Respire, fixed colour) ==")
    for name, rgb in (("RED", (255, 0, 0)), ("BLUE", (0, 0, 255)), ("GREEN", (0, 255, 0))):
        kb.set_rgbtab(2, rgb)
        kb.set_profile(mode=2, colour=0x00, speed_level=4, bright_level=4)
        p = kb.get_profile()
        time.sleep(1.5)
        got = capture()
        print("%-5s sent=%s  mode=0x%02x colour=0x%02x  measured=%s"
              % (name, rgb, p[0x15], p[0x2A], got[1]))
    return 0


if __name__ == "__main__":
    sys.exit(main())
