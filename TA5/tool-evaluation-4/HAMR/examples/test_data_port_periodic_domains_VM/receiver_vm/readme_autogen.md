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
  test_data_port_periodic_domains_VM/receiver_vm/CAmkES_seL4_Only/bin/setup-camkes-arm-vm.sh
  test_data_port_periodic_domains_VM/receiver_vm/CAmkES_seL4_Only/bin/run-camkes.sh -s
  ```

  ```
  Booting all finished, dropped to user space
  [0m[30;1m<<[0m[32mseL4(CPU 0)[0m[30;1m [decodeUntypedInvocation/212 T0xff807fc17400 "rootserver" @4006d8]: Untyped Retype: Insufficient memory (1 * 2097152 bytes needed, 0 bytes available).>>[0m
  [src_process_src_thread] test_event_data_port_emitter_component_init called
  _utspace_split_alloc@split.c:272 Failed to find any untyped capable of creating an object at address 0x8040000
  Loading Linux: 'linux' dtb: ''
  ---------------------------------------
  [src_process_src_thread] Sent 0
  ---------------------------------------
  [src_process_src_thread] Sent 1
  ---------------------------------------
  [src_process_src_thread] Sent 2
  install_linux_devices@main.c:628 module name: map_frame_hack
  install_linux_devices@main.c:628 module name: virtio_con
  install_linux_devices@main.c:628 module name: cross_vm_connections
  ---------------------------------------
  [src_process_src_thread] Sent 3
  ---------------------------------------
  [src_process_src_thread] Sent 4
  ---------------------------------------
  [src_process_src_thread] Sent 5
  ---------------------------------------
  [src_process_src_thread] Sent 6
  ---------------------------------------
  [src_process_src_thread] Sent 7
  ---------------------------------------
  [src_process_src_thread] Sent 8
  ---------------------------------------
  [src_process_src_thread] Sent 9
  ---------------------------------------
  [src_process_src_thread] Sent 10
  ---------------------------------------
  [src_process_src_thread] Sent 11
  ---------------------------------------
  [src_process_src_thread] Sent 12
  ---------------------------------------
  [src_process_src_thread] Sent 13
  ---------------------------------------
  [src_process_src_thread] Sent 14
  ---------------------------------------
  [src_process_src_thread] Sent 15
  ---------------------------------------
  [src_process_src_thread] Sent 16
  ---------------------------------------
  [src_process_src_thread] Sent 17
  ---------------------------------------
  [src_process_src_thread] Sent 18
  ---------------------------------------
  [src_process_src_thread] Sent 19
  ---------------------------------------
  [src_process_src_thread] Sent 20
  ---------------------------------------
  [src_process_src_thread] Sent 21
  ---------------------------------------
  [src_process_src_thread] Sent 22
  ---------------------------------------
  [src_process_src_thread] Sent 23
  libsel4muslcsys: Error attempting syscall 215
  ---------------------------------------
  [src_process_src_thread] Sent 24
  ---------------------------------------
  [src_process_src_thread] Sent 25
  ---------------------------------------
  [src_process_src_thread] Sent 26
  ---------------------------------------
  [src_process_src_thread] Sent 27
  ---------------------------------------
  [src_process_src_thread] Sent 28
  ---------------------------------------
  [src_process_src_thread] Sent 29
  ---------------------------------------
  [src_process_src_thread] Sent 30
  ---------------------------------------
  [src_process_src_thread] Sent 31
  ---------------------------------------
  [src_process_src_thread] Sent 32
  ---------------------------------------
  [src_process_src_thread] Sent 33
  libsel4muslcsys: Error attempting syscall 215
  ---------------------------------------
  [src_process_src_thread] Sent 34
  clean_up@fdtgen.c:370 Non-existing node None specified to be kept
  consume_connection_event@cross_vm_connection.c:247 Failed to inject connection irq
  _utspace_split_alloc@split.c:272 Failed to find any untyped capable of creating an object at address 0x8020000
  ---------------------------------------
  [src_process_src_thread] Sent 35
  consume_connection_event@cross_vm_connection.c:247 Failed to inject connection irq
  ---------------------------------------
  [src_process_src_thread] Sent 36
  consume_connection_event@cross_vm_connection.c:247 Failed to inject connection irq
  [    2.348666] Unable to detect cache hierarchy for CPU 0
  [    2.368383] e1000: Intel(R) PRO/1000 Network Driver - version 7.3.21-k8-NAPI
  [    2.380938] e1000: Copyright (c) 1999-2006 Intel Corporation.
  [    2.391666] e1000e: Intel(R) PRO/1000 Network Driver - 3.2.6-k
  [    2.401491] e1000e: Copyright(c) 1999 - 2015 Intel Corporation.
  [    2.416530] mousedev: PS/2 mouse device common for all mice
  [    2.433119] ledtrig-cpu: registered to indicate activity on CPUs
  [    2.443891] dmi-sysfs: dmi entry is absent.
  [    2.453062] ipip: IPv4 and MPLS over IPv4 tunneling driver
  [    2.468993] NET: Registered protocol family 10
  [    2.496160] mip6: Mobile IPv6
  [    2.507807] NET: Registered protocol family 17
  [    2.516507] mpls_gso: MPLS GSO support
  [    2.524104] Registered cp15_barrier emulation handler
  [    2.533652] Registered setend emulation handler
  [    2.547162] registered taskstats version 1
  [    2.555593] zswap: loaded using pool lzo/zbud
  [    2.567783] ima: No TPM chip found, activating TPM-bypass!
  [    2.576322] ima: Allocated hash algorithm: sha256
  [    2.594557] hctosys: unable to open rtc device (rtc0)
  [    2.605749] PM: Hibernation image not present or could not be loaded.
  [    2.616414] initcall clk_disable_unused blacklisted
  ---------------------------------------
  [src_process_src_thread] Sent 37
  [    3.610382] Freeing unused kernel memory: 3776K
  ---------------------------------------
  [src_process_src_thread] Sent 38
  Starting syslogd: OK
  Starting klogd: OK
  Running sysctl: ---------------------------------------
  [src_process_src_thread] Sent 39
  OK
  Initializing random number generator... [    6.645523] random: dd: uninitialized urandom read (512 bytes read)
  done.
  Starting network: ---------------------------------------
  [src_process_src_thread] Sent 40
  OK
  [    7.867367] connection: loading out-of-tree module taints kernel.
  [    7.906491] Event Bar (dev-0) initalised
  [    7.922197] 2 Dataports (dev-0) initalised
  [    7.935248] Event Bar (dev-1) initalised
  [    7.944987] 2 Dataports (dev-1) initalised
  [vmdst_process] test_event_data_port_consumer_component_init called

  Welcome to Buildroot
  buildroot login: ---------------------------------------
  [src_process_src_thread] Sent 41
  [vmdst_process] value {41}
  ---------------------------------------
  [src_process_src_thread] Sent 42
  [vmdst_process] value {42}
  ---------------------------------------
  [src_process_src_thread] Sent 43
  [vmdst_process] value {43}
  ---------------------------------------
  [src_process_src_thread] Sent 44
  [vmdst_process] value {44}
  ---------------------------------------
  [src_process_src_thread] Sent 45
  [vmdst_process] value {45}
  ---------------------------------------
  [src_process_src_thread] Sent 46
  [vmdst_process] value {46}
  ---------------------------------------
  [src_process_src_thread] Sent 47
  [vmdst_process] value {47}
  ---------------------------------------
  [src_process_src_thread] Sent 48
  [vmdst_process] value {48}
  ---------------------------------------
  [src_process_src_thread] Sent 49
  [vmdst_process] value {49}
  ---------------------------------------
  [src_process_src_thread] Sent 50
  [vmdst_process] value {50}
  ---------------------------------------
  [src_process_src_thread] Sent 51
  [vmdst_process] value {51}
  ---------------------------------------
  [src_process_src_thread] Sent 52
  [vmdst_process] value {52}
  ---------------------------------------
  [src_process_src_thread] Sent 53
  [vmdst_process] value {53}
  ---------------------------------------
  [src_process_src_thread] Sent 54
  [vmdst_process] value {54}
  ---------------------------------------
  [src_process_src_thread] Sent 55
  [vmdst_process] value {55}
  ---------------------------------------
  [src_process_src_thread] Sent 56
  [vmdst_process] value {56}
  ---------------------------------------
  [src_process_src_thread] Sent 57
  [vmdst_process] value {57}
  ---------------------------------------
  [src_process_src_thread] Sent 58
  [vmdst_process] value {58}

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
  test_data_port_periodic_domains_VM/receiver_vm/CAmkES_seL4/src/c/CAmkES_seL4/bin/setup-camkes-arm-vm.sh
  test_data_port_periodic_domains_VM/receiver_vm/CAmkES_seL4/bin/transpile-sel4.sh
  test_data_port_periodic_domains_VM/receiver_vm/CAmkES_seL4/src/c/CAmkES_seL4/bin/run-camkes.sh -s
  ```

  ```
  Booting all finished, dropped to user space
  [0m[30;1m<<[0m[32mseL4(CPU 0)[0m[30;1m [decodeUntypedInvocation/212 T0xff807fc17400 "rootserver" @4006d8]: Untyped Retype: Insufficient memory (1 * 2097152 bytes needed, 0 bytes available).>>[0m
  Entering pre-init of emitter_t_impl_src_process_src_thread
  Art: Registered component: top_impl_Instance_src_process_src_thread (periodic: 1000)
  Art: - Registered port: top_impl_Instance_src_process_src_thread_write_port (data out)
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