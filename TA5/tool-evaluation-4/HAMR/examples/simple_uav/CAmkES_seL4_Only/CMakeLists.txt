# This file will be regenerated, do not edit

cmake_minimum_required(VERSION 3.8.2)

project (UAV_Impl_Instance C)

add_definitions(-DCAMKES)

if ("${CMAKE_CXX_COMPILER_ID}" MATCHES "(C|c?)lang")
  add_compile_options("$<$<CONFIG:Release>:-Oz>")
elseif ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")
  add_compile_options(-fstack-usage)
  add_compile_options("$<$<CONFIG:Release>:-Os>")
endif()

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/types)

DeclareCAmkESComponent(RadioDriver_Impl_MCMP_PROC_SW_RADIO
  SOURCES components/RadioDriver_Impl_MCMP_PROC_SW_RADIO//src/radiodriver.c components/RadioDriver_Impl_MCMP_PROC_SW_RADIO/src/sb_RadioDriver_Impl.c types/src/sb_queue_SW__Command_Impl_1.c
  INCLUDES components/RadioDriver_Impl_MCMP_PROC_SW_RADIO/includes/ types/includes
)

DeclareCAmkESComponent(FlightPlanner_Impl_MCMP_PROC_SW_FPLN
  SOURCES components/FlightPlanner_Impl_MCMP_PROC_SW_FPLN//src/flightplanner.c components/FlightPlanner_Impl_MCMP_PROC_SW_FPLN/src/sb_FlightPlanner_Impl.c types/src/sb_queue_sb_SW__Mission_container_1.c types/src/sb_queue_bool_1.c types/src/sb_queue_SW__Command_Impl_1.c
  INCLUDES components/FlightPlanner_Impl_MCMP_PROC_SW_FPLN/includes/ types/includes
)

DeclareCAmkESComponent(WaypointManager_Impl_MCMP_PROC_SW_WPM
  SOURCES components/WaypointManager_Impl_MCMP_PROC_SW_WPM//src/waypointmanager.c components/WaypointManager_Impl_MCMP_PROC_SW_WPM/src/sb_WaypointManager_Impl.c types/src/sb_queue_sb_SW__Mission_container_1.c types/src/sb_queue_bool_1.c types/src/sb_queue_sb_SW__MissionWindow_container_1.c types/src/sb_queue_int64_t_1.c
  INCLUDES components/WaypointManager_Impl_MCMP_PROC_SW_WPM/includes/ types/includes
)

DeclareCAmkESComponent(UARTDriver_Impl_MCMP_PROC_SW_UART
  SOURCES components/UARTDriver_Impl_MCMP_PROC_SW_UART//src/uartdriver.c components/UARTDriver_Impl_MCMP_PROC_SW_UART/src/sb_UARTDriver_Impl.c types/src/sb_queue_sb_SW__MissionWindow_container_1.c types/src/sb_queue_int64_t_1.c
  INCLUDES components/UARTDriver_Impl_MCMP_PROC_SW_UART/includes/ types/includes
)

DeclareCAmkESRootserver(UAV_Impl_Instance.camkes)
