#include <sb_UARTDriver_Impl.h>
#include <sb_queue_sb_SW__MissionWindow_container_1.h>
#include <sb_event_counter.h>
#include <sb_queue_int64_t_1.h>
#include <string.h>
#include <camkes.h>

sb_queue_sb_SW__MissionWindow_container_1_Recv_t sb_mission_window_recv_queue;

/************************************************************************
 * sb_mission_window_dequeue_poll:
 ************************************************************************/
bool sb_mission_window_dequeue_poll(sb_event_counter_t *numDropped, sb_SW__MissionWindow_container *data) {
  return sb_queue_sb_SW__MissionWindow_container_1_dequeue(&sb_mission_window_recv_queue, numDropped, data);
}

/************************************************************************
 * sb_mission_window_dequeue:
 ************************************************************************/
bool sb_mission_window_dequeue(sb_SW__MissionWindow_container *data) {
  sb_event_counter_t numDropped;
  return sb_mission_window_dequeue_poll(&numDropped, data);
}

/************************************************************************
 * sb_mission_window_is_empty:
 *
 * Helper method to determine if infrastructure port has received new
 * events
 ************************************************************************/
bool sb_mission_window_is_empty(){
  return sb_queue_sb_SW__MissionWindow_container_1_is_empty(&sb_mission_window_recv_queue);
}

/************************************************************************
 * sb_mission_window_notification_handler:
 * Invoked by: seL4 notification callback
 *
 * This is the function invoked by an seL4 notification callback to 
 * dispatch the component due to the arrival of an event on port
 * sb_mission_window
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


bool sb_tracking_id_enqueue(const int64_t *data) {
  sb_queue_int64_t_1_enqueue(sb_tracking_id_queue_1, (int64_t*) data);
  sb_tracking_id_1_notification_emit();

  return true;
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
  // initialise data structure for incoming event data port mission_window
  sb_queue_sb_SW__MissionWindow_container_1_Recv_init(&sb_mission_window_recv_queue, sb_mission_window_queue);

  // initialise data structure for outgoing event data port tracking_id
  sb_queue_int64_t_1_init(sb_tracking_id_queue_1);
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

  {
    int64_t sb_dummy;
    sb_entrypoint_UARTDriver_Impl_initializer(&sb_dummy);
  }
  MUTEXOP(sb_dispatch_sem_wait())
  for(;;) {
    MUTEXOP(sb_dispatch_sem_wait())
    {
      sb_SW__MissionWindow_container sb_mission_window;
      while (sb_mission_window_dequeue((sb_SW__MissionWindow_container *) &sb_mission_window)) {
        sb_entrypoint_UARTDriver_Impl_mission_window(&sb_mission_window);
      }
    }
  }
  return 0;
}
