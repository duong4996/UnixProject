#!/bin/bash

# check same name
	
 
find "$1" -type f -exec file -i {} \; -print | awk -F: '{ if ($2 ~/video/) print $1 }' | grep -o "[^/]*[.$]" | sort |  uniq -d | while read fileName
  do
   find "$1" -type f | sort | grep "$fileName" | tee checkSameName.txt
  done
