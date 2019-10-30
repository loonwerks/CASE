#include "../includes/sb_UARTDriver_Impl.h"
#include "../../../auxiliary/includes/conversions.h"
#include "../../../auxiliary/includes/ipc.h"
#include <string.h>
#include <camkes.h>

static void sb_mission_window_notification_handler(void * unused) {
  MUTEXOP(sb_dispatch_sem_post())
  CALLBACKOP(sb_mission_window_notification_reg_callback(sb_mission_window_notification_handler, NULL));
}

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
bool sb_tracking_id_enqueue(const int64_t * sb_tracking_id){
  bool sb_result = true;
  sb_result &= sb_tracking_id0_enqueue((int64_t *) sb_tracking_id);
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
void sb_entrypoint_UARTDriver_Impl_initializer(const int64_t * in_arg) {
  init((int64_t *) in_arg);
}

void pre_init(void) {
  CALLBACKOP(sb_mission_window_notification_reg_callback(sb_mission_window_notification_handler, NULL));
}

/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {
  sb_SW__MissionWindow_container sb_mission_window;
  {
    int64_t sb_dummy;
    sb_entrypoint_UARTDriver_Impl_initializer(&sb_dummy);
  }

  for(;;) {
    MUTEXOP(sb_dispatch_sem_wait())
    // Drain the queues
    while (sb_mission_window_dequeue((sb_SW__MissionWindow_container *) &sb_mission_window)) {
      sb_entrypointsb_UARTDriver_Impl_mission_window(&sb_mission_window);
    }
  }
  return 0;
}
