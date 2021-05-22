#include <CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_api.h>
#include <CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST.h>
#include <ext.h>

// This file will not be overwritten so is safe to edit

Unit hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_initialise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST.c", "", "hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_initialise_", 0);
/*
  // examples of api setter and logging usage

  uint8_t t0[numBytes_hamr_CMASI_LineSearchTask_i];
  byte_array_default(SF t0, numBits_hamr_CMASI_LineSearchTask_i, numBytes_hamr_CMASI_LineSearchTask_i);
  api_put_filter_out__hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST(SF numBits_hamr_CMASI_LineSearchTask_i, t0);

  api_logInfo__hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST(SF string("Example logInfo"));

  api_logDebug__hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST(SF string("Example logDebug"));

  api_logError__hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST(SF string("Example logError"));
  */
}

Unit hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_finalise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST.c", "", "hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_finalise_", 0);
}

Unit hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_timeTriggered_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST.c", "", "hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_timeTriggered_", 0);
/*
  // examples of api getter usage

  uint8_t t0[numBytes_hamr_CMASI_LineSearchTask_i];
  size_t t0_numBits;
  if(api_get_filter_in__hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST(SF &t0_numBits, t0)) {
    // sanity check
    sfAssert(SF (Z) t0_numBits == numBits_hamr_CMASI_LineSearchTask_i, "numBits received does not match expected");

    DeclNewString(filter_in_str);
    String__append(SF (String) &filter_in_str, string("Received on filter_in: "));
    byte_array_string(SF (String) &filter_in_str, t0, numBytes_hamr_CMASI_LineSearchTask_i);
    api_logInfo__hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST(SF (String) &filter_in_str);
  }
  */
}
