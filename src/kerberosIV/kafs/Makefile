#	$Id$

LIB=	kafs
CFLAGS+=-I${.CURDIR}
SRCS=	afskrb.c afssys.c common.c

.include <bsd.own.mk> # for AFS

.if (${AFS} != "yes")
CFLAGS+=-DNO_AFS
.endif

.include <bsd.lib.mk>
