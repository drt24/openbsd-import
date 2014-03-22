#	$Id$
WARNS=		2
PROG=		npppctl
SRCS=		npppctl.c parser.c
MAN=		npppctl.8
CPPFLAGS+=	-I${.CURDIR}/../npppd/npppd -I${.CURDIR}/../npppd/common
LDADD+=		-lutil
DPADD+=		${LIBUTIL}

.include <bsd.prog.mk>
