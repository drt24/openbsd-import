#
#	etc.powerpc/Makefile.inc -- powerpc-specific etc Makefile targets
#
#	$Id$

.ifdef DESTDIR
snap_md: binutils

binutils:
	cd ${DESTDIR} && tar cf - usr/*openbsd* \
	    | ${GZIP} ${GZIPFLAGS} > snapshot/usr.binutils.tar${GZIPEXT}

bsd:
	cd ${.CURDIR}/../sys/arch/powerpc/conf && config GENERIC
	cd ${.CURDIR}/../sys/arch/powerpc/compile/GENERIC && \
	    make clean && make depend && make
	cp ${.CURDIR}/../sys/arch/powerpc/compile/GENERIC/bsd \
	    ${DESTDIR}/snapshot/bsd

.endif	# DESTDIR check
