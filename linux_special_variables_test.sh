#!/bin/sh
#https://www.tutorialspoint.com/unix/unix-special-variables.htm#
echo "File Name: $0"
echo "First Parameter : $1"
echo "Second Parameter : $2"
echo "Third Parameter : $3"
echo "Fourth Parameter : $4"
echo "Fifth Parameter : $5"
echo "Quoted Values: $@"
echo "Quoted Values: $*"
echo "Total Number of Parameters : $#"
