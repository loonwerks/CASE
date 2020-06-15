# This file will not be overwritten so is safe to edit

cmake_minimum_required(VERSION 3.8.2)

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

if("${PLATFORM}" STREQUAL "qemu-arm-virt")
    set(KernelArmCPU cortex-a53 CACHE STRING "" FORCE)
    set(KernelArmExportPCNTUser ON CACHE BOOL "" FORCE)
    set(KernelArmExportPTMRUser ON CACHE BOOL "" FORCE)

    set(MIN_QEMU_VERSION "4.0.0")
    execute_process(COMMAND ${QEMU_BINARY} -version OUTPUT_VARIABLE QEMU_VERSION_STR)
    string(
        REGEX
            MATCH
            "[0-9](\\.[0-9])+"
            QEMU_VERSION
            ${QEMU_VERSION_STR}
    )
    if("${QEMU_VERSION}" VERSION_LESS "${MIN_QEMU_VERSION}")
        message(WARNING "Warning: qemu version should be at least ${MIN_QEMU_VERSION}")
    endif()

endif()
set(KernelDomainSchedule "${CMAKE_CURRENT_LIST_DIR}/kernel/domain_schedule.c" CACHE INTERNAL "")
set(KernelNumDomains 4 CACHE STRING "" FORCE)
