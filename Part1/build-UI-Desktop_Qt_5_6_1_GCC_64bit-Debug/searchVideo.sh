#!/bin/bash

# Search video
find "$1" -name "*$2*" -print -type f -exec file -i {} \; -print | awk -F: '{if ($2 ~/video/) print $1}' | tee searchResult.txt
