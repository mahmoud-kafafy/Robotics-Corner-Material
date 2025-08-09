# success_fail.sh
#!/bin/bash

# Success case
ls /tmp
if [ $? -eq 0 ]; then
  echo "Command succeeded"
fi

# Failure case
ls /abc
if [ $? -ne 0 ]; then
  echo "Command failed"
fi
