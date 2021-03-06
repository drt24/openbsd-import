/*	$OpenBSD: wcstoul.c,v 1.1 2005/07/01 08:59:27 espie Exp $	*/
/*	$NetBSD: wcstoul.c,v 1.2 2003/03/11 09:21:24 tshiozak Exp $	*/

#include <ctype.h>
#include <errno.h>
#include <limits.h>
#include <stdlib.h>
#include <wchar.h>
#include <wctype.h>

#include "wctoint.h"

#define	FUNCNAME	wcstoul
typedef unsigned long uint_type;
#define	MAX_VALUE	ULONG_MAX

#include "_wcstoul.h"
