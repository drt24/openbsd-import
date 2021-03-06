#	$OpenBSD: Makefile.inc,v 1.15 2017/04/04 00:03:12 deraadt Exp $

KERNELS += GENERIC.MP bsd.mp

bootblocks:
	cp -p ${DESTDIR}/usr/mdec/{bootblk,ofwboot,ofwboot.net} ${RELEASEDIR}

MDEXT=	bsd.rd cd${OSrev}.iso \
	miniroot${OSrev}.img floppy${OSrev}.img floppyB${OSrev}.img \
	bootblk ofwboot ofwboot.net
