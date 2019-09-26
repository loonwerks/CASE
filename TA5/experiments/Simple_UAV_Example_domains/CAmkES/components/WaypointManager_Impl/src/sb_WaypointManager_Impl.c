#include "../includes/sb_WaypointManager_Impl.h"
#include <string.h>
#include <camkes.h>

#include "sp_bool.h"
#include "sp_uintmax.h"
#include "sp_MissionWindow.h"
#include "sp_Mission.h"

// [2019/09/20:JCC]
// Sequence numbers for our sampling ports. Only functions in the sampling
// port interface should modify this.
seqNum_t mission_rcv_out_seqNum = 0;
seqNum_t mission_window_out_seqNum = 0;

// [2019/09/22:JCC] Replaced with sampling port
//static void sb_flight_plan_notification_handler(void * unused) {
//  MUTEXOP(sb_dispatch_sem_post())
//  CALLBACKOP(sb_flight_plan_notification_reg_callback(sb_flight_plan_notification_handler, NULL));
//}

/************************************************************************
 * sb_entrypointsb_WaypointManager_Impl_flight_plan:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void sb_entrypointsb_WaypointManager_Impl_flight_plan(const sb_SW__Mission_container * in_arg) {
  flight_plan((sb_SW__Mission_container *) in_arg);
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
  // [2019/09/20:JCC] Use a samping port instead
  //sb_result &= sb_mission_rcv0_enqueue((bool *) sb_mission_rcv);
  write_sp_bool(mission_rcv_out, sb_mission_rcv, &mission_rcv_out_seqNum);
  //printf("---------------WM: write_sp_bool %i seqNum=%"PRIseqNum".\n", *sb_mission_rcv, mission_rcv_out_seqNum);
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
  // [2019/09/20:JCC] Use a samping port instead
  // sb_result &= sb_mission_window0_enqueue((sb_SW__MissionWindow_container *) sb_mission_window);
  write_sp_MissionWindow(mission_window_out, sb_mission_window, &mission_window_out_seqNum);
  return sb_result;
}

// [2019/09/21:JCC] Replaced with sampling port
//static void sb_tracking_id_notification_handler(void * unused) {
//  MUTEXOP(sb_dispatch_sem_post())
//  CALLBACKOP(sb_tracking_id_notification_reg_callback(sb_tracking_id_notification_handler, NULL));
//}

/************************************************************************
 * sb_entrypointsb_WaypointManager_Impl_tracking_id:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void sb_entrypointsb_WaypointManager_Impl_tracking_id(const uintmax_t * in_arg) {
  tracking_id((uintmax_t *) in_arg);
}

/************************************************************************
 *  sb_entrypoint_WaypointManager_Impl_initializer:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void sb_entrypoint_WaypointManager_Impl_initializer(const uintmax_t * in_arg) {
  init((uintmax_t *) in_arg);
}

void pre_init(void) {
  //CALLBACKOP(sb_flight_plan_notification_reg_callback(sb_flight_plan_notification_handler, NULL));
  //CALLBACKOP(sb_tracking_id_notification_reg_callback(sb_tracking_id_notification_handler, NULL));

  // [2019/09/20:JCC] Initialize sampling ports
  init_sp_bool(mission_rcv_out, &mission_rcv_out_seqNum);
  init_sp_MissionWindow(mission_window_out, &mission_window_out_seqNum);
}

/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {

  uintmax_t tracking_id;
  seqNum_t tracking_id_in_seqNum = 0;
  seqNum_t new_tracking_id_in_seqNum = 0;

  sb_SW__Mission_container flight_plan;
  seqNum_t flight_plan_in_seqNum = 0;
  seqNum_t new_flight_plan_in_seqNum = 0;

  {
    uintmax_t sb_dummy;
    sb_entrypoint_WaypointManager_Impl_initializer(&sb_dummy);
  }

  // [2019/09/20:JCC] Just used for output
  int tickCount = 0;

  for(;;) {

    // [2019/09/20:JCC] Changed to be periodic instead of sporadic
    //MUTEXOP(sb_dispatch_sem_wait())
    period_wait();
    printf("%s: Period tick %d\n", get_instance_name(), ++tickCount);
      
    // Drain the queues
    
    // [2019/09/22:JCC] Replace with sampling port
    //while (sb_flight_plan_dequeue((sb_SW__Mission_container *) &sb_flight_plan)) {
    //  sb_entrypointsb_WaypointManager_Impl_flight_plan(&sb_flight_plan);
    //}
    // Check for new message in the sampling port
    if ( read_sp_Mission(flight_plan_in, &flight_plan, &new_flight_plan_in_seqNum) ) {
      if (flight_plan_in_seqNum < new_flight_plan_in_seqNum) {
        sb_entrypointsb_WaypointManager_Impl_flight_plan(&flight_plan);
        flight_plan_in_seqNum = new_flight_plan_in_seqNum;
      }
    }

    // [2019/09/21:JCC] Replace with sampling port
    //while (sb_tracking_id_dequeue((uintmax_t *) &sb_tracking_id)) {
    //  sb_entrypointsb_WaypointManager_Impl_tracking_id(&sb_tracking_id);
    //}
    // Check for new message in the sampling port
    if ( read_sp_uintmax(tracking_id_in, &tracking_id, &new_tracking_id_in_seqNum) ) {
      if (tracking_id_in_seqNum < new_tracking_id_in_seqNum) {
        sb_entrypointsb_WaypointManager_Impl_tracking_id(&tracking_id);
        tracking_id_in_seqNum = new_tracking_id_in_seqNum;
      }
    }
    
  }
  return 0;
}
