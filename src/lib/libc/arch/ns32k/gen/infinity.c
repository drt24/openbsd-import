#ifndef lint
static char rcsid[] = "$Id$";
#endif /* not lint */

/* infinity.c */

#include <math.h>

/* bytes for +Infinity on a ns32k */
char __infinity[] = { 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xef, 0x7f };
