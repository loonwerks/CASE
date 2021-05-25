// This file will be regenerated, do not edit

#include <sb_RadioDriver_Attestation_Impl.h>
#include <sb_queue_union_art_DataContent_1.h>
#include <sb_queue_union_art_DataContent_1.h>
#include <sb_event_counter.h>
#include <sb_event_counter.h>
#include <RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_adapter.h>
#include <string.h>
#include <camkes.h>

bool sb_MissionCommand_enqueue(const union_art_DataContent *data) {
  sb_queue_union_art_DataContent_1_enqueue(sb_MissionCommand_queue_1, (union_art_DataContent*) data);
  sb_MissionCommand_1_notification_emit();

  return true;
}

sb_queue_union_art_DataContent_1_Recv_t sb_AttestationRequest_recv_queue;

/************************************************************************
 * sb_AttestationRequest_dequeue_poll:
 ************************************************************************/
bool sb_AttestationRequest_dequeue_poll(sb_event_counter_t *numDropped, union_art_DataContent *data) {
  return sb_queue_union_art_DataContent_1_dequeue(&sb_AttestationRequest_recv_queue, numDropped, data);
}

/************************************************************************
 * sb_AttestationRequest_dequeue:
 ************************************************************************/
bool sb_AttestationRequest_dequeue(union_art_DataContent *data) {
  sb_event_counter_t numDropped;
  return sb_AttestationRequest_dequeue_poll(&numDropped, data);
}

/************************************************************************
 * sb_AttestationRequest_is_empty:
 *
 * Helper method to determine if infrastructure port has received new
 * events
 ************************************************************************/
bool sb_AttestationRequest_is_empty(){
  return sb_queue_union_art_DataContent_1_is_empty(&sb_AttestationRequest_recv_queue);
}

/************************************************************************
 * sb_AttestationRequest_notification_handler:
 * Invoked by: seL4 notification callback
 *
 * This is the function invoked by an seL4 notification callback to 
 * dispatch the component due to the arrival of an event on port
 * sb_AttestationRequest
 *
 ************************************************************************/
static void sb_AttestationRequest_notification_handler(void * unused) {
  MUTEXOP(sb_dispatch_sem_post())
  CALLBACKOP(sb_AttestationRequest_notification_reg_callback(sb_AttestationRequest_notification_handler, NULL));
}

bool sb_AttestationResponse_enqueue(const union_art_DataContent *data) {
  sb_queue_union_art_DataContent_1_enqueue(sb_AttestationResponse_queue_1, (union_art_DataContent*) data);
  sb_AttestationResponse_1_notification_emit();

  return true;
}

/************************************************************************
 *
 * Static variables and queue management functions for event port:
 *     Alert
 *
 ************************************************************************/
static sb_event_counter_t sb_Alert_received_events = 0;
static sb_event_counter_t sb_Alert_last_counter = 0;

/************************************************************************
 * sb_Alert_dequeue:
 * Invoked from local active thread.
 *
 * This is the function invoked by the active thread to decrement the
 * input event index.
 *
 ************************************************************************/
bool sb_Alert_dequeue() {
  if(sb_Alert_received_events > 0) {
    sb_Alert_received_events--;
    return true;
  } else {
    return false;
  }
}

/************************************************************************
 * sb_Alert_is_empty;
 *
 * Helper method to determine if infrastructure port has not received
 * any new events since the last dispatch
 *
 ************************************************************************/
bool sb_Alert_is_empty() {
  return sb_Alert_received_events == 0;
}

void sb_freeze_event_port_Alert() {
  sb_event_counter_t current_sb_Alert_counter;

  sb_Alert_received_events = 0; // drop any events not handled during last dispatch

  // get current shared counter value
  current_sb_Alert_counter = *sb_Alert_counter;

  // Acquire memory fence - ensure preceding read occurs before any subsequent read or write
  sb_Alert_counter_acquire();

  // NOTE: Counters can wrap, so we must use != below instead of >
  while(current_sb_Alert_counter != sb_Alert_last_counter){
    sb_Alert_last_counter++;
    sb_Alert_received_events++;
  }

  if(sb_Alert_received_events > 0) {

    // Alert's queue size is 1
    if(sb_Alert_received_events > 1) {
      //printf("RadioDriver_Attestation_Impl: dropping %i event(s) from incoming event port Alert\n", (sb_Alert_received_events - 1));

      // drop events
      sb_Alert_received_events = 1;
    }
  }
}

/************************************************************************
 * sb_Alert_handler:
 * Invoked by: seL4 notification callback
 *
 * This is the function invoked by an seL4 notification callback to 
 * dispatch the component due to the arrival of an event on port
 * Alert
 *
 ************************************************************************/
static void sb_Alert_handler(void * unused) {
  MUTEXOP(sb_dispatch_sem_post())
  CALLBACKOP(sb_Alert_reg_callback(sb_Alert_handler, NULL));
}

// send MissionCommand: Out EventDataPort SW__RF_Msg_Impl
Unit HAMR_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_seL4Nix_MissionCommand_Send(
  STACK_FRAME
  art_DataContent d) {
  DeclNewStackFrame(caller, "sb_RadioDriver_Attestation_Impl.c", "", "HAMR_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_seL4Nix_MissionCommand_Send", 0);

  sb_MissionCommand_enqueue(d);
}

// send AttestationResponse: Out EventDataPort SW__AttestationResponseMsg_Impl
Unit HAMR_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_seL4Nix_AttestationResponse_Send(
  STACK_FRAME
  art_DataContent d) {
  DeclNewStackFrame(caller, "sb_RadioDriver_Attestation_Impl.c", "", "HAMR_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_seL4Nix_AttestationResponse_Send", 0);

  sb_AttestationResponse_enqueue(d);
}

// is_empty AttestationRequest: In EventDataPort
B HAMR_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_seL4Nix_AttestationRequest_IsEmpty(STACK_FRAME_ONLY) {
  return sb_AttestationRequest_is_empty();
}

// receive AttestationRequest: In EventDataPort union_art_DataContent
Unit HAMR_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_seL4Nix_AttestationRequest_Receive(
  STACK_FRAME
  Option_8E9F45 result) {
  DeclNewStackFrame(caller, "sb_RadioDriver_Attestation_Impl.c", "", "HAMR_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_seL4Nix_AttestationRequest_Receive", 0);

  union_art_DataContent val;
  if(sb_AttestationRequest_dequeue((union_art_DataContent *) &val)) {
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


// is_empty Alert: In EventPort
B HAMR_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_seL4Nix_Alert_IsEmpty(STACK_FRAME_ONLY) {
  return sb_Alert_is_empty();
}

// receive Alert: In EventPort
Unit HAMR_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_seL4Nix_Alert_Receive(STACK_FRAME
  Option_8E9F45 result) {
  DeclNewStackFrame(caller, "sb_RadioDriver_Attestation_Impl.c", "", "HAMR_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_seL4Nix_Alert_Receive", 0);

  if(sb_Alert_dequeue()) {
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
  DeclNewStackFrame(NULL, "sb_RadioDriver_Attestation_Impl.c", "", "pre_init", 0);

  printf("Entering pre-init of RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation\n");

  // initialise data structure for outgoing event data port MissionCommand
  sb_queue_union_art_DataContent_1_init(sb_MissionCommand_queue_1);

  // initialise data structure for incoming event data port AttestationRequest
  sb_queue_union_art_DataContent_1_Recv_init(&sb_AttestationRequest_recv_queue, sb_AttestationRequest_queue);

  // initialise data structure for outgoing event data port AttestationResponse
  sb_queue_union_art_DataContent_1_init(sb_AttestationResponse_queue_1);

  // initialise slang-embedded components/ports
  HAMR_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_adapter_initialiseArchitecture(SF_LAST);

  // call the component's initialise entrypoint
  HAMR_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_adapter_initialiseEntryPoint(SF_LAST);

  printf("Leaving pre-init of RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation\n");
}

void post_init(void) {
  DeclNewStackFrame(NULL, "sb_RadioDriver_Attestation_Impl.c", "", "post_init", 0);

  // register callback for EventDataPort port AttestationRequest
  CALLBACKOP(sb_AttestationRequest_notification_reg_callback(sb_AttestationRequest_notification_handler, NULL));

  // register callback for EventPort port Alert
  CALLBACKOP(sb_Alert_reg_callback(sb_Alert_handler, NULL));
}

/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {
  DeclNewStackFrame(NULL, "sb_RadioDriver_Attestation_Impl.c", "", "run", 0);


  MUTEXOP(sb_dispatch_sem_wait())
  for(;;) {
    MUTEXOP(sb_dispatch_sem_wait())
    sb_freeze_event_port_Alert();
    // call the component's compute entrypoint
    HAMR_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_adapter_computeEntryPoint(SF_LAST);
  }
  return 0;
}
