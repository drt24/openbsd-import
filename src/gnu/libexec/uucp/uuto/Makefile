# Makefile for uuto
# $Id$

BINDIR=		$(bindir)

NOPROG=
CLEANFILES=	uuto

all:	${CLEANFILES}

uuto:	uuto.in
	sed -e "s|@BINDIR@|$(bindir)|g" -e "s|@SBINDIR@|$(sbindir)|g" \
		$(.CURDIR)/uuto.in > $(.TARGET)

install:
	install ${INSTALL_COPY} -o ${BINOWN} -g ${BINGRP} -m ${BINMODE} \
	    uuto ${DESTDIR}${BINDIR}

.include <bsd.prog.mk>
