# receiver_vm

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
    * [SeL4_Only Expected Output: Timeout = 15 seconds](#sel4_only-expected-output-timeout--15-seconds)
    * [SeL4 Expected Output: Timeout = 15 seconds](#sel4-expected-output-timeout--15-seconds)

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
### SeL4_Only Expected Output: Timeout = 15 seconds

  |HAMR Codegen Configuration| |
  |--|--|
  | package-name | receiver_vm |
  | exclude-component-impl | true |
  | bit-width | 32 |
  | max-string-size | 256 |
  | max-array-size | 1 |


  **How To Run**
  ```
  test_event_data_port_periodic_domains_VM/receiver_vm/CAmkES_seL4_Only/bin/setup-camkes-arm-vm.sh
  test_event_data_port_periodic_domains_VM/receiver_vm/CAmkES_seL4_Only/bin/run-camkes.sh -s
  ```

  ```
  Booting all finished, dropped to user space
  <<seL4(CPU 0) [decodeUntypedInvocation/212 T0xff807fc17400 "rootserver" @4006d8]: Untyped Retype: Insufficient memory (1 * 2097152 bytes needed, 0 bytes available).>>
  <<seL4(CPU 0) [maskVMRights/193 T0xff807fc17400 "rootserver" @4006d8]: Attempted to make unsupported write only mapping>>
  [src_thread] test_event_data_port_emitter_component_init called
  _utspace_split_alloc@split.c:272 Failed to find any untyped capable of creating an object at address 0x8040000
  Loading Linux: 'linux' dtb: ''
  [src_thread] sending 0
  [src_thread] sending 1
  install_linux_devices@main.c:628 module name: map_frame_hack
  install_linux_devices@main.c:628 module name: virtio_con
  install_linux_devices@main.c:628 module name: cross_vm_connections
  [src_thread] sending 2
  [src_thread] sending 3
  [src_thread] sending 4
  [src_thread] sending 5
  [src_thread] sending 6
  [src_thread] sending 7
  [src_thread] sending 8
  [src_thread] sending 9
  [src_thread] sending 10
  [src_thread] sending 11
  [src_thread] sending 12
  [src_thread] sending 13
  [src_thread] sending 14
  [src_thread] sending 15
  [src_thread] sending 16
  [src_thread] sending 17
  [src_thread] sending 18
  [src_thread] sending 19
  [src_thread] sending 20
  [src_thread] sending 21
  [src_thread] sending 22
  libsel4muslcsys: Error attempting syscall 215
  [src_thread] sending 23
  [src_thread] sending 24
  [src_thread] sending 25
  [src_thread] sending 26
  [src_thread] sending 27
  [src_thread] sending 28
  [src_thread] sending 29
  [src_thread] sending 30
  [src_thread] sending 31
  [src_thread] sending 32
  libsel4muslcsys: Error attempting syscall 215
  [src_thread] sending 33
  clean_up@fdtgen.c:370 Non-existing node None specified to be kept
  consume_connection_event@cross_vm_connection.c:247 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:247 Failed to inject connection irq
  _utspace_split_alloc@split.c:272 Failed to find any untyped capable of creating an object at address 0x8020000
  [src_thread] sending 34
  consume_connection_event@cross_vm_connection.c:247 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:247 Failed to inject connection irq
  [src_thread] sending 35
  consume_connection_event@cross_vm_connection.c:247 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:247 Failed to inject connection irq
  [    2.336931] Unable to detect cache hierarchy for CPU 0
  [    2.353633] e1000: Intel(R) PRO/1000 Network Driver - version 7.3.21-k8-NAPI
  [    2.365815] e1000: Copyright (c) 1999-2006 Intel Corporation.
  [    2.376914] e1000e: Intel(R) PRO/1000 Network Driver - 3.2.6-k
  [    2.387768] e1000e: Copyright(c) 1999 - 2015 Intel Corporation.
  [    2.405007] mousedev: PS/2 mouse device common for all mice
  [    2.424612] ledtrig-cpu: registered to indicate activity on CPUs
  [    2.436850] dmi-sysfs: dmi entry is absent.
  [    2.445660] ipip: IPv4 and MPLS over IPv4 tunneling driver
  [    2.461958] NET: Registered protocol family 10
  [    2.485757] mip6: Mobile IPv6
  [    2.500269] NET: Registered protocol family 17
  [    2.510289] mpls_gso: MPLS GSO support
  [    2.518316] Registered cp15_barrier emulation handler
  [    2.528381] Registered setend emulation handler
  [    2.545347] registered taskstats version 1
  [    2.555646] zswap: loaded using pool lzo/zbud
  [    2.570567] ima: No TPM chip found, activating TPM-bypass!
  [    2.580813] ima: Allocated hash algorithm: sha256
  [    2.599709] hctosys: unable to open rtc device (rtc0)
  [    2.609795] PM: Hibernation image not present or could not be loaded.
  [    2.621341] initcall clk_disable_unused blacklisted
  [src_thread] sending 36
  [    3.517196] Freeing unused kernel memory: 3776K
  [src_thread] sending 37
  Starting syslogd: OK
  Starting klogd: OK
  [src_thread] sending 38
  Running sysctl: OK
  Initializing random number generator... [src_thread] sending 39
  [    7.427811] random: dd: uninitialized urandom read (512 bytes read)
  done.
  Starting network: OK
  [    8.010453] connection: loading out-of-tree module taints kernel.
  [    8.052301] Event Bar (dev-0) initalised
  [    8.061790] 2 Dataports (dev-0) initalised
  [src_thread] sending 40
  [    8.578516] Event Bar (dev-1) initalised
  [    8.595004] 2 Dataports (dev-1) initalised
  [vmdst_process] test_event_data_port_consumer_component_init called

  Welcome to Buildroot
  buildroot login: [src_thread] sending 41
  [vmdst_process] received {41}
  [src_thread] sending 42
  [vmdst_process] received {42}
  [src_thread] sending 43
  [vmdst_process] received {43}
  [src_thread] sending 44
  [vmdst_process] received {44}
  ```

### SeL4 Expected Output: Timeout = 15 seconds

  |HAMR Codegen Configuration| |
  |--|--|
  | package-name | receiver_vm |
  | exclude-component-impl | true |
  | bit-width | 32 |
  | max-string-size | 256 |
  | max-array-size | 1 |


  **How To Run**
  ```
  test_event_data_port_periodic_domains_VM/receiver_vm/CAmkES_seL4/src/c/CAmkES_seL4/bin/setup-camkes-arm-vm.sh
  test_event_data_port_periodic_domains_VM/receiver_vm/CAmkES_seL4/bin/transpile-sel4.sh
  test_event_data_port_periodic_domains_VM/receiver_vm/CAmkES_seL4/src/c/CAmkES_seL4/bin/run-camkes.sh -s
  ```

  ```
  NEED TO MANUALLY UPDATE EXPECTED OUTPUT
  ```