/*	$OpenBSD: realpath.c,v 1.26 2019/06/17 03:13:17 deraadt Exp $ */
/*
 * Copyright (c) 2019 Bob Beck <beck@openbsd.org>
 * Copyright (c) 2019 Theo de Raadt <deraadt@openbsd.org>
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY
 * SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION
 * OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN
 * CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#include <errno.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>
#include <syslog.h>
#include <stdarg.h>

int __realpath(const char *pathname, char *resolved);
PROTO_NORMAL(__realpath);

/*
 * wrapper for kernel __realpath
 */

char *
realpath(const char *path, char *resolved)
{
	char rbuf[PATH_MAX];

	if (__realpath(path, rbuf) == -1)
		return NULL;
	if (resolved == NULL)
		return (strdup(rbuf));
	strlcpy(resolved, rbuf, PATH_MAX);
	return (resolved);
}
