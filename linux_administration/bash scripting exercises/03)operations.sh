#!/bin/bash
# ==========================
# Bash Condition Exercises
# ==========================

# 1️⃣ FILE TESTS
# Create a sample file for testing
echo "Hello World" > myfile.txt

# Check if file exists
if [ -e myfile.txt ]; then
    echo "[File Test] myfile.txt exists."
else
    echo "[File Test] myfile.txt does not exist."
fi

# Check if it's a regular file
if [ -f myfile.txt ]; then
    echo "[File Test] myfile.txt is a regular file."
fi

# Check if it's a directory
if [ -d myfile.txt ]; then
    echo "[File Test] myfile.txt is a directory."
else
    echo "[File Test] myfile.txt is NOT a directory."
fi

# Check if file is not empty
if [ -s myfile.txt ]; then
    echo "[File Test] myfile.txt is not empty."
fi

# Check read/write/execute permissions
if [ -r myfile.txt ]; then
    echo "[File Test] myfile.txt is readable."
fi
if [ -w myfile.txt ]; then
    echo "[File Test] myfile.txt is writable."
fi
if [ -x myfile.txt ]; then
    echo "[File Test] myfile.txt is executable."
else
    echo "[File Test] myfile.txt is NOT executable."
fi


# 2️⃣ INTEGER COMPARISONS
a=5
b=10

# Equal
if [ $a -eq $b ]; then
    echo "[Integer Test] a equals b."
else
    echo "[Integer Test] a does NOT equal b."
fi

# Greater than / less than
if [ $a -lt $b ]; then
    echo "[Integer Test] a is less than b."
fi
if [ $a -gt $b ]; then
    echo "[Integer Test] a is greater than b."
fi

# Greater or equal
if [ $a -ge 5 ]; then
    echo "[Integer Test] a is greater or equal to 5."
fi


# 2️⃣➕ INTEGER ARITHMETIC OPERATIONS
echo
echo "---- Integer Arithmetic Operations ----"

n1=7
n2=3

echo "Addition:        $(( n1 + n2 ))"
echo "Subtraction:     $(( n1 - n2 ))"
echo "Multiplication:  $(( n1 * n2 ))"
echo "Division:        $(( n1 / n2 ))"
echo "Modulus:         $(( n1 % n2 ))"
echo "Exponentiation:  $(( n1 ** n2 ))"


# 3️⃣ STRING TESTS
name=""

# Zero length (empty)
if [ -z "$name" ]; then
    echo "[String Test] Name is empty."
fi

# Assign a value and test again
name="Mahmoud"
if [ -n "$name" ]; then
    echo "[String Test] Name is not empty."
fi


# 4️⃣ COMBINING CONDITIONS

# NOT example
if [ ! -e nonexistent.txt ]; then
    echo "[Combine Test] nonexistent.txt does NOT exist."
fi

# AND example
if [ -f myfile.txt ] && [ -s myfile.txt ]; then
    echo "[Combine Test] myfile.txt exists AND is not empty."
fi

# OR example
if [ -f test1.txt ] || [ -f myfile.txt ]; then
    echo "[Combine Test] At least one of the files exists."
fi
