#	from: @(#)Makefile	5.3 (Berkeley) 6/22/90
#	$Id$

FILES=	Makefile.yp
NOOBJ=	noobj

install:
	install -c -o ${BINOWN} -g ${BINGRP} -m ${BINMODE} \
	    ${.CURDIR}/ypinit.sh ${DESTDIR}/usr/sbin/ypinit

.include <bsd.prog.mk>
