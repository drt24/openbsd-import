/*	$OpenBSD: libyywrap.c,v 1.3 1996/07/13 22:22:06 millert Exp $	*/

/* libyywrap - flex run-time support library "yywrap" function */

/* $Header$ */

#include <sys/cdefs.h>

int yywrap __P((void));

int
yywrap()
	{
	return 1;
	}
