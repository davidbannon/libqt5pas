#!/bin/bash

# A script, run from the git dir pulled down from https://github.com/davidbannon/libqt5pas
# expects to be run from the cbinding dir. 
# It gets the relevent files from gitlab, checks to see if we are out of date
# and updates the local repo if we are.
# After this, you will make the library and then package it. Finally, commit and upload binaries.

# David Bannon, September 4, 2023


LAZARUS_GIT="/home/dbannon/bin/Lazarus/lazarus-git/"
CURRENT=`pwd`
TMP="/tmp"
TMPFILE="lazarus-main-lcl-interfaces-qt5"
TMPPATH="$TMPFILE"/"lcl/interfaces/qt5/cbindings"
DIFFRES=""

cd $TMP
rm -f "$TMPFILE".zip
rm -Rf "$TMPFILE"

wget --output-document="$TMPFILE".zip https://gitlab.com/freepascal.org/lazarus/lazarus/-/archive/main/lazarus-main.zip?path=lcl/interfaces/qt5
unzip -q "$TMPFILE".zip

echo "comparing "$TMP"/"$TMPPATH"/"Qt5Pas.pro" with "$CURRENT"/"Qt5Pas.pro"" 

DIFFRES=`diff "$TMP"/"$TMPPATH"/"Qt5Pas.pro"  "$CURRENT"/"Qt5Pas.pro"`

echo "$DIFFRES" 

if [ "$DIFFRES" == "" ]; then 
	echo "No update needed, we will exit"
	exit
fi

echo "--------------- update needed"
rm -Rf "$CURRENT"/"src"

cp -r "$TMP"/"$TMPPATH"/* "$CURRENT"/.

cd "$CURRENT"
git status

echo "you should now type qmake -qt=qt5; make <enter> and wait a while"
echo "After that, run the package-lib script in package dir"
