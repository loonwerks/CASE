#include <camkes.h>
#include <stdio.h>
#include <sb_PROC_HW_types.h>
#include <assert.h>
#include <all.h>
#include <sb_FlightPlanner_Impl.h>
#include <ipc.h>

static int slang_in_event_data_port_FPLN_mission_rcv = -1;
static int slang_in_event_data_port_FPLN_recv_map = -1;

// FPLN.flight_plan -> WPM.flight_plan
void WPM_flight_plan_callback(ACT_Demo_Dec2018__camkes_X_SW_Mission_Payload d) {
  // convert slang type to camkes type
  struct IS_5D0BE7 coords = d->value.value;

  sb_SW__Mission_container flight_plan;
  for(int i = 0; i < 10; i++) {
    SW__Coordinate_Impl c0 = {coords.value[i].lat, coords.value[i].longitude, coords.value[i].alt};
    flight_plan.f[i] = c0;
  }

  // send to WPM via camkes
  sb_flight_plan_enqueue(&flight_plan);
}

void init(const int64_t * __unused__) {

  int seed = 1;
  StackFrame dummysf;

  // initialize slang-embedded component/ports
  ACT_Demo_Dec2018__camkes_X_FlightPlanner_Impl_App_initialise(dummysf, seed);

  // fetch slang-embedded port ids
  slang_in_event_data_port_FPLN_mission_rcv = ACT_Demo_Dec2018__camkes_X_FlightPlanner_Impl_App_mission_rcvPortId(dummysf) + seed;
  slang_in_event_data_port_FPLN_recv_map = ACT_Demo_Dec2018__camkes_X_FlightPlanner_Impl_App_recv_mapPortId(dummysf) + seed;

  // callbacks when ART sends on WPM's outgoing ports
  ipc_registerCallback(ACT_Demo_Dec2018__camkes_X_FlightPlanner_Impl_App_WPM_flight_plan(dummysf) + seed,
    (ipcCallbackType) WPM_flight_plan_callback);

  // call the component's initialise entrypoint
  art_Bridge_EntryPoints_initialise_(dummysf, ACT_Demo_Dec2018__camkes_X_FlightPlanner_Impl_App_entryPoints(dummysf));
}

void recv_map(const SW__Command_Impl * command) {

  StackFrame dummysf;

  // convert camkes type to slang payload
  DeclNewIS_5D0BE7(is);
  is.size = (int8_t) 4;

  for(int i = 0; i < 4; i++){
    DeclNewACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl(c0);
    ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl_apply(dummysf, &c0, command->Map[i].lat, command->Map[i].longitude, command->Map[i].alt);
    Type_assign(&is.value[i], &c0, sizeof(struct ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl));
  }

  DeclNewACT_Demo_Dec2018__camkes_X_SW_SW__Map(sw_map);
  ACT_Demo_Dec2018__camkes_X_SW_SW__Map_apply(dummysf, &sw_map, &is);

  ACT_Demo_Dec2018__camkes_X_SW_FlightPattern pattern = command->Pattern;

  bool HMAC = command->HMAC;

  DeclNewACT_Demo_Dec2018__camkes_X_SW_Command_Impl(slang_command);
  ACT_Demo_Dec2018__camkes_X_SW_Command_Impl_apply(dummysf, &slang_command, &sw_map, pattern, HMAC);

  DeclNewACT_Demo_Dec2018__camkes_X_SW_Command_Impl_Payload(slang_command_payload);
  ACT_Demo_Dec2018__camkes_X_SW_Command_Impl_Payload_apply(dummysf,
    (ACT_Demo_Dec2018__camkes_X_SW_Command_Impl_Payload) &slang_command_payload,
    (ACT_Demo_Dec2018__camkes_X_SW_Command_Impl) &slang_command);

  // deliver payload via ipc.c
  camkes_In_Port_Data_Transfer(slang_in_event_data_port_FPLN_recv_map,
    (art_DataContent) &slang_command_payload);

  // call the app's compute
  ACT_Demo_Dec2018__camkes_X_FlightPlanner_Impl_App_compute(dummysf);
}

void mission_rcv(const bool * arg) {

  StackFrame dummysf;

  // convert camkes type to slang payload
  DeclNewACT_Demo_Dec2018__camkes_X_Base_Types_Boolean(b);
  ACT_Demo_Dec2018__camkes_X_Base_Types_Boolean_apply(dummysf, &b, *arg);

  DeclNewACT_Demo_Dec2018__camkes_X_Base_Types_Boolean_Payload(b_payload);
  ACT_Demo_Dec2018__camkes_X_Base_Types_Boolean_Payload_apply(dummysf, &b_payload, &b);

  // deliver payload via ipc.c
  camkes_In_Port_Data_Transfer(slang_in_event_data_port_FPLN_mission_rcv,
    (art_DataContent) &b_payload);

  // call the app's compute
  ACT_Demo_Dec2018__camkes_X_FlightPlanner_Impl_App_compute(dummysf);
}