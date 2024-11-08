# print MAC adresses
# awk can search patterns and conditions /XX/ and then perform an action {}
ifconfig | awk '/ether/ {print $2}' 
