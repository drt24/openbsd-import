# @(#) $Id$

PROG=	rarpd
SRCS=	rarpd.c

CFLAGS+=-I${.CURDIR}

# Uncomment the following to require a boot file in TFTP_DIR
# to exist for a rarp reply to be sent.
# CFLAGS+=-DREQUIRE_TFTPBOOT -DTFTP_DIR=\"/tftpboot\"

MAN=	rarpd.8

.include <bsd.prog.mk>
