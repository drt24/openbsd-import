# $OpenBSD: Makefile,v 1.3 2017/07/09 15:28:34 espie Exp $

.include <bsd.own.mk>

TBLGEN=	${.OBJDIR}/../../../../clang-tblgen/clang-tblgen
CLANG_INC=${.CURDIR}/../../../../../../llvm/tools/clang/include

GEN= Checkers.inc

all: ${GEN}

install:
	@# Nothing here so far ...

clean cleandir:
	rm -f ${GEN}

Checkers.inc: ${CLANG_INC}/clang/StaticAnalyzer/Checkers/Checkers.td
	${TBLGEN} -I${CLANG_INC}/clang/StaticAnalyzer/Checkers \
		-I${CLANG_INC} -gen-clang-sa-checkers \
		-o ${.TARGET} ${.ALLSRC}

.include <bsd.obj.mk>
