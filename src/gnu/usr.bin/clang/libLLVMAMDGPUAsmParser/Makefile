# $OpenBSD: Makefile,v 1.1 2019/01/29 00:18:23 jsg Exp $

LIB=	LLVMAMDGPUAsmParser
NOPROFILE=

CPPFLAGS+=	-I${.OBJDIR}/../include/llvm/AMDGPU \
		-I${LLVM_SRCS}/lib/Target/AMDGPU

SRCS+=	AMDGPUAsmParser.cpp

.PATH:	${.CURDIR}/../../../llvm/lib/Target/AMDGPU/AsmParser
