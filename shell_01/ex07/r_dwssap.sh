#!/bin/sh

cat /etc/passwd | sed '/^#/d' | cut -d ":" -f1 | awk '{if(NR%2==0) print}' | rev | sort -r | awk 'NR >= a,NR <= b { print }' a=$FT_LINE1 b=$FT_LINE2 | tr '\n' "," | sed 's/,/, /g' | sed 's/, $/./'