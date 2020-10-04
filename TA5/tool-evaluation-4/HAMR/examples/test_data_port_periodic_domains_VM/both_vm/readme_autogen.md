# both_vm

 Table of Contents
  * [Diagrams](#diagrams)
    * [AADL Arch](#aadl-arch)
    * [SeL4_Only](#sel4_only)
      * [SeL4_Only CAmkES Arch](#sel4_only-camkes-arch)
      * [SeL4_Only CAmkES HAMR Arch](#sel4_only-camkes-hamr-arch)
    * [SeL4](#sel4)
      * [SeL4 CAmkES Arch](#sel4-camkes-arch)
      * [SeL4 CAmkES HAMR Arch](#sel4-camkes-hamr-arch)
  * [Example Output](#example-output)
    * [SeL4_Only Expected Output: Timeout = 90 seconds](#sel4_only-expected-output-timeout--90-seconds)
    * [SeL4 Expected Output: Timeout = 90 seconds](#sel4-expected-output-timeout--90-seconds)

## Diagrams
### AADL Arch
![AADL Arch](diagrams/aadl-arch.png)

### SeL4_Only
#### SeL4_Only CAmkES Arch
![SeL4_Only CAmkES Arch](diagrams/CAmkES-arch-SeL4_Only.svg)

#### SeL4_Only CAmkES HAMR Arch
![SeL4_Only CAmkES HAMR Arch](diagrams/CAmkES-HAMR-arch-SeL4_Only.svg)

### SeL4
#### SeL4 CAmkES Arch
![SeL4 CAmkES Arch](diagrams/CAmkES-arch-SeL4.svg)

#### SeL4 CAmkES HAMR Arch
![SeL4 CAmkES HAMR Arch](diagrams/CAmkES-HAMR-arch-SeL4.svg)

## Example Output
*NOTE:* actual output may differ due to issues related to thread interleaving
### SeL4_Only Expected Output: Timeout = 90 seconds

  |HAMR Codegen Configuration| |
  |--|--|
  | package-name | both_vm |
  | exclude-component-impl | true |
  | bit-width | 32 |
  | max-string-size | 256 |
  | max-array-size | 1 |


  **How To Run**
  ```
  test_data_port_periodic_domains_VM/both_vm/CAmkES_seL4_Only/bin/setup-camkes-arm-vm.sh
  test_data_port_periodic_domains_VM/both_vm/CAmkES_seL4_Only/bin/run-camkes.sh -s
  ```

  ```
  Booting all finished, dropped to user space
  <<seL4(CPU 0) [decodeUntypedInvocation/212 T0xff807fc18400 "rootserver" @4006d8]: Untyped Retype: Insufficient memory (1 * 2097152 bytes needed, 0 bytes available).>>
  _utspace_split_alloc@split.c:272 Failed to find any untyped capable of creating an object at address 0x8040000
  Loading Linux: 'linux' dtb: ''
  _utspace_split_alloc@split.c:272 Failed to find any untyped capable of creating an object at address 0x8040000
  Loading Linux: 'linux' dtb: ''
  install_linux_devices@main.c:628 module name: map_frame_hack
  install_linux_devices@main.c:628 module name: virtio_con
  install_linux_devices@main.c:628 module name: cross_vm_connections
  install_linux_devices@main.c:628 module name: map_frame_hack
  install_linux_devices@main.c:628 module name: virtio_con
  install_linux_devices@main.c:628 module name: cross_vm_connections
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
  [    3.887566] Unable to detect cache hierarchy for CPU 0
  [    3.905337] e1000: Intel(R) PRO/1000 Network Driver - version 7.3.21-k8-NAPI
  [    3.919156] e1000: Copyright (c) 1999-2006 Intel Corporation.
  [    3.932039] e1000e: Intel(R) PRO/1000 Network Driver - 3.2.6-k
  [    3.943672] e1000e: Copyright(c) 1999 - 2015 Intel Corporation.
  [    3.961109] mousedev: PS/2 mouse device common for all mice
  [    3.980978] ledtrig-cpu: registered to indicate activity on CPUs
  [    3.992861] dmi-sysfs: dmi entry is absent.
  [    4.003530] ipip: IPv4 and MPLS over IPv4 tunneling driver
  [    4.021815] NET: Registered protocol family 10
  [    4.049391] mip6: Mobile IPv6
  [    4.062949] NET: Registered protocol family 17
  [    4.073094] mpls_gso: MPLS GSO support
  [    4.083321] Registered cp15_barrier emulation handler
  [    4.092758] Registered setend emulation handler
  [    4.108786] registered taskstats version 1
  consume_connection_event@cross_vm_connection.c:247 Failed to inject connection irq
  [    3.888481] Unable to detect cache hierarchy for CPU 0
  [    3.903373] e1000: Intel(R) PRO/1000 Network Driver - version 7.3.21-k8-NAPI
  [    3.916781] e1000: Copyright (c) 1999-2006 Intel Corporation.
  [    3.928599] e1000e: Intel(R) PRO/1000 Network Driver - 3.2.6-k
  [    3.941216] e1000e: Copyright(c) 1999 - 2015 Intel Corporation.
  [    3.959507] mousedev: PS/2 mouse device common for all mice
  [    3.980051] ledtrig-cpu: registered to indicate activity on CPUs
  [    3.991974] dmi-sysfs: dmi entry is absent.
  [    4.001345] ipip: IPv4 and MPLS over IPv4 tunneling driver
  [    4.017769] NET: Registered protocol family 10
  [    4.045540] mip6: Mobile IPv6
  [    4.060384] NET: Registered protocol family 17
  [    4.071329] mpls_gso: MPLS GSO support
  [    4.079778] Registered cp15_barrier emulation handler
  [    4.090340] Registered setend emulation handler
  [    4.105449] registered taskst[    4.119670] zswap: loaded using pool lzo/zbud
  [    4.904550] ima: No TPM chip found, activating TPM-bypass!
  [    4.913764] ima: Allocated hash algorithm: sha256
  [    4.934881] hctosys: unable to open rtc device (rtc0)
  [    4.945606] PM: Hibernation image not present or could not be loaded.
  [    4.960079] initcall clk_disable_unused blacklisted
  [    5.376420] Freeing unused kernel memory: 3776K
  ats version 1
  [    4.916896] zswap: loaded using pool lzo/zbud
  [    4.933417] ima: No TPM chip found, activating TPM-bypass!
  [    4.944933] ima: Allocated hash algorithm: sha256
  [    4.967056] hctosys: unable to open rtc device (rtc0)
  [    4.979315] PM: Hibernation image not present or could not be loaded.
  [    4.992603] initcall clk_disable_unused blacklisted
  [    6.211965] Freeing unused kernel memory: 3776K
  Starting syslogd: OK
  Starting syslogd: OK
  Starting klogd: OK
  Running sysctl: Starting klogd: OK
  Running sysctl: OK
  Initializing random number generator... OK
  Initializing random number generator... [   11.399104] random: dd: uninitialized urandom read (512 bytes read)
  done.
  Starting network: [   11.446208] random: dd: uninitialized urandom read (512 bytes read)
  done.
  Starting network: OK
  [   12.873352] connection: loading out-of-tree module taints kernel.
  [   12.916075] Event Bar (dev-0) initalised
  [   12.932324] 2 Dataports (dev-0) initalised
  [   12.948386] Event Bar (dev-1) initalised
  [   12.963602] 2 Dataports (dev-1) initalised

  Welcome to Buildroot
  buildroot login: OK
  [   12.924386] connection: loading out-of-tree module taints kernel.
  [   12.968254] Event Bar (dev-0) initalised
  [   12.987349] 2 Dataports (dev-0) initalised
  [   12.997129] Event Bar (dev-1) initalised
  [   13.019018] 2 Dataports (dev-1) initalised

  Welcome to Buildroot
  buildroot login: root
  # vmsrc_process /dev/uio0 4096 /dev/uio1 4096
  [vmsrc_process] test_event_data_port_emitter_component_init called
  ---------------------------------------
  [vmsrc_process] Sent 0

  Switching input to 1
  ---------------------------------------
  [vmsrc_process] Sent 1
  ---------------------------------------
  [vmsrc_process] Sent 2

  Welcome to Buildroot
  buildroot login: ---------------------------------------
  [vmsrc_process] Sent 3
  root
  # ---------------------------------------
  [vmsrc_process] Sent 4
  vmdst_process /dev/uio0 4096 /dev/uio1 4096---------------------------------------
  [vmsrc_process] Sent 5

  [vmdst_process] test_event_data_port_consumer_component_init called
  ---------------------------------------
  [vmsrc_process] Sent 6
  [vmdst_process] value {6}
  ---------------------------------------
  [vmsrc_process] Sent 7
  [vmdst_process] value {7}
  ---------------------------------------
  [vmsrc_process] Sent 8
  [vmdst_process] value {8}
  ---------------------------------------
  [vmsrc_process] Sent 9
  [vmdst_process] value {9}
  ---------------------------------------
  [vmsrc_process] Sent 10
  [vmdst_process] value {10}
  ---------------------------------------
  [vmsrc_process] Sent 11
  [vmdst_process] value {11}
  ---------------------------------------
  [vmsrc_process] Sent 12
  [vmdst_process] value {12}
  ---------------------------------------
  [vmsrc_process] Sent 13
  ---------------------------------------
  [vmsrc_process] Sent 14
  [vmdst_process] value {14}
  ---------------------------------------
  [vmsrc_process] Sent 15
  [vmdst_process] value {15}
  ---------------------------------------
  [vmsrc_process] Sent 16
  [vmdst_process] value {16}
  ---------------------------------------
  [vmsrc_process] Sent 17
  [vmdst_process] value {17}
  ```

### SeL4 Expected Output: Timeout = 90 seconds

  |HAMR Codegen Configuration| |
  |--|--|
  | package-name | both_vm |
  | exclude-component-impl | true |
  | bit-width | 32 |
  | max-string-size | 256 |
  | max-array-size | 1 |


  **How To Run**
  ```
  test_data_port_periodic_domains_VM/both_vm/CAmkES_seL4/src/c/CAmkES_seL4/bin/setup-camkes-arm-vm.sh
  test_data_port_periodic_domains_VM/both_vm/CAmkES_seL4/bin/transpile-sel4.sh
  test_data_port_periodic_domains_VM/both_vm/CAmkES_seL4/src/c/CAmkES_seL4/bin/run-camkes.sh -s
  ```

  ```
  Booting all finished, dropped to user space
  [0m[30;1m<<[0m[32mseL4(CPU 0)[0m[30;1m [decodeUntypedInvocation/212 T0xff807fc18400 "rootserver" @4006d8]: Untyped Retype: Insufficient memory (1 * 2097152 bytes needed, 0 bytes available).>>[0m
  _utspace_split_alloc@split.c:272 Failed to find any untyped capable of creating an object at address 0x8040000
  Loading Linux: 'linux' dtb: ''
  _utspace_split_alloc@split.c:272 Failed to find any untyped capable of creating an object at address 0x8040000
  Loading Linux: 'linux' dtb: ''
  install_linux_devices@main.c:628 module name: map_frame_hack
  install_linux_devices@main.c:628 module name: virtio_con
  install_linux_devices@main.c:628 module name: cross_vm_connections
  install_linux_devices@main.c:628 module name: map_frame_hack
  install_linux_devices@main.c:628 module name: virtio_con
  install_linux_devices@main.c:628 module name: cross_vm_connections

  ```