#! /bin/bash
#

# Build in CAmkES
rm -rf ~/CASE/camkes/build_CAmkES/* && ./HAMR_Simple_V4/CAmkES/bin/run-camkes.sh -o "-DPLATFORM=x86_64 -DSIMULATION=TRUE -DCAKEML_ASSEMBLIES_PRESENT=ON -DCAKEML_DUMP_BUFFERS=ON" -n -s

