// This file will be regenerated, do not edit

#include <sb_RadioDriver_thr_Impl.h>
#include <sb_queue_union_art_DataContent_1.h>
#include <RadioDriver_thr_Impl_radio_RadioDriver_adapter.h>
#include <string.h>
#include <camkes.h>

seqNum_t sb_trusted_ids_out_seqNum;

bool sb_trusted_ids_out_write(const union_art_DataContent * value) {
  return write_sp_union_art_DataContent(sb_trusted_ids_out, value, &sb_trusted_ids_out_seqNum);
}

bool sb_automation_request_out_enqueue(const union_art_DataContent *data) {
  sb_queue_union_art_DataContent_1_enqueue(sb_automation_request_out_queue_1, (union_art_DataContent*) data);
  sb_automation_request_out_1_notification_emit();

  return true;
}

bool sb_operating_region_out_enqueue(const union_art_DataContent *data) {
  sb_queue_union_art_DataContent_1_enqueue(sb_operating_region_out_queue_1, (union_art_DataContent*) data);
  sb_operating_region_out_1_notification_emit();

  return true;
}

bool sb_line_search_task_out_enqueue(const union_art_DataContent *data) {
  sb_queue_union_art_DataContent_1_enqueue(sb_line_search_task_out_queue_1, (union_art_DataContent*) data);
  sb_line_search_task_out_1_notification_emit();

  return true;
}

// send trusted_ids_out: Out DataPort CMASI__AddressArray_i
Unit attestation_gate_RadioDriver_RadioDriver_thr_Impl_radio_RadioDriver_seL4Nix_trusted_ids_out_Send(
  STACK_FRAME
  art_DataContent d) {
  DeclNewStackFrame(caller, "sb_RadioDriver_thr_Impl.c", "", "attestation_gate_RadioDriver_RadioDriver_thr_Impl_radio_RadioDriver_seL4Nix_trusted_ids_out_Send", 0);

  sb_trusted_ids_out_write(d);
}

// send automation_request_out: Out EventDataPort CMASI__AddressAttributedMessage_i
Unit attestation_gate_RadioDriver_RadioDriver_thr_Impl_radio_RadioDriver_seL4Nix_automation_request_out_Send(
  STACK_FRAME
  art_DataContent d) {
  DeclNewStackFrame(caller, "sb_RadioDriver_thr_Impl.c", "", "attestation_gate_RadioDriver_RadioDriver_thr_Impl_radio_RadioDriver_seL4Nix_automation_request_out_Send", 0);

  sb_automation_request_out_enqueue(d);
}

// send operating_region_out: Out EventDataPort CMASI__AddressAttributedMessage_i
Unit attestation_gate_RadioDriver_RadioDriver_thr_Impl_radio_RadioDriver_seL4Nix_operating_region_out_Send(
  STACK_FRAME
  art_DataContent d) {
  DeclNewStackFrame(caller, "sb_RadioDriver_thr_Impl.c", "", "attestation_gate_RadioDriver_RadioDriver_thr_Impl_radio_RadioDriver_seL4Nix_operating_region_out_Send", 0);

  sb_operating_region_out_enqueue(d);
}

// send line_search_task_out: Out EventDataPort CMASI__AddressAttributedMessage_i
Unit attestation_gate_RadioDriver_RadioDriver_thr_Impl_radio_RadioDriver_seL4Nix_line_search_task_out_Send(
  STACK_FRAME
  art_DataContent d) {
  DeclNewStackFrame(caller, "sb_RadioDriver_thr_Impl.c", "", "attestation_gate_RadioDriver_RadioDriver_thr_Impl_radio_RadioDriver_seL4Nix_line_search_task_out_Send", 0);

  sb_line_search_task_out_enqueue(d);
}

void pre_init(void) {
  DeclNewStackFrame(NULL, "sb_RadioDriver_thr_Impl.c", "", "pre_init", 0);

  printf("Entering pre-init of RadioDriver_thr_Impl_radio_RadioDriver\n");

  // initialise data structure for data port trusted_ids_out
  init_sp_union_art_DataContent(sb_trusted_ids_out, &sb_trusted_ids_out_seqNum);

  // initialise data structure for outgoing event data port automation_request_out
  sb_queue_union_art_DataContent_1_init(sb_automation_request_out_queue_1);

  // initialise data structure for outgoing event data port operating_region_out
  sb_queue_union_art_DataContent_1_init(sb_operating_region_out_queue_1);

  // initialise data structure for outgoing event data port line_search_task_out
  sb_queue_union_art_DataContent_1_init(sb_line_search_task_out_queue_1);

  // initialise slang-embedded components/ports
  attestation_gate_RadioDriver_RadioDriver_thr_Impl_radio_RadioDriver_adapter_initialiseArchitecture(SF_LAST);

  // call the component's initialise entrypoint
  attestation_gate_RadioDriver_RadioDriver_thr_Impl_radio_RadioDriver_adapter_initialiseEntryPoint(SF_LAST);

  printf("Leaving pre-init of RadioDriver_thr_Impl_radio_RadioDriver\n");
}

/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {
  DeclNewStackFrame(NULL, "sb_RadioDriver_thr_Impl.c", "", "run", 0);

  sb_self_pacer_tick_emit();
  for(;;) {
    sb_self_pacer_tock_wait();
    // call the component's compute entrypoint
    attestation_gate_RadioDriver_RadioDriver_thr_Impl_radio_RadioDriver_adapter_computeEntryPoint(SF_LAST);
    sb_self_pacer_tick_emit();
  }
  return 0;
}
