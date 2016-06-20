#!/bin/bash

# Find all video in a folder + sub-folder
	
find "$1" -type f -exec file -i {} \; -print | awk -F: '{ if ($2 ~/video/) print $1 }'|tee Output.txt
