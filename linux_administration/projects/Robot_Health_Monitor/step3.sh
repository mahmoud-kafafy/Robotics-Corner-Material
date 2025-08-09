#!/bin/bash
# all_in_one_block_exercise.sh
# Demonstrates using a command block to group output and save it to a file

OUTPUT_FILE="output.txt"

{
  echo "=== Simple Block Exercise ==="
  echo "Hello!"
  echo "Today is: $(date)"
  echo "Current directory contents:"
  ls
} > "$OUTPUT_FILE"

echo "All output saved to $OUTPUT_FILE"
