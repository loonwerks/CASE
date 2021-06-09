#!/usr/bin/env bash
#
# This file is autogenerated.  Do not edit
#
set -e

if [ -z "${SIREUM_HOME}" ]; then
  echo "SIREUM_HOME not set. Refer to https://github.com/sireum/kekinian/#installing"
  exit 1
fi

PATH_SEP=":"
if [ -n "$COMSPEC" -a -x "$COMSPEC" ]; then
  PATH_SEP=";"
fi

SCRIPT_HOME=$( cd "$( dirname "$0" )" &> /dev/null && pwd )
OUTPUT_DIR="${SCRIPT_HOME}/../../c/nix"

${SIREUM_HOME}/bin/sireum slang transpilers c \
  --sourcepath "${SCRIPT_HOME}/../src/main" \
  --output-dir "${OUTPUT_DIR}" \
  --name "main" \
  --apps "base.producer_thread_i_producer_producer_App,base.consumer_thread_i_consumer_consumer_App,base.Main" \
  --fingerprint 3 \
  --bits 32 \
  --string-size 256 \
  --sequence-size 5 \
  --sequence "IS[Z,art.Bridge]=2;MS[Z,Option[art.Bridge]]=2;IS[Z,art.UPort]=1;IS[Z,art.UConnection]=1;IS[Z,B]=8" \
  --constants "art.Art.maxComponents=2;art.Art.maxPorts=5" \
  --forward "art.ArtNative=base.ArtNix,base.Platform=base.PlatformNix" \
  --stack-size "16*1024*1024" \
  --stable-type-id \
  --exts "${SCRIPT_HOME}/../../c/ext-c${PATH_SEP}${SCRIPT_HOME}/../../c/etc" \
  --exclude-build "base.test_data_port_periodic_domains.producer_thread_i_producer_producer,base.test_data_port_periodic_domains.consumer_thread_i_consumer_consumer" \
  --verbose