#!/bin/sh
# Wait for the Redragon K668WBO-RGB to enumerate, then relaunch the OpenRGB GUI
# so it detects the device at startup.
LOG=/home/asdf/k668-re/watch.log
echo "$(date): watching for 258a:0049" >> "$LOG"

while true; do
    if lsusb 2>/dev/null | grep -qi '258a:0049'; then
        sleep 3
        # make sure the hidraw nodes are accessible for this session
        for n in /dev/hidraw*; do [ -e "$n" ] && chmod 666 "$n" 2>/dev/null; done

        pkill -f 'openrgb' 2>/dev/null
        sleep 1

        cd /home/asdf/openrgb-k668 || exit 1
        DISPLAY=:0 setsid nohup ./openrgb >> /home/asdf/k668-re/openrgb.log 2>&1 < /dev/null &
        echo "$(date): 258a:0049 detected -> relaunched openrgb" >> "$LOG"
        exit 0
    fi
    sleep 1
done
