#include "../includes/sb_WaypointManager_Impl.h"
#include <string.h>
#include <camkes.h>

/************************************************************************
 * sb_flight_plan_notification_handler:
 * Invoked by: seL4 notification callback
 *
 * This is the function invoked by an seL4 notification callback to 
 * dispatch the component due to the arrival of an event on port
 * flight_plan
 *
 ************************************************************************/
static void sb_flight_plan_notification_handler(void * unused) {
  MUTEXOP(sb_dispatch_sem_post())
  CALLBACKOP(sb_flight_plan_notification_reg_callback(sb_flight_plan_notification_handler, NULL));
}

/************************************************************************
 * sb_entrypoint_WaypointManager_Impl_flight_plan:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void sb_entrypoint_WaypointManager_Impl_flight_plan(const sb_SW__Mission_container * in_arg) {
  flight_plan((sb_SW__Mission_container *) in_arg);
}

/************************************************************************
 * sb_mission_rcv_enqueue:
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
 * call to write to a remote event data port.
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

/************************************************************************
 * sb_tracking_id_notification_handler:
 * Invoked by: seL4 notification callback
 *
 * This is the function invoked by an seL4 notification callback to 
 * dispatch the component due to the arrival of an event on port
 * tracking_id
 *
 ************************************************************************/
static void sb_tracking_id_notification_handler(void * unused) {
  MUTEXOP(sb_dispatch_sem_post())
  CALLBACKOP(sb_tracking_id_notification_reg_callback(sb_tracking_id_notification_handler, NULL));
}

/************************************************************************
 * sb_entrypoint_WaypointManager_Impl_tracking_id:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void sb_entrypoint_WaypointManager_Impl_tracking_id(const int64_t * in_arg) {
  tracking_id((int64_t *) in_arg);
}

/************************************************************************
 *  sb_entrypoint_WaypointManager_Impl_initializer:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void sb_entrypoint_WaypointManager_Impl_initializer(const int64_t * in_arg) {
  init((int64_t *) in_arg);
}

void post_init(void){
  // register callback for EventDataPort port flight_plan
  CALLBACKOP(sb_flight_plan_notification_reg_callback(sb_flight_plan_notification_handler, NULL));

  // register callback for EventDataPort port tracking_id
  CALLBACKOP(sb_tracking_id_notification_reg_callback(sb_tracking_id_notification_handler, NULL));
}


/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {
  sb_SW__Mission_container sb_flight_plan;
  int64_t sb_tracking_id;
  {
    int64_t sb_dummy;
    sb_entrypoint_WaypointManager_Impl_initializer(&sb_dummy);
  }
  MUTEXOP(sb_dispatch_sem_wait())
  for(;;) {
    MUTEXOP(sb_dispatch_sem_wait())
    while (sb_flight_plan_dequeue((sb_SW__Mission_container *) &sb_flight_plan)) {
      sb_entrypoint_WaypointManager_Impl_flight_plan(&sb_flight_plan);
    }
    while (sb_tracking_id_dequeue((int64_t *) &sb_tracking_id)) {
      sb_entrypoint_WaypointManager_Impl_tracking_id(&sb_tracking_id);
    }
  }
  return 0;
}
