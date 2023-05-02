awk -F ":" '{ $2 = "" ; print $1 }' /etc/passwd | cut -d " " -f1 | awk 'NR%2==0' | rev | sort -r | awk "NR>=$FT_LINE1 && NR<=$FT_LINE2" | sed 's/$/,/g' | tr "\n" " " | sed 's/..$/./'

