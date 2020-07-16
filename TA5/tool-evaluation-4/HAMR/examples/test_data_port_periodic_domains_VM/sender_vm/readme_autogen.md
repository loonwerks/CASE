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
    _utspace_split_alloc@split.c:272 Failed to find any untyped capable of creating an object at address 0x8040000
    Loading Linux: 'linux' dtb: ''
    [dst_thread] test_event_data_port_consumer_component_init called
    install_linux_devices@main.c:628 module name: map_frame_hack
    install_linux_devices@main.c:628 module name: virtio_con
    install_linux_devices@main.c:628 module name: cross_vm_connections


  ### CAmkES SeL4 Expected Output
    Booting all finished, dropped to user space
    [0m[30;1m<<[0m[32mseL4(CPU 0)[0m[30;1m [decodeUntypedInvocation/212 T0xff807fc17400 "rootserver" @4006d8]: Untyped Retype: Insufficient memory (1 * 2097152 bytes needed, 0 bytes available).>>[0m
    Entering pre-init of consumer_t_impl
    Art: Registered component: top_impl_Instance_dst_process_dst_thread (periodic: 1000)
    Art: - Registered port: top_impl_Instance_dst_process_dst_thread_read_port (data in)
    top_impl_Instance_dst_process_dst_thread: Example logInfo
    top_impl_Instance_dst_process_dst_thread: Example logDebug
    top_impl_Instance_dst_process_dst_thread: Example logError
    Leaving pre-init of consumer_t_impl
    _utspace_split_alloc@split.c:272 Failed to find any untyped capable of creating an object at address 0x8040000
    Loading Linux: 'linux' dtb: ''
    install_linux_devices@main.c:628 module name: map_frame_hack
    install_linux_devices@main.c:628 module name: virtio_con
    install_linux_devices@main.c:628 module name: cross_vm_connections

