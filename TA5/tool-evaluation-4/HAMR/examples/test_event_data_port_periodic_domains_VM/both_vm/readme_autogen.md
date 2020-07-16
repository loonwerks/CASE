# both_vm

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
    [0m[30;1m<<[0m[32mseL4(CPU 0)[0m[30;1m [decodeUntypedInvocation/212 T0xff807fc18400 "rootserver" @4006d8]: Untyped Retype: Insufficient memory (1 * 2097152 bytes needed, 0 bytes available).>>[0m
    [0m[30;1m<<[0m[32mseL4(CPU 0)[0m[30;1m [maskVMRights/193 T0xff807fc18400 "rootserver" @4006d8]: Attempted to make unsupported write only mapping>>[0m
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


  ### CAmkES SeL4 Expected Output
    Booting all finished, dropped to user space
    [0m[30;1m<<[0m[32mseL4(CPU 0)[0m[30;1m [decodeUntypedInvocation/212 T0xff807fc18400 "rootserver" @4006a0]: Untyped Retype: Insufficient memory (1 * 2097152 bytes needed, 0 bytes available).>>[0m
    [0m[30;1m<<[0m[32mseL4(CPU 0)[0m[30;1m [maskVMRights/193 T0xff807fc18400 "rootserver" @4006a0]: Attempted to make unsupported write only mapping>>[0m
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

