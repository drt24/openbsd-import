#	$Id$

.if ${MACHINE} == "macppc"
PROG=	pdisk
LDADD=  -lutil
DPADD=  ${LIBUTIL}
CFLAGS+=-Wall

SRCS=	dump.c \
	file_media.c io.c partition_map.c \
	pdisk.c validate.c

.else
NOPROG=yes
.endif

MAN=	pdisk.8
MANSUBDIR=macppc

.PATH:  ${.CURDIR}/../../../sbin/pdisk
.include <bsd.prog.mk>
