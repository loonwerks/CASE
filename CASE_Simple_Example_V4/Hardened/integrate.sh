#! /bin/bash
#

# Apply patches to CMakeLists.txt, and component basis files;
pushd HAMR_Simple_V4; patch -p0 < ../integrate.patch; popd

# Insert attestation manager library
cp -f Component_Source/Attestation/build/apps/case-tool-assessment/libheli_am_c.a \
      HAMR_Simple_V4/CAmkES/components/AttestationManager_Impl_SW_AttestationManager_AttestationManager/src

# Insert attestation tester library
cp -f Component_Source/Attestation/build/apps/case-tool-assessment/libheli_am_c.a \
      HAMR_Simple_V4/CAmkES/components/AttestationTester_Impl_SW_AttestationTester_AttestationTester/src

# Add basis_ffi to Filter
cp -f Component_Source/SW_Filter/basis_ffi.c \
      HAMR_Simple_V4/CAmkES/components/Filter_Impl_SW_Filter_Filter/src/

# Add basis_ffi to AttestationGate
cp -f Component_Source/SW_AttestationGate/basis_ffi.c \
      HAMR_Simple_V4/CAmkES/components/AttestationGate_Impl_SW_AttestationGate_AttestationGate/src/

# Add basis_ffi to Monitor
cp -f Component_Source/SW_Monitor/basis_ffi.c \
      HAMR_Simple_V4/CAmkES/components/Monitor_Impl_SW_Monitor_Monitor/src/

# Common C implementation
cp -f Component_Source/Hardened/ext.h \
      HAMR_Simple_V4/src/c/ext-c/ext.h
cp -f Component_Source/Hardened/ext.c \
      HAMR_Simple_V4/src/c/ext-c/ext.c

# Insert flight controller implementation
cp -f Component_Source/Hardened/SW_FlightController/FlightController_Impl_SW_FlightController_FlightController.c \
      HAMR_Simple_V4/src/c/ext-c/FlightController_Impl_SW_FlightController_FlightController/FlightController_Impl_SW_FlightController_FlightController.c

# Insert flight planner implementation
cp -f Component_Source/Hardened/SW_FlightPlanner/FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner.c \
      HAMR_Simple_V4/src/c/ext-c/FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner/FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner.c

# Insert radio driver attestation implementation
cp -f Component_Source/Hardened/SW_Radio_Attestation/RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation.c \
      HAMR_Simple_V4/src/c/ext-c/RadioDriver_Attestation_Impl_SW_Radio_RadioDriver/RadioDriver_Attestation_Impl_SW_Radio_RadioDriver.c

# Build in CAmkES
rm -rf ~/CASE/camkes/build_CAmkES/* && ./compile-camkes.sh 
