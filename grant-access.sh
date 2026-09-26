#!/bin/sh
# Run as root:  sudo sh /home/asdf/k668-re/grant-access.sh
# Gives OpenRGB / the probe access to the Redragon K668WBO-RGB (258a:0049) hidraw nodes.
set -e
cat > /etc/udev/rules.d/99-k668wbo-rgb.rules << 'EOF'
KERNEL=="hidraw*", ATTRS{idVendor}=="258a", ATTRS{idProduct}=="0049", MODE="0666", GROUP="plugdev"
EOF
udevadm control --reload-rules
udevadm trigger --subsystem-match=hidraw
for n in /dev/hidraw*; do [ -e "$n" ] && chmod 666 "$n"; done
echo "access granted"
