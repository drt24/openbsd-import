# $OpenBSD: Makefile,v 1.2 2002/01/03 00:43:48 art Exp $

PROG=	switch

.for count in 2 3 4 6 8 20 26
REGRESS_TARGETS +=	run-regress-${PROG}-${count}
run-regress-${PROG}-${count}: ${PROG}
	time ./${PROG} -c ${count} | wc -c
.endfor

.include <bsd.regress.mk>
