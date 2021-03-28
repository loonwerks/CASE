# sender_vm

 Table of Contents
  * [Diagrams](#diagrams)
    * [AADL Arch](#aadl-arch)
    * [SeL4_Only](#sel4_only)
      * [SeL4_Only CAmkES Arch](#sel4_only-camkes-arch)
      * [SeL4_Only CAmkES HAMR Arch](#sel4_only-camkes-hamr-arch)
  * [Example Output](#example-output)
    * [SeL4_Only Expected Output: Timeout = 90 seconds](#sel4_only-expected-output-timeout--90-seconds)

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
### SeL4_Only Expected Output: Timeout = 90 seconds

  |HAMR Codegen Configuration| |
  |--|--|
  | refer to [bin/run-hamr-SeL4_Only.sh](bin/run-hamr-SeL4_Only.sh) |


  **How To Run**
  ```
  ./bin/run-hamr-SeL4_Only.sh
  ./CAmkES_seL4_Only/bin/setup-camkes-arm-vm.sh
  ./CAmkES_seL4_Only/bin/run-camkes.sh -o "-DUSE_PRECONFIGURED_ROOTFS=ON" -s
  ```

  ```
  Booting all finished, dropped to user space
  <<seL4(CPU 0) [decodeUntypedInvocation/212 T0xff807fc18400 "rootserver" @4006d8]: Untyped Retype: Insufficient memory (1 * 2097152 bytes needed, 0 bytes available).>>
  _utspace_split_alloc@split.c:272 Failed to find any untyped capable of creating an object at address 0x8040000
  Loading Linux: 'linux' dtb: ''
  _utspace_split_alloc@split.c:272 Failed to find any untyped capable of creating an object at address 0x8040000
  Loading Linux: 'linux' dtb: ''
  [dst_native_process_dst_thread] test_event_data_port_consumer_component_init called
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
  consume_connection_event@cross_vm_connection.c:247 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:247 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:247 Failed to inject connection irq
  [    4.979314] Unable to detect cache hierarchy for CPU 0
  [    4.992799] e1000: Intel(R) PRO/1000 Network Driver - version 7.3.21-k8-NAPI
  [    5.005877] e1000: Copyright (c) 1999-2006 Intel Corporation.
  [    5.018343] e1000e: Intel(R) PRO/1000 Network Driver - 3.2.6-k
  [    5.031414] e1000e: Copyright(c) 1999 - 2015 Intel Corporation.
  [    5.048237] mousedev: PS/2 mouse device common for all mice
  [    6.022096] Unable to detect cache hierarchy for CPU 0
  [    6.039855] e1000: Intel(R) PRO/1000 Network Driver - version 7.3.21-k8-NAPI
  [    6.054531] e1000: Copyright (c) 1999-2006 Intel Corporation.
  [    6.067743] e1000e: Intel(R) PRO/1000 Network Driver - 3.2.6-k
  [    6.079768] e1000e: Copyright(c) 1999 - 2015 Intel Corporation.
  [    6.099245] mousedev: PS/2 mouse device common for all mice
  [    6.119650] ledtrig-cpu: registered to indicate activity on CPUs
  [    6.131688] dmi-sysfs: dmi entry is absent.
  [    6.142677] ipip: IPv4 and MPLS over IPv4 tunneling driver
  [    6.160756] NET: Registered protocol family 10
  [    6.192418] mip6: Mobile IPv6
  [    6.207077] NET: Registered protocol family 17
  [    6.217632] mpls_gso: MPLS GSO support
  [    6.225632] Registered cp15_barrier emulation handler
  [    6.235657] Registered setend emulation handler
  [    6.252790] registered taskstats version 1
  [    6.263441] zswap: loaded using pool lzo/zbud
  [    6.276659] ima: No TPM chip found, activating TPM-bypass!
  [    6.287596] ima: Allocated hash algorithm: sha256
  [    6.308856] hctosys: unable to open rtc device (rtc0)
  [    6.319851] PM: Hibernation image not present or could not be loaded.
  [    6.332553] initcall clk_disable_unused blacklisted
  [    6.028811] ledtrig-cpu: registered to indicate activity on CPUs
  [    6.041876] dmi-sysfs: dmi entry is absent.
  [    6.051887] ipip: IPv4 and MPLS over IPv4 tunneling driver
  [    6.068749] NET: Registered protocol family 10
  [    6.095379] mip6: Mobile IPv6
  [    6.112955] NET: Registered protocol family 17
  [    6.124139] mpls_gso: MPLS GSO support
  [    6.133129] Registered cp15_barrier emulation handler
  [    6.145723] Registered setend emulation handler
  [    6.163452] registered taskstats version 1
  [    6.172635] zswap: loaded using pool lzo/zbud
  [    6.186843] ima: No TPM chip found, activating TPM-bypass!
  [    6.198366] ima: Allocated hash algorithm: sha256
  [    6.218492] hctosys: unable to open rtc device (rtc0)
  [    6.230042] PM: Hibernation image not present or could not be loaded.
  [    6.242413] initcall clk_disable_unused blacklisted
  [    7.664591] Freeing unused kernel memory: 3776K
  [    7.581512] Freeing unused kernel memory: 3776K
  Starting syslogd: Starting syslogd: OK
  Starting klogd: OK
  OK
  Starting klogd: OK
  Running sysctl: Running sysctl: OK
  OK
  Initializing random number generator... Initializing random number generator... [   15.649359] random: dd: uninitialized urandom read (512 bytes read)
  done.
  Starting network: [   15.646576] random: dd: uninitialized urandom read (512 bytes read)
  done.
  Starting network: OK
  [   17.311892] connection: loading out-of-tree module taints kernel.
  [   17.355181] Event Bar (dev-0) initalised
  [   17.365534] 2 Dataports (dev-0) initalised
  [   17.389365] Event Bar (dev-1) initalised
  [   17.400404] 2OK
  [   17.343029] connection: loading out-of-tree module taints kernel.
  [   17.388287] Event Bar (dev-0) initalised
  [   17.404677] 2 Dataports (dev-0) initalised
  [   17.424570] E Dataports (dev-1) initalised

  Welcome to Buildroot
  buildroot login: vent Bar (dev-1) initalised
  [   18.300240] 2 Dataports (dev-1) initalised

  Welcome to Buildroot
  buildroot login: 
  Switching input to 0
  root
  # vmsrc_vm_process /dev/uio0 4096 /dev/uio1 4096
  [vmsrc_process] test_event_data_port_emitter_component_init called
  -----------------------
  [vmsrc_process] sending 0
  [dst_native_process_dst_thread] received {0}
  -----------------------
  [vmsrc_process] sending 1
  [dst_native_process_dst_thread] received {1}
  -----------------------
  [vmsrc_process] sending 2
  [dst_native_process_dst_thread] received {2}
  -----------------------
  [vmsrc_process] sending 3
  [dst_native_process_dst_thread] received {3}
  -----------------------
  [vmsrc_process] sending 4
  [dst_native_process_dst_thread] received {4}
  -----------------------
  [vmsrc_process] sending 5
  [dst_native_process_dst_thread] received {5}

  Switching input to 1
  -----------------------
  [vmsrc_process] sending 6
  [dst_native_process_dst_thread] received {6}
  -----------------------
  [vmsrc_process] sending 7

  Welcome to Buildroot
  buildroot login: r[dst_native_process_dst_thread] received {7}
  -----------------------
  [vmsrc_process] sending 8
  oot
  # [dst_native_process_dst_thread] received {8}
  -----------------------
  [vmsrc_process] sending 9
  vmdst_vm_process /dev/uio0 4096 /dev/uio1 4096
  [vmdst_vm_process] test_event_data_port_consumer_component_init called
  [dst_native_process_dst_thread] received {9}
  -----------------------
  [vmsrc_process] sending 10
  [vmdst_vm_process] received {10}
  [dst_native_process_dst_thread] received {10}
  -----------------------
  [vmsrc_process] sending 11
  [vmdst_vm_process] received {11}
  [dst_native_process_dst_thread] received {11}
  -----------------------
  [vmsrc_process] sending 12
  [vmdst_vm_process] received {12}
  [dst_native_process_dst_thread] received {12}
  -----------------------
  [vmsrc_process] sending 13
  [vmdst_vm_process] received {13}
  [dst_native_process_dst_thread] received {13}
  -----------------------
  [vmsrc_process] sending 14
  [vmdst_vm_process] received {14}
  [dst_native_process_dst_thread] received {14}
  -----------------------
  [vmsrc_process] sending 15
  [vmdst_vm_process] received {15}
  [dst_native_process_dst_thread] received {15}
  -----------------------
  [vmsrc_process] sending 16
  [vmdst_vm_process] received {16}
  [dst_native_process_dst_thread] received {16}
  -----------------------
  [vmsrc_process] sending 17
  [vmdst_vm_process] received {17}
  [dst_native_process_dst_thread] received {17}
  -----------------------
  [vmsrc_process] sending 18
  [vmdst_vm_process] received {18}
  [dst_native_process_dst_thread] received {18}
  -----------------------
  [vmsrc_process] sending 19
  [vmdst_vm_process] received {19}
  [dst_native_process_dst_thread] received {19}
  -----------------------
  [vmsrc_process] sending 20
  [vmdst_vm_process] received {20}
  [dst_native_process_dst_thread] received {20}
  -----------------------[   59.085956] random: fast init done

  [vmsrc_process] sending 21
  [vmdst_vm_process] received {21}
  [dst_native_process_dst_thread] received {21}
  -----------------------
  [vmsrc_process] sending 22
  [vmdst_vm_process] received {22}
  [dst_native_process_dst_thread] received {22}
  -----------------------
  [vmsrc_process] sending 23
  [vmdst_vm_process] received {23}
  [dst_native_process_dst_thread] received {23}
  -----------------------
  [vmsrc_process] sending 24
  [vmdst_vm_process] received {24}
  [dst_native_process_dst_thread] received {24}
  -----------------------
  [vmsrc_process] sending 25
  [vmdst_vm_process] received {25}
  [dst_native_process_dst_thread] received {25}
  -----------------------
  [vmsrc_process] sending 26
  [vmdst_vm_process] received {26}
  ```