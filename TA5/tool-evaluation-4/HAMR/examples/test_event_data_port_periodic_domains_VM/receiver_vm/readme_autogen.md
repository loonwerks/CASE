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
  [0m[30;1m<<[0m[32mseL4(CPU 0)[0m[30;1m [decodeUntypedInvocation/212 T0xff807fc17400 "rootserver" @4006d8]: Untyped Retype: Insufficient memory (1 * 2097152 bytes needed, 0 bytes available).>>[0m
  [0m[30;1m<<[0m[32mseL4(CPU 0)[0m[30;1m [maskVMRights/193 T0xff807fc17400 "rootserver" @4006d8]: Attempted to make unsupported write only mapping>>[0m
  [src_process_src_thread] test_event_data_port_emitter_component_init called
  _utspace_split_alloc@split.c:272 Failed to find any untyped capable of creating an object at address 0x8040000
  Loading Linux: 'linux' dtb: ''
  [src_process_src_thread] sending 0
  [src_process_src_thread] sending 1
  [src_process_src_thread] sending 2
  install_linux_devices@main.c:628 module name: map_frame_hack
  install_linux_devices@main.c:628 module name: virtio_con
  install_linux_devices@main.c:628 module name: cross_vm_connections
  [src_process_src_thread] sending 3
  [src_process_src_thread] sending 4
  [src_process_src_thread] sending 5
  [src_process_src_thread] sending 6
  [src_process_src_thread] sending 7
  [src_process_src_thread] sending 8
  [src_process_src_thread] sending 9
  [src_process_src_thread] sending 10
  [src_process_src_thread] sending 11
  [src_process_src_thread] sending 12
  [src_process_src_thread] sending 13
  [src_process_src_thread] sending 14
  [src_process_src_thread] sending 15
  [src_process_src_thread] sending 16
  [src_process_src_thread] sending 17
  [src_process_src_thread] sending 18
  [src_process_src_thread] sending 19
  [src_process_src_thread] sending 20
  [src_process_src_thread] sending 21
  [src_process_src_thread] sending 22
  [src_process_src_thread] sending 23
  libsel4muslcsys: Error attempting syscall 215
  [src_process_src_thread] sending 24
  [src_process_src_thread] sending 25
  [src_process_src_thread] sending 26
  [src_process_src_thread] sending 27
  [src_process_src_thread] sending 28
  [src_process_src_thread] sending 29
  [src_process_src_thread] sending 30
  [src_process_src_thread] sending 31
  [src_process_src_thread] sending 32
  [src_process_src_thread] sending 33
  libsel4muslcsys: Error attempting syscall 215
  [src_process_src_thread] sending 34
  clean_up@fdtgen.c:370 Non-existing node None specified to be kept
  consume_connection_event@cross_vm_connection.c:247 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:247 Failed to inject connection irq
  _utspace_split_alloc@split.c:272 Failed to find any untyped capable of creating an object at address 0x8020000
  [src_process_src_thread] sending 35
  consume_connection_event@cross_vm_connection.c:247 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:247 Failed to inject connection irq
  [src_process_src_thread] sending 36
  consume_connection_event@cross_vm_connection.c:247 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:247 Failed to inject connection irq
  [    2.641286] Unable to detect cache hierarchy for CPU 0
  [    2.660492] e1000: Intel(R) PRO/1000 Network Driver - version 7.3.21-k8-NAPI
  [    2.673041] e1000: Copyright (c) 1999-2006 Intel Corporation.
  [    2.684061] e1000e: Intel(R) PRO/1000 Network Driver - 3.2.6-k
  [    2.693815] e1000e: Copyright(c) 1999 - 2015 Intel Corporation.
  [    2.708199] mousedev: PS/2 mouse device common for all mice
  [    2.723526] ledtrig-cpu: registered to indicate activity on CPUs
  [    2.736183] dmi-sysfs: dmi entry is absent.
  [    2.744972] ipip: IPv4 and MPLS over IPv4 tunneling driver
  [    2.759624] NET: Registered protocol family 10
  [    2.785215] mip6: Mobile IPv6
  [    2.796961] NET: Registered protocol family 17
  [    2.805872] mpls_gso: MPLS GSO support
  [    2.815655] Registered cp15_barrier emulation handler
  [    2.825154] Registered setend emulation handler
  [    2.837574] registered taskstats version 1
  [    2.845738] zswap: loaded using pool lzo/zbud
  [    2.857673] ima: No TPM chip found, activating TPM-bypass!
  [    2.867085] ima: Allocated hash algorithm: sha256
  [    2.882148] hctosys: unable to open rtc device (rtc0)
  [    2.891364] PM: Hibernation image not present or could not be loaded.
  [    2.901974] initcall clk_disable_unused blacklisted
  [    3.283694] Freeing unused kernel memory: 3776K
  [src_process_src_thread] sending 37
  Starting syslogd: [src_process_src_thread] sending 38
  OK
  Starting klogd: OK
  Running sysctl: [src_process_src_thread] sending 39
  OK
  Initializing random number generator... [    6.898321] random: dd: uninitialized urandom read (512 bytes read)
  done.
  Starting network: [src_process_src_thread] sending 40
  OK
  [    8.081186] connection: loading out-of-tree module taints kernel.
  [    8.120193] Event Bar (dev-0) initalised
  [    8.129286] 2 Dataports (dev-0) initalised
  [    8.149037] Event Bar (dev-1) initalised
  [    8.169371] 2 Dataports (dev-1) initalised
  [vmdst_process] test_event_data_port_consumer_component_init called

  Welcome to Buildroot
  buildroot login: [src_process_src_thread] sending 41
  [vmdst_process] received {41}
  [src_process_src_thread] sending 42
  [vmdst_process] received {42}
  [src_process_src_thread] sending 43
  [vmdst_process] received {43}
  [src_process_src_thread] sending 44
  [vmdst_process] received {44}
  [src_process_src_thread] sending 45
  [vmdst_process] received {45}
  [src_process_src_thread] sending 46
  [vmdst_process] received {46}
  [src_process_src_thread] sending 47
  [vmdst_process] received {47}
  [src_process_src_thread] sending 48
  [vmdst_process] received {48}
  [src_process_src_thread] sending 49
  [vmdst_process] received {49}
  [src_process_src_thread] sending 50
  [vmdst_process] received {50}
  [src_process_src_thread] sending 51
  [vmdst_process] received {51}
  [src_process_src_thread] sending 52
  [vmdst_process] received {52}
  [src_process_src_thread] sending 53
  [vmdst_process] received {53}
  [src_process_src_thread] sending 54
  [vmdst_process] received {54}
  [src_process_src_thread] sending 55
  [vmdst_process] received {55}
  [src_process_src_thread] sending 56
  [vmdst_process] received {56}
  [src_process_src_thread] sending 57
  [vmdst_process] received {57}
  [src_process_src_thread] sending 58
  [vmdst_process] received {58}
  [src_process_src_thread] sending 59
  [vmdst_process] received {59}

  ```

### SeL4 Expected Output: Timeout = 90 seconds

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
  Booting all finished, dropped to user space
  [0m[30;1m<<[0m[32mseL4(CPU 0)[0m[30;1m [decodeUntypedInvocation/212 T0xff807fc17400 "rootserver" @4006d8]: Untyped Retype: Insufficient memory (1 * 2097152 bytes needed, 0 bytes available).>>[0m
  [0m[30;1m<<[0m[32mseL4(CPU 0)[0m[30;1m [maskVMRights/193 T0xff807fc17400 "rootserver" @4006d8]: Attempted to make unsupported write only mapping>>[0m
  Entering pre-init of emitter_t_impl_src_process_src_thread
  Art: Registered component: top_impl_Instance_src_process_src_thread (periodic: 1000)
  Art: - Registered port: top_impl_Instance_src_process_src_thread_write_port (event out)
  top_impl_Instance_src_process_src_thread: Example logInfo
  top_impl_Instance_src_process_src_thread: Example logDebug
  top_impl_Instance_src_process_src_thread: Example logError
  Leaving pre-init of emitter_t_impl_src_process_src_thread
  _utspace_split_alloc@split.c:272 Failed to find any untyped capable of creating an object at address 0x8040000
  Loading Linux: 'linux' dtb: ''
  install_linux_devices@main.c:628 module name: map_frame_hack
  install_linux_devices@main.c:628 module name: virtio_con
  install_linux_devices@main.c:628 module name: cross_vm_connections

  ```