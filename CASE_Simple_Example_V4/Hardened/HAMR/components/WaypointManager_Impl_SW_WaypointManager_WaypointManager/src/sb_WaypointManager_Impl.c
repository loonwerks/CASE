// This file will be regenerated, do not edit

#include <sb_WaypointManager_Impl.h>
#include <sb_queue_union_art_DataContent_1.h>
#include <sb_event_counter.h>
#include <sb_queue_union_art_DataContent_1.h>
#include <sb_event_counter.h>
#include <WaypointManager_Impl_SW_WaypointManager_WaypointManager_adapter.h>
#include <string.h>
#include <camkes.h>

sb_queue_union_art_DataContent_1_Recv_t sb_FlightPlan_recv_queue;

/************************************************************************
 * sb_FlightPlan_dequeue_poll:
 ************************************************************************/
bool sb_FlightPlan_dequeue_poll(sb_event_counter_t *numDropped, union_art_DataContent *data) {
  return sb_queue_union_art_DataContent_1_dequeue(&sb_FlightPlan_recv_queue, numDropped, data);
}

/************************************************************************
 * sb_FlightPlan_dequeue:
 ************************************************************************/
bool sb_FlightPlan_dequeue(union_art_DataContent *data) {
  sb_event_counter_t numDropped;
  return sb_FlightPlan_dequeue_poll(&numDropped, data);
}

/************************************************************************
 * sb_FlightPlan_is_empty:
 *
 * Helper method to determine if infrastructure port has received new
 * events
 ************************************************************************/
bool sb_FlightPlan_is_empty(){
  return sb_queue_union_art_DataContent_1_is_empty(&sb_FlightPlan_recv_queue);
}

/************************************************************************
 * sb_FlightPlan_notification_handler:
 * Invoked by: seL4 notification callback
 *
 * This is the function invoked by an seL4 notification callback to 
 * dispatch the component due to the arrival of an event on port
 * sb_FlightPlan
 *
 ************************************************************************/
static void sb_FlightPlan_notification_handler(void * unused) {
  MUTEXOP(sb_dispatch_sem_post())
  CALLBACKOP(sb_FlightPlan_notification_reg_callback(sb_FlightPlan_notification_handler, NULL));
}

bool sb_MissionWindow_enqueue(const union_art_DataContent *data) {
  sb_queue_union_art_DataContent_1_enqueue(sb_MissionWindow_queue_1, (union_art_DataContent*) data);
  sb_MissionWindow_1_notification_emit();

  return true;
}

sb_queue_union_art_DataContent_1_Recv_t sb_Status_recv_queue;

/************************************************************************
 * sb_Status_dequeue_poll:
 ************************************************************************/
bool sb_Status_dequeue_poll(sb_event_counter_t *numDropped, union_art_DataContent *data) {
  return sb_queue_union_art_DataContent_1_dequeue(&sb_Status_recv_queue, numDropped, data);
}

/************************************************************************
 * sb_Status_dequeue:
 ************************************************************************/
bool sb_Status_dequeue(union_art_DataContent *data) {
  sb_event_counter_t numDropped;
  return sb_Status_dequeue_poll(&numDropped, data);
}

/************************************************************************
 * sb_Status_is_empty:
 *
 * Helper method to determine if infrastructure port has received new
 * events
 ************************************************************************/
bool sb_Status_is_empty(){
  return sb_queue_union_art_DataContent_1_is_empty(&sb_Status_recv_queue);
}

/************************************************************************
 * sb_Status_notification_handler:
 * Invoked by: seL4 notification callback
 *
 * This is the function invoked by an seL4 notification callback to 
 * dispatch the component due to the arrival of an event on port
 * sb_Status
 *
 ************************************************************************/
static void sb_Status_notification_handler(void * unused) {
  MUTEXOP(sb_dispatch_sem_post())
  CALLBACKOP(sb_Status_notification_reg_callback(sb_Status_notification_handler, NULL));
}

/************************************************************************
 *
 * Static variables and queue management functions for event port:
 *     ReturnHome
 *
 ************************************************************************/
static sb_event_counter_t sb_ReturnHome_received_events = 0;
static sb_event_counter_t sb_ReturnHome_last_counter = 0;

/************************************************************************
 * sb_ReturnHome_dequeue:
 * Invoked from local active thread.
 *
 * This is the function invoked by the active thread to decrement the
 * input event index.
 *
 ************************************************************************/
bool sb_ReturnHome_dequeue() {
  if(sb_ReturnHome_received_events > 0) {
    sb_ReturnHome_received_events--;
    return true;
  } else {
    return false;
  }
}

/************************************************************************
 * sb_ReturnHome_is_empty;
 *
 * Helper method to determine if infrastructure port has not received
 * any new events since the last dispatch
 *
 ************************************************************************/
bool sb_ReturnHome_is_empty() {
  return sb_ReturnHome_received_events == 0;
}

void sb_freeze_event_port_ReturnHome() {
  sb_event_counter_t current_sb_ReturnHome_counter;

  sb_ReturnHome_received_events = 0; // drop any events not handled during last dispatch

  // get current shared counter value
  current_sb_ReturnHome_counter = *sb_ReturnHome_counter;

  // Acquire memory fence - ensure preceding read occurs before any subsequent read or write
  sb_ReturnHome_counter_acquire();

  // NOTE: Counters can wrap, so we must use != below instead of >
  while(current_sb_ReturnHome_counter != sb_ReturnHome_last_counter){
    sb_ReturnHome_last_counter++;
    sb_ReturnHome_received_events++;
  }

  if(sb_ReturnHome_received_events > 0) {

    // ReturnHome's queue size is 1
    if(sb_ReturnHome_received_events > 1) {
      //printf("WaypointManager_Impl: dropping %i event(s) from incoming event port ReturnHome\n", (sb_ReturnHome_received_events - 1));

      // drop events
      sb_ReturnHome_received_events = 1;
    }
  }
}

/************************************************************************
 * sb_ReturnHome_handler:
 * Invoked by: seL4 notification callback
 *
 * This is the function invoked by an seL4 notification callback to 
 * dispatch the component due to the arrival of an event on port
 * ReturnHome
 *
 ************************************************************************/
static void sb_ReturnHome_handler(void * unused) {
  MUTEXOP(sb_dispatch_sem_post())
  CALLBACKOP(sb_ReturnHome_reg_callback(sb_ReturnHome_handler, NULL));
}

// send MissionWindow: Out EventDataPort SW__MissionWindow
Unit HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager_seL4Nix_MissionWindow_Send(
  STACK_FRAME
  art_DataContent d) {
  DeclNewStackFrame(caller, "sb_WaypointManager_Impl.c", "", "HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager_seL4Nix_MissionWindow_Send", 0);

  sb_MissionWindow_enqueue(d);
}

// is_empty FlightPlan: In EventDataPort
B HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager_seL4Nix_FlightPlan_IsEmpty(STACK_FRAME_ONLY) {
  return sb_FlightPlan_is_empty();
}

// receive FlightPlan: In EventDataPort union_art_DataContent
Unit HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager_seL4Nix_FlightPlan_Receive(
  STACK_FRAME
  Option_8E9F45 result) {
  DeclNewStackFrame(caller, "sb_WaypointManager_Impl.c", "", "HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager_seL4Nix_FlightPlan_Receive", 0);

  union_art_DataContent val;
  if(sb_FlightPlan_dequeue((union_art_DataContent *) &val)) {
    // wrap payload in Some and place in result
    DeclNewSome_D29615(some);
    Some_D29615_apply(SF &some, (art_DataContent) &val);
    Type_assign(result, &some, sizeof(union Option_8E9F45));
  } else {
    // put None in result
    DeclNewNone_964667(none);
    Type_assign(result, &none, sizeof(union Option_8E9F45));
  }
}


// is_empty Status: In EventDataPort
B HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager_seL4Nix_Status_IsEmpty(STACK_FRAME_ONLY) {
  return sb_Status_is_empty();
}

// receive Status: In EventDataPort union_art_DataContent
Unit HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager_seL4Nix_Status_Receive(
  STACK_FRAME
  Option_8E9F45 result) {
  DeclNewStackFrame(caller, "sb_WaypointManager_Impl.c", "", "HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager_seL4Nix_Status_Receive", 0);

  union_art_DataContent val;
  if(sb_Status_dequeue((union_art_DataContent *) &val)) {
    // wrap payload in Some and place in result
    DeclNewSome_D29615(some);
    Some_D29615_apply(SF &some, (art_DataContent) &val);
    Type_assign(result, &some, sizeof(union Option_8E9F45));
  } else {
    // put None in result
    DeclNewNone_964667(none);
    Type_assign(result, &none, sizeof(union Option_8E9F45));
  }
}


// is_empty ReturnHome: In EventPort
B HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager_seL4Nix_ReturnHome_IsEmpty(STACK_FRAME_ONLY) {
  return sb_ReturnHome_is_empty();
}

// receive ReturnHome: In EventPort
Unit HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager_seL4Nix_ReturnHome_Receive(STACK_FRAME
  Option_8E9F45 result) {
  DeclNewStackFrame(caller, "sb_WaypointManager_Impl.c", "", "HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager_seL4Nix_ReturnHome_Receive", 0);

  if(sb_ReturnHome_dequeue()) {
    // event port - ART requires an Empty payload be sent
    DeclNewart_Empty(payload);

    // wrap it in Some and place in result
    DeclNewSome_D29615(some);
    Some_D29615_apply(SF &some, (art_DataContent) &payload);
    Type_assign(result, &some, sizeof(union Option_8E9F45));
  } else {
    // put None in result
    DeclNewNone_964667(none);
    Type_assign(result, &none, sizeof(union Option_8E9F45));
  }
} 

void pre_init(void) {
  DeclNewStackFrame(NULL, "sb_WaypointManager_Impl.c", "", "pre_init", 0);

  printf("Entering pre-init of WaypointManager_Impl_SW_WaypointManager_WaypointManager\n");

  // initialise data structure for incoming event data port FlightPlan
  sb_queue_union_art_DataContent_1_Recv_init(&sb_FlightPlan_recv_queue, sb_FlightPlan_queue);

  // initialise data structure for outgoing event data port MissionWindow
  sb_queue_union_art_DataContent_1_init(sb_MissionWindow_queue_1);

  // initialise data structure for incoming event data port Status
  sb_queue_union_art_DataContent_1_Recv_init(&sb_Status_recv_queue, sb_Status_queue);

  // initialise slang-embedded components/ports
  HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager_adapter_initialiseArchitecture(SF_LAST);

  // call the component's initialise entrypoint
  HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager_adapter_initialiseEntryPoint(SF_LAST);

  printf("Leaving pre-init of WaypointManager_Impl_SW_WaypointManager_WaypointManager\n");
}

void post_init(void) {
  DeclNewStackFrame(NULL, "sb_WaypointManager_Impl.c", "", "post_init", 0);

  // register callback for EventDataPort port FlightPlan
  CALLBACKOP(sb_FlightPlan_notification_reg_callback(sb_FlightPlan_notification_handler, NULL));

  // register callback for EventDataPort port Status
  CALLBACKOP(sb_Status_notification_reg_callback(sb_Status_notification_handler, NULL));

  // register callback for EventPort port ReturnHome
  CALLBACKOP(sb_ReturnHome_reg_callback(sb_ReturnHome_handler, NULL));
}

/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {
  DeclNewStackFrame(NULL, "sb_WaypointManager_Impl.c", "", "run", 0);


  MUTEXOP(sb_dispatch_sem_wait())
  for(;;) {
    MUTEXOP(sb_dispatch_sem_wait())
    sb_freeze_event_port_ReturnHome();
    // call the component's compute entrypoint
    HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager_adapter_computeEntryPoint(SF_LAST);
  }
  return 0;
}
