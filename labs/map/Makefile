# $Id$
# Author:	Daniel Bosk <daniel.bosk@miun.se>

DOCUMENTS=	map.pdf
FILES=		map.tex literature.bib exam.tex
CATEGORY=	introprog/labs
PACKAGE=	map-src
PACKAGE_FILES=	${FILES} Makefile hitchhikersguide.txt
PUB_FILES=	${DOCUMENTS} ${PACKAGE}.tar.gz hitchhikersguide.txt

hitchhikersguide.txt:
	wget -O $@ http://www.clearwhitelight.org/hitch/hhgttg.txt

map.pdf map.ps: ${FILES}

#export no

Makefile.export: Makefile

PACKAGE_FILES=	${FILES} Makefile.export hitchhikersguide.txt

exam.tex: ../exam.tex
	ln -s ../exam.tex exam.tex
literature.bib: ../../literature.bib
	ln -s ../../literature.bib literature.bib

clean:
	${RM} exam.tex literature.bib map

map: solution.cpp
	g++ -g -o $@ $^

#endexport

### INCLUDES ###

miun.course.mk miun.package.mk:
	wget http://ver.miun.se/build/$@

include miun.course.mk
include miun.package.mk
