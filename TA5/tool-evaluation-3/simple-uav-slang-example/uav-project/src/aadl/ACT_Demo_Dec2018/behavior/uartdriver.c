#include <sb_PROC_HW_types.h>
#include <assert.h>
#include <stdio.h>
#include <all.h>
#include <sb_UARTDriver_Impl.h>
#include <ipc.h>

static int slang_in_event_data_port_UART_mission_window = -1;

void WPM_tracking_id_callback(ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64_Payload d) {
  int64_t val = d->value.value;

  sb_tracking_id_enqueue(&val);
}

void init(const int64_t * in_arg) {
  int seed = 1;
  StackFrame dummysf;

  // initialize slang-embedded component/ports
  ACT_Demo_Dec2018__camkes_X_UARTDriver_Impl_App_initialise(dummysf, seed);

  // fetch slang-embedded incoming port ids
  slang_in_event_data_port_UART_mission_window = ACT_Demo_Dec2018__camkes_X_UARTDriver_Impl_App_mission_windowPortId(dummysf) + seed;

  // callbacks when ART sends on UART's outgoing ports
  ipc_registerCallback(ACT_Demo_Dec2018__camkes_X_UARTDriver_Impl_App_WPM_tracking_idPortId(dummysf) + seed,
    (ipcCallbackType) WPM_tracking_id_callback);

  // call the component's initialise entrypoint
  art_Bridge_EntryPoints_initialise_(dummysf, ACT_Demo_Dec2018__camkes_X_UARTDriver_Impl_App_entryPoints(dummysf));
}

void mission_window(const sb_SW__MissionWindow_container * missionWindow){
  StackFrame dummysf;

  // convert camkes MisisonWindow type to slang MissionWindow type
  DeclNewIS_5D0BE7(is);
  is.size = (int8_t) 4;

  for(int i = 0; i < 4; i++) {
    DeclNewACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl(c0);
    ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl_apply(dummysf, &c0, missionWindow->f[i].lat, missionWindow->f[i].longitude, missionWindow->f[i].alt);
    Type_assign(&is.value[i], &c0, sizeof(struct ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl));
  }

  DeclNewACT_Demo_Dec2018__camkes_X_SW_MissionWindow(slang_mission_window);
  ACT_Demo_Dec2018__camkes_X_SW_MissionWindow_apply(dummysf, &slang_mission_window, (IS_5D0BE7) (&is));


  // create slang-embedded payload
  DeclNewACT_Demo_Dec2018__camkes_X_SW_MissionWindow_Payload(slang_mission_window_payload);
  ACT_Demo_Dec2018__camkes_X_SW_MissionWindow_Payload_apply(dummysf, &slang_mission_window_payload, &slang_mission_window);

  // deliver payload via ipc.c - might be able to use ipc's sendAsync
  camkes_In_Port_Data_Transfer(slang_in_event_data_port_UART_mission_window,
    (art_DataContent) &slang_mission_window_payload);

  // call the app's compute
  ACT_Demo_Dec2018__camkes_X_UARTDriver_Impl_App_compute(dummysf);

}
