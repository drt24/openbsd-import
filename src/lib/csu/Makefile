#	$Id$

.if make(obj)
SUBDIR= alpha i386 m68k mips mvme88k ns32k powerpc sparc vax
.else
SUBDIR= ${MACHINE_ARCH}
.endif

SUBDIR+= c++

.include <bsd.subdir.mk>
