# $Id$

.if (${MACHINE} == "i386") || (${MACHINE} == "amd64") || \
    (${MACHINE} == "alpha") || (${MACHINE} == "sgi") || \
    (${MACHINE} == "sparc64") || (${MACHINE_ARCH} == "powerpc") || \
    (${MACHINE} == "cats") || (${MACHINE} == "hppa")
PROG=	iwicontrol
.else
NOPROG=
.endif

MAN=	iwicontrol.8

.include <bsd.prog.mk>
