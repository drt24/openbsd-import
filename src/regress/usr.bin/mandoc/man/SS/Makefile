# $OpenBSD: Makefile,v 1.5 2020/02/27 01:25:58 schwarze Exp $

REGRESS_TARGETS	= broken broken_eline longarg noarg paragraph vert
LINT_TARGETS	= broken broken_eline noarg
HTML_TARGETS	= paragraph
TAG_TARGETS	= paragraph

# groff-1.22.3 defects:
# - .SS without args just before EOF causes two additional blank lines.
# - Empty .SS heads cause additional vertical spacing.
# - If .TP or .IP breaks .SS, the tag becomes bold.
# - If .HP breaks .SS, a line is broken after the next input line.
# - If .RS/RE/nf/fi breaks .SS, the next input line becomes bold.
# - .UR does not break .SS.
# - blank line in .SS next-line scope causes a blank line

SKIP_GROFF	= broken broken_eline noarg

.include <bsd.regress.mk>
