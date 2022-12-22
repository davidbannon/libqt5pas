#!/usr/bin/bash

REMOTE_pro=https://gitlab.com/freepascal.org/lazarus/lazarus/-/raw/main/lcl/interfaces/qt5/cbindings/Qt5Pas.pro
# https://raw.githubusercontent.com/davidbannon/libqt6pas/master/cbindings/Qt6Pas.pro

wget "$REMOTE_pro"
REMOTEqt=`grep VER_PAT Qt5Pas.pro`
LOCALqt=`grep VER_PAT libQtPas_src/cbindings/Qt5Pas.pro`
if [ "$REMOTEqt" == "$LOCALqt" ]; then
    echo "no change" >> result.text
else
    echo "$REMOTEqt" >> result.text
fi
cat result.text

