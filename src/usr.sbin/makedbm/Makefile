#	from: @(#)Makefile	5.8 (Berkeley) 7/28/90
#	$Id$

PROG=	makedbm
SRCS=	makedbm.c ypdb.c
MAN=	makedbm.8
BINDIR=	/usr/sbin
.PATH:	${.CURDIR}/../../usr.sbin/ypserv
CFLAGS+=-I${.CURDIR}/../../usr.sbin/ypserv

.include <bsd.prog.mk>
