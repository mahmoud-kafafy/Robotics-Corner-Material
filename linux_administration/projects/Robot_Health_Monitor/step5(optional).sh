#!/bin/bash
# simple_awk_example.sh


# awk 'pattern { action }' filename
#pattern: select which lines to process (optional)
#action: what to do with each matching line (mandatory if pattern exists)  **awk language syntax**
#filename: the file or input to process (optional if piped)

echo "All memory info:"
free

echo -e "\nUsed memory (3rd column from 'Mem:' line):"
free | awk '/Mem:/ { print $3 }'

echo -e "\nTotal memory (2nd column from 'Mem:' line):"
free | awk '/Mem:/ { print $2 }'
