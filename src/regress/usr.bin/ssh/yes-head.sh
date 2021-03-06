#	$OpenBSD: yes-head.sh,v 1.5 2015/03/03 22:35:19 markus Exp $
#	Placed in the Public Domain.

tid="yes pipe head"

lines=`${SSH} -F $OBJ/ssh_proxy thishost 'yes | head -2000' | (sleep 3 ; wc -l)`
if [ $? -ne 0 ]; then
	fail "yes|head test failed"
	lines = 0;
fi
if [ $lines -ne 2000 ]; then
	fail "yes|head returns $lines lines instead of 2000"
fi
