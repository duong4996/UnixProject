#!/bin/bash

# Get created time of file
  get_crtime() {
    for file in "${@}"; do
      inode=$(stat -c '%i' "${file}")
      fs=$(df  --output=source "${file}"  | tail -1)
      crtime=$(sudo debugfs -R 'stat <'"${inode}"'>' "${fs}" 2>/dev/null |
      grep -oP 'crtime.*--\s*\K.*')
      printf "%s\n" "${crtime}"
    done
  }  

# Sort video by created time

cat "Output.txt" | while read line
     do
       echo "createdTime: $(get_crtime "$line") | Filename: $(basename "$line")" 
       done | tee createdTime.txt
       echo "-------------------------------"
       sort -k 3,3 -k 4,4n -k 5,5 createdTime.txt | tee sortByCreatedTime.txt
    
