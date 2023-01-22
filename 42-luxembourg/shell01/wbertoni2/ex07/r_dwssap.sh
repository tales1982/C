#/bin/sh
cat /etc/passwd | egrep -v '^#' | cut -d':' -f 1 | rev | awk ' {if(!(NR%2)) print $0}' | sort -r | awk -v offset=$FT_LINE1 end=$FT_LINE2' {if(NR>=offset && NR<=end)   print $0}' | paste -s -d","  - | sed 's:$:.:' | sed 's:,:, :g' | tr -d '\n'
