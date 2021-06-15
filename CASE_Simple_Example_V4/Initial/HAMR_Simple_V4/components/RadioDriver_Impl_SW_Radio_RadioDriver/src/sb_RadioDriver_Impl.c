// This file will be regenerated, do not edit

#include <sb_RadioDriver_Impl.h>
#include <sb_queue_union_art_DataContent_1.h>
#include <RadioDriver_Impl_SW_Radio_RadioDriver_adapter.h>
#include <string.h>
#include <camkes.h>

bool sb_MissionCommand_enqueue(const union_art_DataContent *data) {
  sb_queue_union_art_DataContent_1_enqueue(sb_MissionCommand_queue_1, (union_art_DataContent*) data);
  sb_MissionCommand_1_notification_emit();

  return true;
}

// send MissionCommand: Out EventDataPort SW__RF_Msg_Impl
Unit HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_RadioDriver_seL4Nix_MissionCommand_Send(
  STACK_FRAME
  art_DataContent d) {
  DeclNewStackFrame(caller, "sb_RadioDriver_Impl.c", "", "HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_RadioDriver_seL4Nix_MissionCommand_Send", 0);

  sb_MissionCommand_enqueue(d);
}

// FIXME: dummy implementation for unconnected outgoing port
Unit HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_RadioDriver_seL4Nix_AttestationTesterRequest_Send(
  STACK_FRAME
  art_DataContent d) {
  DeclNewStackFrame(caller, "sb_RadioDriver_Impl.c", "", "HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_RadioDriver_seL4Nix_AttestationTesterRequest_Send", 0);
  // FIXME: dummy implementation
}

// FIXME: dummy implementation for unconnected incoming port
B HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_RadioDriver_seL4Nix_AttestationTesterResponse_IsEmpty(STACK_FRAME_ONLY) {
  return T;
}

// FIXME: dummy implementation for unconnected incoming port
Unit HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_RadioDriver_seL4Nix_AttestationTesterResponse_Receive(
  STACK_FRAME
  Option_8E9F45 result) {
  DeclNewStackFrame(caller, "sb_RadioDriver_Impl.c", "", "HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_RadioDriver_seL4Nix_AttestationTesterResponse_Receive", 0);

  // FIXME: dummy implementation

  // put None in result
  DeclNewNone_964667(none);
  Type_assign(result, &none, sizeof(union Option_8E9F45));
}

void pre_init(void) {
  DeclNewStackFrame(NULL, "sb_RadioDriver_Impl.c", "", "pre_init", 0);

  printf("Entering pre-init of RadioDriver_Impl_SW_Radio_RadioDriver\n");

  // initialise data structure for outgoing event data port MissionCommand
  sb_queue_union_art_DataContent_1_init(sb_MissionCommand_queue_1);

  // initialise slang-embedded components/ports
  HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_RadioDriver_adapter_initialiseArchitecture(SF_LAST);

  // call the component's initialise entrypoint
  HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_RadioDriver_adapter_initialiseEntryPoint(SF_LAST);

  printf("Leaving pre-init of RadioDriver_Impl_SW_Radio_RadioDriver\n");
}

/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {
  DeclNewStackFrame(NULL, "sb_RadioDriver_Impl.c", "", "run", 0);

  sb_pacer_notification_wait();
  for(;;) {
    sb_pacer_notification_wait();
    // call the component's compute entrypoint
    HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_RadioDriver_adapter_computeEntryPoint(SF_LAST);
  }
  return 0;
}
