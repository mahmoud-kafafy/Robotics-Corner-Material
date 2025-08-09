#!/bin/bash
# ==========================
# Bash Loops Exercises
# ==========================

echo "===== 1️⃣ FOR LOOP EXERCISES ====="

# Exercise 1: Print numbers 1 to 5
# Using a classic C-style for loop
for ((i=1; i<=5; i++)); do
    echo "Number: $i"
done

# Exercise 2: Loop through a list of names
names=("Mahmoud" "Sara" "Omar")
# range-based loop 
for name in "${names[@]}"; do
    echo "Hello, $name!"
done

# Exercise 3: Loop over files in current directory
for file in *; do
    echo "Found file: $file"
done


echo
echo "===== 2️⃣ WHILE LOOP EXERCISES ====="
# while loop
# Keeps running while the condition is true.
# Stops when the condition becomes false.

# Exercise 4: Count from 1 to 5
count=1
while [ $count -le 5 ]; do
    echo "Count: $count"
    count=$((count + 1))  # increment
done

# Exercise 5: Ask until the user types "yes"
answer=""
while [ "$answer" != "yes" ]; do
    read -p "Type 'yes' to exit: " answer
done
echo "You typed yes, exiting..."


echo
echo "===== 3️⃣ UNTIL LOOP EXERCISES ====="
# until loop
# Keeps running until the condition becomes true.
# Stops when the condition is true.

# Exercise 6: Count from 1 to 5 using until
count=1
until [ $count -gt 5 ]; do
    echo "Count: $count"
    ((count++))
done

# Exercise 7: Keep asking until user types "stop"
input=""
until [ "$input" == "stop" ]; do
    read -p "Type 'stop' to exit: " input
done
echo "You typed stop, exiting..."
