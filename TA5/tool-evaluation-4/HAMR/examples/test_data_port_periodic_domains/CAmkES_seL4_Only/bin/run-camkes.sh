#!/usr/bin/env bash

set -o errexit -o pipefail -o nounset

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

OPTIONS=c:no:sh
LONGOPTS=camkes-dir:,non-interactive,camkes-options:,simulate,help

function usage {
  echo ""
  echo "Usage: <option>*"
  echo ""
  echo "Available Options:"
  echo "-c, --camkes-dir       Location of CAmkES project"
  echo "-n, --non-interactive  Non-interactive mode.  Symlink in apps directory will be replaced"
  echo "                         if present, CAmkES build directory will not be deleted"
  echo "-o, --camkes-options   CAmkES options (e.g -o \"-DWITH_LOC=ON -DCapDLLoaderMaxObjects=40000\")"
  echo "-s, --simulate         Simulate via QEMU"
  echo "-h, --help             Display this information"
}

! PARSED=$(getopt --options=$OPTIONS --longoptions=$LONGOPTS --name "$0" -- "$@")
if [[ ${PIPESTATUS[0]} -ne 0 ]]; then
    usage
    exit 2
fi

eval set -- "$PARSED"

while true; do
  case "$1" in
    -c|--camkes-dir) CAMKES_DIR="$2"; shift 2 ;;
    -n|--non-interactive) NON_INTERACTIVE=true; shift ;;
    -o|--camkes-options) CAMKES_OPTIONS="$2"; shift 2 ;;
    -s|--simulate) SIMULATE=true; shift ;;
    -h|--help) usage; exit 0 ;;
    --) shift; break ;;
  esac
done

# handle non-option arguments
if [[ $# -ne 0 ]]; then
  echo "$0: Unexpected non-option arguments"
  usage
  exit 3
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
    # if the project contains VMs and USE_PRECONFIGURED_ROOTFS=OFF then
    # deleting the build directory would force the linux image to be
    # re-downloaded, which can take a long time
    echo "Non-interactive mode so not deleting existing ${BUILD_DIR}"
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

cat >${BUILD_DIR}/sim << EOL
#!/usr/bin/env bash

export SCRIPT_HOME=\$( cd "\$( dirname "\$0" )" &> /dev/null && pwd )
cd \${SCRIPT_HOME}

# console output from simulation disappears when QEMU shuts down when run from
# the CAmkES generated ./simulate script. Instead call QEMU directly using the
# default values ./simulate would pass

qemu-system-x86_64 \\
    -cpu Nehalem,-vme,+pdpe1gb,-xsave,-xsaveopt,-xsavec,-fsgsbase,-invpcid,enforce \\
    -nographic \\
    -serial mon:stdio \\
    -m size=512M \\
    -kernel images/kernel-x86_64-pc99 \\
    -initrd images/capdl-loader-image-x86_64-pc99
EOL

chmod 700 ${BUILD_DIR}/sim
echo "Wrote: ${BUILD_DIR}/sim"

if [ "${SIMULATE}" = true ]; then
  # ${BUILD_DIR}/simulate
  ${BUILD_DIR}/sim
fi
