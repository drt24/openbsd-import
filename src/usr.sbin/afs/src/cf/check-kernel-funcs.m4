dnl
dnl $Id$
dnl

dnl AC_CHECK_KERNEL_FUNCS(functions...)
AC_DEFUN(AC_CHECK_KERNEL_FUNCS,
[for ac_func in $1
do
AC_CHECK_KERNEL($ac_func, ac_cv_kernel_func_$ac_func, [$ac_func]())
done
]
: << END
@@@funcs="$funcs [patsubst([$1], [\w+], [kernel_\&])]"@@@
END
)
