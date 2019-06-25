camkes-build-vm (JUNE 21, 2019)
==============

The repo contains some of the source code required to build a camkes image
that includes a Linux virtual machine. It does NOT include all the source
required to build such an image. It is included here as a reference for
CASE build and code-generation tools.

This reference build support was collected from various repositories
developed by Data61. To get the complete, up-to-date versions of the
CAmkES virtualization support, refer to the following instructions.
The vm-virtio_net application example is of particular interest to the
CASE project, because it has a VM component interacting with a (regular)
CAmkES component.

```
% repo init -u https://github.com/SEL4PROJ/camkes-arm-vm-manifest.git

% repo sync

% mkdir build

% cd build

% ../init-build.sh -DCAMKES_VM_APP=vm_virtio_net -DVIRTIO_NET_PING -DAARCH32=1
```
The components of particular interest for CASE autogeneration tools include:

* projects/camkes-vm/components/VM and Vchan
* projects/global-components/components/VirtQueue and FileServer
* projects/vm/apps/odriod_vm and vm_virtio_net

Vchan and FileServer are subcompoents to the VM component, which hosts the
virtual machine monitor within a CAmkES component. VirtQueue is the component
responsible for communications between the VM component and other CAmkES
components in the system. Both odriod_vm and vm_virtio_net are top-level
applications that put everything together.

