#	$OpenBSD: Makefile,v 1.2 2009/10/28 07:36:49 deraadt Exp $

PROG=	newfs
SRCS=	dkcksum.c getmntopts.c newfs.c mkfs.c

CFLAGS+= -I${.CURDIR}/../../../sbin/mount

LDADD+=	-lutil
DPADD+=	${LIBUTIL}

.PATH:  ${.CURDIR}/../../../sbin/newfs
.PATH:  ${.CURDIR}/../../../sbin/mount
.PATH:	${.CURDIR}/../../../sbin/disklabel
.include <bsd.prog.mk>
