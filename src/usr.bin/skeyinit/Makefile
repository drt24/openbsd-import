# $Id$

PROG= skeyinit
BINOWN=root
BINMODE=4555
CFLAGS+= -I${.CURDIR}/../../lib/libskey
#DPADD=	${LIBCRYPT} ${LIBSKEY}
DPADD=	${LIBSKEY}
#LDADD=	-lcrypt -lskey
LDADD=	-lskey

.include <bsd.prog.mk>
