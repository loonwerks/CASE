cmake_minimum_required(VERSION 3.8.2)

project (PROC_SW C)


set(cSources "")
set(cIncludes "aux/includes")

# [2019/09/13:JCC] These source files are coppies of
# files with the same name in the component dirs. The result of adding them to
# the cSource list adds them to all components. These leads to complier
# errors. I just commented these out for now and it builds cleanly.
#list(APPEND cSources aux/src/uartdriver.c)
#list(APPEND cSources aux/src/waypointmanager.c)
#list(APPEND cSources aux/src/flightplanner.c)
#list(APPEND cSources aux/src/radiodriver.c)

DeclareCAmkESComponent(RadioDriver_Impl
  SOURCES ${cSources} components/RadioDriver_Impl//src/radiodriver.c components/RadioDriver_Impl/src/sb_RadioDriver_Impl.c
  INCLUDES ${cIncludes} components/RadioDriver_Impl/includes/ includes
)

DeclareCAmkESComponent(FlightPlanner_Impl
  SOURCES ${cSources} components/FlightPlanner_Impl//src/flightplanner.c components/FlightPlanner_Impl/src/sb_FlightPlanner_Impl.c
  INCLUDES ${cIncludes} components/FlightPlanner_Impl/includes/ includes
)

DeclareCAmkESComponent(WaypointManager_Impl
  SOURCES ${cSources} components/WaypointManager_Impl//src/waypointmanager.c components/WaypointManager_Impl/src/sb_WaypointManager_Impl.c
  INCLUDES ${cIncludes} components/WaypointManager_Impl/includes/ includes
)

DeclareCAmkESComponent(UARTDriver_Impl
  SOURCES ${cSources} components/UARTDriver_Impl//src/uartdriver.c components/UARTDriver_Impl/src/sb_UARTDriver_Impl.c
  INCLUDES ${cIncludes} components/UARTDriver_Impl/includes/ includes
)

DeclareCAmkESComponent(sb_WPM_tracking_id_Monitor
  SOURCES ${cSources} components/sb_Monitors/sb_WPM_tracking_id_Monitor/src/sb_WPM_tracking_id_Monitor.c
  INCLUDES ${cIncludes} components/sb_Monitors/sb_WPM_tracking_id_Monitor/includes/ includes
)

DeclareCAmkESComponent(sb_FPLN_recv_map_Monitor
  SOURCES ${cSources} components/sb_Monitors/sb_FPLN_recv_map_Monitor/src/sb_FPLN_recv_map_Monitor.c
  INCLUDES ${cIncludes} components/sb_Monitors/sb_FPLN_recv_map_Monitor/includes/ includes
)

DeclareCAmkESComponent(sb_WPM_flight_plan_Monitor
  SOURCES ${cSources} components/sb_Monitors/sb_WPM_flight_plan_Monitor/src/sb_WPM_flight_plan_Monitor.c
  INCLUDES ${cIncludes} components/sb_Monitors/sb_WPM_flight_plan_Monitor/includes/ includes
)

DeclareCAmkESComponent(sb_UART_mission_window_Monitor
  SOURCES ${cSources} components/sb_Monitors/sb_UART_mission_window_Monitor/src/sb_UART_mission_window_Monitor.c
  INCLUDES ${cIncludes} components/sb_Monitors/sb_UART_mission_window_Monitor/includes/ includes
)

DeclareCAmkESComponent(sb_FPLN_mission_rcv_Monitor
  SOURCES ${cSources} components/sb_Monitors/sb_FPLN_mission_rcv_Monitor/src/sb_FPLN_mission_rcv_Monitor.c
  INCLUDES ${cIncludes} components/sb_Monitors/sb_FPLN_mission_rcv_Monitor/includes/ includes
)

DeclareCAmkESRootserver(PROC_SW.camkes)
