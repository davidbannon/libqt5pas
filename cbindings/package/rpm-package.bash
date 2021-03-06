#!/usr/bin/bash

# Note : must be run as root !

# Script to build rpms from the pre existing libqt5pas libraries
# A straight call to Alien is not suitable because it upsets at least
# fedora when it tells the OS to make directories that already exist ??

# David Bannon, 2020/03/21, LGPL with exception, see associated COPYING.TXT

VERSION=`cat ../version`

MAJORVER=`echo $VERSION | awk -F"." '{ printf $1 }'`		# for 1.2.8,  MAJORVER=1
MINORVER=`echo $VERSION | awk -F"." '{ printf $2"."$3 }'`	# for 1.2.8,  MINORVER=2.8
PRODUCT="libqt5pas"					# note lib has upper case letters

CURRENT="$PWD"

function MakeRPM () {
	echo "============ Processing $PRODUCT$1 ==============="
	RDIR="$PRODUCT$1-$MINORVER"
	rm -Rf "$RDIR"
	alien -r -g -v "$PRODUCT$1_$2-0_amd64.deb"
	# Alien inserts requests the package create /, /usr/lib and /usr/bin and
	# the os does not apprieciate that, not surprisingly.
	sed -i 's#%dir "/"##' "$RDIR"/"$RDIR"-2.spec
	sed -i 's#%dir "/usr/bin/"##' "$RDIR"/"$RDIR"-2.spec
	sed -i 's#%dir "/usr/lib/"##' "$RDIR"/"$RDIR"-2.spec
	cd "$RDIR"
	rpmbuild --target x86_64 --buildroot "$CURRENT/$RDIR" -bb "$RDIR"-2.spec
	cd ..
	chown $SUDO_USER *.rpm
}

MakeRPM "$MAJORVER" "$MINORVER"        
MakeRPM "-dev" "$MINORVER"          

