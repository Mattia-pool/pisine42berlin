#!/bin/bash
#Show the list of groups where login has variable FT_USER
#Separate with commas no spaces

id -nG $FT_USER | tr ' ' ',' | tr -d '\n' 

