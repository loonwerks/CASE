#include <sb_PROC_HW_types.h>
#include <assert.h>
#include <all.h>
#include <sb_RadioDriver_Impl.h>
#include <ipc.h>

// RADIO.recv_map -> FPLN.recv_map
void FPLN_mission_map_callback(ACT_Demo_Dec2018__camkes_X_SW_Command_Impl_Payload d) {
  // convert slang type to camkes type
  struct IS_5D0BE7 is = d->value.theMap.value;
  SW__Command_Impl sw_command = {
    .Pattern = (SW__FlightPattern) d->value.Pattern,
    .HMAC = (bool) d->value.HMAC
  };

  for(int i = 0; i < 4; i++) {
    SW__Coordinate_Impl c0 = {is.value[i].lat, is.value[i].longitude, is.value[i].alt};
    sw_command.Map[i] = c0;
  }

  // send to FPLN via camkes
  sb_recv_map_out_enqueue(&sw_command);
}

void init(const int64_t * in_arg) {
  //printf("FPLN: init called\n");

  int seed = 1;
  StackFrame dummysf;

  // initialize slang-embedded component/ports
  ACT_Demo_Dec2018__camkes_X_RadioDriver_Impl_App_initialise(dummysf, seed);

  // fetch slang-embedded port ids

  // callbacks when ART sends on RADIO's outgoing ports
  ipc_registerCallback(ACT_Demo_Dec2018__camkes_X_RadioDriver_Impl_App_FPLN_receive_map(dummysf) + seed,
    (ipcCallbackType) FPLN_mission_map_callback);

  // call the component's initialise entrypoint
  art_Bridge_EntryPoints_initialise_(dummysf, ACT_Demo_Dec2018__camkes_X_RadioDriver_Impl_App_entryPoints(dummysf));
}