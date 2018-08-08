a=$(ifconfig | grep "inet " | grep -o "\S*\.\S*" | grep "10" | grep -v "255")
if [[ -n "$a" ]]
then
	ifconfig | grep "inet " | grep -o "\S*\.\S*" | grep "10" | grep -v "255"
else
	echo "I am lost!"
fi
