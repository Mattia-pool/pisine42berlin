#Search file that end with ".sh"
# print only the name

find . -type f -name "*.sh" -exec basename {} .sh \;
