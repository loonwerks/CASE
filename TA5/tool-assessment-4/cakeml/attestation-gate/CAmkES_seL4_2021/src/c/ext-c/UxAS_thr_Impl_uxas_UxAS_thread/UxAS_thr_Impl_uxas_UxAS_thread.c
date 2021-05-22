#include <UxAS_thr_Impl_uxas_UxAS_thread_api.h>
#include <UxAS_thr_Impl_uxas_UxAS_thread.h>
#include <ext.h>

// This file will not be overwritten so is safe to edit

// This file will not be overwritten so is safe to edit
#define OperatingRegionMaxSizeBits 2048
U8 OperatingRegion[OperatingRegionMaxSizeBits / sizeof(U8)];

#define AutomationRequestMaxSizeBits 2048
U8 AutomationRequest[AutomationRequestMaxSizeBits / sizeof(U8)];

#define LineSearchTaskMaxSizeBits 65536
U8 LineSearchTask[LineSearchTaskMaxSizeBits / sizeof(U8)];

Unit attestation_gate_SysContext_UxAS_thr_Impl_uxas_UxAS_thread_initialise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "UxAS_thr_Impl_uxas_UxAS_thread.c", "", "attestation_gate_SysContext_UxAS_thr_Impl_uxas_UxAS_thread_initialise_", 0);
  /*
  
  // examples of api setter and logging usage

  api_logInfo__attestation_gate_SysContext_UxAS_thr_Impl_uxas_UxAS_thread(SF string("Example logInfo"));

  api_logDebug__attestation_gate_SysContext_UxAS_thr_Impl_uxas_UxAS_thread(SF string("Example logDebug"));

  api_logError__attestation_gate_SysContext_UxAS_thr_Impl_uxas_UxAS_thread(SF string("Example logError"));
  */
}

Unit attestation_gate_SysContext_UxAS_thr_Impl_uxas_UxAS_thread_finalise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "UxAS_thr_Impl_uxas_UxAS_thread.c", "", "attestation_gate_SysContext_UxAS_thr_Impl_uxas_UxAS_thread_finalise_", 0);
}

Unit attestation_gate_SysContext_UxAS_thr_Impl_uxas_UxAS_thread_timeTriggered_(STACK_FRAME_ONLY) {
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
  /*
  
  // examples of api getter usage

  uint8_t t0[numBytes_attestation_gate_CMASI_AutomationRequest_i];
  size_t t0_numBits;
  if(api_get_AutomationRequest__attestation_gate_SysContext_UxAS_thr_Impl_uxas_UxAS_thread(SF &t0_numBits, t0)) {
    // sanity check
    sfAssert(SF (Z) t0_numBits == numBits_attestation_gate_CMASI_AutomationRequest_i, "numBits received does not match expected");

    DeclNewString(AutomationRequest_str);
    String__append(SF (String) &AutomationRequest_str, string("Received on AutomationRequest: "));
    byte_array_string(SF (String) &AutomationRequest_str, t0, numBytes_attestation_gate_CMASI_AutomationRequest_i);
    api_logInfo__attestation_gate_SysContext_UxAS_thr_Impl_uxas_UxAS_thread(SF (String) &AutomationRequest_str);
  }

  uint8_t t1[numBytes_attestation_gate_CMASI_OperatingRegion_i];
  size_t t1_numBits;
  if(api_get_OperatingRegion__attestation_gate_SysContext_UxAS_thr_Impl_uxas_UxAS_thread(SF &t1_numBits, t1)) {
    // sanity check
    sfAssert(SF (Z) t1_numBits == numBits_attestation_gate_CMASI_OperatingRegion_i, "numBits received does not match expected");

    DeclNewString(OperatingRegion_str);
    String__append(SF (String) &OperatingRegion_str, string("Received on OperatingRegion: "));
    byte_array_string(SF (String) &OperatingRegion_str, t1, numBytes_attestation_gate_CMASI_OperatingRegion_i);
    api_logInfo__attestation_gate_SysContext_UxAS_thr_Impl_uxas_UxAS_thread(SF (String) &OperatingRegion_str);
  }

  uint8_t t2[numBytes_attestation_gate_CMASI_LineSearchTask_i];
  size_t t2_numBits;
  if(api_get_LineSearchTask__attestation_gate_SysContext_UxAS_thr_Impl_uxas_UxAS_thread(SF &t2_numBits, t2)) {
    // sanity check
    sfAssert(SF (Z) t2_numBits == numBits_attestation_gate_CMASI_LineSearchTask_i, "numBits received does not match expected");

    DeclNewString(LineSearchTask_str);
    String__append(SF (String) &LineSearchTask_str, string("Received on LineSearchTask: "));
    byte_array_string(SF (String) &LineSearchTask_str, t2, numBytes_attestation_gate_CMASI_LineSearchTask_i);
    api_logInfo__attestation_gate_SysContext_UxAS_thr_Impl_uxas_UxAS_thread(SF (String) &LineSearchTask_str);
  }
  */
}
