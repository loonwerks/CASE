# sender_vm

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
  | package-name | sender_vm |
  | exclude-component-impl | true |
  | bit-width | 32 |
  | max-string-size | 256 |
  | max-array-size | 1 |


  **How To Run**
  ```
  test_event_data_port_periodic_domains_VM/sender_vm/CAmkES_seL4_Only/bin/setup-camkes-arm-vm.sh
  test_event_data_port_periodic_domains_VM/sender_vm/CAmkES_seL4_Only/bin/run-camkes.sh -s
  ```

  ```
  Booting all finished, dropped to user space
  [0m[30;1m<<[0m[32mseL4(CPU 0)[0m[30;1m [decodeUntypedInvocation/212 T0xff807fc17400 "rootserver" @4006d8]: Untyped Retype: Insufficient memory (1 * 2097152 bytes needed, 0 bytes available).>>[0m
  _utspace_split_alloc@split.c:272 Failed to find any untyped capable of creating an object at address 0x8040000
  Loading Linux: 'linux' dtb: ''
  [dst_process_dst_thread] test_event_data_port_consumer_component_init called
  install_linux_devices@main.c:628 module name: map_frame_hack
  install_linux_devices@main.c:628 module name: virtio_con
  install_linux_devices@main.c:628 module name: cross_vm_connections
  libsel4muslcsys: Error attempting syscall 215
  libsel4muslcsys: Error attempting syscall 215
  clean_up@fdtgen.c:370 Non-existing node None specified to be kept
  consume_connection_event@cross_vm_connection.c:247 Failed to inject connection irq
  _utspace_split_alloc@split.c:272 Failed to find any untyped capable of creating an object at address 0x8020000
  consume_connection_event@cross_vm_connection.c:247 Failed to inject connection irq
  [    2.563887] Unable to detect cache hierarchy for CPU 0
  [    2.580871] e1000: Intel(R) PRO/1000 Network Driver - version 7.3.21-k8-NAPI
  [    2.593716] e1000: Copyright (c) 1999-2006 Intel Corporation.
  [    2.605086] e1000e: Intel(R) PRO/1000 Network Driver - 3.2.6-k
  [    2.615886] e1000e: Copyright(c) 1999 - 2015 Intel Corporation.
  [    2.631772] mousedev: PS/2 mouse device common for all mice
  [    2.648304] ledtrig-cpu: registered to indicate activity on CPUs
  [    2.659593] dmi-sysfs: dmi entry is absent.
  [    2.668546] ipip: IPv4 and MPLS over IPv4 tunneling driver
  [    2.683915] NET: Registered protocol family 10
  [    2.705057] mip6: Mobile IPv6
  [    2.717206] NET: Registered protocol family 17
  [    2.725525] mpls_gso: MPLS GSO support
  [    2.733231] Registered cp15_barrier emulation handler
  [    2.741878] Registered setend emulation handler
  [    2.755589] registered taskstats version 1
  [    2.764365] zswap: loaded using pool lzo/zbud
  [    2.776941] ima: No TPM chip found, activating TPM-bypass!
  [    2.786192] ima: Allocated hash algorithm: sha256
  [    2.804776] hctosys: unable to open rtc device (rtc0)
  [    2.814452] PM: Hibernation image not present or could not be loaded.
  [    2.824218] initcall clk_disable_unused blacklisted
  [    3.201809] Freeing unused kernel memory: 3776K
  Starting syslogd: OK
  Starting klogd: OK
  Running sysctl: OK
  Initializing random number generator... [    6.922471] random: dd: uninitialized urandom read (512 bytes read)
  done.
  Starting network: OK
  [    8.109520] connection: loading out-of-tree module taints kernel.
  [    8.147936] Event Bar (dev-0) initalised
  [    8.157481] 2 Dataports (dev-0) initalised
  [    8.173250] Event Bar (dev-1) initalised
  [    8.180946] 2 Dataports (dev-1) initalised
  [vmsrc_process] test_event_data_port_emitter_component_init called

  Welcome to Buildroot
  buildroot login: [vmsrc_process] sending 0
  [dst_process_dst_thread] received {0}
  [vmsrc_process] sending 1
  [dst_process_dst_thread] received {1}
  [vmsrc_process] sending 2
  [dst_process_dst_thread] received {2}
  [vmsrc_process] sending 3
  [dst_process_dst_thread] received {3}
  [vmsrc_process] sending 4
  [dst_process_dst_thread] received {4}
  [vmsrc_process] sending 5
  [dst_process_dst_thread] received {5}
  [vmsrc_process] sending 6
  [dst_process_dst_thread] received {6}
  [vmsrc_process] sending 7
  [dst_process_dst_thread] received {7}
  [vmsrc_process] sending 8
  [dst_process_dst_thread] received {8}
  [vmsrc_process] sending 9
  [dst_process_dst_thread] received {9}
  [vmsrc_process] sending 10
  [dst_process_dst_thread] received {10}
  [vmsrc_process] sending 11
  [dst_process_dst_thread] received {11}
  [vmsrc_process] sending 12
  [dst_process_dst_thread] received {12}
  [vmsrc_process] sending 13
  [dst_process_dst_thread] received {13}
  [vmsrc_process] sending 14
  [dst_process_dst_thread] received {14}
  [vmsrc_process] sending 15
  [dst_process_dst_thread] received {15}
  [vmsrc_process] sending 16

  ```

### SeL4 Expected Output: Timeout = 90 seconds

  |HAMR Codegen Configuration| |
  |--|--|
  | package-name | sender_vm |
  | exclude-component-impl | true |
  | bit-width | 32 |
  | max-string-size | 256 |
  | max-array-size | 1 |


  **How To Run**
  ```
  test_event_data_port_periodic_domains_VM/sender_vm/CAmkES_seL4/src/c/CAmkES_seL4/bin/setup-camkes-arm-vm.sh
  test_event_data_port_periodic_domains_VM/sender_vm/CAmkES_seL4/bin/transpile-sel4.sh
  test_event_data_port_periodic_domains_VM/sender_vm/CAmkES_seL4/src/c/CAmkES_seL4/bin/run-camkes.sh -s
  ```

  ```
  Booting all finished, dropped to user space
  [0m[30;1m<<[0m[32mseL4(CPU 0)[0m[30;1m [decodeUntypedInvocation/212 T0xff807fc17400 "rootserver" @4006d8]: Untyped Retype: Insufficient memory (1 * 2097152 bytes needed, 0 bytes available).>>[0m
  Entering pre-init of consumer_t_impl_dst_process_dst_thread
  Art: Registered component: top_impl_Instance_dst_process_dst_thread (periodic: 1000)
  Art: - Registered port: top_impl_Instance_dst_process_dst_thread_read_port (event in)
  _utspace_split_alloc@split.c:272 Failed to find any untyped capable of creating an object at address 0x8040000
  Loading Linux: 'linux' dtb: ''
  top_impl_Instance_dst_process_dst_thread: Example logInfo
  top_impl_Instance_dst_process_dst_thread: Example logDebug
  top_impl_Instance_dst_process_dst_thread: Example logError
  Leaving pre-init of consumer_t_impl_dst_process_dst_thread
  install_linux_devices@main.c:628 module name: map_frame_hack
  install_linux_devices@main.c:628 module name: virtio_con
  install_linux_devices@main.c:628 module name: cross_vm_connections

  ```