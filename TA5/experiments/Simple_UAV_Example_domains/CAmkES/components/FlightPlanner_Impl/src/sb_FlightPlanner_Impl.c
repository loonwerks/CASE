#include "../includes/sb_FlightPlanner_Impl.h"
#include <string.h>
#include <camkes.h>

#include "seqNum.h"
#include "sp_bool.h"
#include "sp_Mission.h"
#include "sp_Command.h"

// [2019/09/20:JCC]
// Sequence numbers for our sampling ports. Only functions in the sampling
// port interface should modify this.
seqNum_t flight_plan_out_seqNum = 0;

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
  // [2019/09/22:JCC] Replaced with sampling port
  //sb_result &= sb_flight_plan0_enqueue((sb_SW__Mission_container *) sb_flight_plan);
  write_sp_Mission(flight_plan_out, sb_flight_plan, &flight_plan_out_seqNum);
  return sb_result;
}

// [2019/09/20:JCC] replaced with sampling port
//static void sb_mission_rcv_notification_handler(void * unused) {
//  MUTEXOP(sb_dispatch_sem_post())
//  CALLBACKOP(sb_mission_rcv_notification_reg_callback(sb_mission_rcv_notification_handler, NULL));
//}

/************************************************************************
 * sb_entrypointsb_FlightPlanner_Impl_mission_rcv:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void sb_entrypointsb_FlightPlanner_Impl_mission_rcv(const bool * in_arg) {
  mission_rcv((bool *) in_arg);
}

// [2019/09/22:JCC] Replaces with sampling port
//static void sb_recv_map_notification_handler(void * unused) {
//  MUTEXOP(sb_dispatch_sem_post())
//  CALLBACKOP(sb_recv_map_notification_reg_callback(sb_recv_map_notification_handler, NULL));
//}

/************************************************************************
 * sb_entrypointsb_FlightPlanner_Impl_recv_map:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void sb_entrypointsb_FlightPlanner_Impl_recv_map(const SW__Command_Impl * in_arg) {
  recv_map((SW__Command_Impl *) in_arg);
}

/************************************************************************
 *  sb_entrypoint_FlightPlanner_Impl_initializer:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void sb_entrypoint_FlightPlanner_Impl_initializer(const uintmax_t * in_arg) {
  init((uintmax_t *) in_arg);
}

void pre_init(void) {
  //CALLBACKOP(sb_mission_rcv_notification_reg_callback(sb_mission_rcv_notification_handler, NULL));
  //CALLBACKOP(sb_recv_map_notification_reg_callback(sb_recv_map_notification_handler, NULL));
}

/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {

  bool mission_rcv;
  seqNum_t mission_rcv_in_seqNum = 0;
  seqNum_t new_mission_rcv_in_seqNum = 0;

  SW__Command_Impl recv_map;
  seqNum_t recv_map_in_seqNum = 0;
  seqNum_t new_recv_map_in_seqNum = 0;

  {
    uintmax_t sb_dummy;
    sb_entrypoint_FlightPlanner_Impl_initializer(&sb_dummy);
  }

  // [2019/09/20:JCC] Just used for output
  int tickCount = 0;

  for(;;) {

    // [2019/09/20:JCC] Changed to be periodic instead of sporadic
    //MUTEXOP(sb_dispatch_sem_wait())
    period_wait();
    printf("%s: Period tick %d\n", get_instance_name(), ++tickCount);

    //// Drain the queues

    // [2019/09/20:JCC] Replaced with sampling port
    //while (sb_mission_rcv_dequeue((bool *) &sb_mission_rcv)) {
    //  sb_entrypointsb_FlightPlanner_Impl_mission_rcv(&sb_mission_rcv);
    //}
    // Check for new message in the sampling port
    if ( read_sp_bool(mission_rcv_in, &mission_rcv, &new_mission_rcv_in_seqNum) ) {
      //printf("---------------FPLN: read_sp_bool %i seqNum=%"PRIseqNum".\n", mission_rcv, new_mission_rcv_seqNum);
      if (mission_rcv_in_seqNum < new_mission_rcv_in_seqNum) {
        sb_entrypointsb_FlightPlanner_Impl_mission_rcv(&mission_rcv);
        mission_rcv_in_seqNum = new_mission_rcv_in_seqNum;
      }
    }

    // [2019/09/20:JCC] Replaced with sampling port
    //while (sb_recv_map_dequeue((SW__Command_Impl *) &sb_recv_map)) {
    //  sb_entrypointsb_FlightPlanner_Impl_recv_map(&sb_recv_map);
    //}
    if ( read_sp_Command(recv_map_in, &recv_map, &new_recv_map_in_seqNum) ) {
      //printf("---------------FPLN: read_sp_bool %i seqNum=%"PRIseqNum".\n", recv_map, new_recv_map_seqNum);
      if (recv_map_in_seqNum < new_recv_map_in_seqNum) {
        sb_entrypointsb_FlightPlanner_Impl_recv_map(&recv_map);
        recv_map_in_seqNum = new_recv_map_in_seqNum;
      }
    }

  }
  return 0;
}
