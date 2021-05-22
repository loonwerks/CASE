#include <CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_api.h>
#include <CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate.h>
#include <ext.h>

// This file will not be overwritten so is safe to edit
#define OperatingRegion_inMaxSizeBits 2048
U8 OperatingRegion_in[OperatingRegion_inMaxSizeBits / sizeof(U8)];

#define AutomationRequest_inMaxSizeBits 2048
U8 AutomationRequest_in[AutomationRequest_inMaxSizeBits / sizeof(U8)];

#define LineSearchTask_inMaxSizeBits 65536
U8 LineSearchTask_in[LineSearchTask_inMaxSizeBits / sizeof(U8)];

Unit attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_initialise_(STACK_FRAME_ONLY) {
 DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate.c", "", "attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_initialise_", 0);

 // example api usage
}

Unit attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_finalise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate.c", "", "attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_finalise_", 0);

  // example finalise method
}

Unit attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_timeTriggered_(STACK_FRAME) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate.c", "", "attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_timeTriggered_", 0);

  size_t numBitsOperatingRegion = 0;
  B event_OperatingRegion = api_get_OperatingRegion_in__attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate(SF &numBitsOperatingRegion, OperatingRegion_in);

  size_t  numBitsAutomationRequest = 0;
  B event_AutomationRequest = api_get_AutomationRequest_in__attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate(SF &numBitsAutomationRequest, AutomationRequest_in);

  size_t  numBitsLineSearchTask = 0;
  B event_LineSearchTask = api_get_LineSearchTask_in__attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate(SF &numBitsLineSearchTask, LineSearchTask_in);

  if (event_OperatingRegion) {
    api_send_OperatingRegion_out__attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate(SF numBitsOperatingRegion, OperatingRegion_in);
  }

  if (event_AutomationRequest) {
    api_send_AutomationRequest_out__attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate(SF numBitsAutomationRequest, AutomationRequest_in);
  }

  if (event_LineSearchTask) {
    api_send_LineSearchTask_out__attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate(SF numBitsLineSearchTask, LineSearchTask_in);
  }
}
