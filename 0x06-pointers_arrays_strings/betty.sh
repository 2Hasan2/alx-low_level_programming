#!/bin/bash

# Check if a filename was provided as an argument
if [ $# -ne 1 ]; then
    echo "Usage: $0 <filename.c>"
    exit 1
fi

filename="$1"

# Check if the file exists
if [ ! -f "$filename" ]; then
    echo "File not found: $filename"
    exit 1
fi

# Check if the file is a C source file
if [[ "$filename" != *.c ]]; then
    echo "Not a C source file: $filename"
    exit 1
fi

# Remove empty lines and leading spaces from each line
sed -i '/^$/d; s/^[[:space:]]*//' "$filename"

# Check if there's an empty line at the end and add one if not present
if [ "$(tail -c 1 "$filename")" != $'\n' ]; then
    echo >>"$filename"
fi

echo "Empty lines removed, leading spaces removed, and an empty line added at the end of $filename if not already present."
