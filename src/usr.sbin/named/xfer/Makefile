#	from: @(#)Makefile	5.1 (Berkeley) 5/28/90
#	$Id$

PROG=	named-xfer
SRCS=	named-xfer.c db_glue.c
CFLAGS+=-I${.CURDIR}/..
.PATH:	${.CURDIR}/..
BINDIR=	/usr/libexec
MAN=	named-xfer.8

.include "../../Makefile.inc"
.include <bsd.prog.mk>
