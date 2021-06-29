# How to build

The build files assume you are using an older version of the CakeML compiler, specifically version 1282. I believe everyone on the CASE projectis using the same version, but if not, here are links to this version:
- https://cakeml.org/regression/artefacts/1282/cake-x64-32.tar.gz
- https://cakeml.org/regression/artefacts/1282/cake-x64-64.tar.gz

You will need CMake, version 3.10.2 or higher. You also need CCMake if you need to configure the CMake parameters.

Create a build directory from the top-level of the repo, and then invoke cmake:
```sh
mkdir build && cd build
cmake ..
```
If you need to configure the CMake build parameters, enter `ccmake .`.

Specifically, you may be interested in the parameters `CAKE`, which is the location of the CakeML compiler, and `UserAM_Good`, which toggle whether or not the UserAM reports good or bad evidence.

You may perform additional configuration by directly editing the values in `Config.sml`.

You can build the UserAM (AKA the groundstation or AM test harness) with `make user_am`. This will produce `user_am.S` at the top-level of the build directory, and `libuser_am_c.a` in `build/apps/case-tool-assessment`. Similarly, you can build the HeliAM with `make heli_am` to produce `heli_am.S` and `libheli_am_c.a`. Finally you can build both with `make tool_assessment`.

There are also alternative build targets `heli_am_nocrypto`, `user_am_nocrypto`, and `tool_assessment_nocrypto`, which produce the same components, but with the crypto stubbed out. This may be useful for testing/integration, since the crypto library is very platform dependent.
