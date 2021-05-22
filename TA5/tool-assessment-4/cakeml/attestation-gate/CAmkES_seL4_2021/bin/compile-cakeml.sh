#!/usr/bin/env bash

set -e

export SCRIPT_HOME=$( cd "$( dirname "$0" )" &> /dev/null && pwd )

CAMKES_COMPONENTS_DIR=${SCRIPT_HOME}/../src/c/CAmkES_seL4_2021/components
SINGLETON_NAME=CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate
CLASSIFIER_NAME=CASE_AttestationGate_thr_Impl

cd ${SCRIPT_HOME}/../src/c/ext-c/${SINGLETON_NAME}

cat ${CLASSIFIER_NAME}_api.cml ${CLASSIFIER_NAME}_client.cml ${CLASSIFIER_NAME}_control.cml > ${CAMKES_COMPONENTS_DIR}/${SINGLETON_NAME}/src/sb_${CLASSIFIER_NAME}.cml
cake --heap_size=4 --stack_size=4 < ${CAMKES_COMPONENTS_DIR}/${SINGLETON_NAME}/src/sb_${CLASSIFIER_NAME}.cml > ${CAMKES_COMPONENTS_DIR}/${SINGLETON_NAME}/src/sb_${CLASSIFIER_NAME}.S
sed -i 's/cdecl(main)/cdecl(run)/' ${CAMKES_COMPONENTS_DIR}/${SINGLETON_NAME}/src/sb_${CLASSIFIER_NAME}.S
