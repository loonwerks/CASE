#include "../includes/sb_WaypointManager_Impl.h"
#include "../../../aux_code/conversions.h"
#include <all.h>
#include <ipc.h>
#include <string.h>
#include <camkes.h>

int32_t tracking_id_id;

int32_t flight_plan_id;

int32_t UAV_Impl_Instance_MCMP_PROC_SW_UART_mission_window_id;

int32_t UAV_Impl_Instance_MCMP_PROC_SW_FPLN_mission_rcv_id;

static void sb_flight_plan_notification_handler(void * unused) {
  MUTEXOP(sb_dispatch_sem_post())
  CALLBACKOP(sb_flight_plan_notification_reg_callback(sb_flight_plan_notification_handler, NULL));
}

static void sb_tracking_id_notification_handler(void * unused) {
  MUTEXOP(sb_dispatch_sem_post())
  CALLBACKOP(sb_tracking_id_notification_reg_callback(sb_tracking_id_notification_handler, NULL));
}

/************************************************************************
 * sb_mission_rcv_enqueue:
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
bool sb_mission_rcv_enqueue(const bool * sb_mission_rcv){
  bool sb_result = true;
  sb_result &= sb_mission_rcv0_enqueue((bool *) sb_mission_rcv);
  return sb_result;
}

/************************************************************************
 * sb_mission_window_enqueue:
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
bool sb_mission_window_enqueue(const sb_SW__MissionWindow_container * sb_mission_window){
  bool sb_result = true;
  sb_result &= sb_mission_window0_enqueue((sb_SW__MissionWindow_container *) sb_mission_window);
  return sb_result;
}

void camkes_sendAsync(Z port, art_DataContent d) {
  if(port == UAV_Impl_Instance_MCMP_PROC_SW_FPLN_mission_rcv_id) {
    uav_project_extern_Base_Types_Boolean_Payload payload = (uav_project_extern_Base_Types_Boolean_Payload) d;

    // convert Slang type to CAmkES type
    bool val;
    convertTo_bool(payload, &val);

    // deliver payload via CAmkES
    sb_mission_rcv_enqueue(&val);
  }
  else if(port == UAV_Impl_Instance_MCMP_PROC_SW_UART_mission_window_id) {
    uav_project_extern_SW_MissionWindow_Payload payload = (uav_project_extern_SW_MissionWindow_Payload) d;

    // convert Slang type to CAmkES type
    sb_SW__MissionWindow_container val;
    convertTo_sb_SW__MissionWindow_container(payload, &val);

    // deliver payload via CAmkES
    sb_mission_window_enqueue(&val);
  }
  else {
    printf("WaypointManager_Impl camkes_sendAsync: not expecting port id %i\n", port);
  }
}


void transferIncomingDataToArt() {
  {
    sb_SW__Mission_container val;
    while(sb_flight_plan_dequeue((sb_SW__Mission_container *) &val)){
      // convert to slang payload
      DeclNewuav_project_extern_SW_Mission_Payload(payload);
      convertTo_uav_project_extern_SW_Mission_Payload(val, &payload);

      // deliver payload via ART
      camkes_In_Port_Data_Transfer(flight_plan_id, (art_DataContent) &payload);
    }
  }

  {
    int64_t val;
    while(sb_tracking_id_dequeue((int64_t *) &val)){
      // convert to slang payload
      DeclNewuav_project_extern_Base_Types_Integer_64_Payload(payload);
      convertTo_uav_project_extern_Base_Types_Integer_64_Payload(val, &payload);

      // deliver payload via ART
      camkes_In_Port_Data_Transfer(tracking_id_id, (art_DataContent) &payload);
    }
  }

}


void pre_init(void) {
  CALLBACKOP(sb_flight_plan_notification_reg_callback(sb_flight_plan_notification_handler, NULL));
  CALLBACKOP(sb_tracking_id_notification_reg_callback(sb_tracking_id_notification_handler, NULL));

  // initialise slang-embedded components/ports
  uav_project_extern_WaypointManager_Impl_App_initialise(SF seed);

  // fetch assigned port ids
  UAV_Impl_Instance_MCMP_PROC_SW_FPLN_mission_rcv_id = uav_project_extern_Arch_UAV_Impl_Instance_MCMP_PROC_SW_FPLN(SF)->mission_rcv.id + seed;
  UAV_Impl_Instance_MCMP_PROC_SW_UART_mission_window_id = uav_project_extern_Arch_UAV_Impl_Instance_MCMP_PROC_SW_UART(SF)->mission_window.id + seed;
  flight_plan_id = uav_project_extern_Arch_UAV_Impl_Instance_MCMP_PROC_SW_WPM(SF)->flight_plan.id + seed;
  tracking_id_id = uav_project_extern_Arch_UAV_Impl_Instance_MCMP_PROC_SW_WPM(SF)->tracking_id.id + seed;

  // call the component's initialise entrypoint
  art_Bridge_EntryPoints_initialise_(SF uav_project_extern_WaypointManager_Impl_App_entryPoints(SF));

}

/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {

  for(;;) {
    MUTEXOP(sb_dispatch_sem_wait())

    transferIncomingDataToArt();

    uav_project_extern_WaypointManager_Impl_App_compute(SF);
  }
  return 0;
}
