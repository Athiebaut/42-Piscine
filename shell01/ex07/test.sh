#!/bin/sh
export FT_LINE1=1
export FT_LINE2=18

cat /etc/passwd | awk -F: '{ print $1 }' | sed -n '2,${p;n;}' | rev | sort -r | awk "NR >= $FT_LINE1 && NR <= $FT_LINE2" | sed ':a; N; $!ba; s/\n/, /g' | sed 's/$/./'
