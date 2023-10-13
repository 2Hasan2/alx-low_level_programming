#!/bin/bash

# Check if betty is installed
if ! type "betty" &>/dev/null; then
    echo "Betty is not installed. Please install Betty before using this script."
    exit 1
fi

# Check for input file
if [ -z "$1" ]; then
    echo "Usage: $0 <C_FILE>"
    exit 1
fi

c_file="$1"

# Check if the input file exists
if [ ! -f "$c_file" ]; then
    echo "File not found: $c_file"
    exit 1
fi

# Run betty to fix style errors and update the file
betty -f "$c_file"
