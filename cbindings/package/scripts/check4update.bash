#!/usr/bin/bash

wget https://raw.githubusercontent.com/davidbannon/libqt6pas/master/cbindings/Qt6Pas.pro
REMOTEqt=`grep VER_PAT Qt6Pas.pro`
LOCALqt=`grep VER_PAT libQtPas_src/cbindings/Qt5Pas.pro`
if [ "$REMOTEqt" == "$LOCALqt" ]; then
    echo "no change" >> result.text
else
    echo "$REMOTEqt" >> result.text
fi
cat result.txt

