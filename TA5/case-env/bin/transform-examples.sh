#!/bin/bash -e
: "${BASE_DIR:=$HOME/CASE}"
TRANSFORM_EXAMPLES=${BASE_DIR}/transform-examples
rm -fR ${TRANSFORM_EXAMPLES}
mkdir -p ${TRANSFORM_EXAMPLES}
cd ${TRANSFORM_EXAMPLES}
wget -O - https://github.com/loonwerks/CASE/archive/master.tar.gz | tar xz --strip=3 "CASE-master/TA2/Model_Transformations"
echo "Model Transformation examples are set up at ${TRANSFORM_EXAMPLES}"
echo "Please see BriefCASE User's Guide for example descriptions"

