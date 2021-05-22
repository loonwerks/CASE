
cmake_minimum_required(VERSION 3.7.2)

project(CMASI C)

add_library(CMASI
    EXCLUDE_FROM_ALL
    src/conv.c
    src/lmcp.c
    src/AddressAttributedMessage.c
    src/AirVehicleState.c
    src/AutomationResponse.c
    src/EntityConfiguration.c
    src/EntityState.c
    src/KeyValuePair.c
    src/LineSearchTask.c
    src/Location3D.c
    src/MissionCommand.c
    src/PayloadAction.c
    src/PayloadConfiguration.c
    src/PayloadState.c
    src/SearchTask.c
    src/Task.c
    src/VehicleAction.c
    src/VehicleActionCommand.c
    src/Waypoint.c
    src/Wedge.c
    )

# Assume that if the muslc target exists then this project is in an seL4 native
# component build environment, otherwise it is in a linux userlevel environment.
# In the linux userlevel environment, the C library will be linked automatically.
if(TARGET muslc)
	target_link_libraries(CMASI muslc)
endif()

target_include_directories(CMASI PUBLIC include)
