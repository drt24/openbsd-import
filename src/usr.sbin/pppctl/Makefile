#	$Id$

PROG=	pppctl
SRCS=	pppctl.c
CFLAGS+=-Wall -Wmissing-prototypes
LDADD+= -ledit -lcurses
DPADD+= ${LIBEDIT} ${LIBCURSES}
MAN=	pppctl.8

.include <bsd.prog.mk>
