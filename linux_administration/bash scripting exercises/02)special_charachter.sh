#!/bin/bash
# practice2.sh - Exercises for:
# \   ;   ;;   .

echo "----- 1. Backslash ( \ ) -----"
# Escape a special character
echo "My username is \$USER"   # Prints literal $USER, not your username

# Continue a command on the next line
echo "This is line one and it \
continues here"                # Backslash removes newline

echo "-----------------------------"

echo "----- 2. Command Separator ( ; ) -----"
# Run two commands in one line
echo "First command"; echo "Second command"

echo "-----------------------------"

echo "----- 3. Double Semicolon ( ;; ) in case -----"
#-p saves you from writing a separate echo line.
# echo -n "enter number"
# read num
#---------------------------------
#1️⃣ read -n
#Means: "Read only N characters" (no need to press Enter if N is reached).
# read -n 1 -p "Press a key: " key
# 2️⃣ echo -n
# Means: "Don’t print the trailing newline" at the end of the output.
# echo -n "Enter your name: "
# read name
# This keeps the cursor on the same line so the user can type right after the prompt.
read -p "Enter a number (1-3): " num
case $num in
  1) echo "You chose One" ;;   # Ends this case branch
  2) echo "You chose Two" ;;
  3) echo "You chose Three" ;;
  *) echo "Invalid choice" ;;
esac

echo "-----------------------------"

echo "----- 4. Dot ( . ) to source a script -----"
# Create a small script that sets a variable
echo 'export MY_NAME="Mahmoud"' > setenv.sh

# Source the script (run in current shell)
. ./setenv.sh
echo "MY_NAME is now: $MY_NAME"
