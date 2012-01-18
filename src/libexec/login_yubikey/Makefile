# $OpenBSD$
#	$Id$

PROG=	login_yubikey
MAN=	login_yubikey.8
SRCS=	login_yubikey.c yubikey.c
CFLAGS+=-Wall

BINOWN=	root
BINGRP=	auth
BINMODE=2555
BINDIR=	/usr/libexec/auth

.include <bsd.prog.mk>
