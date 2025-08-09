#!/bin/bash
# ================================
# Daily Journal Logger Script
# This script creates a timestamped journal file inside a "journal_logs" folder.
# It demonstrates mkdir -p, variables, and date formatting.
# ================================

# 1️⃣ Define the log directory path inside the HOME folder
LOG_DIR="$HOME/journal_logs"

# 2️⃣ Create the directory if it doesn't exist (-p avoids errors if it exists)
mkdir -p "$LOG_DIR"

# 3️⃣ Create a timestamp in the format: YYYY-MM-DD_HH-MM-SS
#    %Y = year (4 digits), %m = month, %d = day
#    %H = hour (24-hour), %M = minute, %S = second
TIMESTAMP=$(date +"%Y-%m-%d_%H-%M-%S")

# 4️⃣ Create the log file path using the directory + timestamp
LOG_FILE="$LOG_DIR/journal_$TIMESTAMP.txt"

# 5️⃣ Write the current date in a nice readable format to the file
#    "+%A" = day name, "+%B" = month name
echo "Today is: $(date +"%A, %d %B %Y")" >> "$LOG_FILE"

# 6️⃣ Write a fixed message to the file
echo "This is my journal entry for today." >> "$LOG_FILE"

# 7️⃣ Print a message to the user showing where the file was saved
echo "Journal created: $LOG_FILE"
