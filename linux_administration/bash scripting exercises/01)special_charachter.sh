#!/bin/bash
# practice.sh - Simple Bash exercises for:
# $?  $$  [ ]  [[ ]]  ${}  $(( ))  ||  &&  !

# 1. $? — Exit status of last command
ls /tmp        # This should succeed
echo $?        # Prints 0 (success)
ls /abc        # This should fail
echo $?        # Prints non-zero (error)

echo "-----------------------------"

# 2. $$ — Process ID of the current shell
echo "Current shell PID: $$"

echo "-----------------------------"

# 3. [ ] — Basic test (numbers, strings, files)
if [ 5 -gt 3 ]; then
  echo "[ ] : 5 is greater than 3"
fi

echo "-----------------------------"

# 4. [[ ]] — Extended test (pattern matching, regex)
if [[ "hello.txt" == *.txt ]]; then
  echo "[[ ]] : This is a text file"
fi

echo "-----------------------------"

# 5. ${} — Variable expansion
name="Mahmoud"
echo "Hello, ${name}!"

echo "-----------------------------"

# 6. $(( )) — Arithmetic operations
echo "3 + 4 = $((3 + 4))"

echo "-----------------------------"

# 7. ||, &&, ! — Logical operators
[ 5 -eq 5 ] && echo "5 equals 5 (True)"
[ 5 -eq 6 ] || echo "5 is not equal to 6 (False)"
if ! [ 5 -eq 6 ]; then
  echo "Negation: 5 is not equal to 6"
fi
