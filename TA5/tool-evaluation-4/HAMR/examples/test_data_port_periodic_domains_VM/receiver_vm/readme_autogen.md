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
  test_data_port_periodic_domains_VM/receiver_vm/CAmkES_seL4_Only/bin/setup-camkes-arm-vm.sh
  test_data_port_periodic_domains_VM/receiver_vm/CAmkES_seL4_Only/bin/run-camkes.sh -s
  ```

  ```
  Booting all finished, dropped to user space
  <<seL4(CPU 0) [decodeUntypedInvocation/212 T0xff807fc17400 "rootserver" @4006d8]: Untyped Retype: Insufficient memory (1 * 2097152 bytes needed, 0 bytes available).>>
  [src_thread] test_event_data_port_emitter_component_init called
  _utspace_split_alloc@split.c:272 Failed to find any untyped capable of creating an object at address 0x8040000
  Loading Linux: 'linux' dtb: ''
  ---------------------------------------
  [src_thread] Sent 0
  ---------------------------------------
  [src_thread] Sent 1
  ---------------------------------------
  [src_thread] Sent 2
  install_linux_devices@main.c:628 module name: map_frame_hack
  install_linux_devices@main.c:628 module name: virtio_con
  install_linux_devices@main.c:628 module name: cross_vm_connections
  ---------------------------------------
  [src_thread] Sent 3
  ---------------------------------------
  [src_thread] Sent 4
  ---------------------------------------
  [src_thread] Sent 5
  ---------------------------------------
  [src_thread] Sent 6
  ---------------------------------------
  [src_thread] Sent 7
  ---------------------------------------
  [src_thread] Sent 8
  ---------------------------------------
  [src_thread] Sent 9
  ---------------------------------------
  [src_thread] Sent 10
  ---------------------------------------
  [src_thread] Sent 11
  ---------------------------------------
  [src_thread] Sent 12
  ---------------------------------------
  [src_thread] Sent 13
  ---------------------------------------
  [src_thread] Sent 14
  ---------------------------------------
  [src_thread] Sent 15
  ---------------------------------------
  [src_thread] Sent 16
  ---------------------------------------
  [src_thread] Sent 17
  ---------------------------------------
  [src_thread] Sent 18
  ---------------------------------------
  [src_thread] Sent 19
  ---------------------------------------
  [src_thread] Sent 20
  ---------------------------------------
  [src_thread] Sent 21
  ---------------------------------------
  [src_thread] Sent 22
  ---------------------------------------
  [src_thread] Sent 23
  libsel4muslcsys: Error attempting syscall 215
  ---------------------------------------
  [src_thread] Sent 24
  ---------------------------------------
  [src_thread] Sent 25
  ---------------------------------------
  [src_thread] Sent 26
  ---------------------------------------
  [src_thread] Sent 27
  ---------------------------------------
  [src_thread] Sent 28
  ---------------------------------------
  [src_thread] Sent 29
  ---------------------------------------
  [src_thread] Sent 30
  ---------------------------------------
  [src_thread] Sent 31
  ---------------------------------------
  [src_thread] Sent 32
  ---------------------------------------
  [src_thread] Sent 33
  libsel4muslcsys: Error attempting syscall 215
  ---------------------------------------
  [src_thread] Sent 34
  clean_up@fdtgen.c:370 Non-existing node None specified to be kept
  consume_connection_event@cross_vm_connection.c:247 Failed to inject connection irq
  _utspace_split_alloc@split.c:272 Failed to find any untyped capable of creating an object at address 0x8020000
  ---------------------------------------
  [src_thread] Sent 35
  consume_connection_event@cross_vm_connection.c:247 Failed to inject connection irq
  [    2.355055] U---------------------------------------
  [src_thread] Sent 36
  nable to detect cache hierarchy for CPU 0
  [    3.505393] e1000: Intel(R) PRO/1000 Network Driver - version 7.3.21-k8-NAPI
  [    3.519545] e1000: Copyright (c) 1999-2006 Intel Corporation.
  [    3.531935] e1000e: Intel(R) PRO/1000 Network Driver - 3.2.6-k
  [    3.543340] e1000e: Copyright(c) 1999 - 2015 Intel Corporation.
  [    3.560074] mousedev: PS/2 mouse device common for all mice
  [    3.575051] ledtrig-cpu: registered to indicate activity on CPUs
  [    3.586734] dmi-sysfs: dmi entry is absent.
  [    3.597064] ipip: IPv4 and MPLS over IPv4 tunneling driver
  [    3.613135] NET: Registered protocol family 10
  [    3.639796] mip6: Mobile IPv6
  [    3.652797] NET: Registered protocol family 17
  [    3.663789] mpls_gso: MPLS GSO support
  [    3.671868] Registered cp15_barrier emulation handler
  [    3.680868] Registered setend emulation handler
  [    3.694776] registered taskstats version 1
  [    3.703465] zswap: loaded using pool lzo/zbud
  [    3.716830] ima: No TPM chip found, activating TPM-bypass!
  [    3.727995] ima: Allocated hash algorithm: sha256
  [    3.747287] hctosys: unable to open rtc device (rtc0)
  [    3.757615] PM: Hibernation image not present or could not be loaded.
  [    3.768236] initcall clk_disable_unused blacklisted
  [    4.160332] Freeing unused kernel memory: 3776K
  ---------------------------------------
  [src_thread] Sent 37
  ---------------------------------------
  [src_thread] Sent 38
  Starting syslogd: OK
  Starting klogd: OK
  Running sysctl: ---------------------------------------
  [src_thread] Sent 39
  OK
  Initializing random number generator... [    8.503692] random: dd: uninitialized urandom read (512 bytes read)
  done.
  Starting network: ---------------------------------------
  [src_thread] Sent 40
  OK
  [    9.589617] connection: loading out-of-tree module taints kernel.
  [    9.632186] Event Bar (dev-0) initalised
  [    9.641731] 2 Dataports (dev-0) initalised
  [    9.656217] Event Bar (dev-1) initalised
  [    9.680296] 2 Dataports (dev-1) initalised
  [vmdst_process] test_event_data_port_consumer_component_init called

  Welcome to Buildroot
  buildroot login: ---------------------------------------
  [src_thread] Sent 41
  [vmdst_process] value {41}
  ---------------------------------------
  [src_thread] Sent 42
  [vmdst_process] value {42}
  ---------------------------------------
  [src_thread] Sent 43
  [vmdst_process] value {43}
  ---------------------------------------
  [src_thread] Sent 44
  [vmdst_process] value {44}
  ---------------------------------------
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
  test_data_port_periodic_domains_VM/receiver_vm/CAmkES_seL4/src/c/CAmkES_seL4/bin/setup-camkes-arm-vm.sh
  test_data_port_periodic_domains_VM/receiver_vm/CAmkES_seL4/bin/transpile-sel4.sh
  test_data_port_periodic_domains_VM/receiver_vm/CAmkES_seL4/src/c/CAmkES_seL4/bin/run-camkes.sh -s
  ```

  ```
  NEED TO MANUALLY UPDATE EXPECTED OUTPUT
  ```