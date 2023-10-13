#!/bin/bash
if [ $# -ne 1 ]; then
    echo "Usage: $0 <C-file>"
    exit 1
fi

c_file="$1"

if [ ! -f "$c_file" ]; then
    echo "File not found: $c_file"
    exit 1
fi

temp_file="temp_$c_file"
cp "$c_file" "$temp_file"

betty "$temp_file"

if [ $? -ne 0 ]; then
    echo "Betty found errors in the file. Please fix them manually."
    rm "$temp_file"
    exit 1
fi

sed -i 's/\t/  /g' "$temp_file"
echo "" >>"$temp_file"
sed -i 's/\bif(/if (/g' "$temp_file"
sed -i 's/\bfor(/for (/g' "$temp_file"
sed -i 's/\bwhile(/while (/g' "$temp_file"
awk '/^\s*\w+\s+\w+\(.*\)\s*{/{print ""}1' "$temp_file" >"$temp_file.tmp"
mv "$temp_file.tmp" "$temp_file"

if ! grep -q "Holberton School" "$temp_file"; then
    author_name="Your Name"
    file_description="File description here"
    echo "/*" >"$temp_file.tmp"
    echo " * File: $c_file" >>"$temp_file.tmp"
    echo " * Author: $author_name" >>"$temp_file.tmp"
    echo " * Description: $file_description" >>"$temp_file.tmp"
    echo " */" >>"$temp_file.tmp"
    cat "$temp_file" >>"$temp_file.tmp"
    mv "$temp_file.tmp" "$temp_file"
fi

mv "$temp_file" "$c_file"

echo "Fixed $c_file to comply with Betty style."
