touch -A "-01" -a bomb.txt
stat -s bomb.txt | cut -d ' ' -f 9 | cut -c 10-
