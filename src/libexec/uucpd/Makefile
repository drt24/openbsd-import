#	from: @(#)Makefile	5.3 (Berkeley) 6/25/90
#	$Id$

CFLAGS+= -DBSDINETD
PROG=	uucpd
NOMAN=	noman
LDADD+= -lcrypt
DPADD+=	${LIBCRYPT}

.include <bsd.prog.mk>
