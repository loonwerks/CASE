#include <UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_api.h>
#include <UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS.h>
#include <ext.h>

// This file will not be overwritten so is safe to edit

Unit hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_initialise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS.c", "", "hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_initialise_", 0);
/*
  // examples of api setter and logging usage

  uint8_t t0[numBytes_hamr_CMASI_AutomationResponse_i];
  byte_array_default(SF t0, numBits_hamr_CMASI_AutomationResponse_i, numBytes_hamr_CMASI_AutomationResponse_i);
  api_put_AutomationResponse_MON_GEO__hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS(SF numBits_hamr_CMASI_AutomationResponse_i, t0);

  uint8_t t1[numBytes_hamr_CMASI_AutomationResponse_i];
  byte_array_default(SF t1, numBits_hamr_CMASI_AutomationResponse_i, numBytes_hamr_CMASI_AutomationResponse_i);
  api_put_AutomationResponse_MON_REQ__hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS(SF numBits_hamr_CMASI_AutomationResponse_i, t1);

  api_logInfo__hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS(SF string("Example logInfo"));

  api_logDebug__hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS(SF string("Example logDebug"));

  api_logError__hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS(SF string("Example logError"));
  */
}

Unit hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_finalise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS.c", "", "hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_finalise_", 0);
}

Unit hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_timeTriggered_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS.c", "", "hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_timeTriggered_", 0);
/*
  // examples of api getter usage

  uint8_t t0[numBytes_hamr_CMASI_AutomationRequest_i];
  size_t t0_numBits;
  if(api_get_AutomationRequest__hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS(SF &t0_numBits, t0)) {
    // sanity check
    sfAssert(SF (Z) t0_numBits == numBits_hamr_CMASI_AutomationRequest_i, "numBits received does not match expected");

    DeclNewString(AutomationRequest_str);
    String__append(SF (String) &AutomationRequest_str, string("Received on AutomationRequest: "));
    byte_array_string(SF (String) &AutomationRequest_str, t0, numBytes_hamr_CMASI_AutomationRequest_i);
    api_logInfo__hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS(SF (String) &AutomationRequest_str);
  }

  uint8_t t1[numBytes_hamr_CMASI_AirVehicleState_i];
  size_t t1_numBits;
  if(api_get_AirVehicleState__hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS(SF &t1_numBits, t1)) {
    // sanity check
    sfAssert(SF (Z) t1_numBits == numBits_hamr_CMASI_AirVehicleState_i, "numBits received does not match expected");

    DeclNewString(AirVehicleState_str);
    String__append(SF (String) &AirVehicleState_str, string("Received on AirVehicleState: "));
    byte_array_string(SF (String) &AirVehicleState_str, t1, numBytes_hamr_CMASI_AirVehicleState_i);
    api_logInfo__hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS(SF (String) &AirVehicleState_str);
  }

  uint8_t t2[numBytes_hamr_CMASI_OperatingRegion_i];
  size_t t2_numBits;
  if(api_get_OperatingRegion__hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS(SF &t2_numBits, t2)) {
    // sanity check
    sfAssert(SF (Z) t2_numBits == numBits_hamr_CMASI_OperatingRegion_i, "numBits received does not match expected");

    DeclNewString(OperatingRegion_str);
    String__append(SF (String) &OperatingRegion_str, string("Received on OperatingRegion: "));
    byte_array_string(SF (String) &OperatingRegion_str, t2, numBytes_hamr_CMASI_OperatingRegion_i);
    api_logInfo__hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS(SF (String) &OperatingRegion_str);
  }

  uint8_t t3[numBytes_hamr_CMASI_LineSearchTask_i];
  size_t t3_numBits;
  if(api_get_LineSearchTask__hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS(SF &t3_numBits, t3)) {
    // sanity check
    sfAssert(SF (Z) t3_numBits == numBits_hamr_CMASI_LineSearchTask_i, "numBits received does not match expected");

    DeclNewString(LineSearchTask_str);
    String__append(SF (String) &LineSearchTask_str, string("Received on LineSearchTask: "));
    byte_array_string(SF (String) &LineSearchTask_str, t3, numBytes_hamr_CMASI_LineSearchTask_i);
    api_logInfo__hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS(SF (String) &LineSearchTask_str);
  }
  */
}
