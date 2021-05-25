# receiver_vm

 Table of Contents
<!--table-of-contents_start-->
  * [AADL Architecture](#aadl-architecture)
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
|Virtual Machine|


<!--aadl-architecture_end-->


## SeL4
<!--SeL4_start--><!--SeL4_end-->

### HAMR Configuration: SeL4
<!--hamr-configuration-sel4_start-->
refer to [aadl/bin/run-hamr-SeL4.sh](aadl/bin/run-hamr-SeL4.sh)
<!--hamr-configuration-sel4_end-->


### Behavior Code: SeL4
<!--behavior-code-sel4_start-->
  * [producer](hamr/c/ext-c/producer_t_i_producer_producer/producer_t_i_producer_producer.c)

  * [consumer (includes VM glue code)](hamr/camkes/components/VM/apps/vmconsumer/vmconsumer.c)
<!--behavior-code-sel4_end-->


### How to Build/Run: SeL4
<!--how-to-buildrun-sel4_start-->
```
./aadl/bin/run-hamr-SeL4.sh
./hamr/camkes/bin/setup-camkes-arm-vm.sh
./hamr/camkes/bin/run-camkes.sh -o "-DUSE_PRECONFIGURED_ROOTFS=ON" -s
```
<!--how-to-buildrun-sel4_end-->


### Example Output: SeL4
<!--example-output-sel4_start-->
Timeout = 90 seconds
```
Booting all finished, dropped to user space
<<seL4(CPU 0) [decodeUntypedInvocation/212 T0xff807fc17400 "rootserver" @4006f0]: Untyped Retype: Insufficient memory (1 * 2097152 bytes needed, 0 bytes available).>>
<<seL4(CPU 0) [maskVMRights/187 T0xff807fc17400 "rootserver" @4006f0]: Attempted to make unsupported write only mapping>>
Entering pre-init of producer_t_i_producer_producer
Art: Registered component: top_impl_Instance_producer_producer (periodic: 1000)
Art: - Registered port: top_impl_Instance_producer_producer_write_port (event out)
Leaving pre-init of producer_t_i_producer_producer
_utspace_split_alloc@split.c:272 Failed to find any untyped capable of creating an object at address 0x8040000
Loading Linux: 'linux' dtb: ''
install_linux_devices@main.c:657 module name: map_frame_hack
install_linux_devices@main.c:657 module name: init_ram
install_linux_devices@main.c:657 module name: virtio_con
install_linux_devices@main.c:657 module name: cross_vm_connections
libsel4muslcsys: Error attempting syscall 215
libsel4muslcsys: Error attempting syscall 215
clean_up@fdtgen.c:370 Non-existing node None specified to be kept
consume_connection_event@cross_vm_connection.c:247 Failed to inject connection irq
consume_connection_event@cross_vm_connection.c:247 Failed to inject connection irq
_utspace_split_alloc@split.c:272 Failed to find any untyped capable of creating an object at address 0x8020000
consume_connection_event@cross_vm_connection.c:247 Failed to inject connection irq
consume_connection_event@cross_vm_connection.c:247 Failed to inject connection irq
consume_connection_event@cross_vm_connection.c:247 Failed to inject connection irq
consume_connection_event@cross_vm_connection.c:247 Failed to inject connection irq
[    2.626450] Unable to detect cache hierarchy for CPU 0
[    2.644807] e1000: Intel(R) PRO/1000 Network Driver - version 7.3.21-k8-NAPI
[    2.659974] e1000: Copyright (c) 1999-2006 Intel Corporation.
[    2.673284] e1000e: Intel(R) PRO/1000 Network Driver - 3.2.6-k
[    2.685292] e1000e: Copyright(c) 1999 - 2015 Intel Corporation.
[    2.702890] mousedev: PS/2 mouse device common for all mice
[    2.725058] ledtrig-cpu: registered to indicate activity on CPUs
[    2.738200] dmi-sysfs: dmi entry is absent.
[    2.749593] ipip: IPv4 and MPLS over IPv4 tunneling driver
[    2.768471] NET: Registered protocol family 10
[    2.796923] mip6: Mobile IPv6
[    2.812704] NET: Registered protocol family 17
[    2.823073] mpls_gso: MPLS GSO support
[    2.832428] Registered cp15_barrier emulation handler
[    2.844409] Registered setend emulation handler
[    2.861324] registered taskstats version 1
[    2.873359] zswap: loaded using pool lzo/zbud
[    2.889540] ima: No TPM chip found, activating TPM-bypass!
[    2.900701] ima: Allocated hash algorithm: sha256
[    2.922206] hctosys: unable to open rtc device (rtc0)
[    2.934107] PM: Hibernation image not present or could not be loaded.
[    2.946661] initcall clk_disable_unused blacklisted
[    3.966547] Freeing unused kernel memory: 3776K
Starting syslogd: OK
Starting klogd: OK
Running sysctl: OK
Initializing random number generator... [    7.381482] random: dd: uninitialized urandom read (512 bytes read)
done.
Starting network: OK
[    8.753005] connection: loading out-of-tree module taints kernel.
[    8.794674] Event Bar (dev-0) initalised
[    8.806968] 2 Dataports (dev-0) initalised
[    8.829757] Event Bar (dev-1) initalised
[    8.846696] 2 Dataports (dev-1) initalised

Welcome to Buildroot
buildroot login: root
# vmconsumer 
VM App vmconsumer started
Setting up incoming data port /dev/uio0 with size 4096
Successfully setup incoming data port /dev/uio0
Setting up incoming event data port /dev/uio1 with size 4096
Successfully setup incoming event data port /dev/uio1
Hello from vmconsumer's run method
vmconsumer: Received 8 bits on read_port: [ 2D ]

vmconsumer: Received 8 bits on read_port: [ 2E ]

vmconsumer: Received 8 bits on read_port: [ 2F ]

vmconsumer: Received 8 bits on read_port: [ 30 ]

vmconsumer: Received 8 bits on read_port: [ 31 ]

vmconsumer: Received 8 bits on read_port: [ 32 ]

vmconsumer: Received 8 bits on read_port: [ 33 ]

vmconsumer: Received 8 bits on read_port: [ 34 ]

vmconsumer: Received 8 bits on read_port: [ 35 ]

QEMU: Terminated
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

