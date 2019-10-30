#include <camkes.h>
#include <stdio.h>
#include <assert.h>
#include <sb_PROC_HW_types.h>
#include <all.h>
#include <ipc.h>
#include <sb_WaypointManager_Impl.h>

static int slang_in_event_data_port_WPM_flight_plan_id = -1;
static int slang_in_event_data_port_WPM_tracking_id = -1;

// WPM.mission_rcv -> FPLN.mission_rcv
void FPLN_mission_rcv_callback(ACT_Demo_Dec2018__camkes_X_Base_Types_Boolean_Payload d) {
  // convert slang type to camkes type
  bool val = d->value.value;

  // send to FPLN via camkes
  sb_mission_rcv_enqueue(&val);
}

// WPM.mission_window -> UART.mission_window
void UART_mission_window_callback(ACT_Demo_Dec2018__camkes_X_SW_MissionWindow_Payload d) {
  // convert slang type to camkes type
  struct IS_5D0BE7 coords = d->value.value;
  sb_SW__MissionWindow_container mission_window;

  for(int i = 0; i < 4; i++) {
    SW__Coordinate_Impl c0 = {coords.value[i].lat, coords.value[i].longitude, coords.value[i].alt};
    mission_window.f[i] = c0;
  }

  // send to UART via camkes
  sb_mission_window_enqueue(&mission_window);
}

void init(const int64_t * __unused__) {

  int seed = 1;
  StackFrame dummysf;

  // initialize slang-embedded component/ports
  ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_initialise(dummysf, seed);

  // fetch slang-embedded port ids
  slang_in_event_data_port_WPM_flight_plan_id = ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_flight_planPortId(dummysf) + seed;
  slang_in_event_data_port_WPM_tracking_id = ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_tracking_idPortId(dummysf) + seed;

  // callbacks when ART sends on WPM's outgoing ports
  ipc_registerCallback(ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_FPLN_mission_rcvPortId(dummysf) + seed,
    (ipcCallbackType) FPLN_mission_rcv_callback);

  ipc_registerCallback(ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_UART_mission_windowPortId(dummysf) + seed,
    (ipcCallbackType) UART_mission_window_callback);

  // call the component's initialise entrypoint
  art_Bridge_EntryPoints_initialise_(dummysf, ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_entryPoints(dummysf));
}

// FPLN.flight_plan -> WPM.flight_plan
void flight_plan(const sb_SW__Mission_container * mission){

  StackFrame dummysf;

  // convert camkes mission to slang
  DeclNewIS_5D0BE7(is);
  is.size = (int8_t) 10;

  for(int i = 0; i < 10; i++) {
    DeclNewACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl(c0);
    ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl_apply(dummysf, &c0, mission->f[i].lat, mission->f[i].longitude, mission->f[i].alt);
    Type_assign(&is.value[i], &c0, sizeof(struct ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl));
  }

  DeclNewACT_Demo_Dec2018__camkes_X_SW_Mission(slang_mission);
  ACT_Demo_Dec2018__camkes_X_SW_Mission_apply(dummysf, &slang_mission, &is);


  // create slang-embedded payload
  DeclNewACT_Demo_Dec2018__camkes_X_SW_Mission_Payload(slang_mission_payload);
  ACT_Demo_Dec2018__camkes_X_SW_Mission_Payload_apply(dummysf,&slang_mission_payload, &slang_mission);

  // deliver payload via ipc.c
  camkes_In_Port_Data_Transfer(slang_in_event_data_port_WPM_flight_plan_id,
     (art_DataContent) &slang_mission_payload);

  // call the app's compute
  ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_compute(dummysf);
}

// UART.tracking_id -> WPM.tracking_id
void tracking_id(const int64_t * nid) {
  StackFrame dummysf;

  // convert camkes tracking id type to slang
  DeclNewACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64(tracking_id);
  ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64_apply(dummysf, &tracking_id, *nid);

  DeclNewACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64_Payload(tracking_id_payload);
  ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64_Payload_apply(dummysf, &tracking_id_payload, &tracking_id);

  // deliver payload via ipc.c
  camkes_In_Port_Data_Transfer(slang_in_event_data_port_WPM_tracking_id,
    (art_DataContent) &tracking_id_payload);

  // call the app's compute
  ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_compute(dummysf);
}