#
# Copyright 2020, Data61
# Commonwealth Scientific and Industrial Research Organisation (CSIRO)
# ABN 41 687 119 230.
#
# Copyright 2019 Adventium Labs
# Modifications made to original
#
# This software may be distributed and modified according to the terms of
# the BSD 2-Clause license. Note that NO WARRANTY is provided.
# See "LICENSE_BSD2.txt" for details.
#
# @TAG(DATA61_Adventium_BSD)
#

# Add virtual PCI device to VMM for registering cross component connectors as
# devices on the PCI bus.
set(VmPCISupport ON CACHE BOOL "" FORCE)
# Disable libusb from being compiled.
set(LibUSB OFF CACHE BOOL "" FORCE)
# Enables the option for the VM to open and load a seperate initrd file
set(VmInitRdFile ON CACHE BOOL "" FORCE)
# Enable virtio console vmm module
set(VmVirtioConsole ON CACHE BOOL "" FORCE)
# Make VTimers see absolute time rather than virtual time.
set(KernelArmVtimerUpdateVOffset OFF CACHE BOOL "" FORCE)
# Don't trap WFI or WFE instructions in a VM.
set(KernelArmDisableWFIWFETraps ON CACHE BOOL "" FORCE)
set(KernelNumDomains 1 CACHE STRING "" FORCE)
# set(KernelDomainSchedule "${CMAKE_CURRENT_LIST_DIR}/kernel/domain_schedule.c" CACHE INTERNAL "")
