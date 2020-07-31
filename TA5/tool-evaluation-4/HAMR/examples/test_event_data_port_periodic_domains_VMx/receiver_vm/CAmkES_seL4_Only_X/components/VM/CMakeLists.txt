cmake_minimum_required(VERSION 3.8.2)

project(arm-vm C)

includeGlobalComponents()
find_package(camkes-vm REQUIRED)
find_package(camkes-vm-images REQUIRED)
find_package(camkes-arm-vm REQUIRED)
find_package(camkes-vm-linux REQUIRED)
camkes_arm_vm_import_project()

include(${CAMKES_VM_LINUX_HELPERS_PATH})
include(${CAMKES_VM_LINUX_MODULE_HELPERS_PATH})
include(${CAMKES_VM_LINUX_SOURCE_HELPERS_PATH})
include(ExternalProject)
include(external-project-helpers)

option(USE_PRECONFIGURED_ROOTFS
       "Use preconfigured rootfs"
       OFF)

#MESSAGE("KernelARMPlatform = ${KernelARMPlatform}")
#MESSAGE("CAMKES_ARM_VM_DIR = ${CAMKES_ARM_VM_DIR}")
#MESSAGE("CAMKES_VM_IMAGES_DIR = ${CAMKES_VM_IMAGES_DIR}")
#MESSAGE("CAMKES_VM_LINUX_DIR = ${CAMKES_VM_LINUX_DIR}")
#MESSAGE("CMAKE_CURRENT_BINARY_DIR = ${CMAKE_CURRENT_BINARY_DIR}")
#MESSAGE("CMAKE_CURRENT_SOURCE_DIR = ${CMAKE_CURRENT_SOURCE_DIR}")
#MESSAGE("CMAKE_C_COMPILER = ${CMAKE_C_COMPILER}")
#MESSAGE("BASE_C_FLAGS = ${BASE_C_FLAGS}")

if("${KernelARMPlatform}" STREQUAL "qemu-arm-virt" AND (NOT USE_PRECONFIGURED_ROOTFS))
    MESSAGE("Downloading VM")

    set(cpp_flags "-DKERNELARMPLATFORM_QEMU-ARM-VIRT")
    set(linux_repo "https://git.kernel.org/pub/scm/linux/kernel/git/stable/linux.git")
    set(linux_tag "v4.9.189")
    set(linux_arch "arm64")
    set(linux_cross_compile "aarch64-linux-gnu-")
    set(rootfs_file "${CAMKES_VM_IMAGES_DIR}/${KernelARMPlatform}/rootfs.cpio.gz")
    # Checkout and configure linux to build crossvm module
    ExternalProject_Add(
        checkout_linux
        GIT_REPOSITORY
        ${linux_repo}
        GIT_TAG
        ${linux_tag}
        GIT_SHALLOW
        1
        GIT_PROGRESS
        1
        BUILD_COMMAND
        ""
        INSTALL_COMMAND
        ""
        CONFIGURE_COMMAND
        ""
        SOURCE_DIR
        ${CMAKE_CURRENT_BINARY_DIR}/linux_out
    )
    Message("Done cloning ${linux_repo}")

    # Linux config and symvers are to be copied to unpacked archive
    set(linux_config "${CAMKES_VM_IMAGES_DIR}/${KernelARMPlatform}/linux_configs/config")
    set(linux_symvers "${CAMKES_VM_IMAGES_DIR}/${KernelARMPlatform}/linux_configs/Module.symvers")
    # Configure unpacked archive with config and symvers
    ConfigureLinux(
        ${CMAKE_CURRENT_BINARY_DIR}/linux_out
        ${linux_config}
        ${linux_symvers}
        configure_vm_linux
        ARCH
        ${linux_arch}
        CROSS_COMPILE
        ${linux_cross_compile}
        DEPENDS
        checkout_linux
    )

    # Compile CrossVM Dataport Module
    DefineLinuxModule(
        ${CAMKES_VM_LINUX_DIR}/camkes-linux-artifacts/camkes-linux-modules/camkes-connector-modules/connection
        output_module
        output_module_target
        KERNEL_DIR
        ${CMAKE_CURRENT_BINARY_DIR}/linux_out
        ARCH
        ${linux_arch}
        CROSS_COMPILE
        ${linux_cross_compile}
        DEPENDS
        checkout_linux
        configure_vm_linux
    )

    AddFileToOverlayDir(
        "connection.ko"
        ${output_module}
        "lib/modules/4.14.87/kernel/drivers/vmm"
        overlay
        DEPENDS
        output_module_target
    )

    # Add script to initialise dataport module
    AddFileToOverlayDir(
        "S90crossvm_module_init"
        ${CMAKE_CURRENT_SOURCE_DIR}/overlay_files/init_scripts/cross_vm_module_init
        "etc/init.d"
        overlay
    )
else()
    MESSAGE("Using pre-configured rootfs")

    # Use pre-configured rootfs file with crossvm modules and apps installed
    set(rootfs_file "${CAMKES_VM_IMAGES_DIR}/${KernelARMPlatform}/rootfs_crossvm.cpio.gz")
endif()

# Complile CrossVM Event Apps vmdst_process
foreach(item IN ITEMS vmdst_process)
    ExternalProject_Add(
        ${item}
        SOURCE_DIR
        ${CMAKE_CURRENT_SOURCE_DIR}/apps/${item}
        BINARY_DIR
        ${CMAKE_CURRENT_BINARY_DIR}/${item}
        INSTALL_COMMAND
        ""
        BUILD_ALWAYS
        ON
        EXCLUDE_FROM_ALL
        CMAKE_ARGS
        -DCMAKE_C_COMPILER=${CMAKE_C_COMPILER}
        -DSB_Type_Library_DIR=${CMAKE_CURRENT_SOURCE_DIR}/../../types
        -DCMAKE_C_FLAGS=${BASE_C_FLAGS}
    )

    AddExternalProjFilesToOverlay(
        ${item}
        ${CMAKE_CURRENT_BINARY_DIR}/${item}
        overlay
        "usr/bin"
        FILES
        ${item}
    )
endforeach()

Message("Done compiling CrossVM Event Apps for vmdst_process")


# Overwrite inittab file for using the virtio console hvc0.
AddFileToOverlayDir(
    "inittab"
    ${CMAKE_CURRENT_SOURCE_DIR}/overlay_files/init_scripts/inittab_hvc0
    "etc"
    overlay
)

# Use initrd with crossvm kernel module and setup already included.
# Construct new rootfs
AddOverlayDirToRootfs(
    overlay
    ${rootfs_file}
    "buildroot"
    "rootfs_install"
    output_overlayed_rootfs_location
    rootfs_target
    GZIP
)

AddToFileServer("linux-initrd-vm-client" ${output_overlayed_rootfs_location} DEPENDS rootfs_target)

# Add linux kernel image to file server
AddToFileServer("linux" "${CAMKES_VM_IMAGES_DIR}/${KernelARMPlatform}/linux")

DefineCAmkESVMFileServer()

CAmkESAddImportPath(${CMAKE_CURRENT_SOURCE_DIR}/${KernelARMPlatform}/)

# Define our VM Component with our cross vm dataports glue code
DeclareCamkesARMVM(
  VM_consumer_t_impl
  EXTRA_LIBS SB_Type_Library)

CAmkESAddCPPInclude(${CAMKES_ARM_VM_DIR}/components/VM)