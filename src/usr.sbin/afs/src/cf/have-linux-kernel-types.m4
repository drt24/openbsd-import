dnl
dnl $Id$
dnl
dnl Check for types in the Linux kernel
dnl

AC_DEFUN(AC_HAVE_LINUX_KERNEL_TYPES, [
for i in $1; do
        AC_HAVE_LINUX_KERNEL_TYPE($i)
done
: << END
@@@funcs="$funcs patsubst([$1], [\w+], [linux_kernel_\&])"@@@
END
])
