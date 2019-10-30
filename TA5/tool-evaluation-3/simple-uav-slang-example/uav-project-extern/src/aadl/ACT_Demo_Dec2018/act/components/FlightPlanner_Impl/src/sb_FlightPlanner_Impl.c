#include "../includes/sb_FlightPlanner_Impl.h"
#include "../../../aux_code/conversions.h"
#include <all.h>
#include <ipc.h>
#include <string.h>
#include <camkes.h>

int32_t recv_map_id;

int32_t mission_rcv_id;

int32_t UAV_Impl_Instance_MCMP_PROC_SW_WPM_flight_plan_id;

static void sb_mission_rcv_notification_handler(void * unused) {
  MUTEXOP(sb_dispatch_sem_post())
  CALLBACKOP(sb_mission_rcv_notification_reg_callback(sb_mission_rcv_notification_handler, NULL));
}

static void sb_recv_map_notification_handler(void * unused) {
  MUTEXOP(sb_dispatch_sem_post())
  CALLBACKOP(sb_recv_map_notification_reg_callback(sb_recv_map_notification_handler, NULL));
}

/************************************************************************
 * sb_flight_plan_enqueue:
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
bool sb_flight_plan_enqueue(const sb_SW__Mission_container * sb_flight_plan){
  bool sb_result = true;
  sb_result &= sb_flight_plan0_enqueue((sb_SW__Mission_container *) sb_flight_plan);
  return sb_result;
}

void camkes_sendAsync(Z port, art_DataContent d) {
  if(port == UAV_Impl_Instance_MCMP_PROC_SW_WPM_flight_plan_id) {
    uav_project_extern_SW_Mission_Payload payload = (uav_project_extern_SW_Mission_Payload) d;

    // convert Slang type to CAmkES type
    sb_SW__Mission_container val;
    convertTo_sb_SW__Mission_container(payload, &val);

    // deliver payload via CAmkES
    sb_flight_plan_enqueue(&val);
  }
  else {
    printf("FlightPlanner_Impl camkes_sendAsync: not expecting port id %i\n", port);
  }
}


void transferIncomingDataToArt() {
  {
    bool val;
    while(sb_mission_rcv_dequeue((bool *) &val)){
      // convert to slang payload
      DeclNewuav_project_extern_Base_Types_Boolean_Payload(payload);
      convertTo_uav_project_extern_Base_Types_Boolean_Payload(val, &payload);

      // deliver payload via ART
      camkes_In_Port_Data_Transfer(mission_rcv_id, (art_DataContent) &payload);
    }
  }

  {
    SW__Command_Impl val;
    while(sb_recv_map_dequeue((SW__Command_Impl *) &val)){
      // convert to slang payload
      DeclNewuav_project_extern_SW_Command_Impl_Payload(payload);
      convertTo_uav_project_extern_SW_Command_Impl_Payload(val, &payload);

      // deliver payload via ART
      camkes_In_Port_Data_Transfer(recv_map_id, (art_DataContent) &payload);
    }
  }

}


void pre_init(void) {
  CALLBACKOP(sb_mission_rcv_notification_reg_callback(sb_mission_rcv_notification_handler, NULL));
  CALLBACKOP(sb_recv_map_notification_reg_callback(sb_recv_map_notification_handler, NULL));

  // initialise slang-embedded components/ports
  uav_project_extern_FlightPlanner_Impl_App_initialise(SF seed);

  // fetch assigned port ids
  UAV_Impl_Instance_MCMP_PROC_SW_WPM_flight_plan_id = uav_project_extern_Arch_UAV_Impl_Instance_MCMP_PROC_SW_WPM(SF)->flight_plan.id + seed;
  mission_rcv_id = uav_project_extern_Arch_UAV_Impl_Instance_MCMP_PROC_SW_FPLN(SF)->mission_rcv.id + seed;
  recv_map_id = uav_project_extern_Arch_UAV_Impl_Instance_MCMP_PROC_SW_FPLN(SF)->recv_map.id + seed;

  // call the component's initialise entrypoint
  art_Bridge_EntryPoints_initialise_(SF uav_project_extern_FlightPlanner_Impl_App_entryPoints(SF));

}

/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {

  for(;;) {
    MUTEXOP(sb_dispatch_sem_wait())

    transferIncomingDataToArt();

    uav_project_extern_FlightPlanner_Impl_App_compute(SF);
  }
  return 0;
}
