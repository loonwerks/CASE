#include <UxAS_thr_Impl_uxas_UxAS_thread_api.h>
#include <UxAS_thr_Impl_uxas_UxAS_thread.h>
#include <ext.h>

// This file will not be overwritten so is safe to edit
#define OperatingRegionMaxSizeBits 2048
U8 OperatingRegion[OperatingRegionMaxSizeBits / sizeof(U8)];

#define AutomationRequestMaxSizeBits 2048
U8 AutomationRequest[AutomationRequestMaxSizeBits / sizeof(U8)];

#define LineSearchTaskMaxSizeBits 65536
U8 LineSearchTask[LineSearchTaskMaxSizeBits / sizeof(U8)];

Unit attestation_gate_SysContext_UxAS_thr_Impl_uxas_UxAS_thread_initialise_(STACK_FRAME_ONLY) {
 DeclNewStackFrame(caller, "UxAS_thr_Impl_uxas_UxAS_thread.c", "", "attestation_gate_SysContext_UxAS_thr_Impl_uxas_UxAS_thread_initialise_", 0);

 // example api usage
}

Unit attestation_gate_SysContext_UxAS_thr_Impl_uxas_UxAS_thread_finalise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "UxAS_thr_Impl_uxas_UxAS_thread.c", "", "attestation_gate_SysContext_UxAS_thr_Impl_uxas_UxAS_thread_finalise_", 0);

  // example finalise method
}

Unit attestation_gate_SysContext_UxAS_thr_Impl_uxas_UxAS_thread_timeTriggered_(STACK_FRAME) {
  DeclNewStackFrame(caller, "UxAS_thr_Impl_uxas_UxAS_thread.c", "", "attestation_gate_SysContext_UxAS_thr_Impl_uxas_UxAS_thread_timeTriggered_", 0);

  size_t numBitsOperatingRegion = 0;
  B event_OperatingRegion = api_get_OperatingRegion__attestation_gate_SysContext_UxAS_thr_Impl_uxas_UxAS_thread(SF &numBitsOperatingRegion, OperatingRegion);

  size_t numBitsAutomationRequest = 0;
  B event_AutomationRequest = api_get_AutomationRequest__attestation_gate_SysContext_UxAS_thr_Impl_uxas_UxAS_thread(SF &numBitsAutomationRequest, AutomationRequest);

  size_t numBitsLineSearchTask = 0;
  B event_LineSearchTask = api_get_LineSearchTask__attestation_gate_SysContext_UxAS_thr_Impl_uxas_UxAS_thread(SF &numBitsLineSearchTask, LineSearchTask);

  DeclNewString(_msg);
  String msg = (String)&_msg;

  if (event_OperatingRegion) {
    String__append(SF msg, string("\n\tOperating Region (" ));
    Z_string_(SF msg, numBitsOperatingRegion / 8);
    String__append(SF msg, string(" bytes)"));
  }

  if (event_AutomationRequest) {
    String__append(SF msg, string("\n\tAutomation Request (" ));
    Z_string_(SF msg, numBitsAutomationRequest / 8);
    String__append(SF msg, string(" bytes)"));
  }

  if (event_LineSearchTask) {
    String__append(SF msg, string("\n\tLine Search Task (" ));
    Z_string_(SF msg, numBitsLineSearchTask / 8);
    String__append(SF msg, string(" bytes)"));
  }

  if (event_OperatingRegion || event_AutomationRequest || event_LineSearchTask) {
    api_logInfo__attestation_gate_SysContext_UxAS_thr_Impl_uxas_UxAS_thread(SF msg);
  }
}
