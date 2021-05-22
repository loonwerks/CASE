#include "../includes/sb_RadioDriver_thr_Impl.h"
#include <sb_queue_union_art_DataContent_1.h>
#include <sb_queue_union_art_DataContent_1.h>
#include <sb_queue_union_art_DataContent_1.h>
#include <RadioDriver_thr_Impl_adapter.h>
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
Unit hamr_RadioDriver_RadioDriver_thr_Impl_seL4Nix_trusted_ids_out_Send(STACK_FRAME 
  art_DataContent d) {
  sb_trusted_ids_out_write(d);
}

// send automation_request_out: Out EventDataPort CMASI__AddressAttributedMessage_i
Unit hamr_RadioDriver_RadioDriver_thr_Impl_seL4Nix_automation_request_out_Send(STACK_FRAME 
  art_DataContent d) {
  sb_automation_request_out_enqueue(d);
}

// send operating_region_out: Out EventDataPort CMASI__AddressAttributedMessage_i
Unit hamr_RadioDriver_RadioDriver_thr_Impl_seL4Nix_operating_region_out_Send(STACK_FRAME 
  art_DataContent d) {
  sb_operating_region_out_enqueue(d);
}

// send line_search_task_out: Out EventDataPort CMASI__AddressAttributedMessage_i
Unit hamr_RadioDriver_RadioDriver_thr_Impl_seL4Nix_line_search_task_out_Send(STACK_FRAME 
  art_DataContent d) {
  sb_line_search_task_out_enqueue(d);
}

void pre_init(void) {
  printf("Entering pre-init of RadioDriver_thr_Impl\n");

  // initialise data structure for data port trusted_ids_out
  init_sp_union_art_DataContent(sb_trusted_ids_out, &sb_trusted_ids_out_seqNum);

  // initialise data structure for outgoing event data port automation_request_out
  sb_queue_union_art_DataContent_1_init(sb_automation_request_out_queue_1);

  // initialise data structure for outgoing event data port operating_region_out
  sb_queue_union_art_DataContent_1_init(sb_operating_region_out_queue_1);

  // initialise data structure for outgoing event data port line_search_task_out
  sb_queue_union_art_DataContent_1_init(sb_line_search_task_out_queue_1);

  // initialise slang-embedded components/ports
  hamr_RadioDriver_RadioDriver_thr_Impl_adapter_initialiseArchitecture(SF_LAST);

  // call the component's initialise entrypoint
  hamr_RadioDriver_RadioDriver_thr_Impl_adapter_initialiseEntryPoint(SF_LAST);

  printf("Leaving pre-init of RadioDriver_thr_Impl\n");
}


/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {
  sb_pacer_notification_wait();
  for(;;) {
    sb_pacer_notification_wait();
    // call the component's compute entrypoint
    hamr_RadioDriver_RadioDriver_thr_Impl_adapter_computeEntryPoint(SF_LAST);
  }
  return 0;
}
