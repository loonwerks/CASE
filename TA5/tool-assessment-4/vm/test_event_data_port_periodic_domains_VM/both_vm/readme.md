# both_vm

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
|Virtual Machine|



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
Booting all finished, dropped to user space
<<seL4(CPU 0) [decodeUntypedInvocation/212 T0xff807fc18400 "rootserver" @4006f0]: Untyped Retype: Insufficient memory (1 * 2097152 bytes needed, 0 bytes availab>
_utspace_split_alloc@split.c:272 Failed to find any untyped capable of creating an object at address 0x8040000
Loading Linux: 'linux' dtb: ''
install_linux_devices@main.c:657 module name: map_frame_hack
install_linux_devices@main.c:657 module name: init_ram
_utspace_split_alloc@split.c:272 Failed to find any untyped capable of creating an object at address 0x8040000
Loading Linux: 'linux' dtb: ''
install_linux_devices@main.c:657 module name: map_frame_hack
install_linux_devices@main.c:657 module name: init_ram
install_linux_devices@main.c:657 module name: virtio_con
install_linux_devices@main.c:657 module name: cross_vm_connections
install_linux_devices@main.c:657 module name: virtio_con
install_linux_devices@main.c:657 module name: cross_vm_connections
libsel4muslcsys: Error attempting syscall 215
libsel4muslcsys: Error attempting syscall 215
libsel4muslcsys: Error attempting syscall 215
libsel4muslcsys: Error attempting syscall 215
clean_up@fdtgen.c:370 Non-existing node None specified to be kept
consume_connection_event@cross_vm_connection.c:247 Failed to inject connection irq
_utspace_split_alloc@split.c:272 Failed to find any untyped capable of creating an object at address 0x8020000
clean_up@fdtgen.c:370 Non-existing node None specified to be kept
consume_connection_event@cross_vm_connection.c:247 Failed to inject connection irq
_utspace_split_alloc@split.c:272 Failed to find any untyped capable of creating an object at address 0x8020000
consume_connection_event@cross_vm_connection.c:247 Failed to inject connection irq
consume_connection_event@cross_vm_connection.c:247 Failed to inject connection irq
consume_connection_event@cross_vm_connection.c:247 Failed to inject connection irq
consume_connection_event@cross_vm_connection.c:247 Failed to inject connection irq
consume_connection_event@cross_vm_connection.c:247 Failed to inject connection irq
[    4.258340] Unable to detect cache hierarchy for CPU 0
[    4.278442] e1000: Intel(R) PRO/1000 Network Driver - version 7.3.21-k8-NAPI
[    4.293334] e1000: Copyright (c) 1999-2006 Intel Corporation.
[    4.307973] e1000e: Intel(R) PRO/1000 Network Driver - 3.2.6-k
[    4.321850] e1000e: Copyright(c) 1999 - 2015 Intel Corporation.
[    4.343002] mousedev: PS/2 mouse device common for all mice
[    4.367403] ledtrig-cpu: registered to indicate activity on CPUs
[    4.382495] dmi-sysfs: dmi entry is absent.
[    4.395673] ipip: IPv4 and MPLS over IPv4 tunneling driver
[    4.415271] NET: Registered protocol family 10
[    4.444180] mip6: Mobile IPv6
[    4.462338] NET: Registered protocol family 17
[    4.475053] mpls_gso: MPLS GSO support
[    4.486179] Registered cp15_barrier emulation handler
[    4.497640] Registered setend emulation handler
[    4.515882] registered taskstats version 1
[    4.527565] zswap: loaded using pool lzo/zbud
[    4.544105] ima: No TPM chip found, activating TPM-bypass!
[    4.555886] ima: Allocated hash algorithm: sha256
consume_connection_event@cross_vm_connection.c:247 Failed to inject connection irq
[    4.259871] Unable to detect cache hierarchy for CPU 0
[    4.275033] e1000: Intel(R) PRO/1000 Network Driver - version 7.3.21-k8-NAPI
[    4.290340] e1000: Copyright (c) 1999-2006 Intel Corporation.
[    4.304952] e1000e: Intel(R) PRO/1000 Network Driver - 3.2.6-k
[    4.318895] e1000e: Copyright(c) 1999 - 2015 Intel Corporation.
[    4.338235] mousedev: PS/2 mouse device common for all mice
[    4.363392] ledtrig-cpu: registered to indicate activity on CPUs
[    4.377026] dmi-sysfs: dmi entry is absent.
[    4.390254] ipip: IPv4 and MPLS over IPv4 tunneling driver
[    4.410604] NET: Registered protocol family 10
[    4.438492] mip6: Mobile IPv6
[    4.455492] NET: Registered protocol family 17
[    4.466912] mpls_gso: MPLS GSO support
[    4.475451] Registered cp15_barrier emulation handler
[    4.487098] Registered setend emulation handler
[    5.439227] hctosys: unable to open rtc device (rtc0)
[    5.450384] PM: Hibernation image not present or could not be loaded.
[    5.464174] initcall clk_disable_unused blacklisted
[    5.872358] Freeing unused kernel memory: 3776K
[    5.381098] registered taskstats version 1
[    5.391705] zswap: loaded using pool lzo/zbud
[    5.407831] ima: No TPM chip found, activating TPM-bypass!
[    5.419226] ima: Allocated hash algorithm: sha256
[    5.440483] hctosys: unable to open rtc device (rtc0)
[    5.452443] PM: Hibernation image not present or could not be loaded.
[    5.466262] initcall clk_disable_unused blacklisted
[    5.881513] Freeing unused kernel memory: 3776K
Starting syslogd: OK
Starting klogd: OK
Starting syslogd: OK
Starting klogd: Running sysctl: OK
OK
Running sysctl: Initializing random number generator... [   11.575972] random: dd: uninitialized urandom read (512 bytes read)
done.
OK
Initializing random number generator... [   11.552717] random: dd: uninitialized urandom read (512 bytes read)
done.
Starting network: OK
Starting network: [   13.843621] connection: loading out-of-tree module taints kernel.
[   13.886865] Event Bar (dev-0) initalised
[   13.912517] 2 Dataports (dev-0) initalised
[   13.924238] Event Bar (dev-1) initalised
[   13.946203] 2 Dataports (dev-1) initalised

Welcome to Buildroot
buildroot login: OK
[   13.881177] connection: loading out-of-tree module taints kernel.
[   13.924786] Event Bar (dev-0) initalised
[   13.948626] 2 Dataports (dev-0) initalised
[   13.960709] Event Bar (dev-1) initalised
[   13.980505] 2 Dataports (dev-1) initalised

Welcome to Buildroot
buildroot login: root
# vmproducer 
VM App vmproducer started
Setting up outgoing event data port /dev/uio0 4096
Successfully setup /dev/uio0
Setting up incoming event data port /dev/uio1 with size 4096
Successfully setup incoming event data port /dev/uio1
Hello from vmproducer's run method
handle_event_bar_fault@cross_vm_connection.c:128 Connection is not configured with an emit function

handle_event_bar_fault@cross_vm_connection.c:128 Connection is not configured with an emit function

^C
# @1
-sh: @1: not found
# 
Switching input to 1
root
# vmproducer 
VM App vmproducer started
Setting up outgoing event data port /dev/uio0 4096
Successfully setup /dev/uio0
Setting up incoming event data port /dev/uio1 with size 4096
Successfully setup incoming event data port /dev/uio1
Hello from vmproducer's run method

Switching input to 0
# vmconsumer 
VM App vmconsumer started
Setting up incoming data port /dev/uio0 with size 4096
Successfully setup incoming data port /dev/uio0
Setting up incoming event data port /dev/uio1 with size 4096
Successfully setup incoming event data port /dev/uio1
Hello from vmconsumer's run method
vmconsumer: Received 8 bits on read_port: [ 04 ]

vmconsumer: Received 8 bits on read_port: [ 05 ]

vmconsumer: Received 8 bits on read_port: [ 06 ]

vmconsumer: Received 8 bits on read_port: [ 07 ]

vmconsumer: Received 8 bits on read_port: [ 08 ]

vmconsumer: Received 8 bits on read_port: [ 09 ]

QEMU: Terminated
```

### CAmkES Architecture
![CAmkES Architecture](aadl/diagrams/CAmkES-arch-SeL4.svg)

### HAMR CAmkES Architecture
![HAMR CAmkES Architecture](aadl/diagrams/CAmkES-HAMR-arch-SeL4.svg)