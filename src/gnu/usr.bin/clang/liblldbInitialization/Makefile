# $OpenBSD: Makefile,v 1.2 2017/07/09 15:28:36 espie Exp $

LIB=	lldbInitialization
NOPIC=
NOPROFILE=

.include <bsd.own.mk>
SRCS=	SystemInitializerCommon.cpp \
	SystemInitializer.cpp \
	SystemLifetimeManager.cpp \

.PATH:	${.CURDIR}/../../../llvm/tools/lldb/source/Initialization

install:
	@# Nothing here so far ...

.include <bsd.lib.mk>

CPPFLAGS+=	${LLDB_INCLUDES}
CPPFLAGS+=	${CLANG_INCLUDES}
