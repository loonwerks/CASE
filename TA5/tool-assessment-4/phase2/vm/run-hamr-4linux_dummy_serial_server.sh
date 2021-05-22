#!/bin/bash -ei

SCRIPT_DIR=$( cd "$( dirname "$0" )" &> /dev/null && pwd )

OSIREUM=osireum

PHANTOM_LOC=$HOME/.sireum/phantom/osate-2.9.1-vfinal/osate

if ! command -v $OSIREUM &> /dev/null
then
    # check the default phantom location
    if [ -f "$PHANTOM_LOC" ]; then
        echo "'$OSIREUM' alias not found, using default location: '$PHANTOM_LOC'"
        OSIREUM="$PHANTOM_LOC -nosplash -console -consoleLog -application org.sireum.aadl.osate.cli"
    else
        echo "Neither the '$OSIREUM' alias or $PHANTOM_LOC could not be found."
        echo "Hint: the alias needs to be in your .bashrc or .profile"
        exit
    fi
fi

CLIB_DIR=${SCRIPT_DIR}/aadl/c_libraries

eval "$OSIREUM hamr codegen \
        --platform Linux \
        --output-dir ${SCRIPT_DIR}/hamr \
        --package-name hamr \
        --exclude-component-impl \
        --aux-code-dirs ${CLIB_DIR}/CMASI:${CLIB_DIR}/hexdump:${CLIB_DIR}/dummy_serial_server \
        --bit-width 32 \
        --max-string-size 256 \
        --max-array-size 1 \
        --run-transpiler \
        ${SCRIPT_DIR}/aadl/.system_UAV"
