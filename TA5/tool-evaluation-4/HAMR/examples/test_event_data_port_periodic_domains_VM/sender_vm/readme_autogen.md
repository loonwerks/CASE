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
  <<seL4(CPU 0) [decodeUntypedInvocation/212 T0xff807fc17400 "rootserver" @4006d8]: Untyped Retype: Insufficient memory (1 * 2097152 bytes needed, 0 bytes available).>>
  _utspace_split_alloc@split.c:272 Failed to find any untyped capable of creating an object at address 0x8040000
  Loading Linux: 'linux' dtb: ''
  [dst_thread] test_event_data_port_consumer_component_init called
  install_linux_devices@main.c:628 module name: map_frame_hack
  install_linux_devices@main.c:628 module name: virtio_con
  install_linux_devices@main.c:628 module name: cross_vm_connections
  libsel4muslcsys: Error attempting syscall 215
  libsel4muslcsys: Error attempting syscall 215
  clean_up@fdtgen.c:370 Non-existing node None specified to be kept
  consume_connection_event@cross_vm_connection.c:247 Failed to inject connection irq
  _utspace_split_alloc@split.c:272 Failed to find any untyped capable of creating an object at address 0x8020000
  consume_connection_event@cross_vm_connection.c:247 Failed to inject connection irq
  consume_connection_event@cross_vm_connection.c:247 Failed to inject connection irq
  [    2.652751] Unable to detect cache hierarchy for CPU 0
  [    2.672120] e1000: Intel(R) PRO/1000 Network Driver - version 7.3.21-k8-NAPI
  [    2.686359] e1000: Copyright (c) 1999-2006 Intel Corporation.
  [    2.701877] e1000e: Intel(R) PRO/1000 Network Driver - 3.2.6-k
  [    2.714874] e1000e: Copyright(c) 1999 - 2015 Intel Corporation.
  [    2.732171] mousedev: PS/2 mouse device common for all mice
  [    2.751378] ledtrig-cpu: registered to indicate activity on CPUs
  [    2.762463] dmi-sysfs: dmi entry is absent.
  [    2.772032] ipip: IPv4 and MPLS over IPv4 tunneling driver
  [    2.788704] NET: Registered protocol family 10
  [    2.812453] mip6: Mobile IPv6
  [    2.824918] NET: Registered protocol family 17
  [    2.834268] mpls_gso: MPLS GSO support
  [    2.842382] Registered cp15_barrier emulation handler
  [    2.851506] Registered setend emulation handler
  [    2.866221] registered taskstats version 1
  [    2.875602] zswap: loaded using pool lzo/zbud
  [    2.890691] ima: No TPM chip found, activating TPM-bypass!
  [    2.900503] ima: Allocated hash algorithm: sha256
  [    2.919203] hctosys: unable to open rtc device (rtc0)
  [    2.928444] PM: Hibernation image not present or could not be loaded.
  [    2.940262] initcall clk_disable_unused blacklisted
  [    3.951965] Freeing unused kernel memory: 3776K
  Starting syslogd: OK
  Starting klogd: OK
  Running sysctl: OK
  Initializing random number generator... [    8.226289] random: dd: uninitialized urandom read (512 bytes read)
  done.
  Starting network: OK
  [    8.908248] connection: loading out-of-tree module taints kernel.
  [   10.110981] Event Bar (dev-0) initalised
  [   10.120000] 2 Dataports (dev-0) initalised
  [   10.137448] Event Bar (dev-1) initalised
  [   10.149051] 2 Dataports (dev-1) initalised
  [vmsrc_process] test_event_data_port_emitter_component_init called

  Welcome to Buildroot
  buildroot login: [vmsrc_process] sending 0
  [dst_thread] received {0}
  [vmsrc_process] sending 1
  [dst_thread] received {1}
  [vmsrc_process] sending 2
  [dst_thread] received {2}
  [vmsrc_process] sending 3
  [dst_thread] received {3}
  [vmsrc_process] sending 4
  [dst_thread] received {4}
  ```

### SeL4 Expected Output: Timeout = 15 seconds

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
  NEED TO MANUALLY UPDATE EXPECTED OUTPUT
  ```