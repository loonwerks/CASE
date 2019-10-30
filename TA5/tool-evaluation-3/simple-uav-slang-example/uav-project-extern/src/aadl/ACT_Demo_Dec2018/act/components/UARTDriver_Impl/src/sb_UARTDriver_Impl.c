#include "../includes/sb_UARTDriver_Impl.h"
#include "../../../aux_code/conversions.h"
#include <all.h>
#include <ipc.h>
#include <string.h>
#include <camkes.h>

int32_t mission_window_id;

int32_t UAV_Impl_Instance_MCMP_PROC_SW_WPM_tracking_id_id;

static void sb_mission_window_notification_handler(void * unused) {
  MUTEXOP(sb_dispatch_sem_post())
  CALLBACKOP(sb_mission_window_notification_reg_callback(sb_mission_window_notification_handler, NULL));
}

/************************************************************************
 * sb_tracking_id_enqueue:
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
bool sb_tracking_id_enqueue(const int64_t * sb_tracking_id){
  bool sb_result = true;
  sb_result &= sb_tracking_id0_enqueue((int64_t *) sb_tracking_id);
  return sb_result;
}

void camkes_sendAsync(Z port, art_DataContent d) {
  if(port == UAV_Impl_Instance_MCMP_PROC_SW_WPM_tracking_id_id) {
    uav_project_extern_Base_Types_Integer_64_Payload payload = (uav_project_extern_Base_Types_Integer_64_Payload) d;

    // convert Slang type to CAmkES type
    int64_t val;
    convertTo_int64_t(payload, &val);

    // deliver payload via CAmkES
    sb_tracking_id_enqueue(&val);
  }
  else {
    printf("UARTDriver_Impl camkes_sendAsync: not expecting port id %i\n", port);
  }
}


void transferIncomingDataToArt() {
  {
    sb_SW__MissionWindow_container val;
    while(sb_mission_window_dequeue((sb_SW__MissionWindow_container *) &val)){
      // convert to slang payload
      DeclNewuav_project_extern_SW_MissionWindow_Payload(payload);
      convertTo_uav_project_extern_SW_MissionWindow_Payload(val, &payload);

      // deliver payload via ART
      camkes_In_Port_Data_Transfer(mission_window_id, (art_DataContent) &payload);
    }
  }

}


void pre_init(void) {
  CALLBACKOP(sb_mission_window_notification_reg_callback(sb_mission_window_notification_handler, NULL));

  // initialise slang-embedded components/ports
  uav_project_extern_UARTDriver_Impl_App_initialise(SF seed);

  // fetch assigned port ids
  UAV_Impl_Instance_MCMP_PROC_SW_WPM_tracking_id_id = uav_project_extern_Arch_UAV_Impl_Instance_MCMP_PROC_SW_WPM(SF)->tracking_id.id + seed;
  mission_window_id = uav_project_extern_Arch_UAV_Impl_Instance_MCMP_PROC_SW_UART(SF)->mission_window.id + seed;

  // call the component's initialise entrypoint
  art_Bridge_EntryPoints_initialise_(SF uav_project_extern_UARTDriver_Impl_App_entryPoints(SF));

}

/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {

  for(;;) {
    MUTEXOP(sb_dispatch_sem_wait())

    transferIncomingDataToArt();

    uav_project_extern_UARTDriver_Impl_App_compute(SF);
  }
  return 0;
}
