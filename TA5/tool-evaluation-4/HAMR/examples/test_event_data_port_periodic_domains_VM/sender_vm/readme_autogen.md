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
    * [SeL4_Only Expected Output: Timeout = 15 seconds](#sel4_only-expected-output:-timeout-=-15-seconds)
    * [SeL4 Expected Output: Timeout = 15 seconds](#sel4-expected-output:-timeout-=-15-seconds)

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
  |Exclude Component Implementation | true |
  |bitWidth | 32 |
  |maxStringSize | 256 |
  |maxArraySize | 1 |


  **How To Run**
  ```
  test_event_data_port_periodic_domains_VM/sender_vm/CAmkES_seL4_Only/bin/run-camkes.sh
  ```

  ```
  Booting all finished, dropped to user space
  [0m[30;1m<<[0m[32mseL4(CPU 0)[0m[30;1m [decodeUntypedInvocation/212 T0xff807fc16400 "rootserver" @4006d8]: Untyped Retype: Insufficient memory (1 * 2097152 bytes needed, 0 bytes available).>>[0m
  [0m[30;1m<<[0m[32mseL4(CPU 0)[0m[30;1m [maskVMRights/193 T0xff807fc16400 "rootserver" @4006d8]: Attempted to make unsupported write only mapping>>[0m
  _utspace_split_alloc@split.c:272 Failed to find any untyped capable of creating an object at address 0x8040000
  Loading Linux: 'linux' dtb: ''
  [dst_thread] test_event_data_port_consumer_component_init called
  install_linux_devices@main.c:628 module name: map_frame_hack
  install_linux_devices@main.c:628 module name: virtio_con
  install_linux_devices@main.c:628 module name: cross_vm_connections
  libsel4muslcsys: Error attempting syscall 215
  libsel4muslcsys: Error attempting syscall 215
  clean_up@fdtgen.c:370 Non-existing node None specified to be kept
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  _utspace_split_alloc@split.c:272 Failed to find any untyped capable of creating an object at address 0x8020000
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  [    3.549150] Unable to detect cache hierarchy for CPU 0
  [    3.579884] e1000: Intel(R) PRO/1000 Network Driver - version 7.3.21-k8-NAPI
  [    3.607463] e1000: Copyright (c) 1999-2006 Intel Corporation.
  [    3.655430] e1000e: Intel(R) PRO/1000 Network Driver - 3.2.6-k
  [    3.678228] e1000e: Copyright(c) 1999 - 2015 Intel Corporation.
  [    3.707063] mousedev: PS/2 mouse device common for all mice
  [    3.738801] ledtrig-cpu: registered to indicate activity on CPUs
  [    3.780786] dmi-sysfs: dmi entry is absent.
  [    3.789036] ipip: IPv4 and MPLS over IPv4 tunneling driver
  [    3.836340] NET: Registered protocol family 10
  [    3.891074] mip6: Mobile IPv6
  [    3.918067] NET: Registered protocol family 17
  [    3.942273] mpls_gso: MPLS GSO support
  [    3.964349] Registered cp15_barrier emulation handler
  [    3.988865] Registered setend emulation handler
  [    4.017007] registered taskstats version 1
  [    4.050828] zswap: loaded using pool lzo/zbud
  [    4.080161] ima: No TPM chip found, activating TPM-bypass!
  [    4.106365] ima: Allocated hash algorithm: sha256
  [    4.138758] hctosys: unable to open rtc device (rtc0)
  [    4.162369] PM: Hibernation image not present or could not be loaded.
  [    4.189710] initcall clk_disable_unused blacklisted

  ```

### SeL4 Expected Output: Timeout = 15 seconds

  |HAMR Codegen Configuration| |
  |--|--|
  |Exclude Component Implementation | true |
  |bitWidth | 32 |
  |maxStringSize | 256 |
  |maxArraySize | 1 |


  **How To Run**
  ```
  test_event_data_port_periodic_domains_VM/sender_vm/CAmkES_seL4/bin/transpile-sel4.sh
  test_event_data_port_periodic_domains_VM/sender_vm/CAmkES_seL4/bin/run-camkes.sh
  ```

  ```
  Booting all finished, dropped to user space
  [0m[30;1m<<[0m[32mseL4(CPU 0)[0m[30;1m [decodeUntypedInvocation/212 T0xff807fc17400 "rootserver" @4006d8]: Untyped Retype: Insufficient memory (1 * 2097152 bytes needed, 0 bytes available).>>[0m
  [0m[30;1m<<[0m[32mseL4(CPU 0)[0m[30;1m [maskVMRights/193 T0xff807fc17400 "rootserver" @4006d8]: Attempted to make unsupported write only mapping>>[0m
  Entering pre-init of consumer_t_impl
  Art: Registered component: top_impl_Instance_dst_process_dst_thread (periodic: 1000)
  Art: - Registered port: top_impl_Instance_dst_process_dst_thread_read_port (event in)
  _utspace_split_alloc@split.c:272 Failed to find any untyped capable of creating an object at address 0x8040000
  top_impl_Instance_dst_process_dst_thread: Example logInfo
  top_impl_Instance_dst_process_dLoading Linux: 'linux' dtb: ''
  st_thread: Example logDebug
  top_impl_Instance_dst_process_dst_thread: Example logError
  Leaving pre-init of consumer_t_impl
  install_linux_devices@main.c:628 module name: map_frame_hack
  install_linux_devices@main.c:628 module name: virtio_con
  install_linux_devices@main.c:628 module name: cross_vm_connections
  libsel4muslcsys: Error attempting syscall 215
  libsel4muslcsys: Error attempting syscall 215
  clean_up@fdtgen.c:370 Non-existing node None specified to be kept
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  _utspace_split_alloc@split.c:272 Failed to find any untyped capable of creating an object at address 0x8020000
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:245 Failed to inject connection irq
  [    3.529839] Unable to detect cache hierarchy for CPU 0
  [    3.578194] e1000: Intel(R) PRO/1000 Network Driver - version 7.3.21-k8-NAPI
  [    3.604473] e1000: Copyright (c) 1999-2006 Intel Corporation.
  [    3.634232] e1000e: Intel(R) PRO/1000 Network Driver - 3.2.6-k
  [    3.657746] e1000e: Copyright(c) 1999 - 2015 Intel Corporation.
  [    3.688326] mousedev: PS/2 mouse device common for all mice
  [    3.719769] ledtrig-cpu: registered to indicate activity on CPUs
  [    3.755113] dmi-sysfs: dmi entry is absent.
  [    3.783182] ipip: IPv4 and MPLS over IPv4 tunneling driver
  [    3.832070] NET: Registered protocol family 10
  [    3.901100] mip6: Mobile IPv6
  [    3.928075] NET: Registered protocol family 17
  [    3.953159] mpls_gso: MPLS GSO support
  [    3.974216] Registered cp15_barrier emulation handler
  [    3.983389] Registered setend emulation handler
  [    4.009953] registered taskstats version 1
  [    4.033512] zswap: loaded using pool lzo/zbud
  [    4.061720] ima: No TPM chip found, activating TPM-bypass!
  [    4.085090] ima: Allocated hash algorithm: sha256
  [    4.130785] hctosys: unable to open rtc device (rtc0)
  [    4.153430] PM: Hibernation image not present or could not be loaded.
  [    4.181298] initcall clk_disable_unused blacklisted

  ```