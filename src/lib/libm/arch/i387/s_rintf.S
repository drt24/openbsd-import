/*	$OpenBSD: s_rintf.S,v 1.2 2005/08/02 11:17:31 espie Exp $ */
/*
 * Written by J.T. Conklin <jtc@netbsd.org>.
 * Public domain.
 */

#include "DEFS.h"

ENTRY(rintf)
	flds	4(%esp)
	frndint
	ret
END_STD(rintf)
