# Simple UAV Example (ACT_Demo_Dec2018_alt) with temporal isolation

Revision R_2019_09_27

## Overview

The code in this directory is an example of how to do temporal isolation using
seL4. It is a conversion of the original Simple UAV Example
(ACT_Demo_Dec2018_alt) in ../Simple_UAV_Example/. See
../Simple_UAV_Example/README-Adventium.md for detailed information about the
origins.

The AADL and code in this directory has been modified by Jim Carciofini to
provide ane example of how to do temporal isolation using seL4.

- Threads are now all periodic.  They have the same period, but the same
approach can be used to support multiple rates.

- All communications are now done with sampling ports. This is a wait-free
implementation using the seL4 CAmkES dataport mechanism. Neither the consumer
or producer ever wait when interacting with the sampling buffer.

- The seL4 domain mechanism is used to provide a fixed cyclic schedule for
temporal isolation of the periodic threads.

- Pacer is a new thread that was added to provide support for period wait
  functionality.  It uses seL4 notifications to achieve this.

The following files from the original Simple UAV Example were modified: 

- README-Adventium.md 
- MC.aadl 
- SW.aadl 
- CAmkES/CMakeLists.txt 
- CAmkES/PROC_SW.camkes 
- CAmkES/components/FlightPlanner_Impl/FlightPlanner_Impl.camkes 
- CAmkES/components/FlightPlanner_Impl/src/sb_FlightPlanner_Impl.c 
- CAmkES/components/RadioDriver_Impl/RadioDriver_Impl.camkes 
- CAmkES/components/RadioDriver_Impl/src/sb_RadioDriver_Impl.c 
- CAmkES/components/UARTDriver_Impl/UARTDriver_Impl.camkes 
- CAmkES/components/UARTDriver_Impl/src/sb_UARTDriver_Impl.c 
- CAmkES/components/UARTDriver_Impl/src/uartdriver.c 
- CAmkES/components/WaypointManager_Impl/WaypointManager_Impl.camkes 
- CAmkES/components/WaypointManager_Impl/src/sb_WaypointManager_Impl.c 

The following files were added: 

- CAmkES/domain_schedule.c 
- CAmkES/components/Pacer/*
- CAmkES/sampling_ports/*


## How to build and run

You will need an sel4 development environment setup. You can build a real
host, virtual machine, or use the docker image supplied by the seL4 team. I
used the docker image and the instructions below assume that. Instructions are
here:

    https://docs.sel4.systems/HostDependencies

Setup your build environment (SOMEPLACE NOT INSIDE A GIT REPO). These commands
should be executed on your host, not the sel4 docker environment.

NOTE: If you intend to modify the code, use a relative link instead of the copy below 
to keep the source in your git working dir. You will also need to adjust the dir
in which you start the seL4 docker image so that the link is resolved properly.

```
mkdir camkes-project
cd camkes-project
repo init -u https://github.com/seL4/camkes-manifest.git
repo sync
cp -r THISDIR/CAmkES projects/camkes/apps/Simple_UAV_Example_domains
```

While your current directory is the camkes-project created above, start your
seL4 docker environment. In that environment, execute these commands:

```
mkdir build-ia32
cd build-ia32
../init-build.sh -DPLATFORM=ia32 -DCAMKES_APP=Simple_UAV_Example_domains -DSIMULATION=1
```

The domain schedule is a kernel data structure. To get your kernel compiled
with this domain schedule you need to modify the top level settings.cmake file
to have the following lines. Make sure you replace the existing setting of
KernelNumDomains.

```
set(KernelDomainSchedule "${repo_dir}/apps/Simple_UAV_Example_domains/domain_schedule.c" CACHE INTERNAL "")
set(KernelNumDomains 6 CACHE STRING "" FORCE)
```

Now you can build and run.

```
cd build-ia32
ninja
./simulate
```

You should see output like this:

```
...
Booting all finished, dropped to user space
RDIO: initialise entry point called
RDIO:> Sending command.
pacer: Period tick 1
RADIO: Period tick 1
FPLN: Period tick 1
FPLN:< Command.
  Map     = [
             0: {0, 1, 2}
             1: {1, 2, 3}
             2: {2, 3, 4}
             3: {3, 4, 5}
            ]
  Pattern = 2
  HMAC    = 1
FPLN:> new mission notification.
WPM: Period tick 1
WM:< Received flight plan
  Mission:
    0: {0, 1, 2}
    1: {1, 2, 3}
    2: {2, 3, 4}
    3: {3, 4, 5}
    4: {4, 5, 6}
    5: {5, 6, 7}
    6: {6, 7, 8}
    7: {7, 8, 9}
    8: {8, 9, 10}
    9: {9, 10, 11}
WM:> Sent mission window
UART: Period tick 1
UART:< Received mission window
  MissionWindow:
    0: {0, 1, 2}
    1: {1, 2, 3}
    2: {2, 3, 4}
    3: {3, 4, 5}
UART:> Sending 1 as the next id.
pacer: Period tick 2
RADIO: Period tick 2
FPLN: Period tick 2
FPLN:< Received mission receipt confirmation: 1.
WPM: Period tick 2
WM:< Received 1 as the next id.
WM:> Sent mission window
UART: Period tick 2
UART:< Received mission window
  MissionWindow:
    0: {1, 2, 3}
    1: {2, 3, 4}
    2: {3, 4, 5}
    3: {4, 5, 6}
UART:> Sending 2 as the next id.
pacer: Period tick 3
RADIO: Period tick 3
FPLN: Period tick 3
WPM: Period tick 3
WM:< Received 2 as the next id.
WM:> Sent mission window
UART: Period tick 3
UART:< Received mission window
  MissionWindow:
    0: {2, 3, 4}
    1: {3, 4, 5}
    2: {4, 5, 6}
    3: {5, 6, 7}
UART:> Sending 3 as the next id.
pacer: Period tick 4
RADIO: Period tick 4
FPLN: Period tick 4
WPM: Period tick 4
WM:< Received 3 as the next id.
WM:> Sent mission window
UART: Period tick 4
UART:< Received mission window
  MissionWindow:
    0: {3, 4, 5}
    1: {4, 5, 6}
    2: {5, 6, 7}
    3: {6, 7, 8}
UART:> Sending 4 as the next id.
pacer: Period tick 5
RADIO: Period tick 5
FPLN: Period tick 5
WPM: Period tick 5
WM:< Received 4 as the next id.
WM:> Sent mission window
UART: Period tick 5
UART:< Received mission window
  MissionWindow:
    0: {4, 5, 6}
    1: {5, 6, 7}
    2: {6, 7, 8}
    3: {7, 8, 9}
UART:> Sending 5 as the next id....
```

Type "Ctrl-a x" to exit the simulator (QEMU). It will run indefinitely if you
do not stop it.

To compile the application for the ODROID XU4 target platform, use the following
build command instead:

```
mkdir build-exynos5422
cd build-exynos5422
../init-build.sh -DPLATFORM=exynos5422 -DAARCH32=1 -DCAMKES_APP=Simple_UAV_Example_domains
ninja
```



