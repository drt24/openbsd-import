#	$OpenBSD: Makefile,v 1.11 2017/06/16 10:25:54 espie Exp $

PROG=	tset
SRCS=	tset.c dump_entry.c
DPADD=	${LIBCURSES}
LDADD=	-lcurses
CURSES= ${.CURDIR}/../../lib/libcurses
TIC= ${.CURDIR}/../tic
CFLAGS+= -I${CURSES} -I${TIC} -I${.CURDIR} -I. -DHAVE_GETTTYNAM -DHAVE_TTYENT_H
CLEANFILES+= termsort.c
.PATH:  ${TIC}
LINKS=	${BINDIR}/tset ${BINDIR}/reset

dump_entry.o: termsort.c

termsort.c: ${TIC}/MKtermsort.sh
	sh ${TIC}/MKtermsort.sh awk ${CURSES}/Caps > ${.TARGET}

.include <bsd.prog.mk>
