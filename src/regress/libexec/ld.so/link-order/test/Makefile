# $OpenBSD: Makefile,v 1.7 2013/07/05 21:29:51 miod Exp $

.include <bsd.own.mk>

REGRESS_TARGETS=	test-none test-single test-minor-1 test-minor-2 \
			test-major-1 test-major-2
REGRESS_TARGETS+=	test-nover test-nover-single-1 test-nover-single-2

.include <bsd.obj.mk>

DIR_NOVER=${.CURDIR}/../libnover

OBJDIR_NOVER!=	if [ -d $(DIR_NOVER)/${__objdir} ]; then \
			echo "$(DIR_NOVER)/${__objdir}"; \
		else \
			echo "$(DIR_NOVER)"; \
		fi

DIR_10=${.CURDIR}/../lib10

OBJDIR_10!=	if [ -d $(DIR_10)/${__objdir} ]; then \
			echo "$(DIR_10)/${__objdir}"; \
		else \
			echo "$(DIR_10)"; \
		fi

DIR_11=${.CURDIR}/../lib11

OBJDIR_11!=	if [ -d $(DIR_11)/${__objdir} ]; then \
			echo "$(DIR_11)/${__objdir}"; \
		else \
			echo "$(DIR_11)"; \
		fi

DIR_20=${.CURDIR}/../lib20

OBJDIR_20!=	if [ -d $(DIR_20)/${__objdir} ]; then \
			echo "$(DIR_20)/${__objdir}"; \
		else \
			echo "$(DIR_20)"; \
		fi

DIR_PROG=${.CURDIR}/../prog

OBJDIR_PROG!=	if [ -d $(DIR_PROG)/${__objdir} ]; then \
			echo "$(DIR_PROG)/${__objdir}"; \
		else \
			echo "$(DIR_PROG)"; \
		fi

PROGPATH=	${OBJDIR_PROG}/prog

prog:
	@cd $(DIR_PROG) && $(MAKE)

make-lib: prog
	@mkdir lib >/dev/null 2>&1 || true

clean:
	@rm -f lib/*

test-none:	make-lib clean
	sh ${.CURDIR}/test.sh ${PROGPATH} '%ERROR%'

test-nover:	make-lib clean
	cp ${OBJDIR_NOVER}/libtest.so lib/
	sh ${.CURDIR}/test.sh ${PROGPATH} none

test-single:	make-lib clean
	cp ${OBJDIR_10}/libtest.so.1.0 lib/
	sh ${.CURDIR}/test.sh ${PROGPATH} 1.0

test-minor-1:	make-lib clean
	cp ${OBJDIR_10}/libtest.so.1.0 ${OBJDIR_11}/libtest.so.1.1 lib/
	sh ${.CURDIR}/test.sh ${PROGPATH} 1.1

test-minor-2:	make-lib clean
	cp ${OBJDIR_10}/libtest.so.1.0 ${OBJDIR_11}/libtest.so.1.1 lib/
	sh ${.CURDIR}/test.sh ${PROGPATH} 1.1

test-major-1:	make-lib clean
	cp ${OBJDIR_11}/libtest.so.1.1 ${OBJDIR_20}/libtest.so.2.0 lib/
	sh ${.CURDIR}/test.sh ${PROGPATH} 2.0

test-major-2:	make-lib clean
	cp ${OBJDIR_11}/libtest.so.1.1 ${OBJDIR_20}/libtest.so.2.0 lib/
	sh ${.CURDIR}/test.sh ${PROGPATH} 2.0

test-nover-single-1:	make-lib clean
	cp ${OBJDIR_NOVER}/libtest.so ${OBJDIR_10}/libtest.so.1.0 lib/
	sh ${.CURDIR}/test.sh ${PROGPATH} none

test-nover-single-2:	make-lib clean
	cp ${OBJDIR_10}/libtest.so.1.0 ${OBJDIR_NOVER}/libtest.so lib/
	sh ${.CURDIR}/test.sh ${PROGPATH} none

.include <bsd.regress.mk>
