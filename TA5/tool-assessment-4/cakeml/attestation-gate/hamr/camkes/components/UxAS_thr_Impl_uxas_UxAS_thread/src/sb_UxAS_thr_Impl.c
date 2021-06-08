// This file will be regenerated, do not edit

#include <sb_UxAS_thr_Impl.h>
#include <sb_queue_union_art_DataContent_1.h>
#include <sb_event_counter.h>
#include <UxAS_thr_Impl_uxas_UxAS_thread_adapter.h>
#include <string.h>
#include <camkes.h>

sb_queue_union_art_DataContent_1_Recv_t sb_AutomationRequest_recv_queue;

/************************************************************************
 * sb_AutomationRequest_dequeue_poll:
 ************************************************************************/
bool sb_AutomationRequest_dequeue_poll(sb_event_counter_t *numDropped, union_art_DataContent *data) {
  return sb_queue_union_art_DataContent_1_dequeue(&sb_AutomationRequest_recv_queue, numDropped, data);
}

/************************************************************************
 * sb_AutomationRequest_dequeue:
 ************************************************************************/
bool sb_AutomationRequest_dequeue(union_art_DataContent *data) {
  sb_event_counter_t numDropped;
  return sb_AutomationRequest_dequeue_poll(&numDropped, data);
}

/************************************************************************
 * sb_AutomationRequest_is_empty:
 *
 * Helper method to determine if infrastructure port has received new
 * events
 ************************************************************************/
bool sb_AutomationRequest_is_empty(){
  return sb_queue_union_art_DataContent_1_is_empty(&sb_AutomationRequest_recv_queue);
}

sb_queue_union_art_DataContent_1_Recv_t sb_OperatingRegion_recv_queue;

/************************************************************************
 * sb_OperatingRegion_dequeue_poll:
 ************************************************************************/
bool sb_OperatingRegion_dequeue_poll(sb_event_counter_t *numDropped, union_art_DataContent *data) {
  return sb_queue_union_art_DataContent_1_dequeue(&sb_OperatingRegion_recv_queue, numDropped, data);
}

/************************************************************************
 * sb_OperatingRegion_dequeue:
 ************************************************************************/
bool sb_OperatingRegion_dequeue(union_art_DataContent *data) {
  sb_event_counter_t numDropped;
  return sb_OperatingRegion_dequeue_poll(&numDropped, data);
}

/************************************************************************
 * sb_OperatingRegion_is_empty:
 *
 * Helper method to determine if infrastructure port has received new
 * events
 ************************************************************************/
bool sb_OperatingRegion_is_empty(){
  return sb_queue_union_art_DataContent_1_is_empty(&sb_OperatingRegion_recv_queue);
}

sb_queue_union_art_DataContent_1_Recv_t sb_LineSearchTask_recv_queue;

/************************************************************************
 * sb_LineSearchTask_dequeue_poll:
 ************************************************************************/
bool sb_LineSearchTask_dequeue_poll(sb_event_counter_t *numDropped, union_art_DataContent *data) {
  return sb_queue_union_art_DataContent_1_dequeue(&sb_LineSearchTask_recv_queue, numDropped, data);
}

/************************************************************************
 * sb_LineSearchTask_dequeue:
 ************************************************************************/
bool sb_LineSearchTask_dequeue(union_art_DataContent *data) {
  sb_event_counter_t numDropped;
  return sb_LineSearchTask_dequeue_poll(&numDropped, data);
}

/************************************************************************
 * sb_LineSearchTask_is_empty:
 *
 * Helper method to determine if infrastructure port has received new
 * events
 ************************************************************************/
bool sb_LineSearchTask_is_empty(){
  return sb_queue_union_art_DataContent_1_is_empty(&sb_LineSearchTask_recv_queue);
}

// is_empty AutomationRequest: In EventDataPort
B attestation_gate_SysContext_UxAS_thr_Impl_uxas_UxAS_thread_seL4Nix_AutomationRequest_IsEmpty(STACK_FRAME_ONLY) {
  return sb_AutomationRequest_is_empty();
}

// receive AutomationRequest: In EventDataPort union_art_DataContent
Unit attestation_gate_SysContext_UxAS_thr_Impl_uxas_UxAS_thread_seL4Nix_AutomationRequest_Receive(
  STACK_FRAME
  Option_8E9F45 result) {
  DeclNewStackFrame(caller, "sb_UxAS_thr_Impl.c", "", "attestation_gate_SysContext_UxAS_thr_Impl_uxas_UxAS_thread_seL4Nix_AutomationRequest_Receive", 0);

  union_art_DataContent val;
  if(sb_AutomationRequest_dequeue((union_art_DataContent *) &val)) {
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


// is_empty OperatingRegion: In EventDataPort
B attestation_gate_SysContext_UxAS_thr_Impl_uxas_UxAS_thread_seL4Nix_OperatingRegion_IsEmpty(STACK_FRAME_ONLY) {
  return sb_OperatingRegion_is_empty();
}

// receive OperatingRegion: In EventDataPort union_art_DataContent
Unit attestation_gate_SysContext_UxAS_thr_Impl_uxas_UxAS_thread_seL4Nix_OperatingRegion_Receive(
  STACK_FRAME
  Option_8E9F45 result) {
  DeclNewStackFrame(caller, "sb_UxAS_thr_Impl.c", "", "attestation_gate_SysContext_UxAS_thr_Impl_uxas_UxAS_thread_seL4Nix_OperatingRegion_Receive", 0);

  union_art_DataContent val;
  if(sb_OperatingRegion_dequeue((union_art_DataContent *) &val)) {
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


// is_empty LineSearchTask: In EventDataPort
B attestation_gate_SysContext_UxAS_thr_Impl_uxas_UxAS_thread_seL4Nix_LineSearchTask_IsEmpty(STACK_FRAME_ONLY) {
  return sb_LineSearchTask_is_empty();
}

// receive LineSearchTask: In EventDataPort union_art_DataContent
Unit attestation_gate_SysContext_UxAS_thr_Impl_uxas_UxAS_thread_seL4Nix_LineSearchTask_Receive(
  STACK_FRAME
  Option_8E9F45 result) {
  DeclNewStackFrame(caller, "sb_UxAS_thr_Impl.c", "", "attestation_gate_SysContext_UxAS_thr_Impl_uxas_UxAS_thread_seL4Nix_LineSearchTask_Receive", 0);

  union_art_DataContent val;
  if(sb_LineSearchTask_dequeue((union_art_DataContent *) &val)) {
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
  DeclNewStackFrame(NULL, "sb_UxAS_thr_Impl.c", "", "pre_init", 0);

  printf("Entering pre-init of UxAS_thr_Impl_uxas_UxAS_thread\n");

  // initialise data structure for incoming event data port AutomationRequest
  sb_queue_union_art_DataContent_1_Recv_init(&sb_AutomationRequest_recv_queue, sb_AutomationRequest_queue);

  // initialise data structure for incoming event data port OperatingRegion
  sb_queue_union_art_DataContent_1_Recv_init(&sb_OperatingRegion_recv_queue, sb_OperatingRegion_queue);

  // initialise data structure for incoming event data port LineSearchTask
  sb_queue_union_art_DataContent_1_Recv_init(&sb_LineSearchTask_recv_queue, sb_LineSearchTask_queue);

  // initialise slang-embedded components/ports
  attestation_gate_SysContext_UxAS_thr_Impl_uxas_UxAS_thread_adapter_initialiseArchitecture(SF_LAST);

  // call the component's initialise entrypoint
  attestation_gate_SysContext_UxAS_thr_Impl_uxas_UxAS_thread_adapter_initialiseEntryPoint(SF_LAST);

  printf("Leaving pre-init of UxAS_thr_Impl_uxas_UxAS_thread\n");
}

/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {
  DeclNewStackFrame(NULL, "sb_UxAS_thr_Impl.c", "", "run", 0);

  sb_self_pacer_tick_emit();
  for(;;) {
    sb_self_pacer_tock_wait();
    // call the component's compute entrypoint
    attestation_gate_SysContext_UxAS_thr_Impl_uxas_UxAS_thread_adapter_computeEntryPoint(SF_LAST);
    sb_self_pacer_tick_emit();
  }
  return 0;
}
