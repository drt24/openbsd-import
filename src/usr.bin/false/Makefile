#	from: @(#)Makefile	5.3 (Berkeley) 5/11/90
#	$Id$

MAN=	false.1

beforeinstall:
	install ${COPY} -o ${BINOWN} -g ${BINGRP} -m ${BINMODE} \
		${.CURDIR}/false.sh ${DESTDIR}${BINDIR}/false

.include <bsd.prog.mk>
