#include <sb_FlightPlanner_Impl.h>
#include <string.h>
#include <camkes.h>

/************************************************************************
 * sb_flight_plan_enqueue:
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
bool sb_flight_plan_enqueue(const sb_SW__Mission_container * sb_flight_plan){
  bool sb_result = true;
  sb_result &= sb_flight_plan0_enqueue((sb_SW__Mission_container *) sb_flight_plan);
  return sb_result;
}

/************************************************************************
 * sb_mission_rcv_notification_handler:
 * Invoked by: seL4 notification callback
 *
 * This is the function invoked by an seL4 notification callback to 
 * dispatch the component due to the arrival of an event on port
 * mission_rcv
 *
 ************************************************************************/
static void sb_mission_rcv_notification_handler(void * unused) {
  MUTEXOP(sb_dispatch_sem_post())
  CALLBACKOP(sb_mission_rcv_notification_reg_callback(sb_mission_rcv_notification_handler, NULL));
}

/************************************************************************
 * sb_entrypoint_FlightPlanner_Impl_mission_rcv:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void sb_entrypoint_FlightPlanner_Impl_mission_rcv(const bool * in_arg) {
  mission_rcv((bool *) in_arg);
}

/************************************************************************
 * sb_recv_map_notification_handler:
 * Invoked by: seL4 notification callback
 *
 * This is the function invoked by an seL4 notification callback to 
 * dispatch the component due to the arrival of an event on port
 * recv_map
 *
 ************************************************************************/
static void sb_recv_map_notification_handler(void * unused) {
  MUTEXOP(sb_dispatch_sem_post())
  CALLBACKOP(sb_recv_map_notification_reg_callback(sb_recv_map_notification_handler, NULL));
}

/************************************************************************
 * sb_entrypoint_FlightPlanner_Impl_recv_map:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void sb_entrypoint_FlightPlanner_Impl_recv_map(const SW__Command_Impl * in_arg) {
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
void sb_entrypoint_FlightPlanner_Impl_initializer(const int64_t * in_arg) {
  init((int64_t *) in_arg);
}

void post_init(void){
  // register callback for EventDataPort port mission_rcv
  CALLBACKOP(sb_mission_rcv_notification_reg_callback(sb_mission_rcv_notification_handler, NULL));

  // register callback for EventDataPort port recv_map
  CALLBACKOP(sb_recv_map_notification_reg_callback(sb_recv_map_notification_handler, NULL));
}


/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {
  bool sb_mission_rcv;
  SW__Command_Impl sb_recv_map;
  {
    int64_t sb_dummy;
    sb_entrypoint_FlightPlanner_Impl_initializer(&sb_dummy);
  }
  MUTEXOP(sb_dispatch_sem_wait())
  for(;;) {
    MUTEXOP(sb_dispatch_sem_wait())
    while (sb_mission_rcv_dequeue((bool *) &sb_mission_rcv)) {
      sb_entrypoint_FlightPlanner_Impl_mission_rcv(&sb_mission_rcv);
    }
    while (sb_recv_map_dequeue((SW__Command_Impl *) &sb_recv_map)) {
      sb_entrypoint_FlightPlanner_Impl_recv_map(&sb_recv_map);
    }
  }
  return 0;
}
