#	$Id$

FILES=	ss.h
NOOBJ=	noobj

all include clean cleandir depend lint tags:

includes:
	@echo installing ${FILES}
	@-for i in ${FILES}; do \
		cmp -s $$i ${DESTDIR}/usr/include/ss/$$i || \
		    install -c -m 444 $$i ${DESTDIR}/usr/include/ss/$$i; \
	done

.include <bsd.prog.mk>
