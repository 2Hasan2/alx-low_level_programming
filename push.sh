#!/bin/bash

if [ -z "$1" ]; then
  commit_message=$(date +"%Y-%m-%d %H:%M:%S")
else
  commit_message="$1"
fi

git pull
git add .
git commit -m "$commit_message"
git push

