#!/bin/bash
export DISPLAY=:0 XDG_RUNTIME_DIR=/run/user/1000
LOG=/home/asdf/k668-re/verify.log
: > "$LOG"

find_node() {
    for n in /dev/hidraw*; do
        [ -e "$n" ] || continue
        real=$(readlink -f "/sys/class/hidraw/$(basename "$n")/device" 2>/dev/null)
        case "$real" in
            *258A:0049*|*258a:0049*) echo "$n"; return ;;
        esac
    done
}

for _ in $(seq 1 300); do
    node=$(find_node)
    if [ -n "$node" ]; then
        echo "found $node" >> "$LOG"
        if [ ! -r "$node" ]; then
            echo "raising polkit prompt (approve it on screen)..." >> "$LOG"
            timeout 180 pkexec chmod 666 /dev/hidraw* >> "$LOG" 2>&1
            echo "pkexec exit=$?" >> "$LOG"
        fi
        if [ -r "$node" ]; then
            echo "access ok, probing..." >> "$LOG"
            python3 /home/asdf/k668-re/k668_probe.py "$node" >> "$LOG" 2>&1
            echo "PROBE_DONE" >> "$LOG"
            exit 0
        fi
    fi
    sleep 2
done
echo "TIMEOUT: keyboard never appeared/authorised" >> "$LOG"
