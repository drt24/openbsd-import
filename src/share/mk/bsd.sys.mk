#	$OpenBSD: bsd.sys.mk,v 1.12 2017/07/05 13:31:40 espie Exp $
#	$NetBSD: bsd.sys.mk,v 1.2 1995/12/13 01:25:07 cgd Exp $
#
# Overrides used for OpenBSD source tree builds.

#CFLAGS+= -Werror

.if defined(DESTDIR)
CPPFLAGS+= -nostdinc -idirafter ${DESTDIR}/usr/include
CXXFLAGS+= -idirafter ${DESTDIR}/usr/include/g++
.endif

.y.c:
	${YACC.y} -o ${.TARGET} ${.IMPSRC}
