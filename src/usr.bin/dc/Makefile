#	$OpenBSD: Makefile,v 1.2 2006/11/26 11:31:09 deraadt Exp $

PROG=	dc
SRCS=	main.c dc.c bcode.c inout.c mem.c stack.c
COPTS+= -Wall
LDADD=	-lcrypto
DPADD=	${LIBCRYPTO}

.include <bsd.prog.mk>
