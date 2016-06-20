#!/bin/bash

# Sort video by name


find "$1" -type f -exec file -i {} \;| awk -F: '{ if ($2 ~/video/) print $1 }'  | grep -oP "[^/]*$" | sort | tee sortByName.txt
    
