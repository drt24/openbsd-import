/*	$OpenBSD: s_log1p.S,v 1.5 2016/09/12 19:47:02 guenther Exp $ */
/*
 * Written by J.T. Conklin <jtc@NetBSD.org>.
 * Public domain.
 */

/*
 * Modified by Lex Wennmacher <wennmach@NetBSD.org>
 * Still public domain.
 */

#include "DEFS.h"

/*
 * The log1p() function is provided to compute an accurate value of
 * log(1 + x), even for tiny values of x. The i387 FPU provides the
 * fyl2xp1 instruction for this purpose. However, the range of this
 * instruction is limited to:
 * 		-(1 - (sqrt(2) / 2)) <= x <= sqrt(2) - 1
 *                         -0.292893 <= x <= 0.414214
 * at least on older processor versions.
 *
 * log1p() is implemented by testing the range of the argument.
 * If it is appropriate for fyl2xp1, this instruction is used.
 * Else, we compute log1p(x) = ln(2)*ld(1 + x) the traditional way
 * (using fyl2x).
 *
 * The range testing costs speed, but as the rationale for the very
 * existence of this function is accuracy, we accept that.
 *
 * In order to reduce the cost for testing the range, we check if
 * the argument is in the range
 *                             -0.25 <= x <= 0.25
 * which can be done with just one conditional branch. If x is
 * inside this range, we use fyl2xp1. Outside of this range,
 * the use of fyl2x is accurate enough.
 * 
 */

ENTRY(log1p)
	fldl	4(%esp)
	fabs
	fld1				/* ... x 1 */
	fadd	%st(0)			/* ... x 2 */
	fadd	%st(0)			/* ... x 4 */
	fld1				/* ... 4 1 */
	fdivp				/* ... x 0.25 */
	fcompp
	fnstsw	%ax
	andb	$69,%ah
	jne	use_fyl2x
	jmp	use_fyl2xp1

	.align	4,0xcc
use_fyl2x:
	fldln2
	fldl	4(%esp)
	fld1
	faddp
	fyl2x
	ret

	.align	4,0xcc
use_fyl2xp1:
	fldln2
	fldl	4(%esp)
	fyl2xp1
	ret
END_STD(log1p)
