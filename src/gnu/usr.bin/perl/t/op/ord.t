#!./perl

# $RCSfile$$Revision$$Date$

print "1..3\n";

# compile time evaluation

if (ord('A') == 65) {print "ok 1\n";} else {print "not ok 1\n";}

# run time evaluation

$x = 'ABC';
if (ord($x) == 65) {print "ok 2\n";} else {print "not ok 2\n";}

if (chr 65 == A) {print "ok 3\n";} else {print "not ok 3\n";}
