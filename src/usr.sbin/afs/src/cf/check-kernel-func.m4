dnl
dnl $Id$
dnl

dnl AC_CHECK_KERNEL_FUNC(func, param, [includes])
AC_DEFUN(AC_CHECK_KERNEL_FUNC,
AC_CHECK_KERNEL($1, ac_cv_kernel_func_$1, [$1]([$2]), $4)
: << END
@@@funcs="$funcs [patsubst([$1], [\w+], [kernel_\&])]"@@@
END
)
