ldapsearch -LLL "(cn=z*)" cn | sort -fr | grep cn | cut -c 5-
