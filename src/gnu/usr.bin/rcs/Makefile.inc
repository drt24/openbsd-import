#	$Id$

LIBRCS!=cd $(.CURDIR)/../lib; \
	printf "xxx:\n\techo \$${.OBJDIR}/librcs.a\n" | \
	${MAKE} -r -s -f - xxx | grep librcs
