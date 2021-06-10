# tutorial

 Table of Contents
<!--table-of-contents_start-->
  * [AADL Architecture](#aadl-architecture)
  * [Linux](#linux)
    * [HAMR Configuration: Linux](#hamr-configuration-linux)
    * [Behavior Code: Linux](#behavior-code-linux)
    * [How to Build/Run: Linux](#how-to-buildrun-linux)
  * [SeL4](#sel4)
    * [HAMR Configuration: SeL4](#hamr-configuration-sel4)
    * [Behavior Code: SeL4](#behavior-code-sel4)
    * [How to Build/Run: SeL4](#how-to-buildrun-sel4)
    * [Example Output: SeL4](#example-output-sel4)
    * [CAmkES Architecture: SeL4](#camkes-architecture-sel4)
    * [HAMR CAmkES Architecture: SeL4](#hamr-camkes-architecture-sel4)
<!--table-of-contents_end-->


## AADL Architecture
<!--aadl-architecture_start-->
![AADL Arch](aadl/diagrams/aadl-arch.png)
|System Properties|
|--|
|Domain Scheduling|
|Wire Protocol|

|producer Properties|
|--|
|Periodic: 1000 ms|
|Native|



|consumer Properties|
|--|
|Periodic: 1000 ms|
|Native|


<!--aadl-architecture_end-->


## Linux
<!--Linux_start--><!--Linux_end-->

### HAMR Configuration: Linux
<!--hamr-configuration-linux_start-->
refer to [aadl/bin/run-hamr-Linux.sh](aadl/bin/run-hamr-Linux.sh)
<!--hamr-configuration-linux_end-->


### Behavior Code: Linux
<!--behavior-code-linux_start-->
  * [producer](hamr/c/ext-c/producer_t_i_producer_producer/producer_t_i_producer_producer.c)

  * [consumer](hamr/c/ext-c/consumer_t_i_consumer_consumer/consumer_t_i_consumer_consumer.c)
<!--behavior-code-linux_end-->


### How to Build/Run: Linux
<!--how-to-buildrun-linux_start-->
```
./aadl/bin/run-hamr-Linux.sh
./hamr/c/bin/compile-linux.sh
./hamr/c/bin/run-linux.sh
./hamr/c/bin/stop.sh
```
<!--how-to-buildrun-linux_end-->


## SeL4
<!--SeL4_start--><!--SeL4_end-->

### HAMR Configuration: SeL4
<!--hamr-configuration-sel4_start-->
refer to [aadl/bin/run-hamr-SeL4.sh](aadl/bin/run-hamr-SeL4.sh)
<!--hamr-configuration-sel4_end-->


### Behavior Code: SeL4
<!--behavior-code-sel4_start-->
  * [producer](hamr/c/ext-c/producer_t_i_producer_producer/producer_t_i_producer_producer.c)

  * [consumer](hamr/c/ext-c/consumer_t_i_consumer_consumer/consumer_t_i_consumer_consumer.c)
<!--behavior-code-sel4_end-->


### How to Build/Run: SeL4
<!--how-to-buildrun-sel4_start-->
```
./aadl/bin/run-hamr-SeL4.sh
./hamr/camkes/bin/run-camkes.sh -s
```
<!--how-to-buildrun-sel4_end-->


### Example Output: SeL4
<!--example-output-sel4_start-->
Timeout = 18 seconds
```
Booting all finished, dropped to user space
Entering pre-init of consumer_t_i_consumer_consumer
Entering pre-init of producer_t_i_producer_producer
Art: Registered component: top_impl_Instance_consumer_consumer (periodic: 1000)
Art: - Registered port: top_impl_Instance_consumer_consumer_read_port (event in)
Leaving pre-init of consumer_t_i_consumer_consumer
Art: Registered component: top_impl_Instance_producer_producer (periodic: 1000)
Art: - Registered port: top_impl_Instance_producer_producer_write_port (event out)
Leaving pre-init of producer_t_i_producer_producer
Sent 0
[ 00 00 00 00 ]

Received 0
top_impl_Instance_consumer_consumer: Received 32 on port read_port: [ 00 00 00 00 ]

Sent 1
[ 00 00 00 01 ]

Received 1
top_impl_Instance_consumer_consumer: Received 32 on port read_port: [ 00 00 00 01 ]

Sent 2
[ 00 00 00 02 ]

Received 2
top_impl_Instance_consumer_consumer: Received 32 on port read_port: [ 00 00 00 02 ]

Sent 3
[ 00 00 00 03 ]

Received 3
top_impl_Instance_consumer_consumer: Received 32 on port read_port: [ 00 00 00 03 ]

Sent 4
[ 00 00 00 04 ]

Received 4
top_impl_Instance_consumer_consumer: Received 32 on port read_port: [ 00 00 00 04 ]

Sent 5
[ 00 00 00 05 ]

Received 5
top_impl_Instance_consumer_consumer: Received 32 on port read_port: [ 00 00 00 05 ]

Sent 6
[ 00 00 00 06 ]

Received 6
top_impl_Instance_consumer_consumer: Received 32 on port read_port: [ 00 00 00 06 ]

Sent 7
[ 00 00 00 07 ]

Received 7
top_impl_Instance_consumer_consumer: Received 32 on port read_port: [ 00 00 00 07 ]


```
<!--example-output-sel4_end-->


### CAmkES Architecture: SeL4
<!--camkes-architecture-sel4_start-->
![CAmkES Architecture: SeL4](aadl/diagrams/CAmkES-arch-SeL4.svg)
<!--camkes-architecture-sel4_end-->


### HAMR CAmkES Architecture: SeL4
<!--hamr-camkes-architecture-sel4_start-->
![HAMR CAmkES Architecture: SeL4](aadl/diagrams/CAmkES-HAMR-arch-SeL4.svg)
<!--hamr-camkes-architecture-sel4_end-->

