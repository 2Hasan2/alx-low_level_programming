#!/bin/bash

# Check if Betty is installed
if ! command -v betty >/dev/null; then
  echo "Betty is not installed. Please install Betty to use this script."
  exit 1
fi

# Check if a file was provided as an argument
if [ "$#" -ne 1 ]; then
  echo "Usage: $0 <filename.c>"
  exit 1
fi

# Check if the provided file exists
if [ ! -f "$1" ]; then
  echo "File not found: $1"
  exit 1
fi

# Run Betty on the file
betty "$1"

# Check if Betty suggested any fixes
if [ -f "$1-errors" ]; then
  echo "Betty found style issues in $1. Applying fixes..."
  betty --fix "$1"
  rm -f "$1-errors"
else
  echo "No style issues found in $1. Your code is Betty-compliant."
fi
