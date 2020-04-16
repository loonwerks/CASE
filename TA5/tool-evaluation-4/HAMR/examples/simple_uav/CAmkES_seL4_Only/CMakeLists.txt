cmake_minimum_required(VERSION 3.8.2)

project (UAV_Impl_Instance C)

add_definitions(-DCAMKES)

DeclareCAmkESComponent(RadioDriver_Impl
  SOURCES components/RadioDriver_Impl//src/radiodriver.c components/RadioDriver_Impl/src/sb_RadioDriver_Impl.c includes/sb_queue_SW__Command_Impl_1.c
  INCLUDES components/RadioDriver_Impl/includes/ includes

)

DeclareCAmkESComponent(FlightPlanner_Impl
  SOURCES components/FlightPlanner_Impl//src/flightplanner.c components/FlightPlanner_Impl/src/sb_FlightPlanner_Impl.c includes/sb_queue_sb_SW__Mission_container_1.c includes/sb_queue_bool_1.c includes/sb_queue_SW__Command_Impl_1.c
  INCLUDES components/FlightPlanner_Impl/includes/ includes

)

DeclareCAmkESComponent(WaypointManager_Impl
  SOURCES components/WaypointManager_Impl//src/waypointmanager.c components/WaypointManager_Impl/src/sb_WaypointManager_Impl.c includes/sb_queue_sb_SW__Mission_container_1.c includes/sb_queue_bool_1.c includes/sb_queue_sb_SW__MissionWindow_container_1.c includes/sb_queue_int64_t_1.c
  INCLUDES components/WaypointManager_Impl/includes/ includes

)

DeclareCAmkESComponent(UARTDriver_Impl
  SOURCES components/UARTDriver_Impl//src/uartdriver.c components/UARTDriver_Impl/src/sb_UARTDriver_Impl.c includes/sb_queue_sb_SW__MissionWindow_container_1.c includes/sb_queue_int64_t_1.c
  INCLUDES components/UARTDriver_Impl/includes/ includes

)

DeclareCAmkESRootserver(UAV_Impl_Instance.camkes)
