#	$OpenBSD: Makefile,v 1.12 2019/04/30 17:46:05 deraadt Exp $

SUBDIR+= ramdisk ramdiskB miniroot

.if	make(obj) || make(cleandir) || make(clean)
SUBDIR+= iso
.endif

unconfig:
	cd ramdisk; ${MAKE} unconfig
	cd ramdiskB; ${MAKE} unconfig
	cd miniroot; ${MAKE} unconfig

.include <bsd.subdir.mk>
