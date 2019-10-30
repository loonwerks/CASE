#include "../includes/sb_RadioDriver_Impl.h"
#include "../../../aux_code/conversions.h"
#include <all.h>
#include <ipc.h>
#include <string.h>
#include <camkes.h>

int32_t UAV_Impl_Instance_MCMP_PROC_SW_FPLN_recv_map_id;

/************************************************************************
 * sb_recv_map_out_enqueue:
 * Invoked from user code in the local thread.
 *
 * This is the function invoked by the local thread to make a
 * call to write to a remote data port.
 *
 * XXX: When simulating fan out, the caller of this function will only
 * receive a positive response when all enqueues are successful. When a
 * negative response is received it only indicates that at least one
 * enqueue attempt failed.
 *
 ************************************************************************/
bool sb_recv_map_out_enqueue(const SW__Command_Impl * sb_recv_map_out){
  bool sb_result = true;
  sb_result &= sb_recv_map_out0_enqueue((SW__Command_Impl *) sb_recv_map_out);
  return sb_result;
}

void camkes_sendAsync(Z port, art_DataContent d) {
  if(port == UAV_Impl_Instance_MCMP_PROC_SW_FPLN_recv_map_id) {
    uav_project_extern_SW_Command_Impl_Payload payload = (uav_project_extern_SW_Command_Impl_Payload) d;

    // convert Slang type to CAmkES type
    SW__Command_Impl val;
    convertTo_SW__Command_Impl(payload, &val);

    // deliver payload via CAmkES
    sb_recv_map_out_enqueue(&val);
  }
  else {
    printf("RadioDriver_Impl camkes_sendAsync: not expecting port id %i\n", port);
  }
}


void transferIncomingDataToArt() {
}


void pre_init(void) {

  // initialise slang-embedded components/ports
  uav_project_extern_RadioDriver_Impl_App_initialise(SF seed);

  // fetch assigned port ids
  UAV_Impl_Instance_MCMP_PROC_SW_FPLN_recv_map_id = uav_project_extern_Arch_UAV_Impl_Instance_MCMP_PROC_SW_FPLN(SF)->recv_map.id + seed;

  // call the component's initialise entrypoint
  art_Bridge_EntryPoints_initialise_(SF uav_project_extern_RadioDriver_Impl_App_entryPoints(SF));

}

/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {

  for(;;) {
    MUTEXOP(sb_dispatch_sem_wait())

    transferIncomingDataToArt();

    uav_project_extern_RadioDriver_Impl_App_compute(SF);
  }
  return 0;
}
