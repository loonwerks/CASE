#!/bin/bash -e
: "${BASE_DIR:=$HOME/CASE}"
UAV_EXAMPLE=${BASE_DIR}/uav-example
rm -fR ${UAV_EXAMPLE}
mkdir -p ${UAV_EXAMPLE}
cd ${UAV_EXAMPLE}
wget -O - https://github.com/loonwerks/CASE/archive/master.tar.gz | tar xz --strip=2 "CASE-master/CASE_Simple_Example_V4"
echo "UAV example is located at ${UAV_EXAMPLE}"
echo "Please see the CASE Tool Assessment #4 Walkthrough document for a comprehensive demonstration of BriefCASE"

