#!/bin/bash

c_files=$(ls *.c 2>/dev/null)

if [ -z "$c_files" ]; then
  exit 1
fi

for file in $c_files; do
  gcc -c "$file"
done

ar rcs liball.a *.o

rm -f *.o

exit 0
