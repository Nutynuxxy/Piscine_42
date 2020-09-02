cat /etc/passwd | grep -v '#' | sed -n '2,${p;n;}' | cut -d":" -f1 | rev | sort -r
