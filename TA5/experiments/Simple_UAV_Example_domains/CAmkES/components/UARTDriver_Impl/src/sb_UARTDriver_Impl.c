#include "../includes/sb_UARTDriver_Impl.h"
#include <string.h>
#include <camkes.h>

#include "seqNum.h"
#include "sp_uintmax.h"
#include "sp_MissionWindow.h"

// [2019/09/20:JCC]
// Sequence numbers for our sampling ports. Only functions in the sampling
// port interface should modify this.
seqNum_t tracking_id_out_seqNum = 0;

// [2019/09/20:JCC] replaced with sampling port
//static void sb_mission_window_notification_handler(void * unused) {
//  MUTEXOP(sb_dispatch_sem_post())
//  CALLBACKOP(sb_mission_window_notification_reg_callback(sb_mission_window_notification_handler, NULL));
//}

/************************************************************************
 * sb_entrypointsb_UARTDriver_Impl_mission_window:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void sb_entrypointsb_UARTDriver_Impl_mission_window(const sb_SW__MissionWindow_container * in_arg) {
  mission_window((sb_SW__MissionWindow_container *) in_arg);
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
bool sb_tracking_id_enqueue(const uintmax_t * sb_tracking_id){
  bool sb_result = true;
  // [2019/09/21:JCC] Repalce with sampling port
  //sb_result &= sb_tracking_id0_enqueue((uintmax_t *) sb_tracking_id);
  sb_result &= write_sp_uintmax(tracking_id_out, sb_tracking_id, &tracking_id_out_seqNum);
  return sb_result;
}

/************************************************************************
 *  sb_entrypoint_UARTDriver_Impl_initializer:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void sb_entrypoint_UARTDriver_Impl_initializer(const uintmax_t * in_arg) {
  init((uintmax_t *) in_arg);
}

void pre_init(void) {
  //CALLBACKOP(sb_mission_window_notification_reg_callback(sb_mission_window_notification_handler, NULL));
}

/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {

    sb_SW__MissionWindow_container mission_window;
    seqNum_t mission_window_in_seqNum = 0;
    seqNum_t new_mission_window_in_seqNum = 0;
  
  {
    uintmax_t sb_dummy;
    sb_entrypoint_UARTDriver_Impl_initializer(&sb_dummy);
  }

  // [2019/09/20:JCC] Just used for output
  int tickCount = 0;

  for(;;) {

    // [2019/09/20:JCC] Changed to be periodic instead of sporadic
    //MUTEXOP(sb_dispatch_sem_wait())
    period_wait();
    printf("%s: Period tick %d\n", get_instance_name(), ++tickCount);

    // [2019/09/20:JCC] Replaced with sampling port
    // Drain the queues
    //while (sb_mission_window_dequeue((sb_SW__MissionWindow_container *) &sb_mission_window)) {
    //  sb_entrypointsb_UARTDriver_Impl_mission_window(&sb_mission_window);
    //}
    if ( read_sp_MissionWindow(mission_window_in, &mission_window, &new_mission_window_in_seqNum) ) {
      //printf("---------------FPLN: read_sp_MissionWindow %i seqNum=%"PRIseqNum".\n", mission_window, new_mission_window_in_seqNum);
      if (mission_window_in_seqNum < new_mission_window_in_seqNum) {
        sb_entrypointsb_UARTDriver_Impl_mission_window(&mission_window);
        mission_window_in_seqNum = new_mission_window_in_seqNum;
      }
    }

  }
  return 0;
}
