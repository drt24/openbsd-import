/*	$OpenBSD: s_atanf.S,v 1.2 2005/08/02 11:17:31 espie Exp $ */
/*
 * Written by J.T. Conklin <jtc@netbsd.org>.
 * Public domain.
 */

#include "DEFS.h"

ENTRY(atanf)
	flds	4(%esp)
	fld1
	fpatan
	ret
END_STD(atanf)
