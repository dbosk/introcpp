# $Id: Makefile 1441 2013-11-13 14:58:39Z martin $
# Author:	Daniel Bosk <daniel.bosk@miun.se>

DOCUMENTS=	source-samples.pdf
FILES=		source-samples.tex references.bib *.cpp *.h
CATEGORY=	introprog/code-samples
PACKAGE=	code-samples-src
PACKAGE_FILES= ${FILES} Makefile 1-1-hello-world.cpp
PUB_FILES=	${DOCUMENTS} ${PACKAGE}.tar.gz 

source-samples.pdf: ${FILES}

### INCLUDES ###

miun.course.mk miun.package.mk:
	wget http://ver.miun.se/build/$@

include miun.course.mk
include miun.package.mk
