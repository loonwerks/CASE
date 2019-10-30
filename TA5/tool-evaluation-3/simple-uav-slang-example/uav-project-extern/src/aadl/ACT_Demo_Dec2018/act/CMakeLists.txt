cmake_minimum_required(VERSION 3.8.2)

project (PROC_SW C)

execute_process(COMMAND bash -c "${CMAKE_CURRENT_LIST_DIR}/compile-hamr-lib.sh")

set(HAMR_LIB ${CMAKE_CURRENT_LIST_DIR}/hamr/sel4-build/libmain.a)

set(HAMR_INCLUDES
  hamr/ext
  hamr/runtime
  hamr/library/org/sireum
  hamr/library/org/sireum/conversions
  hamr/library/uav_project_extern
  hamr/library/uav_project_extern/Base_Types
  hamr/library/uav_project_extern/SW
  hamr/library/uav_project_extern/SW/UARTDriver_Impl_Bridge
  hamr/library/uav_project_extern/SW/RadioDriver_Impl_Bridge
  hamr/library/uav_project_extern/SW/FlightPlanner_Impl_Bridge
  hamr/library/uav_project_extern/SW/WaypointManager_Impl_Bridge
  hamr/library/art
  hamr/library/art/Bridge
  hamr/library/art/DispatchPropertyProtocol
)

set(AUX_C_SOURCES aux_code/conversions.c)
set(AUX_C_INCLUDES aux_code)

DeclareCAmkESComponent(RadioDriver_Impl
  SOURCES ${AUX_C_SOURCES} components/RadioDriver_Impl/src/sb_RadioDriver_Impl.c includes/ipc.c
  INCLUDES ${AUX_C_INCLUDES} ${HAMR_INCLUDES} components/RadioDriver_Impl/includes/ includes
  LIBS ${HAMR_LIB}
)

DeclareCAmkESComponent(FlightPlanner_Impl
  SOURCES ${AUX_C_SOURCES} components/FlightPlanner_Impl/src/sb_FlightPlanner_Impl.c includes/ipc.c
  INCLUDES ${AUX_C_INCLUDES} ${HAMR_INCLUDES} components/FlightPlanner_Impl/includes/ includes
  LIBS ${HAMR_LIB}
)

DeclareCAmkESComponent(WaypointManager_Impl
  SOURCES ${AUX_C_SOURCES} components/WaypointManager_Impl/src/sb_WaypointManager_Impl.c includes/ipc.c
  INCLUDES ${AUX_C_INCLUDES} ${HAMR_INCLUDES} components/WaypointManager_Impl/includes/ includes
  LIBS ${HAMR_LIB}
)

DeclareCAmkESComponent(UARTDriver_Impl
  SOURCES ${AUX_C_SOURCES} components/UARTDriver_Impl/src/sb_UARTDriver_Impl.c includes/ipc.c
  INCLUDES ${AUX_C_INCLUDES} ${HAMR_INCLUDES} components/UARTDriver_Impl/includes/ includes
  LIBS ${HAMR_LIB}
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
