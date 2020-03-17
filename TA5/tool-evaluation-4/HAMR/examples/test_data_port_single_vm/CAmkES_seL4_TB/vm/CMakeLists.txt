
cmake_minimum_required(VERSION 3.8.2)

project(arm-vm C)

includeGlobalComponents()
find_package(camkes-vm REQUIRED)
find_package(camkes-vm-images REQUIRED)
find_package(camkes-arm-vm REQUIRED)
find_package(camkes-vm-linux REQUIRED)
camkes_arm_vm_import_project()

include(${CAMKES_VM_LINUX_HELPERS_PATH})
include(ExternalProject)
include(external-project-helpers)


# Complile CrossVM Event Apps receiver and sender
foreach(item IN ITEMS receiver sender)
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
        -DCMAKE_C_COMPILER=${CMAKE_C_COMPILER} -DQUEUE_LIB=${CMAKE_CURRENT_SOURCE_DIR}/../queue -DCMAKE_C_FLAGS=${BASE_C_FLAGS}
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

# Overwrite inittab file for using the virtio console hvc0.
AddFileToOverlayDir(
    "inittab"
    ${CMAKE_CURRENT_SOURCE_DIR}/overlay_files/init_scripts/inittab_hvc0
    "etc"
    overlay
)

# Use initrd with crossvm kernel module and setup already included.
set(rootfs_file "${CAMKES_VM_IMAGES_DIR}/${KernelARMPlatform}/rootfs_crossvm.cpio.gz")
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

# Define our VM Component with out cross vm dataports glue code
ExtendCAmkESComponentInstance(VM vmSender SOURCES src/cross_vm_connections_sender.c)

# Link the vm component against the queue library.
DeclareCAmkESComponent(VM LIBS queue)

CAmkESAddCPPInclude(${CAMKES_ARM_VM_DIR}/components/VM)

