#	from @(#)Makefile	8.1 (Berkeley) 6/1/93
#	$Id$

PROG=	klist
SRCS=	klist.c
.PATH:	${.CURDIR}/../roken
SRCS+=	parse_time.c parse_units.c
DPADD=	${LIBKRB} ${LIBDES}
LDADD=	-lkrb -ldes -lkafs
BINDIR=	/usr/bin
CFLAGS+= -I${.CURDIR}/../roken

.include <bsd.prog.mk>
