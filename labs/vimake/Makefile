# $Id$
# Author:	Daniel Bosk <daniel.bosk@miun.se>

DOCUMENTS=	vimake.pdf
FILES=		vimake.tex literature.bib exam.tex
CATEGORY=	introprog/labs
PACKAGE=	vimake-src
PACKAGE_FILES=	${FILES} Makefile
PUB_FILES=	${DOCUMENTS} ${PACKAGE}.tar.gz

vimake.pdf vimake.ps: ${FILES}

#export no

Makefile.export: Makefile

PACKAGE_FILES=	${FILES} Makefile.export

exam.tex: ../exam.tex
	ln -s ../exam.tex exam.tex
literature.bib: ../../literature.bib
	ln -s ../../literature.bib literature.bib

clean:
	${RM} exam.tex literature.bib

#endexport

### INCLUDES ###

miun.course.mk miun.package.mk:
	wget http://ver.miun.se/build/$@

include miun.course.mk
include miun.package.mk
