#	from: @(#)Makefile	5.5 (Berkeley) 5/11/90
#	$Id$

PROG=	su
BINOWN=	root
BINMODE=4555
CFLAGS+=-DSKEY
LDADD+= -lcrypt -lskey
DPADD+= ${LIBCRYPT} ${LIBSKEY}

.include <bsd.prog.mk>
