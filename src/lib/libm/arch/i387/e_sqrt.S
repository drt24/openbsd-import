/*	$OpenBSD: e_sqrt.S,v 1.3 2008/09/07 20:36:08 martynas Exp $ */
/*
 * Written by J.T. Conklin <jtc@netbsd.org>.
 * Public domain.
 */

#include "DEFS.h"

ENTRY(sqrt)
	fldl	4(%esp)
	fsqrt
	ret
END_STD(sqrt)
