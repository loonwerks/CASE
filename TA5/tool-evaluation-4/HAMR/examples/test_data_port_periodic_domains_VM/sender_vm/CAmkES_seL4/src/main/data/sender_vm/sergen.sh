#!/usr/bin/env bash

# Creates serializers and deserializers for all types in the data folder of a HAMR project.
#
# This script should be placed in the "<project name>/src/main/data/<your>/<package>/" folder of a Sireum HAMR project.
#
# When run, it will create serializers and deserializers (JSON.scala and MsgPack.scala) for all user-defined types.
# JSON.scala must exist for any HAMR-project jar that is pointed to by the Inspector-GUI.

# check for conflicting files
if [ -f 'JSON.scala' ]; then
  echo 'Deleting stale JSON.scala'
  rm JSON.scala
fi
if [ -f 'MsgPack.scala' ]; then
  echo 'Deleting stale MsgPack.scala'
  rm MsgPack.scala
fi

# determine OS
# credit: https://stackoverflow.com/questions/394230/how-to-detect-the-os-from-a-bash-script/18434831
if [[ $OSTYPE == 'linux-gnu' ]]; then
        platform='linux'
elif [[ $OSTYPE == 'darwin'* ]]; then
        platform='mac'
elif [[ $OSTYPE == 'msys' ]]; then
        platform='win'
elif [[ $OSTYPE == 'win32' ]]; then
        platform='win'
else
        echo 'ERROR: invalid OS'
        exit 1
fi

echo "detected platform: '$platform' based on OS: '$OSTYPE'"

initialDirectory=$PWD # allows script to get back to initial directory after crawling up
pathToData='' # a path to get to the data folder, which is made up of repeating '../'
package='' # the package name, which is from the child of 'data' to (and including) the initialDirectory
uppermostDirectoryFound='' # name of the uppermost directory found, if it is not data then we cancel the script

# determine package
while [[ $PWD != '/' && ${PWD##*/} != 'data' ]]; do
  # "if" check on package prevents trailing period character
  if [[ $package == '' ]]; then package=${PWD##*/}; else package=${PWD##*/}.${package}; fi;
  pathToData=../${pathToData};
  cd ..;
  uppermostDirectoryFound=${PWD##*/}
done

# check that data folder was found
if [[ $uppermostDirectoryFound != 'data' ]]; then
  echo 'ERROR: script directory is not a descendent of data/<full_project_package>/';
  exit 1
fi

# check that src/main/data/ path holds
cd ..
if [[ ${PWD##*/} != 'main' ]]; then
  echo "ERROR: expected main/ to be direct parent of data/ but ${PWD##*/} was found.";
  exit 1
fi

cd ..
if [[ ${PWD##*/} != 'src' ]]; then
  echo "ERROR: expected src/ to be direct parent of main/ but ${PWD##*/} was found.";
  exit 1
fi

# check that main/art/DataContent.scala exists (from the current folder src)

if [ ! -f 'main/art/DataContent.scala' ]; then
  echo 'ERROR: project must contain art/DataContent under src/main/ but it was not found.';
  exit 1
fi

cd ${initialDirectory}

# add -L option to find if symlinks need to be followed: files=$(find -L . -regex '.*/[^/]*.scala')
files=$(find . -regex '.*/[^/]*.scala')

echo "package: $package"
echo "files:"
echo "$files"

sergen="$SIREUM_HOME/bin/${platform}/java/bin/java -jar $SIREUM_HOME/bin/sireum.jar tools sergen"

eval $sergen -p $package -m "json,msgpack" $files ${pathToData}../art/DataContent.scala