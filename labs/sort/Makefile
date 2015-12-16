# $Id$
# Author:	Daniel Bosk <daniel.bosk@miun.se>

DOCUMENTS=	sort.pdf
FILES=		lab.tex exam.tex literature.bib
CATEGORY=	introprog/labs
PACKAGE=	sort-src
PACKAGE_FILES= ${FILES} Makefile A A1 B
PUB_FILES=	${DOCUMENTS} ${PACKAGE}.tar.gz A A1 B

sort.pdf: lab.pdf
	mv $^ $@
sort.ps: lab.ps
	mv $^ $@

lab.pdf lab.ps: ${FILES}

clean-lab:
	${RM} lab.pdf

clean: clean-lab

#export no

Makefile.export: Makefile

PACKAGE_FILES= ${FILES} Makefile.export A A1 B

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
