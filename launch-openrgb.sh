#!/bin/sh
# Launch the OpenRGB GUI on the local X display.
pkill -x openrgb 2>/dev/null
sleep 1
cd /home/asdf/openrgb-k668 || exit 1
DISPLAY=:0 setsid nohup ./openrgb > /home/asdf/k668-re/openrgb.log 2>&1 < /dev/null &
echo "launched"
