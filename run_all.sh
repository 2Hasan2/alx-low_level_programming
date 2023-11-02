#!/bin/bash
for file in *.c; do
    echo "Running $file...."
    exe=${file%.c}
    gcc $file -o $exe
done
echo "Done."
