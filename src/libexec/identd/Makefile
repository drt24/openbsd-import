#	$Id$

PROG=	identd
SRCS=	config.c identd.c openbsd.c parse.c proxy.c version.c
MAN=	identd.8

LDADD=	-lkvm
DPADD=	${LIBKVM}

.include <bsd.prog.mk>
