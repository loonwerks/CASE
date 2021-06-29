// This file will be regenerated, do not edit

#include <sb_AttestationManager_Impl.h>
#include <sb_queue_union_art_DataContent_1.h>
#include <sb_queue_union_art_DataContent_1.h>
#include <sb_event_counter.h>
#include <AttestationManager_Impl_SW_AttestationManager_AttestationManager_adapter.h>
#include <string.h>
#include <camkes.h>

bool sb_AttestationRequest_enqueue(const union_art_DataContent *data) {
  sb_queue_union_art_DataContent_1_enqueue(sb_AttestationRequest_queue_1, (union_art_DataContent*) data);
  sb_AttestationRequest_1_notification_emit();

  return true;
}

sb_queue_union_art_DataContent_1_Recv_t sb_AttestationResponse_recv_queue;

/************************************************************************
 * sb_AttestationResponse_dequeue_poll:
 ************************************************************************/
bool sb_AttestationResponse_dequeue_poll(sb_event_counter_t *numDropped, union_art_DataContent *data) {
  return sb_queue_union_art_DataContent_1_dequeue(&sb_AttestationResponse_recv_queue, numDropped, data);
}

/************************************************************************
 * sb_AttestationResponse_dequeue:
 ************************************************************************/
bool sb_AttestationResponse_dequeue(union_art_DataContent *data) {
  sb_event_counter_t numDropped;
  return sb_AttestationResponse_dequeue_poll(&numDropped, data);
}

/************************************************************************
 * sb_AttestationResponse_is_empty:
 *
 * Helper method to determine if infrastructure port has received new
 * events
 ************************************************************************/
bool sb_AttestationResponse_is_empty(){
  return sb_queue_union_art_DataContent_1_is_empty(&sb_AttestationResponse_recv_queue);
}

bool sb_TrustedIds_enqueue(const union_art_DataContent *data) {
  sb_queue_union_art_DataContent_1_enqueue(sb_TrustedIds_queue_1, (union_art_DataContent*) data);
  sb_TrustedIds_1_notification_emit();

  return true;
}

// send AttestationRequest: Out EventDataPort Data_Types__AttestationRequestMsg_Impl
Unit HAMR_Simple_V4_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_seL4Nix_AttestationRequest_Send(
  STACK_FRAME
  art_DataContent d) {
  DeclNewStackFrame(caller, "sb_AttestationManager_Impl.c", "", "HAMR_Simple_V4_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_seL4Nix_AttestationRequest_Send", 0);

  sb_AttestationRequest_enqueue(d);
}

// send TrustedIds: Out EventDataPort Data_Types__AllowList_Impl
Unit HAMR_Simple_V4_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_seL4Nix_TrustedIds_Send(
  STACK_FRAME
  art_DataContent d) {
  DeclNewStackFrame(caller, "sb_AttestationManager_Impl.c", "", "HAMR_Simple_V4_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_seL4Nix_TrustedIds_Send", 0);

  sb_TrustedIds_enqueue(d);
}

// is_empty AttestationResponse: In EventDataPort
B HAMR_Simple_V4_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_seL4Nix_AttestationResponse_IsEmpty(STACK_FRAME_ONLY) {
  return sb_AttestationResponse_is_empty();
}

// receive AttestationResponse: In EventDataPort union_art_DataContent
Unit HAMR_Simple_V4_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_seL4Nix_AttestationResponse_Receive(
  STACK_FRAME
  Option_8E9F45 result) {
  DeclNewStackFrame(caller, "sb_AttestationManager_Impl.c", "", "HAMR_Simple_V4_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_seL4Nix_AttestationResponse_Receive", 0);

  union_art_DataContent val;
  if(sb_AttestationResponse_dequeue((union_art_DataContent *) &val)) {
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
  DeclNewStackFrame(NULL, "sb_AttestationManager_Impl.c", "", "pre_init", 0);

  printf("Entering pre-init of AttestationManager_Impl_SW_AttestationManager_AttestationManager\n");

  // initialise data structure for outgoing event data port AttestationRequest
  sb_queue_union_art_DataContent_1_init(sb_AttestationRequest_queue_1);

  // initialise data structure for incoming event data port AttestationResponse
  sb_queue_union_art_DataContent_1_Recv_init(&sb_AttestationResponse_recv_queue, sb_AttestationResponse_queue);

  // initialise data structure for outgoing event data port TrustedIds
  sb_queue_union_art_DataContent_1_init(sb_TrustedIds_queue_1);

  // initialise slang-embedded components/ports
  HAMR_Simple_V4_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_adapter_initialiseArchitecture(SF_LAST);

  // call the component's initialise entrypoint
  HAMR_Simple_V4_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_adapter_initialiseEntryPoint(SF_LAST);

  printf("Leaving pre-init of AttestationManager_Impl_SW_AttestationManager_AttestationManager\n");
}

#ifndef CAKEML_ASSEMBLIES_PRESENT
/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {
  DeclNewStackFrame(NULL, "sb_AttestationManager_Impl.c", "", "run", 0);

  sb_self_pacer_tick_emit();
  for(;;) {
    sb_self_pacer_tock_wait();
    // call the component's compute entrypoint
    HAMR_Simple_V4_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_adapter_computeEntryPoint(SF_LAST);
    sb_self_pacer_tick_emit();
  }
  return 0;
}
#endif
