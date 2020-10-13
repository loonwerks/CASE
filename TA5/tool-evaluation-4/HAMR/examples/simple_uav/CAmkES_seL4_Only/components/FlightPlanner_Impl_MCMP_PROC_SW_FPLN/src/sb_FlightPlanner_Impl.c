// This file will be regenerated, do not edit

#include <sb_FlightPlanner_Impl.h>
#include <sb_queue_sb_SW__Mission_container_1.h>
#include <sb_queue_bool_1.h>
#include <sb_event_counter.h>
#include <sb_queue_SW__Command_Impl_1.h>
#include <sb_event_counter.h>
#include <string.h>
#include <camkes.h>

bool sb_flight_plan_enqueue(const sb_SW__Mission_container *data) {
  sb_queue_sb_SW__Mission_container_1_enqueue(sb_flight_plan_queue_1, (sb_SW__Mission_container*) data);
  sb_flight_plan_1_notification_emit();

  return true;
}

sb_queue_bool_1_Recv_t sb_mission_rcv_recv_queue;

/************************************************************************
 * sb_mission_rcv_dequeue_poll:
 ************************************************************************/
bool sb_mission_rcv_dequeue_poll(sb_event_counter_t *numDropped, bool *data) {
  return sb_queue_bool_1_dequeue(&sb_mission_rcv_recv_queue, numDropped, data);
}

/************************************************************************
 * sb_mission_rcv_dequeue:
 ************************************************************************/
bool sb_mission_rcv_dequeue(bool *data) {
  sb_event_counter_t numDropped;
  return sb_mission_rcv_dequeue_poll(&numDropped, data);
}

/************************************************************************
 * sb_mission_rcv_is_empty:
 *
 * Helper method to determine if infrastructure port has received new
 * events
 ************************************************************************/
bool sb_mission_rcv_is_empty(){
  return sb_queue_bool_1_is_empty(&sb_mission_rcv_recv_queue);
}

/************************************************************************
 * sb_mission_rcv_notification_handler:
 * Invoked by: seL4 notification callback
 *
 * This is the function invoked by an seL4 notification callback to 
 * dispatch the component due to the arrival of an event on port
 * sb_mission_rcv
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


sb_queue_SW__Command_Impl_1_Recv_t sb_recv_map_recv_queue;

/************************************************************************
 * sb_recv_map_dequeue_poll:
 ************************************************************************/
bool sb_recv_map_dequeue_poll(sb_event_counter_t *numDropped, SW__Command_Impl *data) {
  return sb_queue_SW__Command_Impl_1_dequeue(&sb_recv_map_recv_queue, numDropped, data);
}

/************************************************************************
 * sb_recv_map_dequeue:
 ************************************************************************/
bool sb_recv_map_dequeue(SW__Command_Impl *data) {
  sb_event_counter_t numDropped;
  return sb_recv_map_dequeue_poll(&numDropped, data);
}

/************************************************************************
 * sb_recv_map_is_empty:
 *
 * Helper method to determine if infrastructure port has received new
 * events
 ************************************************************************/
bool sb_recv_map_is_empty(){
  return sb_queue_SW__Command_Impl_1_is_empty(&sb_recv_map_recv_queue);
}

/************************************************************************
 * sb_recv_map_notification_handler:
 * Invoked by: seL4 notification callback
 *
 * This is the function invoked by an seL4 notification callback to 
 * dispatch the component due to the arrival of an event on port
 * sb_recv_map
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
 *  sb_entrypoint_FlightPlanner_Impl_MCMP_PROC_SW_FPLN_initializer:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void sb_entrypoint_FlightPlanner_Impl_MCMP_PROC_SW_FPLN_initializer(const int64_t * in_arg) {
  init((int64_t *) in_arg);
}

void pre_init(void) {
  // initialise data structure for outgoing event data port flight_plan
  sb_queue_sb_SW__Mission_container_1_init(sb_flight_plan_queue_1);

  // initialise data structure for incoming event data port mission_rcv
  sb_queue_bool_1_Recv_init(&sb_mission_rcv_recv_queue, sb_mission_rcv_queue);

  // initialise data structure for incoming event data port recv_map
  sb_queue_SW__Command_Impl_1_Recv_init(&sb_recv_map_recv_queue, sb_recv_map_queue);
}

void post_init(void) {
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


  {
    int64_t sb_dummy;
    sb_entrypoint_FlightPlanner_Impl_MCMP_PROC_SW_FPLN_initializer(&sb_dummy);
  }
  MUTEXOP(sb_dispatch_sem_wait())
  for(;;) {
    MUTEXOP(sb_dispatch_sem_wait())
    {
      bool sb_mission_rcv;
      while (sb_mission_rcv_dequeue((bool *) &sb_mission_rcv)) {
        sb_entrypoint_FlightPlanner_Impl_mission_rcv(&sb_mission_rcv);
      }
    }
    {
      SW__Command_Impl sb_recv_map;
      while (sb_recv_map_dequeue((SW__Command_Impl *) &sb_recv_map)) {
        sb_entrypoint_FlightPlanner_Impl_recv_map(&sb_recv_map);
      }
    }
  }
  return 0;
}
