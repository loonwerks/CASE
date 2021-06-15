// This file will be regenerated, do not edit

#include <sb_RadioDriver_Impl.h>
#include <sb_queue_union_art_DataContent_1.h>
#include <sb_event_counter.h>
#include <sb_queue_union_art_DataContent_1.h>
#include <RadioDriver_Impl_SW_Radio_RadioDriver_adapter.h>
#include <string.h>
#include <camkes.h>

sb_queue_union_art_DataContent_1_Recv_t sb_AttestationTesterResponse_recv_queue;

/************************************************************************
 * sb_AttestationTesterResponse_dequeue_poll:
 ************************************************************************/
bool sb_AttestationTesterResponse_dequeue_poll(sb_event_counter_t *numDropped, union_art_DataContent *data) {
  return sb_queue_union_art_DataContent_1_dequeue(&sb_AttestationTesterResponse_recv_queue, numDropped, data);
}

/************************************************************************
 * sb_AttestationTesterResponse_dequeue:
 ************************************************************************/
bool sb_AttestationTesterResponse_dequeue(union_art_DataContent *data) {
  sb_event_counter_t numDropped;
  return sb_AttestationTesterResponse_dequeue_poll(&numDropped, data);
}

/************************************************************************
 * sb_AttestationTesterResponse_is_empty:
 *
 * Helper method to determine if infrastructure port has received new
 * events
 ************************************************************************/
bool sb_AttestationTesterResponse_is_empty(){
  return sb_queue_union_art_DataContent_1_is_empty(&sb_AttestationTesterResponse_recv_queue);
}

/************************************************************************
 * sb_AttestationTesterResponse_notification_handler:
 * Invoked by: seL4 notification callback
 *
 * This is the function invoked by an seL4 notification callback to 
 * dispatch the component due to the arrival of an event on port
 * sb_AttestationTesterResponse
 *
 ************************************************************************/
static void sb_AttestationTesterResponse_notification_handler(void * unused) {
  MUTEXOP(sb_dispatch_sem_post())
  CALLBACKOP(sb_AttestationTesterResponse_notification_reg_callback(sb_AttestationTesterResponse_notification_handler, NULL));
}

bool sb_AttestationTesterRequest_enqueue(const union_art_DataContent *data) {
  sb_queue_union_art_DataContent_1_enqueue(sb_AttestationTesterRequest_queue_1, (union_art_DataContent*) data);
  sb_AttestationTesterRequest_1_notification_emit();

  return true;
}

bool sb_MissionCommand_enqueue(const union_art_DataContent *data) {
  sb_queue_union_art_DataContent_1_enqueue(sb_MissionCommand_queue_1, (union_art_DataContent*) data);
  sb_MissionCommand_1_notification_emit();

  return true;
}

// send AttestationTesterRequest: Out EventDataPort SW__AttestationRequestMsg_Impl
Unit HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_RadioDriver_seL4Nix_AttestationTesterRequest_Send(
  STACK_FRAME
  art_DataContent d) {
  DeclNewStackFrame(caller, "sb_RadioDriver_Impl.c", "", "HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_RadioDriver_seL4Nix_AttestationTesterRequest_Send", 0);

  sb_AttestationTesterRequest_enqueue(d);
}

// send MissionCommand: Out EventDataPort SW__RF_Msg_Impl
Unit HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_RadioDriver_seL4Nix_MissionCommand_Send(
  STACK_FRAME
  art_DataContent d) {
  DeclNewStackFrame(caller, "sb_RadioDriver_Impl.c", "", "HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_RadioDriver_seL4Nix_MissionCommand_Send", 0);

  sb_MissionCommand_enqueue(d);
}

// is_empty AttestationTesterResponse: In EventDataPort
B HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_RadioDriver_seL4Nix_AttestationTesterResponse_IsEmpty(STACK_FRAME_ONLY) {
  return sb_AttestationTesterResponse_is_empty();
}

// receive AttestationTesterResponse: In EventDataPort union_art_DataContent
Unit HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_RadioDriver_seL4Nix_AttestationTesterResponse_Receive(
  STACK_FRAME
  Option_8E9F45 result) {
  DeclNewStackFrame(caller, "sb_RadioDriver_Impl.c", "", "HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_RadioDriver_seL4Nix_AttestationTesterResponse_Receive", 0);

  union_art_DataContent val;
  if(sb_AttestationTesterResponse_dequeue((union_art_DataContent *) &val)) {
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
  DeclNewStackFrame(NULL, "sb_RadioDriver_Impl.c", "", "pre_init", 0);

  printf("Entering pre-init of RadioDriver_Impl_SW_Radio_RadioDriver\n");

  // initialise data structure for incoming event data port AttestationTesterResponse
  sb_queue_union_art_DataContent_1_Recv_init(&sb_AttestationTesterResponse_recv_queue, sb_AttestationTesterResponse_queue);

  // initialise data structure for outgoing event data port AttestationTesterRequest
  sb_queue_union_art_DataContent_1_init(sb_AttestationTesterRequest_queue_1);

  // initialise data structure for outgoing event data port MissionCommand
  sb_queue_union_art_DataContent_1_init(sb_MissionCommand_queue_1);

  // initialise slang-embedded components/ports
  HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_RadioDriver_adapter_initialiseArchitecture(SF_LAST);

  // call the component's initialise entrypoint
  HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_RadioDriver_adapter_initialiseEntryPoint(SF_LAST);

  printf("Leaving pre-init of RadioDriver_Impl_SW_Radio_RadioDriver\n");
}

void post_init(void) {
  DeclNewStackFrame(NULL, "sb_RadioDriver_Impl.c", "", "post_init", 0);

  // register callback for EventDataPort port AttestationTesterResponse
  CALLBACKOP(sb_AttestationTesterResponse_notification_reg_callback(sb_AttestationTesterResponse_notification_handler, NULL));
}

/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {
  DeclNewStackFrame(NULL, "sb_RadioDriver_Impl.c", "", "run", 0);

  MUTEXOP(sb_dispatch_sem_wait())
  for(;;) {
    MUTEXOP(sb_dispatch_sem_wait())
    // call the component's compute entrypoint
    HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_RadioDriver_adapter_computeEntryPoint(SF_LAST);
  }
  return 0;
}
