// This file will be regenerated, do not edit

#include <sb_AttestationGate_Impl.h>
#include <sb_queue_union_art_DataContent_1.h>
#include <sb_event_counter.h>
#include <sb_queue_union_art_DataContent_1.h>
#include <AttestationGate_Impl_SW_AttestationGate_AttestationGate_adapter.h>
#include <string.h>
#include <camkes.h>

sb_queue_union_art_DataContent_1_Recv_t sb_MissionCommand_in_recv_queue;

/************************************************************************
 * sb_MissionCommand_in_dequeue_poll:
 ************************************************************************/
bool sb_MissionCommand_in_dequeue_poll(sb_event_counter_t *numDropped, union_art_DataContent *data) {
  return sb_queue_union_art_DataContent_1_dequeue(&sb_MissionCommand_in_recv_queue, numDropped, data);
}

/************************************************************************
 * sb_MissionCommand_in_dequeue:
 ************************************************************************/
bool sb_MissionCommand_in_dequeue(union_art_DataContent *data) {
  sb_event_counter_t numDropped;
  return sb_MissionCommand_in_dequeue_poll(&numDropped, data);
}

/************************************************************************
 * sb_MissionCommand_in_is_empty:
 *
 * Helper method to determine if infrastructure port has received new
 * events
 ************************************************************************/
bool sb_MissionCommand_in_is_empty(){
  return sb_queue_union_art_DataContent_1_is_empty(&sb_MissionCommand_in_recv_queue);
}

bool sb_MissionCommand_out_enqueue(const union_art_DataContent *data) {
  sb_queue_union_art_DataContent_1_enqueue(sb_MissionCommand_out_queue_1, (union_art_DataContent*) data);
  sb_MissionCommand_out_1_notification_emit();

  return true;
}

sb_queue_union_art_DataContent_1_Recv_t sb_TrustedIds_recv_queue;

/************************************************************************
 * sb_TrustedIds_dequeue_poll:
 ************************************************************************/
bool sb_TrustedIds_dequeue_poll(sb_event_counter_t *numDropped, union_art_DataContent *data) {
  return sb_queue_union_art_DataContent_1_dequeue(&sb_TrustedIds_recv_queue, numDropped, data);
}

/************************************************************************
 * sb_TrustedIds_dequeue:
 ************************************************************************/
bool sb_TrustedIds_dequeue(union_art_DataContent *data) {
  sb_event_counter_t numDropped;
  return sb_TrustedIds_dequeue_poll(&numDropped, data);
}

/************************************************************************
 * sb_TrustedIds_is_empty:
 *
 * Helper method to determine if infrastructure port has received new
 * events
 ************************************************************************/
bool sb_TrustedIds_is_empty(){
  return sb_queue_union_art_DataContent_1_is_empty(&sb_TrustedIds_recv_queue);
}

// send MissionCommand_out: Out EventDataPort Data_Types__RF_Msg_Impl
Unit HAMR_Simple_V4_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_seL4Nix_MissionCommand_out_Send(
  STACK_FRAME
  art_DataContent d) {
  DeclNewStackFrame(caller, "sb_AttestationGate_Impl.c", "", "HAMR_Simple_V4_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_seL4Nix_MissionCommand_out_Send", 0);

  sb_MissionCommand_out_enqueue(d);
}

// is_empty MissionCommand_in: In EventDataPort
B HAMR_Simple_V4_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_seL4Nix_MissionCommand_in_IsEmpty(STACK_FRAME_ONLY) {
  return sb_MissionCommand_in_is_empty();
}

// receive MissionCommand_in: In EventDataPort union_art_DataContent
Unit HAMR_Simple_V4_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_seL4Nix_MissionCommand_in_Receive(
  STACK_FRAME
  Option_8E9F45 result) {
  DeclNewStackFrame(caller, "sb_AttestationGate_Impl.c", "", "HAMR_Simple_V4_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_seL4Nix_MissionCommand_in_Receive", 0);

  union_art_DataContent val;
  if(sb_MissionCommand_in_dequeue((union_art_DataContent *) &val)) {
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


// is_empty TrustedIds: In EventDataPort
B HAMR_Simple_V4_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_seL4Nix_TrustedIds_IsEmpty(STACK_FRAME_ONLY) {
  return sb_TrustedIds_is_empty();
}

// receive TrustedIds: In EventDataPort union_art_DataContent
Unit HAMR_Simple_V4_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_seL4Nix_TrustedIds_Receive(
  STACK_FRAME
  Option_8E9F45 result) {
  DeclNewStackFrame(caller, "sb_AttestationGate_Impl.c", "", "HAMR_Simple_V4_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_seL4Nix_TrustedIds_Receive", 0);

  union_art_DataContent val;
  if(sb_TrustedIds_dequeue((union_art_DataContent *) &val)) {
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
  DeclNewStackFrame(NULL, "sb_AttestationGate_Impl.c", "", "pre_init", 0);

  printf("Entering pre-init of AttestationGate_Impl_SW_AttestationGate_AttestationGate\n");

  // initialise data structure for incoming event data port MissionCommand_in
  sb_queue_union_art_DataContent_1_Recv_init(&sb_MissionCommand_in_recv_queue, sb_MissionCommand_in_queue);

  // initialise data structure for outgoing event data port MissionCommand_out
  sb_queue_union_art_DataContent_1_init(sb_MissionCommand_out_queue_1);

  // initialise data structure for incoming event data port TrustedIds
  sb_queue_union_art_DataContent_1_Recv_init(&sb_TrustedIds_recv_queue, sb_TrustedIds_queue);

  // initialise slang-embedded components/ports
  HAMR_Simple_V4_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_adapter_initialiseArchitecture(SF_LAST);

  // call the component's initialise entrypoint
  HAMR_Simple_V4_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_adapter_initialiseEntryPoint(SF_LAST);

  printf("Leaving pre-init of AttestationGate_Impl_SW_AttestationGate_AttestationGate\n");
}

#ifndef CAKEML_ASSEMBLIES_PRESENT
/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {
  DeclNewStackFrame(NULL, "sb_AttestationGate_Impl.c", "", "run", 0);

  sb_pacer_notification_wait();
  for(;;) {
    sb_pacer_notification_wait();
    // call the component's compute entrypoint
    HAMR_Simple_V4_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_adapter_computeEntryPoint(SF_LAST);
  }
  return 0;
}
#endif
