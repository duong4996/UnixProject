#!/bin/bash

# Sort video by size

find "$1" -type f -printf "%s Kb     |  " -exec file -i {} \;| awk -F: '{ if ($2 ~/video/) print $1 }' | sort -n | tee sortBySize.txt

