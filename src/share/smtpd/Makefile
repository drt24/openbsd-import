#
#	$Id$
#
FILES=	example.* 
NOOBJ=	noobj

all clean cleandir depend lint tags:

install:
	install -d ${DESTDIR}${BINDIR}/smtpd
	install -c -m 0444 ${FILES} ${DESTDIR}${BINDIR}/smtpd

.include <bsd.prog.mk>
