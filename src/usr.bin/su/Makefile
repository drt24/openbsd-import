#	from: @(#)Makefile	5.5 (Berkeley) 5/11/90
#	$Id$

PROG=	su
BINOWN=	root
BINMODE=4555
LDADD+= -lcrypt
DPADD+= ${LIBCRYPT}

.include <bsd.own.mk>

.if defined(SKEY)
CFLAGS+=-DSKEY
LDADD+= -lskey
DPADD+= ${LIBSKEY}
.endif

.if defined(KERBEROS)
CFLAGS+=-DKERBEROS
LDADD+=	-lkrb -ldes
DPADD+=	${LIBKRB} ${LIBDES}
.endif

.include <bsd.prog.mk>
