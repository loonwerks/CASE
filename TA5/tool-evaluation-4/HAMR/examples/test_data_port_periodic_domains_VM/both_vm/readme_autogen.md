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
  test_data_port_periodic_domains_VM/both_vm/CAmkES_seL4_Only/bin/setup-camkes-arm-vm.sh
  test_data_port_periodic_domains_VM/both_vm/CAmkES_seL4_Only/bin/run-camkes.sh -s
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
  [    3.848666] Unable to detect cache hierarchy for CPU 0
  [    3.864702] e1000: Intel(R) PRO/1000 Network Driver - version 7.3.21-k8-NAPI
  [    3.875948] e1000: Copyright (c) 1999-2006 Intel Corporation.
  [    3.887989] e1000e: Intel(R) PRO/1000 Network Driver - 3.2.6-k
  [    3.899438] e1000e: Copyright(c) 1999 - 2015 Intel Corporation.
  [    3.914793] mousedev: PS/2 mouse device common for all mice
  [    3.933080] ledtrig-cpu: registered to indicate activity on CPUs
  [    3.945238] dmi-sysfs: dmi entry is absent.
  [    3.955372] ipip: IPv4 and MPLS over IPv4 tunneling driver
  [    3.972161] NET: Registered protocol family 10
  [    3.996160] mip6: Mobile IPv6
  [    4.009831] NET: Registered protocol family 17
  [    4.020026] mpls_gso: MPLS GSO support
  [    4.028067] Registered cp15_barrier emulation handler
  [    4.036907] Registered setend emulation handler
  [    4.052247] registered taskstats version 1
  [    4.061218] zswap: loaded using pool lzo/zbud
  consume_connection_event@cross_vm_connection.c:247 Failed to inject connection irq
  [    3.736371] Unable to detect cache hierarchy for CPU 0
  [    3.749578] e1000: Intel(R) PRO/1000 Network Driver - version 7.3.21-k8-NAPI
  [    3.761178] e1000: Copyright (c) 1999-2006 Intel Corporation.
  [    3.772502] e1000e: Intel(R) PRO/1000 Network Driver - 3.2.6-k
  [    3.783636] e1000e: Copyright(c) 1999 - 2015 Intel Corporation.
  [    3.799955] mousedev: PS/2 mouse device common for all mice
  [    3.817725] ledtrig-cpu: registered to indicate activity on CPUs
  [    3.829452] dmi-sysfs: dmi entry is absent.
  [    3.839838] ipip: IPv4 and MPLS over IPv4 tunneling driver
  [    3.856385] NET: Registered protocol family 10
  [    3.881353] mip6: Mobile IPv6
  [    3.898331] NET: Registered protocol family 17
  [    3.908071] mpls_gso: MPLS GSO support
  [    3.915037] Registered cp15_barrier emulation handler
  [    3.923486] Registered setend emulation handler
  [    3.938283] registered taskstats version 1
  [    3.947335] zswap: loaded using pool lzo/zbud
  [    3.961369] ima: No TPM chip found, activating TPM-bypass!
  [    3.971317] ima: Allocated hash algorithm: sha256
  [    3.990941] hctosys: unable to open rtc device (rtc0)
  [    4.001862] PM: Hibernation image not present or could not be loaded.
  [    4.013571] initcall clk_disable_unused blacklisted
  [    4.808778] ima: No TPM chip found, activating TPM-bypass!
  [    4.820070] ima: Allocated hash algorithm: sha256
  [    4.841238] hctosys: unable to open rtc device (rtc0)
  [    4.852654] PM: Hibernation image not present or could not be loaded.
  [    4.865625] initcall clk_disable_unused blacklisted
  [    5.280250] Freeing unused kernel memory: 3776K
  [    5.216671] Freeing unused kernel memory: 3776K
  Starting syslogd: OK
  Starting klogd: OK
  Starting syslogd: OK
  Starting klogd: OK
  Running sysctl: Running sysctl: OK
  Initializing random number generator... OK
  Initializing random number generator... [   11.695949] random: dd: uninitialized urandom read (512 bytes read)
  done.
  Starting network: [   11.586716] random: dd: uninitialized urandom read (512 bytes read)
  done.
  Starting network: OK
  OK
  [   13.512919] connection: loading out-of-tree module taints kernel.
  [   13.556549] Event Bar (dev-0) initalised
  [   13.565166] 2 Dataports (dev-0) initalised
  [   13.583827] Event Bar (dev-1) initalised
  [   13.593218] 2 Dataports (dev-1) initalised
  [   13.396316] connection: loading out-of-tree module taints kernel.
  [   13.438736] Event Bar (dev-0) initalised
  [   13.447563] 2 Dataports (dev-0) initalised
  [   13.468745] Event Bar (dev-1) initalised
  [   13.495005] 2 Dataports (dev-1) initalised

  Welcome to Buildroot
  buildroot login: 
  Welcome to Buildroot
  buildroot login: root
  # vmdst_process /dev/uio0 4096 /dev/uio1 4096
  [vmdst_process] test_event_data_port_consumer_component_init called

  Switching input to 1
  root
  # vmsrc_process /dev/uio0 4096 /dev/uio1 4096
  [vmsrc_process] test_event_data_port_emitter_component_init called
  ---------------------------------------
  [vmsrc_process] Sent 0
  [vmdst_process] value {0}
  ---------------------------------------
  [vmsrc_process] Sent 1
  [vmdst_process] value {1}
  ---------------------------------------
  [vmsrc_process] Sent 2
  [vmdst_process] value {2}
  ---------------------------------------
  [vmsrc_process] Sent 3
  [vmdst_process] value {3}
  ---------------------------------------
  [vmsrc_process] Sent 4
  [vmdst_process] value {4}
  ---------------------------------------
  [vmsrc_process] Sent 5
  [vmdst_process] value {5}
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
  test_data_port_periodic_domains_VM/both_vm/CAmkES_seL4/src/c/CAmkES_seL4/bin/setup-camkes-arm-vm.sh
  test_data_port_periodic_domains_VM/both_vm/CAmkES_seL4/bin/transpile-sel4.sh
  test_data_port_periodic_domains_VM/both_vm/CAmkES_seL4/src/c/CAmkES_seL4/bin/run-camkes.sh -s
  ```

  ```
  NEED TO MANUALLY UPDATE EXPECTED OUTPUT
  ```