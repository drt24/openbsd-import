#! /bin/sh
#
# $Id$
#
EX_OK=0
EX_NOT_FOUND=1

ifs="$IFS"; IFS="${IFS}:"
for dir in $PATH /usr/5bin /usr/ccs/bin
do
	if [ -r $dir/$1 ]
	then
		echo $dir/$1
		exit $EX_OK
	fi
done
IFS=$ifs

exit $EX_NOT_FOUND
