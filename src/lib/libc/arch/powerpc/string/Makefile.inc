#	$OpenBSD: Makefile.inc,v 1.6 2015/05/15 22:29:37 millert Exp $

SRCS+=	memcpy.c memmove.S \
	strchr.c strrchr.c \
	bcmp.c bzero.c ffs.S memchr.c memcmp.c memset.c strcat.c \
	strcmp.c strcpy.c strcspn.c strlen.c strlcat.c strlcpy.c \
	strncat.c strncmp.c strncpy.c strpbrk.c strsep.c \
	strspn.c strstr.c swab.c
