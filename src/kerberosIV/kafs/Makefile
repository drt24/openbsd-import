#	$Id$

LIB=	kafs
CFLAGS+=-I${.CURDIR} -I${.CURDIR}/../roken
SRCS=	afskrb.c afssys.c common.c
.PATH: ${.CURDIR}/../roken
SRCS+=	resolve.c

.include <bsd.own.mk> # for AFS

.if (${AFS} != "yes")
CFLAGS+=-DNO_AFS
.endif

.include <bsd.lib.mk>
