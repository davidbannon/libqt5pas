#!/usr/bin/bash
set -e

# Download model is different from Qt6 version, run it from
# the scripts dir, it will find its way ....
# Small script to update the git controlled tree of libqt6pas
# it downloads the relevent files (initially only needs Qt5Pas.pro)
# checks version number and if required, updates the relevent files.
# No license, use as you see fit. David Bannon 2022-12-17

GIT_REPO="../../.."
DOWNLOAD="lazarus-main-lcl-interfaces-qt5"
DOWNLOAD_SUBS="lcl/interfaces/qt5"
TAR_FILE="lazarus-main-lcl-interfaces-qt5-cbindings-src.tar.gz"
DOWNFILE=""
# lazarus-main-lcl-interfaces-qt5
if [ "$DOWNLOAD" == "" ]; then
	echo "ERROR - Download dir not defined"
	exit
fi

if [ -d "$GIT_REPO""/cbindings" ]; then
    echo "Git dir OK"
else
    echo "Not finding git repo"
    ls -l "$GIT_REPO"
    exit
fi

#cd
if [ -e "$TAR_FILE" ]; then
	rm "$TAR_FILE"
	echo "Removing old download"
fi

if [ -d "$DOWNLOAD" ]; then
	rm -Rf "$DOWNLOAD"
	echo "Removing old download dir"
else
	echo "$DOWNLOAD was not found"
fi

wget -O "$TAR_FILE" https://gitlab.com/freepascal.org/lazarus/lazarus/-/archive/main/lazarus-main.tar.gz?path=lcl/interfaces/qt5
tar xzf "$TAR_FILE"
grep VER_PAT "$DOWNLOAD"/"$DOWNLOAD_SUBS"/cbindings/Qt5Pas.pro
grep VER_PAT "$GIT_REPO"/cbindings/Qt5Pas.pro

DOWN_VER=`grep VER_PAT "$DOWNLOAD"/"$DOWNLOAD_SUBS"/cbindings/Qt5Pas.pro`
GIT_VER=`grep VER_PAT "$GIT_REPO"/cbindings/Qt5Pas.pro`

if [ "$DOWN_VER" != "$GIT_VER" ]; then
	echo "Update required"
    rm -f "$GIT_REPO"/cbindings/package/*.deb
    rm -f "$GIT_REPO"/cbindings/package/*.rpm
    rm -f "$GIT_REPO"/cbindings/package/*.gz
    rm -f "$GIT_REPO"/cbindings/libQt5Pas.so*
	rm -Rf "$GIT_REPO"/cbindings/src
	cp -R "$DOWNLOAD"/"$DOWNLOAD_SUBS"/cbindings/src "$GIT_REPO"/cbindings/src
	cp "$DOWNLOAD"/"$DOWNLOAD_SUBS"/qt5.pas "$GIT_REPO"/cbindings/.
	cp "$DOWNLOAD"/"$DOWNLOAD_SUBS"/cbindings/Qt5Pas.pro "$GIT_REPO"/cbindings/.
	echo "OK, done, now you go and do the build stuff ! eg -"
    echo "    cd ../../ <enter>"
    echo "    qmake -qt=qt5 <enter>"
    echo "    make <enter>"
(wait awhile)
else
	echo "Update NOT required"
fi

