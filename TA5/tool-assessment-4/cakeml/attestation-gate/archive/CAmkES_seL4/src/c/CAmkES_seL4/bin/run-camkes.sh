#!/usr/bin/env bash

set -o errexit -o pipefail -o noclobber -o nounset

export SCRIPT_HOME=$( cd "$( dirname "$0" )" &> /dev/null && pwd )
export PROJECT_HOME=$( cd "$( dirname "$0" )/.." &> /dev/null && pwd )
cd ${PROJECT_HOME}

! getopt --test > /dev/null
if [[ ${PIPESTATUS[0]} -ne 4 ]]; then
  echo '`getopt --test` failed in this environment.'
  exit 1
fi

NON_INTERACTIVE=false
CAMKES_DIR=""
SIMULATE=false
CAMKES_OPTIONS=""

OPTIONS=c:no:s
LONGOPTS=camkes-dir:,non-interactive,camkes-options:,simulate

function usage {
  echo ""
  echo "Usage: <option>*"
  echo ""
  echo "Available Options:"
  echo "  -c, --camkes-dir      Location of CAmkES project"
  echo "  -n, --non-interactive Non-interactive mode.  Will not prompt before deleting apps and build directories"
  echo "  -o, --camkes-options  CAmkES options (e.g -o \"-DWITH_LOC=ON -DCapDLLoaderMaxObjects=40000\")"
  echo "  -s, --simulate        Simulate via QEMU"
  exit 2
}

! PARSED=$(getopt --options=$OPTIONS --longoptions=$LONGOPTS --name "$0" -- "$@")
if [[ ${PIPESTATUS[0]} -ne 0 ]]; then
    usage
fi

eval set -- "$PARSED"

while true; do
  case "$1" in
    -c|--camkes-dir) CAMKES_DIR="$2"; shift 2 ;;
    -n|--non-interactive) NON_INTERACTIVE=true; shift ;;
    -o|--camkes-options) CAMKES_OPTIONS="$2"; shift 2 ;;
    -s|--simulate) SIMULATE=true; shift ;;
    --) shift; break ;;
  esac
done

# handle non-option arguments
if [[ $# -ne 0 ]]; then
  echo "$0: Unexpected non-option arguments"
  usage
fi

# if CAMKES_DIR option not set then look in some common locations
if [[ -z "${CAMKES_DIR}" && -d "/host/camkes-project" ]]; then
  # docker location
  CAMKES_DIR="/host/camkes-project"
elif [[ -z "$CAMKES_DIR" && -d "${HOME}/CASE/camkes" ]]; then
  # CASE Vagrant VM location
  CAMKES_DIR="${HOME}/CASE/camkes"
fi

if [[ -z "${CAMKES_DIR}" || ! -d "${CAMKES_DIR}" ]]; then
  echo "Directory '${CAMKES_DIR}' does not exist.  Please specify the location of your camkes project directory."
  echo "See https://docs.sel4.systems/projects/camkes"
  exit -1
fi


# use the directory name for the CAmkES apps directory name
HAMR_CAMKES_PROJ=${PWD##*/}


CAMKES_APPS_DIR=${CAMKES_DIR}/projects/camkes/apps/$HAMR_CAMKES_PROJ

# create a sym-link to the project in the CAmkES app directory
if [ -e "${CAMKES_APPS_DIR}" ]; then
  if [ "${NON_INTERACTIVE}" = true ]; then
    rm -rf ${CAMKES_APPS_DIR}
  else
    read -p "The following app directory already exists, replace ${CAMKES_APPS_DIR} [Y|y]? " -n 1 -r; echo
    if [[ $REPLY =~ ^[Yy]$ ]]; then
      rm -rf ${CAMKES_APPS_DIR}
    else
      exit -1
    fi
  fi
fi

ln -sv $PROJECT_HOME $CAMKES_APPS_DIR

########################
# run CAmkES/seL4 build
########################

BUILD_DIR=${CAMKES_DIR}/build_$HAMR_CAMKES_PROJ

if [ -e "${BUILD_DIR}" ]; then
  if [ "${NON_INTERACTIVE}" = true ];then
    rm -rf ${BUILD_DIR}
    mkdir ${BUILD_DIR}
  else
    read -p "The following build directory already exists, replace ${BUILD_DIR} [Y|y]? " -n 1 -r; echo
    if [[ $REPLY =~ ^[Yy]$ ]]; then
      rm -rf ${BUILD_DIR}
      mkdir ${BUILD_DIR}
    fi
  fi
else
  mkdir ${BUILD_DIR}
fi

cd ${BUILD_DIR}

../init-build.sh ${CAMKES_OPTIONS} -DCAMKES_APP=$HAMR_CAMKES_PROJ

ninja

########################
# simulate via QEMU
########################

if [ "${SIMULATE}" = true ]; then
  ./simulate
fi
