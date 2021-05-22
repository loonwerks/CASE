# receiver_vm

 Table of Contents
  * [AADL Architecture](#aadl-architecture)
  * [SeL4](#sel4)
    * [HAMR Configuration](#hamr-configuration)
    * [How to Build/Run](#how-to-buildrun)
    * [Example Output: Timeout = 90 seconds](#example-output-timeout--90-seconds)
    * [CAmkES Architecture](#camkes-architecture)
    * [HAMR CAmkES Architecture](#hamr-camkes-architecture)

## AADL Architecture
![AADL Arch](aadl/diagrams/aadl-arch.png)

|producer|
|--|
|Periodic: 1000 ms|
|Native|



|consumer|
|--|
|Periodic: 1000 ms|
|Virtual Machine|



## SeL4
### HAMR Configuration
refer to [aadl/bin/run-hamr-SeL4.sh](aadl/bin/run-hamr-SeL4.sh)

### How to Build/Run
```
./aadl/bin/run-hamr-SeL4.sh
./hamr/camkes/bin/setup-camkes-arm-vm.sh
./hamr/camkes/bin/run-camkes.sh -o "-DUSE_PRECONFIGURED_ROOTFS=ON" -s
```

### Example Output: Timeout = 90 seconds
```
NEED TO MANUALLY UPDATE EXPECTED OUTPUT
```

### CAmkES Architecture
![CAmkES Architecture](aadl/diagrams/CAmkES-arch-SeL4.svg)

### HAMR CAmkES Architecture
![HAMR CAmkES Architecture](aadl/diagrams/CAmkES-HAMR-arch-SeL4.svg)