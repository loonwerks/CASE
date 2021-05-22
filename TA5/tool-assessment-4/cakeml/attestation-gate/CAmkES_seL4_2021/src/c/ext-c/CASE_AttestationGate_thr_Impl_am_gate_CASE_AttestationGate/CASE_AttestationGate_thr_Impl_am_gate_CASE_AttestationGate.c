#include <CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_api.h>
#include <CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate.h>
#include <ext.h>

// This file will not be overwritten so is safe to edit
// This file will not be overwritten so is safe to edit
#define OperatingRegion_inMaxSizeBits 2048
U8 OperatingRegion_in[OperatingRegion_inMaxSizeBits / sizeof(U8)];

#define AutomationRequest_inMaxSizeBits 2048
U8 AutomationRequest_in[AutomationRequest_inMaxSizeBits / sizeof(U8)];

#define LineSearchTask_inMaxSizeBits 65536
U8 LineSearchTask_in[LineSearchTask_inMaxSizeBits / sizeof(U8)];

Unit attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_initialise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate.c", "", "attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_initialise_", 0);
  /*
  
  // examples of api setter and logging usage

  uint8_t t0[numBytes_attestation_gate_CMASI_AutomationRequest_i];
  byte_array_default(SF t0, numBits_attestation_gate_CMASI_AutomationRequest_i, numBytes_attestation_gate_CMASI_AutomationRequest_i);
  api_put_AutomationRequest_out__attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate(SF numBits_attestation_gate_CMASI_AutomationRequest_i, t0);

  uint8_t t1[numBytes_attestation_gate_CMASI_OperatingRegion_i];
  byte_array_default(SF t1, numBits_attestation_gate_CMASI_OperatingRegion_i, numBytes_attestation_gate_CMASI_OperatingRegion_i);
  api_put_OperatingRegion_out__attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate(SF numBits_attestation_gate_CMASI_OperatingRegion_i, t1);

  uint8_t t2[numBytes_attestation_gate_CMASI_LineSearchTask_i];
  byte_array_default(SF t2, numBits_attestation_gate_CMASI_LineSearchTask_i, numBytes_attestation_gate_CMASI_LineSearchTask_i);
  api_put_LineSearchTask_out__attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate(SF numBits_attestation_gate_CMASI_LineSearchTask_i, t2);

  api_logInfo__attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate(SF string("Example logInfo"));

  api_logDebug__attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate(SF string("Example logDebug"));

  api_logError__attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate(SF string("Example logError"));
  */
}

Unit attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_finalise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate.c", "", "attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_finalise_", 0);
}

Unit attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_timeTriggered_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate.c", "", "attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_timeTriggered_", 0);


  size_t numBitsOperatingRegion = 0;
  B event_OperatingRegion = api_get_OperatingRegion_in__attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate(SF &numBitsOperatingRegion, OperatingRegion_in);

  size_t  numBitsAutomationRequest = 0;
  B event_AutomationRequest = api_get_AutomationRequest_in__attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate(SF &numBitsAutomationRequest, AutomationRequest_in);

  size_t  numBitsLineSearchTask = 0;
  B event_LineSearchTask = api_get_LineSearchTask_in__attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate(SF &numBitsLineSearchTask, LineSearchTask_in);

  if (event_OperatingRegion) {
    api_put_OperatingRegion_out__attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate(SF numBitsOperatingRegion, OperatingRegion_in);
  }

  if (event_AutomationRequest) {
    api_put_AutomationRequest_out__attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate(SF numBitsAutomationRequest, AutomationRequest_in);
  }

  if (event_LineSearchTask) {
    api_put_LineSearchTask_out__attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate(SF numBitsLineSearchTask, LineSearchTask_in);
  }
  /*

  // examples of api getter usage

  uint8_t t0[numBytes_attestation_gate_CMASI_AddressArray_i];
  size_t t0_numBits;
  if(api_get_trusted_ids__attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate(SF &t0_numBits, t0)) {
    // sanity check
    sfAssert(SF (Z) t0_numBits == numBits_attestation_gate_CMASI_AddressArray_i, "numBits received does not match expected");

    DeclNewString(trusted_ids_str);
    String__append(SF (String) &trusted_ids_str, string("Received on trusted_ids: "));
    byte_array_string(SF (String) &trusted_ids_str, t0, numBytes_attestation_gate_CMASI_AddressArray_i);
    api_logInfo__attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate(SF (String) &trusted_ids_str);
  }

  uint8_t t1[numBytes_attestation_gate_CMASI_AddressAttributedMessage_i];
  size_t t1_numBits;
  if(api_get_AutomationRequest_in__attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate(SF &t1_numBits, t1)) {
    // sanity check
    sfAssert(SF (Z) t1_numBits == numBits_attestation_gate_CMASI_AddressAttributedMessage_i, "numBits received does not match expected");

    DeclNewString(AutomationRequest_in_str);
    String__append(SF (String) &AutomationRequest_in_str, string("Received on AutomationRequest_in: "));
    byte_array_string(SF (String) &AutomationRequest_in_str, t1, numBytes_attestation_gate_CMASI_AddressAttributedMessage_i);
    api_logInfo__attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate(SF (String) &AutomationRequest_in_str);
  }

  uint8_t t2[numBytes_attestation_gate_CMASI_AddressAttributedMessage_i];
  size_t t2_numBits;
  if(api_get_OperatingRegion_in__attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate(SF &t2_numBits, t2)) {
    // sanity check
    sfAssert(SF (Z) t2_numBits == numBits_attestation_gate_CMASI_AddressAttributedMessage_i, "numBits received does not match expected");

    DeclNewString(OperatingRegion_in_str);
    String__append(SF (String) &OperatingRegion_in_str, string("Received on OperatingRegion_in: "));
    byte_array_string(SF (String) &OperatingRegion_in_str, t2, numBytes_attestation_gate_CMASI_AddressAttributedMessage_i);
    api_logInfo__attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate(SF (String) &OperatingRegion_in_str);
  }

  uint8_t t3[numBytes_attestation_gate_CMASI_AddressAttributedMessage_i];
  size_t t3_numBits;
  if(api_get_LineSearchTask_in__attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate(SF &t3_numBits, t3)) {
    // sanity check
    sfAssert(SF (Z) t3_numBits == numBits_attestation_gate_CMASI_AddressAttributedMessage_i, "numBits received does not match expected");

    DeclNewString(LineSearchTask_in_str);
    String__append(SF (String) &LineSearchTask_in_str, string("Received on LineSearchTask_in: "));
    byte_array_string(SF (String) &LineSearchTask_in_str, t3, numBytes_attestation_gate_CMASI_AddressAttributedMessage_i);
    api_logInfo__attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate(SF (String) &LineSearchTask_in_str);
  }
  */
}
