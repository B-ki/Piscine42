#!/bin/sh
cat /etc/passwd | sed '/^#/d' | awk '{if(NR%2==0)print$0}' | awk -F: '{print$1}' | rev | sort -r | awk -v A=$FT_LINE1 -v B=$FT_LINE2 '{if(NR>=A && NR<=B)print}' | awk 'BEGIN {RS=""}{gsub(/\n/,", ",$0); print $0}' | tr "\n" "."
