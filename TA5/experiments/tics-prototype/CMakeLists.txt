# Copyright 2021, Adventium Labs

cmake_minimum_required(VERSION 3.7.2)

project(tics-prototype C)

# [2021/09/23:JCC] Needed for CAmkES TimeServer
includeGlobalComponents()

if(KernelArchARM)
    set(KernelArmExportPMUUser ON CACHE BOOL "" FORCE)
elseif(KernelArchX86)
    set(KernelExportPMCUser ON CACHE BOOL "" FORCE)
else()
    message("Unsupported platform.")
endif()

if(SIMULATION)
    ApplyCommonSimulationSettings(${KernelSel4Arch})
endif()

# [2021/09/24:JCC] Enable MCS
add_definitions(-DMCS=ON)

CAmkESAddTemplatesPath(templates)

DeclareCAmkESComponent(Task 
    SOURCES components/Task/src/Task.c port-types/sp_uintmax.c
    INCLUDES port-types
    LIBS sel4utils
    )

DeclareCAmkESComponent(VmTask 
    SOURCES components/VmTask/src/VmTask.c port-types/sp_uintmax.c port-types/sb_queue_int8_t_1.c
    INCLUDES port-types
    LIBS sel4utils
    )

DeclareCAmkESComponent(Tics 
    SOURCES components/Tics/src/Tics.c port-types/sb_queue_int8_t_1.c Tics-Prototype-Schedule.c 
    TEMPLATE_SOURCES tcb.template.c
    LIBS sel4utils sel4runtime
    INCLUDES templates components/Tics/src port-types
    )

DeclareCAmkESRootserver(tics-prototype.camkes)

