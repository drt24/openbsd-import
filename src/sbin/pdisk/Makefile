#	$OpenBSD: Makefile,v 1.23 2016/01/27 14:19:59 krw Exp $

.if ${MACHINE} == "macppc"
PROG=	pdisk
LDADD=  -lutil
DPADD=  ${LIBUTIL}
CFLAGS+=-Wall

SRCS=	dump.c file_media.c io.c partition_map.c pdisk.c

.else
NOPROG=yes
.endif

MAN=	pdisk.8
MANSUBDIR=macppc

.include <bsd.prog.mk>
