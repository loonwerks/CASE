# producer-filter-consumer

 Table of Contents
  * [AADL Architecture](#aadl-architecture)
  * [Linux](#linux)
    * [HAMR Configuration](#hamr-configuration)
    * [How to Build/Run](#how-to-buildrun)
  * [SeL4](#sel4)
    * [HAMR Configuration](#hamr-configuration)
    * [How to Build/Run](#how-to-buildrun)
    * [Example Output: Timeout = 18 seconds](#example-output-timeout--18-seconds)
    * [CAmkES Architecture](#camkes-architecture)
    * [HAMR CAmkES Architecture](#hamr-camkes-architecture)

## AADL Architecture
![AADL Arch](aadl/diagrams/aadl-arch.png)

|producer|
|--|
|Periodic: 1000 ms|
|Native|



|filter|
|--|
|Periodic: 1000 ms|
|Native|



|consumer|
|--|
|Periodic: 1000 ms|
|Native|



## Linux
### HAMR Configuration
refer to [aadl/bin/run-hamr-Linux.sh](aadl/bin/run-hamr-Linux.sh)

### How to Build/Run
```
./aadl/bin/run-hamr-Linux.sh
./hamr/c/bin/compile-linux.sh
./hamr/c/bin/run-linux.sh
./hamr/c/bin/stop.sh
```
## SeL4
### HAMR Configuration
refer to [aadl/bin/run-hamr-SeL4.sh](aadl/bin/run-hamr-SeL4.sh)

### How to Build/Run
```
./aadl/bin/run-hamr-SeL4.sh
./hamr/camkes/bin/run-camkes.sh -s
```

### Example Output: Timeout = 18 seconds
```
Booting all finished, dropped to user space
Entering pre-init of filter_t_filter_filter
Art: Registered Entering pre-init of producer_t_producer_producer
Art: Regicomponent: PFC_Sys_Impl_Instance_filter_filter (periodic: 1000)
Art: - Registered port: PFC_Sys_Impl_Instance_filter_filter_from_producer (event in)
Art: - Registered port: PFC_Sys_Impl_Instance_filter_filter_to_consumer (event out)
Leaving pre-init of filter_t_filter_filter
stered component: PFC_Sys_Impl_Instance_producer_producer (periodic: 1000)
Art: - Registered port: PFC_Sys_Impl_Instance_producer_producer_to_filter (event out)
Leaving pre-init of producer_t_producer_producer
PFC_Sys_Impl_Instance_filter_filter:     Approved Mission([Coordinate(1, 1, 1), Coordinate(2, 2, 2), Coordinate(3, 3, 3)])
PFC_Sys_Impl_Instance_filter_filter:     Rejected Mission([Coordinate(4, 4, 4), Coordinate(5, 5, 5), Coordinate(6, 6, 6)])
PFC_Sys_Impl_Instance_filter_filter:     Approved Mission([Coordinate(7, 7, 7), Coordinate(8, 8, 8), Coordinate(9, 9, 9)])
PFC_Sys_Impl_Instance_filter_filter:     Approved Mission([Coordinate(1, 1, 1), Coordinate(2, 2, 2), Coordinate(3, 3, 3)])
PFC_Sys_Impl_Instance_filter_filter:     Rejected Mission([Coordinate(4, 4, 4), Coordinate(5, 5, 5), Coordinate(6, 6, 6)])
```

### CAmkES Architecture
![CAmkES Architecture](aadl/diagrams/CAmkES-arch-SeL4.svg)

### HAMR CAmkES Architecture
![HAMR CAmkES Architecture](aadl/diagrams/CAmkES-HAMR-arch-SeL4.svg)