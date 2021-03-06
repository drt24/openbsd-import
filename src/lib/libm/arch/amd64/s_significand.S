/*	$OpenBSD: s_significand.S,v 1.4 2018/03/12 04:27:48 guenther Exp $ */
/*
 * Written by J.T. Conklin <jtc@NetBSD.org>.
 * Public domain.
 */

#include <machine/asm.h>

#include "abi.h"

ENTRY(significand)
	RETGUARD_SETUP(significand, r11)
	XMM_ONE_ARG_DOUBLE_PROLOGUE
	fldl	ARG_DOUBLE_ONE
	fxtract
	fstp	%st(1)
	XMM_DOUBLE_EPILOGUE
	RETGUARD_CHECK(significand, r11)
	ret
END(significand)
	.weak	significand
