# $Id$
# Author:	Daniel Bosk <daniel.bosk@miun.se>

DOCUMENTS=	parse.pdf
FILES=		lab.tex
CATEGORY=	introprog/labs
PACKAGE=	parse-src
PACKAGE_FILES= ${FILES} Makefile names.txt
PUB_FILES=	${DOCUMENTS} ${PACKAGE}.tar.gz names.txt

parse.pdf: lab.pdf
	mv $^ $@
parse.ps: lab.ps
	mv $^ $@
lab.pdf: lab.tex
PACKAGE=	parse-src
PACKAGE_FILES= ${FILES} Makefile
PUB_FILES=	${DOCUMENTS} ${PACKAGE}.tar.gz

### INCLUDES ###

miun.course.mk miun.package.mk:
	wget http://ver.miun.se/build/$@

include miun.course.mk
include miun.package.mk
