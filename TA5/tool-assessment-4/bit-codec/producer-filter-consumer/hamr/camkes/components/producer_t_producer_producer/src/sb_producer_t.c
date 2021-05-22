// This file will be regenerated, do not edit

#include <sb_producer_t.h>
#include <sb_queue_union_art_DataContent_1.h>
#include <producer_t_producer_producer_adapter.h>
#include <string.h>
#include <camkes.h>

bool sb_to_filter_enqueue(const union_art_DataContent *data) {
  sb_queue_union_art_DataContent_1_enqueue(sb_to_filter_queue_1, (union_art_DataContent*) data);
  sb_to_filter_1_notification_emit();

  return true;
}

// send to_filter: Out EventDataPort PFC__Mission
Unit pfc_PFC_producer_t_producer_producer_seL4Nix_to_filter_Send(
  STACK_FRAME
  art_DataContent d) {
  DeclNewStackFrame(caller, "sb_producer_t.c", "", "pfc_PFC_producer_t_producer_producer_seL4Nix_to_filter_Send", 0);

  sb_to_filter_enqueue(d);
}

void pre_init(void) {
  DeclNewStackFrame(NULL, "sb_producer_t.c", "", "pre_init", 0);

  printf("Entering pre-init of producer_t_producer_producer\n");

  // initialise data structure for outgoing event data port to_filter
  sb_queue_union_art_DataContent_1_init(sb_to_filter_queue_1);

  // initialise slang-embedded components/ports
  pfc_PFC_producer_t_producer_producer_adapter_initialiseArchitecture(SF_LAST);

  // call the component's initialise entrypoint
  pfc_PFC_producer_t_producer_producer_adapter_initialiseEntryPoint(SF_LAST);

  printf("Leaving pre-init of producer_t_producer_producer\n");
}

/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {
  DeclNewStackFrame(NULL, "sb_producer_t.c", "", "run", 0);

  sb_self_pacer_tick_emit();
  for(;;) {
    sb_self_pacer_tock_wait();
    // call the component's compute entrypoint
    pfc_PFC_producer_t_producer_producer_adapter_computeEntryPoint(SF_LAST);
    sb_self_pacer_tick_emit();
  }
  return 0;
}
