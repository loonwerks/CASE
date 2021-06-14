// This file will be regenerated, do not edit

#include <sb_Input_impl.h>
#include <sb_queue_union_art_DataContent_1.h>
#include <Input_impl_Input_Input_adapter.h>
#include <string.h>
#include <camkes.h>

bool sb_Observed_enqueue(const union_art_DataContent *data) {
  sb_queue_union_art_DataContent_1_enqueue(sb_Observed_queue_1, (union_art_DataContent*) data);
  sb_Observed_1_notification_emit();

  return true;
}

// send Observed: Out EventDataPort ADSB_Types__ADSB_Aggregated_Message_impl
Unit CASE_MONITOR_TEST_VPM_TEST_Input_impl_Input_Input_seL4Nix_Observed_Send(
  STACK_FRAME
  art_DataContent d) {
  DeclNewStackFrame(caller, "sb_Input_impl.c", "", "CASE_MONITOR_TEST_VPM_TEST_Input_impl_Input_Input_seL4Nix_Observed_Send", 0);

  sb_Observed_enqueue(d);
}

void pre_init(void) {
  DeclNewStackFrame(NULL, "sb_Input_impl.c", "", "pre_init", 0);

  printf("Entering pre-init of Input_impl_Input_Input\n");

  // initialise data structure for outgoing event data port Observed
  sb_queue_union_art_DataContent_1_init(sb_Observed_queue_1);

  // initialise slang-embedded components/ports
  CASE_MONITOR_TEST_VPM_TEST_Input_impl_Input_Input_adapter_initialiseArchitecture(SF_LAST);

  // call the component's initialise entrypoint
  CASE_MONITOR_TEST_VPM_TEST_Input_impl_Input_Input_adapter_initialiseEntryPoint(SF_LAST);

  printf("Leaving pre-init of Input_impl_Input_Input\n");
}

/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {
  DeclNewStackFrame(NULL, "sb_Input_impl.c", "", "run", 0);

  sb_self_pacer_tick_emit();
  for(;;) {
    sb_self_pacer_tock_wait();
    // call the component's compute entrypoint
    CASE_MONITOR_TEST_VPM_TEST_Input_impl_Input_Input_adapter_computeEntryPoint(SF_LAST);
    sb_self_pacer_tick_emit();
  }
  return 0;
}
