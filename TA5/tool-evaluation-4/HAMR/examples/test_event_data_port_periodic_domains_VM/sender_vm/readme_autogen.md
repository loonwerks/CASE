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
  | refer to [bin/run-hamr-SeL4_Only.sh](bin/run-hamr-SeL4_Only.sh) |


  **How To Run**
  ```
  ./bin/run-hamr-SeL4_Only.sh
  ./CAmkES_seL4_Only/bin/setup-camkes-arm-vm.sh
  ./CAmkES_seL4_Only/bin/run-camkes.sh -s
  ```

  ```
  Booting all finished, dropped to user space
  [0m[30;1m<<[0m[32mseL4(CPU 0)[0m[30;1m [decodeUntypedInvocation/212 T0xff807fc17400 "rootserver" @4006f0]: Untyped Retype: Insufficient memory (1 * 2097152 bytes needed, 0 bytes available).>>[0m
  _utspace_split_alloc@split.c:272 Failed to find any untyped capable of creating an object at address 0x8040000
  Loading Linux: 'linux' dtb: ''
  install_linux_devices@main.c:657 module name: map_frame_hack
  install_linux_devices@main.c:657 module name: init_ram
  [dst_process_dst_thread] test_event_data_port_consumer_component_init called
  install_linux_devices@main.c:657 module name: virtio_con
  install_linux_devices@main.c:657 module name: cross_vm_connections
  libsel4muslcsys: Error attempting syscall 215
  libsel4muslcsys: Error attempting syscall 215
  clean_up@fdtgen.c:370 Non-existing node None specified to be kept
  consume_connection_event@cross_vm_connection.c:247 Failed to inject connection irq
  _utspace_split_alloc@split.c:272 Failed to find any untyped capable of creating an object at address 0x8020000
  consume_connection_event@cross_vm_connection.c:247 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:247 Failed to inject connection irq
  [    3.126777] Unable to detect cache hierarchy for CPU 0
  [    3.143555] e1000: Intel(R) PRO/1000 Network Driver - version 7.3.21-k8-NAPI
  [    3.156836] e1000: Copyright (c) 1999-2006 Intel Corporation.
  [    3.169028] e1000e: Intel(R) PRO/1000 Network Driver - 3.2.6-k
  [    3.180249] e1000e: Copyright(c) 1999 - 2015 Intel Corporation.
  [    3.197731] mousedev: PS/2 mouse device common for all mice
  [    3.215822] ledtrig-cpu: registered to indicate activity on CPUs
  [    3.227691] dmi-sysfs: dmi entry is absent.
  [    3.237481] ipip: IPv4 and MPLS over IPv4 tunneling driver
  [    3.254867] NET: Registered protocol family 10
  [    3.283445] mip6: Mobile IPv6
  [    3.301353] NET: Registered protocol family 17
  [    3.311802] mpls_gso: MPLS GSO support
  [    3.320113] Registered cp15_barrier emulation handler
  [    3.330260] Registered setend emulation handler
  [    3.346109] registered taskstats version 1
  [    3.354763] zswap: loaded using pool lzo/zbud
  [    3.368267] ima: No TPM chip found, activating TPM-bypass!
  [    3.378831] ima: Allocated hash algorithm: sha256
  [    3.398028] hctosys: unable to open rtc device (rtc0)
  [    3.408538] PM: Hibernation image not present or could not be loaded.
  [    3.420470] initcall clk_disable_unused blacklisted
  [    4.485634] Freeing unused kernel memory: 3776K
  Starting syslogd: OK
  Starting klogd: OK
  Running sysctl: OK
  Initializing random number generator... [    8.703354] random: dd: uninitialized urandom read (512 bytes read)
  done.
  Starting network: OK
  [   10.023885] connection: loading out-of-tree module taints kernel.
  [   10.070559] Event Bar (dev-0) initalised
  [   10.091547] 2 Dataports (dev-0) initalised
  [   10.102848] Event Bar (dev-1) initalised
  [   10.123560] 2 Dataports (dev-1) initalised
  VM App vmsrc_process started
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
  [dst_process_dst_thread] received {16}
  [vmsrc_process] sending 17

  ```

### SeL4 Expected Output: Timeout = 90 seconds

  |HAMR Codegen Configuration| |
  |--|--|
  | refer to [bin/run-hamr-SeL4.sh](bin/run-hamr-SeL4.sh) |


  **How To Run**
  ```
  ./bin/run-hamr-SeL4.sh
  ./CAmkES_seL4/src/c/CAmkES_seL4/bin/setup-camkes-arm-vm.sh
  ./CAmkES_seL4/src/c/CAmkES_seL4/bin/run-camkes.sh -s
  ```

  ```
  Booting all finished, dropped to user space
  [0m[30;1m<<[0m[32mseL4(CPU 0)[0m[30;1m [decodeUntypedInvocation/212 T0xff807fc17400 "rootserver" @4006f0]: Untyped Retype: Insufficient memory (1 * 2097152 bytes needed, 0 bytes available).>>[0m
  Entering pre-init of consumer_t_impl_dst_process_dst_thread
  Art: Registered component: top_impl_Instance_dst_process_dst_thread (periodic: 1000)_utspace_split_alloc@split.c:272 Failed to find any untyped capable of creating an object at address 0x8040000
  Loading Linux: 'linux' dtb: ''
  install_linux_devices@main.c:657 module name: map_frame_hack
  install_linux_devices@main.c:657 module name: init_ram

  Art: - Registered port: top_impl_Instance_dst_process_dst_thread_read_port (event in)
  top_impl_Instance_dst_process_dst_thread: Example logInfo
  top_impl_Instance_dst_process_dst_thread: Example logDebug
  top_impl_Instance_dst_process_dst_thread: Example logError
  Leaving pre-init of consumer_t_impl_dst_process_dst_thread
  install_linux_devices@main.c:657 module name: virtio_con
  install_linux_devices@main.c:657 module name: cross_vm_connections

  ```