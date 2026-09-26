#!/bin/sh
# Installs the OpenRGB-generated udev ruleset (includes Redragon K668WBO-RGB 258a:0049)
set -e

install -m 644 /home/asdf/k668-re/60-openrgb.rules /etc/udev/rules.d/60-openrgb.rules

# Drop the earlier narrow rule now superseded by the generated set.
rm -f /etc/udev/rules.d/60-openrgb-k668.rules

udevadm control --reload-rules
udevadm trigger

for n in /dev/hidraw*; do
    [ -e "$n" ] || continue
    chmod 666 "$n" || true
done

echo "installed /etc/udev/rules.d/60-openrgb.rules ($(wc -l < /etc/udev/rules.d/60-openrgb.rules) lines)"
