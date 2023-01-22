#/bin/sh
ls -l | awk '{if(NR%2) print $0}'
