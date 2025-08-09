#!/bin/bash
# cpu_temp_progress.sh
# Demonstration: from simple file read → CPU temperature logger

echo "=== Step 1: Basic File Read ==="
FILE="number.txt"
if [ -f "$FILE" ]; then
    VALUE=$(cat "$FILE")
else
    VALUE="File not found"
fi
echo "Value from file: $VALUE"
echo

# ----------------------------
echo "=== Step 2: Add a Simple Calculation ==="
if [ -f "$FILE" ]; then
    RAW_VALUE=$(cat "$FILE")
    VALUE=$((RAW_VALUE / 10)) # Example calculation
else
    VALUE="File not found"
fi
echo "Calculated value: $VALUE"
echo

# ----------------------------
echo "=== Step 3: Use the Real CPU Temperature File ==="
CPU_TEMP_FILE="/sys/class/thermal/thermal_zone0/temp"
if [ -f "$CPU_TEMP_FILE" ]; then
    RAW_TEMP=$(cat "$CPU_TEMP_FILE")       # Value in millidegrees
    CPU_TEMP="$((RAW_TEMP / 1000))°C"      # Convert to Celsius
else
    CPU_TEMP="Not available"
fi
echo "CPU Temperature: $CPU_TEMP"
echo

# ----------------------------
echo "=== Step 4: Append to a Log File with Timestamp ==="
LOG_DIR="$HOME/robot_logs"
mkdir -p "$LOG_DIR"

TIMESTAMP=$(date +"%Y-%m-%d_%H-%M-%S")
LOG_FILE="$LOG_DIR/cpu_temp_$TIMESTAMP.log"

echo "=== CPU Temperature at $TIMESTAMP ===" >> "$LOG_FILE"
echo "CPU Temperature: $CPU_TEMP" >> "$LOG_FILE"

echo "Log saved to $LOG_FILE"
