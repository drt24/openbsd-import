#	$Id$

PROG=	pppctl
SRCS=	pppctl.c
CFLAGS+=-Wall -Wmissing-prototypes
LDADD+= -ledit -ltermcap
DPADD+= ${LIBEDIT} ${LIBTERMCAP}
MAN=	pppctl.8

.include <bsd.prog.mk>
