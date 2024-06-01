ifconfig -a | grep 'ether ' | sed 's/ether//g' | tr -s '\t' ' ' | sed 's/ //g'
