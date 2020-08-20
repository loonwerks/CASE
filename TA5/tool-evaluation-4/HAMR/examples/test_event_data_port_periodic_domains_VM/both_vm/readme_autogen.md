# both_vm

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
  | package-name | both_vm |
  | exclude-component-impl | true |
  | bit-width | 32 |
  | max-string-size | 256 |
  | max-array-size | 1 |


  **How To Run**
  ```
  test_event_data_port_periodic_domains_VM/both_vm/CAmkES_seL4_Only/bin/setup-camkes-arm-vm.sh
  test_event_data_port_periodic_domains_VM/both_vm/CAmkES_seL4_Only/bin/run-camkes.sh -s
  ```

  ```
  Booting all finished, dropped to user space
  <<seL4(CPU 0) [decodeUntypedInvocation/212 T0xff807fc18400 "rootserver" @4006d8]: Untyped Retype: Insufficient memory (1 * 2097152 bytes needed, 0 bytes available).>>
  _utspace_split_alloc@split.c:272 Failed to find any untyped capable of creating an object at address 0x8040000
  Loading Linux: 'linux' dtb: ''
  _utspace_split_alloc@split.c:272 Failed to find any untyped capable of creating an object at address 0x8040000
  Loading Linux: 'linux' dtb: ''
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
  [    4.090534] Unable to detect cache hierarchy for CPU 0
  [    4.106252] e1000: Intel(R) PRO/1000 Network Driver - version 7.3.21-k8-NAPI
  [    4.117888] e1000: Copyright (c) 1999-2006 Intel Corporation.
  [    4.129051] e1000e: Intel(R) PRO/1000 Network Driver - 3.2.6-k
  [    4.140415] e1000e: Copyright(c) 1999 - 2015 Intel Corporation.
  [    4.155176] mousedev: PS/2 mouse device common for all mice
  [    4.173901] ledtrig-cpu: registered to indicate activity on CPUs
  [    4.185863] dmi-sysfs: dmi entry is absent.
  [    4.194957] ipip: IPv4 and MPLS over IPv4 tunneling driver
  [    4.210933] NET: Registered protocol family 10
  [    4.236907] mip6: Mobile IPv6
  [    4.250547] NET: Registered protocol family 17
  [    4.263264] mpls_gso: MPLS GSO support
  [    4.271398] Registered cp15_barrier emulation handler
  [    4.281579] Registered setend emulation handler
  [    4.296430] registered taskstats version 1
  [    4.305698] zswap: loaded using pool lzo/zbud
  [    4.319227] ima: No TPM chip found, activating TPM-bypass!
  [    4.329274] ima: Allocated hash algorithm: sha256
  [    4.349465] hctosys: unable to open rtc device (rtc0)
  [    4.360870] PM: Hibernation image not present or could not be loaded.
  [    4.372557] initcall clk_disable_unused blacklisted
  consume_connection_event@cross_vm_connection.c:247 Failed to inject connection irq
  [    4.053194] Unable to detect cache hierarchy for CPU 0
  [    4.066717] e1000: Intel(R) PRO/1000 Network Driver - version 7.3.21-k8-NAPI
  [    4.078612] e1000: Copyright (c) 1999-2006 Intel Corporation.
  [    4.089793] e1000e: Intel(R) PRO/1000 Network Driver - 3.2.6-k
  [    4.101109] e1000e: Copyright(c) 1999 - 2015 Intel Corporation.
  [    4.117353] mousedev: PS/2 mouse device common for all mice
  [    4.136100] ledtrig-cpu: registered to indicate activity on CPUs
  [    4.148739] dmi-sysfs: dmi entry is absent.
  [    4.158004] ipip: IPv4 and MPLS over IPv4 tunneling driver
  [    4.176431] NET: Registered protocol family 10
  [    4.202937] mip6: Mobile IPv6
  [    4.216847] NET: Registered protocol family 17
  [    4.227056] mpls_gso: MPLS GSO support
  [    4.234487] Registered cp15_barrier emulation handler
  [    4.245348] Registered setend emulation handler
  [    4.259664] registered taskstats version 1
  [    4.268668] zswap: loaded using pool lzo/zbud
  [    4.283650] ima: No TPM chip found, activating TPM-bypass!
  [    4.292713] ima: Allocated ha[    5.681847] Freeing unused kernel memory: 3776K
  sh algorithm: sha256
  [    5.336349] hctosys: unable to open rtc device (rtc0)
  [    5.345777] PM: Hibernation image not present or could not be loaded.
  [    5.356574] initcall clk_disable_unused blacklisted
  [    5.754424] Freeing unused kernel memory: 3776K
  Starting syslogd: OK
  Starting klogd: OK
  Starting syslogd: OK
  Starting klogd: Running sysctl: OK
  OK
  Running sysctl: Initializing random number generator... [   10.434761] random: dd: uninitialized urandom read (512 bytes read)
  done.
  Starting network: OK
  Initializing random number generator... [   10.408663] random: dd: uninitialized urandom read (512 bytes read)
  done.
  OK
  [   11.693653] connection: loading out-of-tree module taints kernel.
  [   11.729616] Event Bar (dev-0) initalised
  [   11.739158] 2 Dataports (dev-0) initalised
  [   11.758115] Event Bar (dev-1) initalised
  Starting network: OK
  [   12.477028] 2 Dataports (dev-1) initalised

  Welcome to Buildroot
  buildroot login: [   12.412081] connection: loading out-of-tree module taints kernel.
  [   12.452270] Event Bar (dev-0) initalised
  [   12.461914] 2 Dataports (dev-0) initalised
  [   12.481652] Event Bar (dev-1) initalised
  [   12.497374] 2 Dataports (dev-1) initalised

  Welcome to Buildroot
  buildroot login: root
  # vmsrc_process /dev/uio0 4096 /dev/uio1 4096
  [vmsrc_process] test_event_data_port_emitter_component_init called
  [vmsrc_process] sending 0
  [vmsrc_process] sending 1
  [vmsrc_process] sending 2
  [vmsrc_process] sending 3
  [vmsrc_process] sending 4
  [vmsrc_process] sending 5
  [vmsrc_process] sending 6

  Switching input to 1
  [vmsrc_process] sending 7
  root
  # [vmsrc_process] sending 8
  vmdst_process /dev/uio0 4096 /dev/uio1 4096[vmsrc_process] sending 9

  [vmdst_process] test_event_data_port_consumer_component_init called
  [vmsrc_process] sending 10
  [vmdst_process] received {10}
  [vmsrc_process] sending 11
  [vmdst_process] received {11}
  [vmsrc_process] sending 12
  [vmdst_process] received {12}
  [vmsrc_process] sending 13
  [vmdst_process] received {13}
  [vmsrc_process] sending 14
  [vmdst_process] received {14}
  [vmsrc_process] sending 15
  [vmdst_process] received {15}
  [vmsrc_process] sending 16
  [vmdst_process] received {16}
  ```

### SeL4 Expected Output: Timeout = 15 seconds

  |HAMR Codegen Configuration| |
  |--|--|
  | package-name | both_vm |
  | exclude-component-impl | true |
  | bit-width | 32 |
  | max-string-size | 256 |
  | max-array-size | 1 |


  **How To Run**
  ```
  test_event_data_port_periodic_domains_VM/both_vm/CAmkES_seL4/src/c/CAmkES_seL4/bin/setup-camkes-arm-vm.sh
  test_event_data_port_periodic_domains_VM/both_vm/CAmkES_seL4/bin/transpile-sel4.sh
  test_event_data_port_periodic_domains_VM/both_vm/CAmkES_seL4/src/c/CAmkES_seL4/bin/run-camkes.sh -s
  ```

  ```
  NEED TO MANUALLY UPDATE EXPECTED OUTPUT
  ```