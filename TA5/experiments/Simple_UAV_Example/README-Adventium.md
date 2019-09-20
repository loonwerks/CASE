[2019/09/13:JCC] Notes on how to build and run this example.

This version of the "Simple UAV" example is a from a private CASE github 
repository hosted by Kansas Univerity:

    https://github.com/ku-sldg/CASETeam/tree/master/examples/tool-eval-2/ACT_Demo_Dec2018_alt


You will need an sel4 development environment setup. You can build a real
host, virtual machine, or use the docker image supplied by the seL4 team. I
used the docker image and the instructions below assume that. Instructions are
here:

    https://docs.sel4.systems/HostDependencies

Setup your build envronment (SOMEPLACE NOT INSIDE A GIT REPO). These commands
should be executed on your host, not the sel4 docker environment.

NOTE: If you intend to modify the code, use a relative link instead of the copy below 
to keep the source in your git working dir. You will also need to adjust the dir
in which you start the seL4 docker image so that the link is resolved properly.

```
mkdir camkes-project
cd camkes-project
repo init -u https://github.com/seL4/camkes-manifest.git
repo sync
cp -r THISDIR/CAmkES projects/camkes/apps/Simple_UAV_Example
```

While your current directory is the camkes-project created above, start your
seL4 docker envronment. In that environment, execute these commands:

```
mkdir build-ia32
cd build-ia32
../init-build.sh -DPLATFORM=ia32 -DCAMKES_APP=Simple_UAV_Example -DSIMULATION=1
ninja
./simulate
```

You should see output like this:

```
...
Booting all finished, dropped to user space
RDIO: initialise entry point called
RDIO:> Sending command.
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
FPLN:< Received mission receipt confirmation: 1.
UART:< Received mission window
  MissionWindow:
    0: {0, 1, 2}
    1: {1, 2, 3}
    2: {2, 3, 4}
    3: {3, 4, 5}
UART:> Sending 1 as the next id.
WM:< Received 1 as the next id.
WM:> Sent mission window
UART:< Received mission window
  MissionWindow:
    0: {1, 2, 3}
    1: {2, 3, 4}
    2: {3, 4, 5}
    3: {4, 5, 6}
UART:> Sending 2 as the next id.
WM:< Received 2 as the next id.
WM:> Sent mission window
UART:< Received mission window
  MissionWindow:
    0: {2, 3, 4}
    1: {3, 4, 5}
    2: {4, 5, 6}
    3: {5, 6, 7}
UART:> Sending 3 as the next id.
...
```

Type "Ctrl-a x" to exit the simulator (QEMU). It will run indefinitly if you
do not stop it.

To compile the application for the ODROID XU4 target platform, use the following
build command instead:

```
mkdir build-exynos5422
cd build-exynos5422
../init-build.sh -DPLATFORM=exynos5422 -DAARCH32=1 -DCAMKES_APP=Simple_UAV_Example
ninja
```
