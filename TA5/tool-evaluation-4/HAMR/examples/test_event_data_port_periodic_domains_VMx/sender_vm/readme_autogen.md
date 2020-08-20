# sender_vm

 Table of Contents
  * [Diagrams](#diagrams)
    * [AADL Arch](#aadl-arch)
    * [SeL4_Only](#sel4_only)
      * [SeL4_Only CAmkES Arch](#sel4_only-camkes-arch)
      * [SeL4_Only CAmkES HAMR Arch](#sel4_only-camkes-hamr-arch)
  * [Example Output](#example-output)
    * [SeL4_Only Expected Output: Timeout = 15 seconds](#sel4_only-expected-output-timeout--15-seconds)

## Diagrams
### AADL Arch
![AADL Arch](diagrams/aadl-arch.png)

### SeL4_Only
#### SeL4_Only CAmkES Arch
![SeL4_Only CAmkES Arch](diagrams/CAmkES-arch-SeL4_Only.svg)

#### SeL4_Only CAmkES HAMR Arch
![SeL4_Only CAmkES HAMR Arch](diagrams/CAmkES-HAMR-arch-SeL4_Only.svg)

## Example Output
*NOTE:* actual output may differ due to issues related to thread interleaving
### SeL4_Only Expected Output: Timeout = 15 seconds

  |HAMR Codegen Configuration| |
  |--|--|
  | package-name | sender_vm |
  | exclude-component-impl | true |
  | bit-width | 32 |
  | max-string-size | 256 |
  | max-array-size | 1 |


  **How To Run**
  ```
  test_event_data_port_periodic_domains_VMx/sender_vm/CAmkES_seL4_Only/bin/setup-camkes-arm-vm.sh
  test_event_data_port_periodic_domains_VMx/sender_vm/CAmkES_seL4_Only/bin/run-camkes.sh -s
  ```

  ```
  Booting all finished, dropped to user space
  <<seL4(CPU 0) [decodeUntypedInvocation/212 T0xff807fc18400 "rootserver" @4006d8]: Untyped Retype: Insufficient memory (1 * 2097152 bytes needed, 0 bytes available).>>
  _utspace_split_alloc@split.c:272 Failed to find any untyped capable of creating an object at address 0x8040000
  Loading Linux: 'linux' dtb: ''
  _utspace_split_alloc@split.c:272 Failed to find any untyped capable of creating an object at address 0x8040000
  Loading Linux: 'linux' dtb: ''
  [dst_thread] test_event_data_port_consumer_component_init called
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
  [    6.038871] Unable to detect cache hierarchy for CPU 0
  [    6.055980] e1000: Intel(R) PRO/1000 Network Driver - version 7.3.21-k8-NAPI
  consume_connection_event@cross_vm_connection.c:247 Failed to inject connection irq
  [    5.993259] Unable to detect cache hierarchy for CPU 0
  [    6.005731] e1000: Intel(R) PRO/1000 Network Driver - version 7.3.21-k8-NAPI
  [    6.018100] e1000: Copyright (c) 1999-2006 Intel Corporation.
  [    6.029919] e1000e: Intel(R) PRO/1000 Network Driver - 3.2.6-k
  [    6.041925] e1000e: Copyright(c) 1999 - 2015 Intel Corporation.
  [    6.057726] mousedev: PS/2 mouse device common for all mice
  [    6.077590] ledtrig-cpu: registered to indicate activity on CPUs
  [    6.089907] dmi-sysfs: dmi entry is absent.
  [    7.107916] e1000: Copyright (c) 1999-2006 Intel Corporation.
  [    7.119320] e1000e: Intel(R) PRO/1000 Network Driver - 3.2.6-k
  [    7.131258] e1000e: Copyright(c) 1999 - 2015 Intel Corporation.
  [    7.149571] mousedev: PS/2 mouse device common for all mice
  [    7.169323] ledtrig-cpu: registered to indicate activity on CPUs
  [    7.182666] dmi-sysfs: dmi entry is absent.
  [    7.193644] ipip: IPv4 and MPLS over IPv4 tunneling driver
  [    7.209784] NET: Registered protocol family 10
  [    7.236471] mip6: Mobile IPv6
  [    7.249859] NET: Registered protocol family 17
  [    7.260196] mpls_gso: MPLS GSO support
  [    7.268676] Registered cp15_barrier emulation handler
  [    7.278599] Registered setend emulation handler
  [    7.293619] registered taskstats version 1
  [    7.303433] zswap: loaded using pool lzo/zbud
  [    7.317422] ima: No TPM chip found, activating TPM-bypass!
  [    7.328118] ima: Allocated hash algorithm: sha256
  [    7.348210] hctosys: unable to open rtc device (rtc0)
  [    7.360213] PM: Hibernation image not present or could not be loaded.
  [    7.371771] initcall clk_disable_unused blacklisted
  [    7.057530] ipip: IPv4 and MPLS over IPv4 tunneling driver
  [    7.074094] NET: Registered protocol family 10
  [    7.098249] mip6: Mobile IPv6
  [    7.110632] NET: Registered protocol family 17
  [    7.121086] mpls_gso: MPLS GSO support
  [    7.129036] Registered cp15_barrier emulation handler
  [    7.138551] Registered setend emulation handler
  [    7.153867] registered taskstats version 1
  [    7.162972] zswap: loaded using pool lzo/zbud
  [    7.177460] ima: No TPM chip found, activating TPM-bypass!
  [    7.187383] ima: Allocated hash algorithm: sha256
  [    7.206286] hctosys: unable to open rtc device (rtc0)
  [    7.217786] PM: Hibernation image not present or could not be loaded.
  [    7.230705] initcall clk_disable_unused blacklisted
  [    8.601665] Freeing unused kernel memory: 3776K
  [    8.476797] Freeing unused kernel memory: 3776K
  Starting syslogd: OK
  Starting klogd: OK
  Starting syslogd: OK
  Starting klogd: OK
  Running sysctl: OK
  Running sysctl: OK
  Initializing random number generator... Initializing random number generator... [   14.960930] random: dd: uninitialized urandom read (512 bytes read)
  done.
  [   16.558745] random: dd: uninitialized urandom read (512 bytes read)
  done.
  Starting network: Starting network: OKOK
  [   18.530639] connection: loading out-of-tree module taints kernel.
  [   18.568279] Event Bar (dev-0) initalised
  [   18.578561] 2 Dataports (dev-0) initalised
  [   18.597424] Event Bar (dev-1) initalised
  [   18.613092] 2 Dataports (dev-1) initalised

  [   18.377636] connection: loading out-of-tree module taints kernel.
  [   18.417041] Event Bar (dev-0) initalised
  [   18.427177] 2 Dataports (dev-0) initalised
  [   18.446206] Event Bar (dev-1) initalised
  [   18.456302] 2 Dataports (dev-1) initalised

  Welcome to Buildroot
  buildroot login: 
  Welcome to Buildroot
  buildroot login: 
  Switching input to 0
  root
  # vmsrc_vm_process /dev/uio0 4096 /dev/uio1 4096
  [vmsrc_process] test_event_data_port_emitter_component_init called
  -----------------------
  [vmsrc_process] sending 0
  [dst_thread] received {0}
  -----------------------
  [vmsrc_process] sending 1
  [dst_thread] received {1}
  -----------------------
  [vmsrc_process] sending 2
  [dst_thread] received {2}
  -----------------------
  [vmsrc_process] sending 3
  [dst_thread] received {3}

  Switching input to 1
  -----------------------
  [vmsrc_process] sending 4
  roo[dst_thread] received {4}
  -----------------------
  [vmsrc_process] sending 5
  t
  # [dst_thread] received {5}
  -----------------------
  [vmsrc_process] sending 6
  vmdst_vm_process /dev/uio0 4096 /dev/uio1 4096
  [vmdst_vm_process] test_event_data_port_consumer_component_init called
  [dst_thread] received {6}
  -----------------------
  [vmsrc_process] sending 7
  [vmdst_vm_process] received {7}
  [dst_thread] received {7}
  -----------------------
  [vmsrc_process] sending 8
  [vmdst_vm_process] received {8}
  [dst_thread] received {8}
  -----------------------
  [vmsrc_process] sending 9
  [vmdst_vm_process] received {9}
  [dst_thread] received {9}
  -----------------------
  [vmsrc_process] sending 10
  [vmdst_vm_process] received {10}
  [dst_thread] received {10}
  -----------------------
  [vmsrc_process] sending 11
  [vmdst_vm_process] received {11}
  [dst_thread] received {11}
  -----------------------
  ```