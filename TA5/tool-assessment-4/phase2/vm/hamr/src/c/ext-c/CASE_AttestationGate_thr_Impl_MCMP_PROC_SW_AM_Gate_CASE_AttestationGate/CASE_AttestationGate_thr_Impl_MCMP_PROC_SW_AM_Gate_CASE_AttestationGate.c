#include <CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_api.h>
#include <CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate.h>
#include <ext.h>

// This file will not be overwritten so is safe to edit

Unit hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_initialise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate.c", "", "hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_initialise_", 0);
/*
  // examples of api setter and logging usage

  uint8_t t0[numBytes_hamr_CMASI_AutomationRequest_i];
  byte_array_default(SF t0, numBits_hamr_CMASI_AutomationRequest_i, numBytes_hamr_CMASI_AutomationRequest_i);
  api_put_AutomationRequest_out_UXAS__hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(SF numBits_hamr_CMASI_AutomationRequest_i, t0);

  uint8_t t1[numBytes_hamr_CMASI_AutomationRequest_i];
  byte_array_default(SF t1, numBits_hamr_CMASI_AutomationRequest_i, numBytes_hamr_CMASI_AutomationRequest_i);
  api_put_AutomationRequest_out_MON_REQ__hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(SF numBits_hamr_CMASI_AutomationRequest_i, t1);

  uint8_t t2[numBytes_hamr_CMASI_OperatingRegion_i];
  byte_array_default(SF t2, numBits_hamr_CMASI_OperatingRegion_i, numBytes_hamr_CMASI_OperatingRegion_i);
  api_put_OperatingRegion_out__hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(SF numBits_hamr_CMASI_OperatingRegion_i, t2);

  uint8_t t3[numBytes_hamr_CMASI_LineSearchTask_i];
  byte_array_default(SF t3, numBits_hamr_CMASI_LineSearchTask_i, numBytes_hamr_CMASI_LineSearchTask_i);
  api_put_LineSearchTask_out__hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(SF numBits_hamr_CMASI_LineSearchTask_i, t3);

  api_logInfo__hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(SF string("Example logInfo"));

  api_logDebug__hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(SF string("Example logDebug"));

  api_logError__hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(SF string("Example logError"));
  */
}

Unit hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_finalise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate.c", "", "hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_finalise_", 0);
}

Unit hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_timeTriggered_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate.c", "", "hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_timeTriggered_", 0);
/*
  // examples of api getter usage

  uint8_t t0[numBytes_hamr_CMASI_AddressArray_i];
  size_t t0_numBits;
  if(api_get_trusted_ids__hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(SF &t0_numBits, t0)) {
    // sanity check
    sfAssert(SF (Z) t0_numBits == numBits_hamr_CMASI_AddressArray_i, "numBits received does not match expected");

    DeclNewString(trusted_ids_str);
    String__append(SF (String) &trusted_ids_str, string("Received on trusted_ids: "));
    byte_array_string(SF (String) &trusted_ids_str, t0, numBytes_hamr_CMASI_AddressArray_i);
    api_logInfo__hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(SF (String) &trusted_ids_str);
  }

  uint8_t t1[numBytes_hamr_CMASI_AddressAttributedMessage_i];
  size_t t1_numBits;
  if(api_get_AutomationRequest_in__hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(SF &t1_numBits, t1)) {
    // sanity check
    sfAssert(SF (Z) t1_numBits == numBits_hamr_CMASI_AddressAttributedMessage_i, "numBits received does not match expected");

    DeclNewString(AutomationRequest_in_str);
    String__append(SF (String) &AutomationRequest_in_str, string("Received on AutomationRequest_in: "));
    byte_array_string(SF (String) &AutomationRequest_in_str, t1, numBytes_hamr_CMASI_AddressAttributedMessage_i);
    api_logInfo__hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(SF (String) &AutomationRequest_in_str);
  }

  uint8_t t2[numBytes_hamr_CMASI_AddressAttributedMessage_i];
  size_t t2_numBits;
  if(api_get_OperatingRegion_in__hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(SF &t2_numBits, t2)) {
    // sanity check
    sfAssert(SF (Z) t2_numBits == numBits_hamr_CMASI_AddressAttributedMessage_i, "numBits received does not match expected");

    DeclNewString(OperatingRegion_in_str);
    String__append(SF (String) &OperatingRegion_in_str, string("Received on OperatingRegion_in: "));
    byte_array_string(SF (String) &OperatingRegion_in_str, t2, numBytes_hamr_CMASI_AddressAttributedMessage_i);
    api_logInfo__hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(SF (String) &OperatingRegion_in_str);
  }

  uint8_t t3[numBytes_hamr_CMASI_AddressAttributedMessage_i];
  size_t t3_numBits;
  if(api_get_LineSearchTask_in__hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(SF &t3_numBits, t3)) {
    // sanity check
    sfAssert(SF (Z) t3_numBits == numBits_hamr_CMASI_AddressAttributedMessage_i, "numBits received does not match expected");

    DeclNewString(LineSearchTask_in_str);
    String__append(SF (String) &LineSearchTask_in_str, string("Received on LineSearchTask_in: "));
    byte_array_string(SF (String) &LineSearchTask_in_str, t3, numBytes_hamr_CMASI_AddressAttributedMessage_i);
    api_logInfo__hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(SF (String) &LineSearchTask_in_str);
  }
  */
}
