#!/bin/bash -ei

SCRIPT_DIR=$( cd "$( dirname "$0" )" &> /dev/null && pwd )
AADL_DIR=$SCRIPT_DIR/..
ROOT_DIR=$SCRIPT_DIR/../..

OSIREUM=osireum
if [ -f "$1" ]; then
  OSIREUM="$1 -nosplash -console -consoleLog -data @user.home/.sireum -application org.sireum.aadl.osate.cli"
elif command -v $OSIREUM &> /dev/null ; then
  OSIREUM=$OSIREUM
elif [ -n "${OSIREUM_EXE}" ] && [ -f "${OSIREUM_EXE}" ]; then
  OSIREUM="$OSIREUM_EXE -nosplash -console -consoleLog -data @user.home/.sireum -application org.sireum.aadl.osate.cli"
else
  echo "osireum not found.  Run '$SIREUM_HOME/bin/sireum hamr phantom -h' for instructions on"
  echo "how to install the Sireum plugins into OSATE/FMIDE.  Then do one of the following:"
  echo "  - Pass in the location of the OSATE/FMIDE executable that contains the Sireum plugins"
  echo "  - Add the 'osireum' alias to your .bashrc file"
  echo "  - Set the environment variable OSIREUM_EXE to point to the location of"
  echo "      the OSATE/FMIDE executable that contains the Sireum plugins"
  exit
fi

eval "$OSIREUM hamr codegen \
  --verbose \
  --platform seL4 \
  --package-name hamr \
  --output-dir $ROOT_DIR/hamr/slang \
  --output-c-dir $ROOT_DIR/hamr/c \
  --exclude-component-impl \
  --bit-width 32 \
  --max-string-size 256 \
  --max-array-size 1 \
  --aux-code-dirs $AADL_DIR/c_libraries/CMASI;$AADL_DIR/c_libraries/hexdump;$AADL_DIR/c_libraries/dummy_serial_server \
  --run-transpiler \
  --camkes-output-dir $ROOT_DIR/hamr/camkes \
  --aadl-root-dir $AADL_DIR \
  --experimental-options \"GENERATE_DOT_GRAPHS\" \
  $AADL_DIR/.project"
