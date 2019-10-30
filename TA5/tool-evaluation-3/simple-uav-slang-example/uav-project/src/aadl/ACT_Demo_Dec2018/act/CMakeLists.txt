cmake_minimum_required(VERSION 3.8.2)

project (PROC_SW C)

add_definitions(-DCAMKES -DSIREUM_LOC)

set(SLANG_C_DIR $ENV{SLANG_C_DIR})

set(SLANG_LIB ${SLANG_C_DIR}/linux-camkes/libmain.a)

set(SLANG_INCLUDES
        ${SLANG_C_DIR}/runtime
        ${SLANG_C_DIR}/library/ACT_Demo_Dec2018__camkes_X
        ${SLANG_C_DIR}/library/art
        ${SLANG_C_DIR}/library/ACT_Demo_Dec2018__camkes_X/Base_Types
        ${SLANG_C_DIR}/library/ACT_Demo_Dec2018__camkes_X/MC
        ${SLANG_C_DIR}/library/ACT_Demo_Dec2018__camkes_X/MC/Radio_Impl_Bridge
        ${SLANG_C_DIR}/library/ACT_Demo_Dec2018__camkes_X/SW
        ${SLANG_C_DIR}/library/ACT_Demo_Dec2018__camkes_X/MC/UART_Impl_Bridge
        ${SLANG_C_DIR}/library/ACT_Demo_Dec2018__camkes_X/SW/FlightPlanner_Impl_Bridge
        ${SLANG_C_DIR}/library/ACT_Demo_Dec2018__camkes_X/SW/UARTDriver_Impl_Bridge
        ${SLANG_C_DIR}/library/art/DispatchPropertyProtocol
        ${SLANG_C_DIR}/library/org/sireum
        ${SLANG_C_DIR}/library/ACT_Demo_Dec2018__camkes_X/SW/WaypointManager_Impl_Bridge
        ${SLANG_C_DIR}/library/ACT_Demo_Dec2018__camkes_X/SW/RadioDriver_Impl_Bridge
        ${SLANG_C_DIR}/library/art/Bridge
        ${SLANG_C_DIR}/library/org/sireum/conversions
        ${SLANG_C_DIR}/ext
)

DeclareCAmkESComponent(RadioDriver_Impl
  SOURCES components/RadioDriver_Impl//src/radiodriver.c components/RadioDriver_Impl/src/sb_RadioDriver_Impl.c
  INCLUDES components/RadioDriver_Impl/includes/ includes
    ${SLANG_INCLUDES}
  LIBS ${SLANG_LIB}
)

DeclareCAmkESComponent(FlightPlanner_Impl
  SOURCES components/FlightPlanner_Impl//src/flightplanner.c components/FlightPlanner_Impl/src/sb_FlightPlanner_Impl.c
  INCLUDES components/FlightPlanner_Impl/includes/ includes
    ${SLANG_INCLUDES}
  LIBS ${SLANG_LIB}
)

DeclareCAmkESComponent(WaypointManager_Impl
  SOURCES components/WaypointManager_Impl//src/waypointmanager.c components/WaypointManager_Impl/src/sb_WaypointManager_Impl.c
  INCLUDES components/WaypointManager_Impl/includes/ includes
    ${SLANG_INCLUDES}
  LIBS ${SLANG_LIB}
)

DeclareCAmkESComponent(UARTDriver_Impl
  SOURCES components/UARTDriver_Impl//src/uartdriver.c components/UARTDriver_Impl/src/sb_UARTDriver_Impl.c
  INCLUDES components/UARTDriver_Impl/includes/ includes
    ${SLANG_INCLUDES}
  LIBS ${SLANG_LIB}
)

DeclareCAmkESComponent(sb_FPLN_mission_rcv_Monitor
  SOURCES components/sb_Monitors/sb_FPLN_mission_rcv_Monitor/src/sb_FPLN_mission_rcv_Monitor.c
  INCLUDES components/sb_Monitors/sb_FPLN_mission_rcv_Monitor/includes/ includes
)

DeclareCAmkESComponent(sb_WPM_tracking_id_Monitor
  SOURCES components/sb_Monitors/sb_WPM_tracking_id_Monitor/src/sb_WPM_tracking_id_Monitor.c
  INCLUDES components/sb_Monitors/sb_WPM_tracking_id_Monitor/includes/ includes
)

DeclareCAmkESComponent(sb_FPLN_recv_map_Monitor
  SOURCES components/sb_Monitors/sb_FPLN_recv_map_Monitor/src/sb_FPLN_recv_map_Monitor.c
  INCLUDES components/sb_Monitors/sb_FPLN_recv_map_Monitor/includes/ includes
)

DeclareCAmkESComponent(sb_UART_mission_window_Monitor
  SOURCES components/sb_Monitors/sb_UART_mission_window_Monitor/src/sb_UART_mission_window_Monitor.c
  INCLUDES components/sb_Monitors/sb_UART_mission_window_Monitor/includes/ includes
)

DeclareCAmkESComponent(sb_WPM_flight_plan_Monitor
  SOURCES components/sb_Monitors/sb_WPM_flight_plan_Monitor/src/sb_WPM_flight_plan_Monitor.c
  INCLUDES components/sb_Monitors/sb_WPM_flight_plan_Monitor/includes/ includes
)

DeclareCAmkESRootserver(PROC_SW.camkes)
