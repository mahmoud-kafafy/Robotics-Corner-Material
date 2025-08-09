#!/bin/bash
# robot_health_snippet.sh

TIMESTAMP=$(date +"%Y-%m-%d_%H-%M-%S")

echo "=== Robot Health Check: $TIMESTAMP ==="

echo -e "\nMemory Usage:"
free -h

echo -e "\nDisk Usage (only /dev/sd partitions):"
df -h | grep '^/dev/sd'

echo -e "\nUptime:"
uptime

