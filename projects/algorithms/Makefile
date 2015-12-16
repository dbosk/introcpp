# $Id$
# Author:	Daniel Bosk <daniel.bosk@miun.se>

DOCUMENTS=	algorithms.pdf
FILES=		algorithms.tex literature.bib grades.tex exam.tex
CATEGORY=	introprog/projects
PACKAGE=	algorithms-src
PACKAGE_FILES=	${FILES} Makefile
PUB_FILES=	${DOCUMENTS} ${PACKAGE}.tar.gz

algorithms.pdf algorithms.ps: ${FILES}

#export no

Makefile.export: Makefile

PACKAGE_FILES=	${FILES} Makefile.export

grades.tex: ../grades.tex
	ln -s ../grades.tex grades.tex
exam.tex: ../exam.tex
	ln -s ../exam.tex exam.tex
literature.bib: ../../literature.bib
	ln -s ../../literature.bib literature.bib

clean:
	${RM} grades.tex exam.tex literature.bib

#endexport

### INCLUDES ###

miun.course.mk miun.package.mk:
	wget http://ver.miun.se/build/$@

include miun.course.mk
include miun.package.mk
