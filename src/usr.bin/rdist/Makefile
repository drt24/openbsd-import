#	from: @(#)Makefile	5.11 (Berkeley) 3/12/91
#	$Id$

PROG=	rdist
CFLAGS+=-I${.CURDIR}
SRCS=	docmd.c expand.c lookup.c main.c server.c
OBJS+=	gram.o
BINOWN=	root
BINMODE=4555
CLEANFILES=y.tab.h

LDADD=	-lcompat
DPADD=	${LIBCOMPAT}

.include <bsd.prog.mk>
