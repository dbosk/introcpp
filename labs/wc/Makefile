# $Id$
# Author:	Daniel Bosk <daniel.bosk@miun.se>

DOCUMENTS=	wc.pdf
FILES=		lab.tex literature.bib exam.tex
CATEGORY=	introprog/labs
PACKAGE=	wc-src
PACKAGE_FILES= ${FILES} Makefile values.txt
PUB_FILES=	${DOCUMENTS} ${PACKAGE}.tar.gz values.txt

wc.pdf: lab.pdf
	mv $^ $@
wc.ps: lab.ps
	mv $^ $@

lab.pdf lab.ps: ${FILES}

clean-lab:
	${RM} lab.pdf

clean: clean-lab

#export no

Makefile.export: Makefile

PACKAGE_FILES= ${FILES} Makefile.export values.txt

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
