#!/bin/bash
export DISPLAY=:0 XDG_RUNTIME_DIR=/run/user/1000
LOG=/home/asdf/k668-re/watch2.log
: > "$LOG"

find_node() {
    for n in /dev/hidraw*; do
        [ -e "$n" ] || continue
        real=$(readlink -f "/sys/class/hidraw/$(basename "$n")/device" 2>/dev/null)
        case "$real" in *258A:0049*|*258a:0049*) echo "$n"; return ;; esac
    done
}

for _ in $(seq 1 600); do
    node=$(find_node)
    if [ -n "$node" ]; then
        if [ ! -r "$node" ]; then
            echo "$(date +%T) raising polkit prompt for $node" >> "$LOG"
            timeout 120 pkexec chmod 666 /dev/hidraw* >> "$LOG" 2>&1
        fi
        if [ -r "$node" ]; then
            echo "$(date +%T) node=$node readable, setting lit random effect" >> "$LOG"
            python3 - <<'PY' >> "$LOG" 2>&1
import sys
sys.path.insert(0, "/home/asdf/k668-re")
import k668_verify as v
try:
    kb = v.Kb()
    kb.set_profile(mode=3, colour=0x07, speed_level=4, bright_level=4)
    p = kb.get_profile()
    print("RESTORED mode=0x%02x pair=0x%02x 0x%02x" % (p[0x15], p[0x2A], p[0x2B]))
except SystemExit:
    print("device vanished during set")
except Exception as e:
    print("set failed:", type(e).__name__, e)
PY
            exit 0
        fi
    fi
    sleep 2
done
echo "TIMEOUT" >> "$LOG"
