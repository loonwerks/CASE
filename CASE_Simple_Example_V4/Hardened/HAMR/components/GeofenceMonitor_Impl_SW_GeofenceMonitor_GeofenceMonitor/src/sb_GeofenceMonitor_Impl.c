// This file will be regenerated, do not edit

#include <sb_GeofenceMonitor_Impl.h>
#include <sb_queue_union_art_DataContent_1.h>
#include <sb_event_counter.h>
#include <sb_queue_union_art_DataContent_1.h>
#include <sb_event_counter.h>
#include <GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor_adapter.h>
#include <string.h>
#include <camkes.h>

seqNum_t sb_FlyZones_seqNum;

/*****************************************************************
 * sb_FlyZones_is_empty:
 *
 * Helper method to determine if the data infrastructure port has
 * received data
 *
 ****************************************************************/
bool sb_FlyZones_is_empty() {
  return is_empty_sp_union_art_DataContent(sb_FlyZones);
}

bool sb_FlyZones_read(union_art_DataContent * value) {
  seqNum_t new_seqNum;
  if ( read_sp_union_art_DataContent(sb_FlyZones, value, &new_seqNum) ) {
    sb_FlyZones_seqNum = new_seqNum;
    return true;
  } else {
    return false;
  } 
}

sb_queue_union_art_DataContent_1_Recv_t sb_FlightPlan_In_recv_queue;

/************************************************************************
 * sb_FlightPlan_In_dequeue_poll:
 ************************************************************************/
bool sb_FlightPlan_In_dequeue_poll(sb_event_counter_t *numDropped, union_art_DataContent *data) {
  return sb_queue_union_art_DataContent_1_dequeue(&sb_FlightPlan_In_recv_queue, numDropped, data);
}

/************************************************************************
 * sb_FlightPlan_In_dequeue:
 ************************************************************************/
bool sb_FlightPlan_In_dequeue(union_art_DataContent *data) {
  sb_event_counter_t numDropped;
  return sb_FlightPlan_In_dequeue_poll(&numDropped, data);
}

/************************************************************************
 * sb_FlightPlan_In_is_empty:
 *
 * Helper method to determine if infrastructure port has received new
 * events
 ************************************************************************/
bool sb_FlightPlan_In_is_empty(){
  return sb_queue_union_art_DataContent_1_is_empty(&sb_FlightPlan_In_recv_queue);
}

/************************************************************************
 * sb_FlightPlan_In_notification_handler:
 * Invoked by: seL4 notification callback
 *
 * This is the function invoked by an seL4 notification callback to 
 * dispatch the component due to the arrival of an event on port
 * sb_FlightPlan_In
 *
 ************************************************************************/
static void sb_FlightPlan_In_notification_handler(void * unused) {
  MUTEXOP(sb_dispatch_sem_post())
  CALLBACKOP(sb_FlightPlan_In_notification_reg_callback(sb_FlightPlan_In_notification_handler, NULL));
}

bool sb_FlightPlan_Out_enqueue(const union_art_DataContent *data) {
  sb_queue_union_art_DataContent_1_enqueue(sb_FlightPlan_Out_queue_1, (union_art_DataContent*) data);
  sb_FlightPlan_Out_1_notification_emit();

  return true;
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


// send FlightPlan_Out: Out EventDataPort SW__Mission
Unit HAMR_SW_GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor_seL4Nix_FlightPlan_Out_Send(
  STACK_FRAME
  art_DataContent d) {
  DeclNewStackFrame(caller, "sb_GeofenceMonitor_Impl.c", "", "HAMR_SW_GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor_seL4Nix_FlightPlan_Out_Send", 0);

  sb_FlightPlan_Out_enqueue(d);
}

// send Alert: Out EventPort
Unit HAMR_SW_GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor_seL4Nix_Alert_Send(
  STACK_FRAME
  art_DataContent d) {
  DeclNewStackFrame(caller, "sb_GeofenceMonitor_Impl.c", "", "HAMR_SW_GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor_seL4Nix_Alert_Send", 0);

  // event port - can ignore the Slang Empty payload
  art_Empty payload = (art_Empty) d;

  // send event via CAmkES
  sb_Alert_enqueue();
}

// is_empty FlyZones: In DataPort
B HAMR_SW_GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor_seL4Nix_FlyZones_IsEmpty(STACK_FRAME_ONLY) {
  return sb_FlyZones_is_empty();
}

// receive FlyZones: In DataPort union_art_DataContent
Unit HAMR_SW_GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor_seL4Nix_FlyZones_Receive(
  STACK_FRAME
  Option_8E9F45 result) {
  DeclNewStackFrame(caller, "sb_GeofenceMonitor_Impl.c", "", "HAMR_SW_GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor_seL4Nix_FlyZones_Receive", 0);

  union_art_DataContent val;
  if(sb_FlyZones_read((union_art_DataContent *) &val)) {
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


// is_empty FlightPlan_In: In EventDataPort
B HAMR_SW_GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor_seL4Nix_FlightPlan_In_IsEmpty(STACK_FRAME_ONLY) {
  return sb_FlightPlan_In_is_empty();
}

// receive FlightPlan_In: In EventDataPort union_art_DataContent
Unit HAMR_SW_GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor_seL4Nix_FlightPlan_In_Receive(
  STACK_FRAME
  Option_8E9F45 result) {
  DeclNewStackFrame(caller, "sb_GeofenceMonitor_Impl.c", "", "HAMR_SW_GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor_seL4Nix_FlightPlan_In_Receive", 0);

  union_art_DataContent val;
  if(sb_FlightPlan_In_dequeue((union_art_DataContent *) &val)) {
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
  DeclNewStackFrame(NULL, "sb_GeofenceMonitor_Impl.c", "", "pre_init", 0);

  printf("Entering pre-init of GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor\n");

  // initialise data structure for incoming event data port FlightPlan_In
  sb_queue_union_art_DataContent_1_Recv_init(&sb_FlightPlan_In_recv_queue, sb_FlightPlan_In_queue);

  // initialise data structure for outgoing event data port FlightPlan_Out
  sb_queue_union_art_DataContent_1_init(sb_FlightPlan_Out_queue_1);

  // initialise shared counter for event port Alert
  *sb_Alert_counter = 0;

  // initialise slang-embedded components/ports
  HAMR_SW_GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor_adapter_initialiseArchitecture(SF_LAST);

  // call the component's initialise entrypoint
  HAMR_SW_GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor_adapter_initialiseEntryPoint(SF_LAST);

  printf("Leaving pre-init of GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor\n");
}

void post_init(void) {
  DeclNewStackFrame(NULL, "sb_GeofenceMonitor_Impl.c", "", "post_init", 0);

  // register callback for EventDataPort port FlightPlan_In
  CALLBACKOP(sb_FlightPlan_In_notification_reg_callback(sb_FlightPlan_In_notification_handler, NULL));
}

/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {
  DeclNewStackFrame(NULL, "sb_GeofenceMonitor_Impl.c", "", "run", 0);


  MUTEXOP(sb_dispatch_sem_wait())
  for(;;) {
    MUTEXOP(sb_dispatch_sem_wait())
    // call the component's compute entrypoint
    HAMR_SW_GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor_adapter_computeEntryPoint(SF_LAST);
  }
  return 0;
}
