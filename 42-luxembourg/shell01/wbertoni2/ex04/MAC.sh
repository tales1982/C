#/bin/sh
ifconfig | egrep 'ether' | cut -d' ' -f 2
