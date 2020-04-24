cmake_minimum_required(VERSION 3.8.2)

project (PROC_SW C)

add_definitions(-DCAMKES)

DeclareCAmkESComponent(UARTDriver_Impl
  SOURCES components/UARTDriver_Impl/src/sb_UARTDriver_Impl.c
  INCLUDES components/UARTDriver_Impl/includes/ includes

)

DeclareCAmkESComponent(RadioDriver_Impl
  SOURCES components/RadioDriver_Impl/src/sb_RadioDriver_Impl.c
  INCLUDES components/RadioDriver_Impl/includes/ includes

)

DeclareCAmkESComponent(Waterways_i
  SOURCES components/Waterways_i/src/sb_Waterways_i.c
  INCLUDES components/Waterways_i/includes/ includes

)

DeclareCAmkESComponent(FlyZonesDatabase_thr_Impl
  SOURCES components/FlyZonesDatabase_thr_Impl/src/sb_FlyZonesDatabase_thr_Impl.c
  INCLUDES components/FlyZonesDatabase_thr_Impl/includes/ includes

)

DeclareCAmkESComponent(WaypointPlanManagerService_i
  SOURCES components/WaypointPlanManagerService_i/src/sb_WaypointPlanManagerService_i.c
  INCLUDES components/WaypointPlanManagerService_i/includes/ includes

)

DeclareCAmkESComponent(sb_FC_UART_MissionCommand_Monitor
  SOURCES components/sb_Monitors/sb_FC_UART_MissionCommand_Monitor/src/sb_FC_UART_MissionCommand_Monitor.c
  INCLUDES components/sb_Monitors/sb_FC_UART_MissionCommand_Monitor/includes/ includes

)

DeclareCAmkESComponent(sb_FC_UART_MissionCommand_Monitor
  SOURCES components/sb_Monitors/sb_FC_UART_MissionCommand_Monitor/src/sb_FC_UART_MissionCommand_Monitor.c
  INCLUDES components/sb_Monitors/sb_FC_UART_MissionCommand_Monitor/includes/ includes

)

DeclareCAmkESComponent(sb_RADIO_AutomationResponse_Monitor
  SOURCES components/sb_Monitors/sb_RADIO_AutomationResponse_Monitor/src/sb_RADIO_AutomationResponse_Monitor.c
  INCLUDES components/sb_Monitors/sb_RADIO_AutomationResponse_Monitor/includes/ includes

)

DeclareCAmkESComponent(sb_UXAS_AirVehicleState_Monitor
  SOURCES components/sb_Monitors/sb_UXAS_AirVehicleState_Monitor/src/sb_UXAS_AirVehicleState_Monitor.c
  INCLUDES components/sb_Monitors/sb_UXAS_AirVehicleState_Monitor/includes/ includes

)

DeclareCAmkESComponent(sb_WPM_AirVehicleState_Monitor
  SOURCES components/sb_Monitors/sb_WPM_AirVehicleState_Monitor/src/sb_WPM_AirVehicleState_Monitor.c
  INCLUDES components/sb_Monitors/sb_WPM_AirVehicleState_Monitor/includes/ includes

)

DeclareCAmkESRootserver(PROC_SW.camkes)
