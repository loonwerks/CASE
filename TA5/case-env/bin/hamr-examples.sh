#!/bin/bash -e
: "${BASE_DIR:=$HOME/CASE}"
HAMR_EXAMPLES=${BASE_DIR}/hamr-examples
rm -fR ${HAMR_EXAMPLES}
mkdir -p ${HAMR_EXAMPLES}
cd ${HAMR_EXAMPLES}
wget -O - https://github.com/loonwerks/CASE/archive/master.tar.gz | tar xz --strip=3 "CASE-master/TA5/tool-assessment-4"
echo "HAMR examples are set up at ${HAMR_EXAMPLES}"
echo "Please see ${HAMR_EXAMPLES}/readme.md for example descriptions"

