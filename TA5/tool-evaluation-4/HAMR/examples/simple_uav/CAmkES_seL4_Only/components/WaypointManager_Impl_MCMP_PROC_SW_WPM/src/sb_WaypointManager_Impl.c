// This file will be regenerated, do not edit

#include <sb_WaypointManager_Impl.h>
#include <sb_queue_sb_SW__Mission_container_1.h>
#include <sb_event_counter.h>
#include <sb_queue_bool_1.h>
#include <sb_queue_sb_SW__MissionWindow_container_1.h>
#include <sb_queue_int64_t_1.h>
#include <sb_event_counter.h>
#include <string.h>
#include <camkes.h>

sb_queue_sb_SW__Mission_container_1_Recv_t sb_flight_plan_recv_queue;

/************************************************************************
 * sb_flight_plan_dequeue_poll:
 ************************************************************************/
bool sb_flight_plan_dequeue_poll(sb_event_counter_t *numDropped, sb_SW__Mission_container *data) {
  return sb_queue_sb_SW__Mission_container_1_dequeue(&sb_flight_plan_recv_queue, numDropped, data);
}

/************************************************************************
 * sb_flight_plan_dequeue:
 ************************************************************************/
bool sb_flight_plan_dequeue(sb_SW__Mission_container *data) {
  sb_event_counter_t numDropped;
  return sb_flight_plan_dequeue_poll(&numDropped, data);
}

/************************************************************************
 * sb_flight_plan_is_empty:
 *
 * Helper method to determine if infrastructure port has received new
 * events
 ************************************************************************/
bool sb_flight_plan_is_empty(){
  return sb_queue_sb_SW__Mission_container_1_is_empty(&sb_flight_plan_recv_queue);
}

/************************************************************************
 * sb_flight_plan_notification_handler:
 * Invoked by: seL4 notification callback
 *
 * This is the function invoked by an seL4 notification callback to 
 * dispatch the component due to the arrival of an event on port
 * sb_flight_plan
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


bool sb_mission_rcv_enqueue(const bool *data) {
  sb_queue_bool_1_enqueue(sb_mission_rcv_queue_1, (bool*) data);
  sb_mission_rcv_1_notification_emit();

  return true;
}

bool sb_mission_window_enqueue(const sb_SW__MissionWindow_container *data) {
  sb_queue_sb_SW__MissionWindow_container_1_enqueue(sb_mission_window_queue_1, (sb_SW__MissionWindow_container*) data);
  sb_mission_window_1_notification_emit();

  return true;
}

sb_queue_int64_t_1_Recv_t sb_tracking_id_recv_queue;

/************************************************************************
 * sb_tracking_id_dequeue_poll:
 ************************************************************************/
bool sb_tracking_id_dequeue_poll(sb_event_counter_t *numDropped, int64_t *data) {
  return sb_queue_int64_t_1_dequeue(&sb_tracking_id_recv_queue, numDropped, data);
}

/************************************************************************
 * sb_tracking_id_dequeue:
 ************************************************************************/
bool sb_tracking_id_dequeue(int64_t *data) {
  sb_event_counter_t numDropped;
  return sb_tracking_id_dequeue_poll(&numDropped, data);
}

/************************************************************************
 * sb_tracking_id_is_empty:
 *
 * Helper method to determine if infrastructure port has received new
 * events
 ************************************************************************/
bool sb_tracking_id_is_empty(){
  return sb_queue_int64_t_1_is_empty(&sb_tracking_id_recv_queue);
}

/************************************************************************
 * sb_tracking_id_notification_handler:
 * Invoked by: seL4 notification callback
 *
 * This is the function invoked by an seL4 notification callback to 
 * dispatch the component due to the arrival of an event on port
 * sb_tracking_id
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
 *  sb_entrypoint_WaypointManager_Impl_MCMP_PROC_SW_WPM_initializer:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void sb_entrypoint_WaypointManager_Impl_MCMP_PROC_SW_WPM_initializer(const int64_t * in_arg) {
  init((int64_t *) in_arg);
}

void pre_init(void) {
  // initialise data structure for incoming event data port flight_plan
  sb_queue_sb_SW__Mission_container_1_Recv_init(&sb_flight_plan_recv_queue, sb_flight_plan_queue);

  // initialise data structure for outgoing event data port mission_rcv
  sb_queue_bool_1_init(sb_mission_rcv_queue_1);

  // initialise data structure for outgoing event data port mission_window
  sb_queue_sb_SW__MissionWindow_container_1_init(sb_mission_window_queue_1);

  // initialise data structure for incoming event data port tracking_id
  sb_queue_int64_t_1_Recv_init(&sb_tracking_id_recv_queue, sb_tracking_id_queue);
}

void post_init(void) {
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


  {
    int64_t sb_dummy;
    sb_entrypoint_WaypointManager_Impl_MCMP_PROC_SW_WPM_initializer(&sb_dummy);
  }
  MUTEXOP(sb_dispatch_sem_wait())
  for(;;) {
    MUTEXOP(sb_dispatch_sem_wait())
    {
      sb_SW__Mission_container sb_flight_plan;
      while (sb_flight_plan_dequeue((sb_SW__Mission_container *) &sb_flight_plan)) {
        sb_entrypoint_WaypointManager_Impl_flight_plan(&sb_flight_plan);
      }
    }
    {
      int64_t sb_tracking_id;
      while (sb_tracking_id_dequeue((int64_t *) &sb_tracking_id)) {
        sb_entrypoint_WaypointManager_Impl_tracking_id(&sb_tracking_id);
      }
    }
  }
  return 0;
}
