# $Id$

PROG= skeyinit
BINOWN=root
BINMODE=4555
CFLAGS+= -I${.CURDIR}/../../lib/libskey
DPADD=	${LIBCRYPT} ${LIBSKEY}
LDADD=	-lcrypt -lskey

.include <bsd.prog.mk>
