/*
 * 9-Dec-93 R.-D. Marzusch, marzusch@odiehh.hanse.de:
 * added 'exclude' option (-x) to specify pathnames NOT to be included in 
 * CD image.
 *
 * 	$Id$
 */

void exclude	__PR((char * fn));
int is_excluded	__PR((char * fn));
