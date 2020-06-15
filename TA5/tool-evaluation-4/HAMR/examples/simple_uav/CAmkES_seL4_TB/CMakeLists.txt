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

DeclareCAmkESComponent(RadioDriver_Impl
  SOURCES components/RadioDriver_Impl//src/radiodriver.c components/RadioDriver_Impl/src/sb_RadioDriver_Impl.c
  INCLUDES components/RadioDriver_Impl/includes/ types/includes
)

DeclareCAmkESComponent(FlightPlanner_Impl
  SOURCES components/FlightPlanner_Impl//src/flightplanner.c components/FlightPlanner_Impl/src/sb_FlightPlanner_Impl.c
  INCLUDES components/FlightPlanner_Impl/includes/ types/includes
)

DeclareCAmkESComponent(WaypointManager_Impl
  SOURCES components/WaypointManager_Impl//src/waypointmanager.c components/WaypointManager_Impl/src/sb_WaypointManager_Impl.c
  INCLUDES components/WaypointManager_Impl/includes/ types/includes
)

DeclareCAmkESComponent(UARTDriver_Impl
  SOURCES components/UARTDriver_Impl//src/uartdriver.c components/UARTDriver_Impl/src/sb_UARTDriver_Impl.c
  INCLUDES components/UARTDriver_Impl/includes/ types/includes
)

DeclareCAmkESComponent(sb_FPLN_recv_map_Monitor
  SOURCES components/sb_Monitors/sb_FPLN_recv_map_Monitor/src/sb_FPLN_recv_map_Monitor.c
  INCLUDES components/sb_Monitors/sb_FPLN_recv_map_Monitor/includes/ types/includes
)

DeclareCAmkESComponent(sb_WPM_flight_plan_Monitor
  SOURCES components/sb_Monitors/sb_WPM_flight_plan_Monitor/src/sb_WPM_flight_plan_Monitor.c
  INCLUDES components/sb_Monitors/sb_WPM_flight_plan_Monitor/includes/ types/includes
)

DeclareCAmkESComponent(sb_FPLN_mission_rcv_Monitor
  SOURCES components/sb_Monitors/sb_FPLN_mission_rcv_Monitor/src/sb_FPLN_mission_rcv_Monitor.c
  INCLUDES components/sb_Monitors/sb_FPLN_mission_rcv_Monitor/includes/ types/includes
)

DeclareCAmkESComponent(sb_UART_mission_window_Monitor
  SOURCES components/sb_Monitors/sb_UART_mission_window_Monitor/src/sb_UART_mission_window_Monitor.c
  INCLUDES components/sb_Monitors/sb_UART_mission_window_Monitor/includes/ types/includes
)

DeclareCAmkESComponent(sb_WPM_tracking_id_Monitor
  SOURCES components/sb_Monitors/sb_WPM_tracking_id_Monitor/src/sb_WPM_tracking_id_Monitor.c
  INCLUDES components/sb_Monitors/sb_WPM_tracking_id_Monitor/includes/ types/includes
)

DeclareCAmkESRootserver(UAV_Impl_Instance.camkes)
