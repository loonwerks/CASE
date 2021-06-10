#!/usr/bin/env bash
#
# This file is autogenerated.  Do not edit
#
set -e

if [ -z "${SIREUM_HOME}" ]; then
  echo "SIREUM_HOME not set. Refer to https://github.com/sireum/kekinian/#installing"
  exit 1
fi

SCRIPT_HOME=$( cd "$( dirname "$0" )" &> /dev/null && pwd )

PATH_SEP=":"
if [ -n "$COMSPEC" -a -x "$COMSPEC" ]; then
  PATH_SEP=";"
fi

OUTPUT_DIR="${SCRIPT_HOME}/../../camkes/slang_libraries/producer_t_i_producer_producer"

${SIREUM_HOME}/bin/sireum slang transpilers c \
  --sourcepath "${SCRIPT_HOME}/../src/main/bridge${PATH_SEP}${SCRIPT_HOME}/../src/main/component${PATH_SEP}${SCRIPT_HOME}/../src/main/seL4Nix/base/test_event_data_port_periodic_domains${PATH_SEP}${SCRIPT_HOME}/../src/main/art${PATH_SEP}${SCRIPT_HOME}/../src/main/data${PATH_SEP}${SCRIPT_HOME}/../src/main/seL4Nix/base/producer_t_i_producer_producer" \
  --output-dir "${OUTPUT_DIR}" \
  --name "producer_t_i_producer_producer" \
  --apps "base.producer_t_i_producer_producer.producer" \
  --fingerprint 3 \
  --bits 32 \
  --string-size 256 \
  --sequence-size 1 \
  --sequence "IS[Z,art.Bridge]=1;MS[Z,Option[art.Bridge]]=1;IS[Z,art.UPort]=1;IS[Z,art.UConnection]=1;IS[Z,B]=32" \
  --constants "art.Art.maxComponents=1;art.Art.maxPorts=1" \
  --cmake-includes "+${SCRIPT_HOME}/settings_producer_t_i_producer_producer.cmake" \
  --forward "art.ArtNative=base.producer_t_i_producer_producer.producer" \
  --stack-size "16777216" \
  --stable-type-id \
  --exts "${SCRIPT_HOME}/../../c/ext-c/ext.c${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/ext.h${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/producer_t_i_producer_producer/producer_t_i_producer_producer.h${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/producer_t_i_producer_producer/producer_t_i_producer_producer.c${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/producer_t_i_producer_producer/producer_t_i_producer_producer_api.h${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/producer_t_i_producer_producer/producer_t_i_producer_producer_api.c${PATH_SEP}${SCRIPT_HOME}/../../c/etc_seL4/adapters/producer_t_i_producer_producer/producer_t_i_producer_producer_adapter.h${PATH_SEP}${SCRIPT_HOME}/../../c/etc_seL4/adapters/producer_t_i_producer_producer/producer_t_i_producer_producer_adapter.c" \
  --exclude-build "base.test_event_data_port_periodic_domains.producer_t_i_producer_producer,base.test_event_data_port_periodic_domains.consumer_t_i_consumer_consumer" \
  --lib-only \
  --verbose

OUTPUT_DIR="${SCRIPT_HOME}/../../camkes/slang_libraries/consumer_t_i_consumer_consumer"

${SIREUM_HOME}/bin/sireum slang transpilers c \
  --sourcepath "${SCRIPT_HOME}/../src/main/bridge${PATH_SEP}${SCRIPT_HOME}/../src/main/component${PATH_SEP}${SCRIPT_HOME}/../src/main/seL4Nix/base/test_event_data_port_periodic_domains${PATH_SEP}${SCRIPT_HOME}/../src/main/art${PATH_SEP}${SCRIPT_HOME}/../src/main/data${PATH_SEP}${SCRIPT_HOME}/../src/main/seL4Nix/base/consumer_t_i_consumer_consumer" \
  --output-dir "${OUTPUT_DIR}" \
  --name "consumer_t_i_consumer_consumer" \
  --apps "base.consumer_t_i_consumer_consumer.consumer" \
  --fingerprint 3 \
  --bits 32 \
  --string-size 256 \
  --sequence-size 1 \
  --sequence "IS[Z,art.Bridge]=1;MS[Z,Option[art.Bridge]]=1;IS[Z,art.UPort]=1;IS[Z,art.UConnection]=1;IS[Z,B]=32" \
  --constants "art.Art.maxComponents=1;art.Art.maxPorts=1" \
  --cmake-includes "+${SCRIPT_HOME}/settings_consumer_t_i_consumer_consumer.cmake" \
  --forward "art.ArtNative=base.consumer_t_i_consumer_consumer.consumer" \
  --stack-size "16777216" \
  --stable-type-id \
  --exts "${SCRIPT_HOME}/../../c/ext-c/ext.c${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/ext.h${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/consumer_t_i_consumer_consumer/consumer_t_i_consumer_consumer.h${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/consumer_t_i_consumer_consumer/consumer_t_i_consumer_consumer.c${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/consumer_t_i_consumer_consumer/consumer_t_i_consumer_consumer_api.h${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/consumer_t_i_consumer_consumer/consumer_t_i_consumer_consumer_api.c${PATH_SEP}${SCRIPT_HOME}/../../c/etc_seL4/adapters/consumer_t_i_consumer_consumer/consumer_t_i_consumer_consumer_adapter.h${PATH_SEP}${SCRIPT_HOME}/../../c/etc_seL4/adapters/consumer_t_i_consumer_consumer/consumer_t_i_consumer_consumer_adapter.c" \
  --exclude-build "base.test_event_data_port_periodic_domains.producer_t_i_producer_producer,base.test_event_data_port_periodic_domains.consumer_t_i_consumer_consumer" \
  --lib-only \
  --verbose

OUTPUT_DIR="${SCRIPT_HOME}/../../camkes/slang_libraries/SlangTypeLibrary"

${SIREUM_HOME}/bin/sireum slang transpilers c \
  --sourcepath "${SCRIPT_HOME}/../src/main/art${PATH_SEP}${SCRIPT_HOME}/../src/main/data${PATH_SEP}${SCRIPT_HOME}/../src/main/seL4Nix/base/SlangTypeLibrary" \
  --output-dir "${OUTPUT_DIR}" \
  --name "SlangTypeLibrary" \
  --apps "base.SlangTypeLibrary.SlangTypeLibrary" \
  --fingerprint 3 \
  --bits 32 \
  --string-size 256 \
  --sequence-size 1 \
  --sequence "IS[Z,B]=32" \
  --cmake-includes "+${SCRIPT_HOME}/settings_SlangTypeLibrary.cmake" \
  --forward "art.ArtNative=base.SlangTypeLibrary.SlangTypeLibrary" \
  --stack-size "16777216" \
  --stable-type-id \
  --lib-only \
  --verbose