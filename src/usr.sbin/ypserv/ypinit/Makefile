#	from: @(#)Makefile	5.3 (Berkeley) 6/22/90
#	$Id$

FILES=	Makefile.main Makefile.yp
NOOBJ=	noobj

install:
	install -c -o root -g wheel -m 751 ${FILES} ${DESTDIR}/var/yp
	install -c -o ${BINOWN} -g ${BINGRP} -m ${BINMODE} \
	    ${.CURDIR}/ypinit.sh ${DESTDIR}/usr/sbin/ypinit

.include <bsd.prog.mk>
