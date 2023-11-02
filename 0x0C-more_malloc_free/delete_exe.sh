#!/bin/bash

find "$(pwd)" -maxdepth 1 -type f -name "*.exe" -exec rm -f {} \;

echo "All .exe files in the current directory have been deleted."
