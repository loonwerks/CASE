// This file will be regenerated, do not edit

#include <sb_ResponseMonitor_Impl.h>
#include <sb_queue_union_art_DataContent_1.h>
#include <sb_event_counter.h>
#include <sb_event_counter.h>
#include <ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor_adapter.h>
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

sb_queue_union_art_DataContent_1_Recv_t sb_MissionCommand_recv_queue;

/************************************************************************
 * sb_MissionCommand_dequeue_poll:
 ************************************************************************/
bool sb_MissionCommand_dequeue_poll(sb_event_counter_t *numDropped, union_art_DataContent *data) {
  return sb_queue_union_art_DataContent_1_dequeue(&sb_MissionCommand_recv_queue, numDropped, data);
}

/************************************************************************
 * sb_MissionCommand_dequeue:
 ************************************************************************/
bool sb_MissionCommand_dequeue(union_art_DataContent *data) {
  sb_event_counter_t numDropped;
  return sb_MissionCommand_dequeue_poll(&numDropped, data);
}

/************************************************************************
 * sb_MissionCommand_is_empty:
 *
 * Helper method to determine if infrastructure port has received new
 * events
 ************************************************************************/
bool sb_MissionCommand_is_empty(){
  return sb_queue_union_art_DataContent_1_is_empty(&sb_MissionCommand_recv_queue);
}

/************************************************************************
 * sb_MissionCommand_notification_handler:
 * Invoked by: seL4 notification callback
 *
 * This is the function invoked by an seL4 notification callback to 
 * dispatch the component due to the arrival of an event on port
 * sb_MissionCommand
 *
 ************************************************************************/
static void sb_MissionCommand_notification_handler(void * unused) {
  MUTEXOP(sb_dispatch_sem_post())
  CALLBACKOP(sb_MissionCommand_notification_reg_callback(sb_MissionCommand_notification_handler, NULL));
}

/************************************************************************
 * sb_Alert_enqueue
 * Invoked from user code in the local thread.
 *
 * This is the function invoked by the local thread to make a
 * call to send to a remote event port.
 *
 ************************************************************************/
bool sb_Alert_enqueue(void) {
  // sb_Alert_counter is a dataport (shared memory) that is written by the sender
  // and read by the receiver(s). This counter is monotonicly increasing,
  // but can wrap.
  (*sb_Alert_counter)++;

  // Release memory fence - ensure subsequent write occurs after any preceeding read or write
  sb_Alert_counter_release();

  sb_Alert_emit();

  return true;
}


// send Alert: Out EventPort
Unit HAMR_SW_ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor_seL4Nix_Alert_Send(
  STACK_FRAME
  art_DataContent d) {
  DeclNewStackFrame(caller, "sb_ResponseMonitor_Impl.c", "", "HAMR_SW_ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor_seL4Nix_Alert_Send", 0);

  // event port - can ignore the Slang Empty payload
  art_Empty payload = (art_Empty) d;

  // send event via CAmkES
  sb_Alert_enqueue();
}

// is_empty FlightPlan: In EventDataPort
B HAMR_SW_ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor_seL4Nix_FlightPlan_IsEmpty(STACK_FRAME_ONLY) {
  return sb_FlightPlan_is_empty();
}

// receive FlightPlan: In EventDataPort union_art_DataContent
Unit HAMR_SW_ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor_seL4Nix_FlightPlan_Receive(
  STACK_FRAME
  Option_8E9F45 result) {
  DeclNewStackFrame(caller, "sb_ResponseMonitor_Impl.c", "", "HAMR_SW_ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor_seL4Nix_FlightPlan_Receive", 0);

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


// is_empty MissionCommand: In EventDataPort
B HAMR_SW_ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor_seL4Nix_MissionCommand_IsEmpty(STACK_FRAME_ONLY) {
  return sb_MissionCommand_is_empty();
}

// receive MissionCommand: In EventDataPort union_art_DataContent
Unit HAMR_SW_ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor_seL4Nix_MissionCommand_Receive(
  STACK_FRAME
  Option_8E9F45 result) {
  DeclNewStackFrame(caller, "sb_ResponseMonitor_Impl.c", "", "HAMR_SW_ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor_seL4Nix_MissionCommand_Receive", 0);

  union_art_DataContent val;
  if(sb_MissionCommand_dequeue((union_art_DataContent *) &val)) {
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


void pre_init(void) {
  DeclNewStackFrame(NULL, "sb_ResponseMonitor_Impl.c", "", "pre_init", 0);

  printf("Entering pre-init of ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor\n");

  // initialise data structure for incoming event data port FlightPlan
  sb_queue_union_art_DataContent_1_Recv_init(&sb_FlightPlan_recv_queue, sb_FlightPlan_queue);

  // initialise data structure for incoming event data port MissionCommand
  sb_queue_union_art_DataContent_1_Recv_init(&sb_MissionCommand_recv_queue, sb_MissionCommand_queue);

  // initialise shared counter for event port Alert
  *sb_Alert_counter = 0;

  // initialise slang-embedded components/ports
  HAMR_SW_ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor_adapter_initialiseArchitecture(SF_LAST);

  // call the component's initialise entrypoint
  HAMR_SW_ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor_adapter_initialiseEntryPoint(SF_LAST);

  printf("Leaving pre-init of ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor\n");
}

void post_init(void) {
  DeclNewStackFrame(NULL, "sb_ResponseMonitor_Impl.c", "", "post_init", 0);

  // register callback for EventDataPort port FlightPlan
  CALLBACKOP(sb_FlightPlan_notification_reg_callback(sb_FlightPlan_notification_handler, NULL));

  // register callback for EventDataPort port MissionCommand
  CALLBACKOP(sb_MissionCommand_notification_reg_callback(sb_MissionCommand_notification_handler, NULL));
}

/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {
  DeclNewStackFrame(NULL, "sb_ResponseMonitor_Impl.c", "", "run", 0);


  MUTEXOP(sb_dispatch_sem_wait())
  for(;;) {
    MUTEXOP(sb_dispatch_sem_wait())
    // call the component's compute entrypoint
    HAMR_SW_ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor_adapter_computeEntryPoint(SF_LAST);
  }
  return 0;
}
