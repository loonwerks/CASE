ROOT=$HOME/CASE

DIR=$ROOT/camkes-arm-vm

rm -rf $DIR
mkdir $DIR
cd $DIR

echo "Cloning camkes arm"
repo init -u https://github.com/SEL4PROJ/camkes-arm-vm-manifest.git --depth=1
repo sync -j8

echo "Cloning Kent's camkes"

(cd projects && rm -rf camkes && git clone https://github.com/kent-mcleod/camkes.git -b kent/aadl)

cd $DIR

ln -sf projects/camkes/easy-settings.cmake
