#	from: @(#)Makefile	5.4 (Berkeley) 3/12/91
#	$Id$

PROG=	ranlib
SRCS=	archive.c build.c misc.c ranlib.c touch.c
CFLAGS+=-I${.CURDIR} -I${.CURDIR}/../ar
MAN=	ranlib.1 ranlib.5
VPATH=	${.CURDIR}/../ar

.include <bsd.prog.mk>
