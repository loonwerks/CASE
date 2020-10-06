// This file will be regenerated, do not edit

#include <sb_UARTDriver_Impl.h>
#include <string.h>
#include <camkes.h>

/************************************************************************
 * sb_mission_window_notification_handler:
 * Invoked by: seL4 notification callback
 *
 * This is the function invoked by an seL4 notification callback to 
 * dispatch the component due to the arrival of an event on port
 * mission_window
 *
 ************************************************************************/
static void sb_mission_window_notification_handler(void * unused) {
  MUTEXOP(sb_dispatch_sem_post())
  CALLBACKOP(sb_mission_window_notification_reg_callback(sb_mission_window_notification_handler, NULL));
}

/************************************************************************
 * sb_entrypoint_UARTDriver_Impl_mission_window:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void sb_entrypoint_UARTDriver_Impl_mission_window(const sb_SW__MissionWindow_container * in_arg) {
  mission_window((sb_SW__MissionWindow_container *) in_arg);
}

/************************************************************************
 * sb_tracking_id_enqueue:
 * Invoked from user code in the local thread.
 *
 * This is the function invoked by the local thread to make a
 * call to write to a remote event data port.
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
 *  sb_entrypoint_UARTDriver_Impl_MCMP_PROC_SW_UART_initializer:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void sb_entrypoint_UARTDriver_Impl_MCMP_PROC_SW_UART_initializer(const int64_t * in_arg) {
  init((int64_t *) in_arg);
}

void post_init(void) {
  // register callback for EventDataPort port mission_window
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
    sb_entrypoint_UARTDriver_Impl_MCMP_PROC_SW_UART_initializer(&sb_dummy);
  }
  MUTEXOP(sb_dispatch_sem_wait())
  for(;;) {
    MUTEXOP(sb_dispatch_sem_wait())
    while (sb_mission_window_dequeue((sb_SW__MissionWindow_container *) &sb_mission_window)) {
      sb_entrypoint_UARTDriver_Impl_mission_window(&sb_mission_window);
    }
  }
  return 0;
}
