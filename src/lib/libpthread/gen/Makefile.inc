#	from: @(#)Makefile.inc	5.21 (Berkeley) 5/24/91
#	$Id$

.PATH: ${.CURDIR}/gen

SRCS+= ttyname.c isatty.c directory.c popen.c time.c ctime.c difftime.c \
    syslog.c eprintf.c getpwent.c getpwnamuid.c pwd_internal.c getcwd.c \
    getwd.c
