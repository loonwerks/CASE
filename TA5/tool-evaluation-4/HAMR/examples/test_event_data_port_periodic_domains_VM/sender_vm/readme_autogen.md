# sender_vm

## Diagrams

### AADL Arch
  ![aadl](diagrams/aadl-arch.png)

### CAmkES HAMR SeL4_Only Arch
  ![SeL4_Only](diagrams/CAmkES-HAMR-arch-SeL4_Only.svg)

### CAmkES SeL4_Only Arch
  ![SeL4_Only](diagrams/CAmkES-arch-SeL4_Only.svg)

### CAmkES HAMR SeL4 Arch
  ![SeL4](diagrams/CAmkES-HAMR-arch-SeL4.svg)

### CAmkES SeL4 Arch
  ![SeL4](diagrams/CAmkES-arch-SeL4.svg)

## Expected Output : Timeout = 15 seconds

  ### CAmkES SeL4_Only Expected Output
    Booting all finished, dropped to user space
    [0m[30;1m<<[0m[32mseL4(CPU 0)[0m[30;1m [decodeUntypedInvocation/212 T0xff807fc16400 "rootserver" @4006d8]: Untyped Retype: Insufficient memory (1 * 2097152 bytes needed, 0 bytes available).>>[0m
    [0m[30;1m<<[0m[32mseL4(CPU 0)[0m[30;1m [maskVMRights/193 T0xff807fc16400 "rootserver" @4006d8]: Attempted to make unsupported write only mapping>>[0m
    _utspace_split_alloc@split.c:272 Failed to find any untyped capable[dst_thread] test_event_data_port_consumer_component_init called
     of creating an object at address 0x8040000
    Loading Linux: 'linux' dtb: ''
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
    [    3.673065] Unable to detect cache hierarchy for CPU 0
    [    3.719570] e1000: Intel(R) PRO/1000 Network Driver - version 7.3.21-k8-NAPI
    [    3.748937] e1000: Copyright (c) 1999-2006 Intel Corporation.
    [    3.778950] e1000e: Intel(R) PRO/1000 Network Driver - 3.2.6-k
    [    3.810589] e1000e: Copyright(c) 1999 - 2015 Intel Corporation.
    [    3.841095] mousedev: PS/2 mouse device common for all mice
    [    3.893926] ledtrig-cpu: registered to indicate activity on CPUs
    [    3.922163] dmi-sysfs: dmi entry is absent.
    [    3.930812] ipip: IPv4 and MPLS over IPv4 tunneling driver
    [    3.981872] NET: Registered protocol family 10
    [    4.040117] mip6: Mobile IPv6
    [    4.074485] NET: Registered protocol family 17
    [    4.097959] mpls_gso: MPLS GSO support
    [    4.105424] Registered cp15_barrier emulation handler
    [    4.128930] Registered setend emulation handler
    [    4.156435] registered taskstats version 1
    [    4.179964] zswap: loaded using pool lzo/zbud
    [    4.210413] ima: No TPM chip found, activating TPM-bypass!
    [    4.253084] ima: Allocated hash algorithm: sha256
    [    4.302194] hctosys: unable to open rtc device (rtc0)
    [    4.326673] P

  ### CAmkES SeL4 Expected Output
    Booting all finished, dropped to user space
    [0m[30;1m<<[0m[32mseL4(CPU 0)[0m[30;1m [decodeUntypedInvocation/212 T0xff807fc17400 "rootserver" @4006d8]: Untyped Retype: Insufficient memory (1 * 2097152 bytes needed, 0 bytes available).>>[0m
    [0m[30;1m<<[0m[32mseL4(CPU 0)[0m[30;1m [maskVMRights/193 T0xff807fc17400 "rootserver" @4006d8]: Attempted to make unsupported write only mapping>>[0m
    Entering pre-init of consumer_t_impl
    Art: Registered component: top_impl_Instance_dst_process_dst_thread (periodic: 1000)
    _utspace_split_alloc@split.c:272 Failed to find any untyped capable of creating an object at address 0x8040000
    Art: - Registered port: top_impl_Instance_dst_process_dst_thread_read_port (event in)
    Loading Linux: 'linux' dtb: ''
    top_impl_Instance_dst_process_dst_thread: Example logInfo
    top_impl_Instance_dst_process_dst_thread: Example logDebug
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
    [    3.728718] Unable to detect cache hierarchy for CPU 0
    [    3.760210] e1000: Intel(R) PRO/1000 Network Driver - version 7.3.21-k8-NAPI
    [    3.802204] e1000: Copyright (c) 1999-2006 Intel Corporation.
    [    3.849165] e1000e: Intel(R) PRO/1000 Network Driver - 3.2.6-k
    [    3.877833] e1000e: Copyright(c) 1999 - 2015 Intel Corporation.
    [    3.906880] mousedev: PS/2 mouse device common for all mice
    [    3.949714] ledtrig-cpu: registered to indicate activity on CPUs
    [    3.975516] dmi-sysfs: dmi entry is absent.
    [    4.000001] ipip: IPv4 and MPLS over IPv4 tunneling driver
    [    4.034855] NET: Registered protocol family 10
    [    4.098214] mip6: Mobile IPv6
    [    4.126564] NET: Registered protocol family 17
    [    4.149693] mpls_gso: MPLS GSO support
    [    4.157759] Registered cp15_barrier emulation handler
    [    4.188391] Registered setend emulation handler
    [    4.230382] registered taskstats version 1
    [    4.256014] zswap: loaded using pool lzo/zbud
    [    4.286002] ima: No TPM chip found, activating TPM-bypass!
    [    4.313282] ima: Allocated hash algorithm: sha256
    [    4.344624] hctosys: unable to open rtc device (rtc0)
    [    4.377874] PM: Hibernation image not present or could not be loaded.
    [    4.407727] initcall clk_disable_unused blacklisted

