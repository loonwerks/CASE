#! /bin/bash
#

# Build in CAmkES
rm -rf ~/CASE/camkes-arm-vm/build_CAmkES/* && ./HAMR_Simple_V4/CAmkES/bin/run-camkes.sh -o "-DCAKEML_ASSEMBLIES_PRESENT=ON -DCAKEML_DUMP_BUFFERS=ON -DUSE_PRECONFIGURED_ROOTFS=ON" -s -n

