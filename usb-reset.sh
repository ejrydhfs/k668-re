#!/bin/sh
echo 3-2 > /sys/bus/usb/drivers/usb/unbind 2>/dev/null || true
sleep 3
echo 3-2 > /sys/bus/usb/drivers/usb/bind 2>/dev/null || true
echo "rebound 3-2"
