# Simple UAV Slang Example

This folder stores the simple UAV example from CASE tool evaluation #2 (Dec'18), but modified to use auto-generated AADL middleware and component behavior implemented in Slang that then translated to C.

## Running on seL4

```
git clone git@github.com:ku-sldg/CASETeam.git
CASETeam/examples/ksu-proprietary/simple-uav-slang-example/uav-project/camkes_setup.sh 
```

This will build the static Slang library and then build and run the CAmkES system. 
The path to the CAmkES installation directory can be supplied if it is not 
located at `/host/camkes-project`.  For example,

```
CASETeam/examples/ksu-proprietary/simple-uav-slang-example/uav-project/camkes_setup.sh /path/to/camkes
```


## Running on Linux

```bash
git clone git@github.com:ku-sldg/CASETeam.git
cd CASETeam/examples/ksu-proprietary/simple-uav-slang-example/uav-project
MAKE_ARGS=-j4 bin/compile-linux.sh   # compile
bin/run-linux.sh                     # run, press enter to start the system
bin/linux/Main                       # stop
```

## Running on macOS

```bash
git clone git@github.com:ku-sldg/CASETeam.git
cd CASETeam/examples/ksu-proprietary/simple-uav-slang-example/uav-project
MAKE_ARGS=-j4 bin/compile-mac.sh     # compile
bin/run-mac.sh                       # run, press enter to start the system
bin/mac/Main                         # stop
```


## Running on Windows/Cygwin

**Requirement:** [Cygserver](https://cygwin.com/cygwin-ug-net/using-cygserver.html) running in the background

```bash
git clone git@github.com:ku-sldg/CASETeam.git
cd CASETeam/examples/ksu-proprietary/simple-uav-slang-example/uav-project
MAKE_ARGS=-j4 bin/compile-cygwin.sh  # compile
bin/run-cygwin.bat                   # run, press enter to start the system
bin/mac/Main.exe                     # stop
```
