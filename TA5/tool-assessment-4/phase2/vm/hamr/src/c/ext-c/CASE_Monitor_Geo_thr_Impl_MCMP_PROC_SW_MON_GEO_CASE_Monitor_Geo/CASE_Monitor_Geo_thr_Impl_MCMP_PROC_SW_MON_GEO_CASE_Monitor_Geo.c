#include <CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_api.h>
#include <CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo.h>
#include <ext.h>

// This file will not be overwritten so is safe to edit

Unit hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_initialise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo.c", "", "hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_initialise_", 0);
/*
  // examples of api setter and logging usage

  uint8_t t0[numBytes_hamr_CMASI_AutomationResponse_i];
  byte_array_default(SF t0, numBits_hamr_CMASI_AutomationResponse_i, numBytes_hamr_CMASI_AutomationResponse_i);
  api_put_output__hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo(SF numBits_hamr_CMASI_AutomationResponse_i, t0);

  api_put_alert__hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo(SF_LAST);

  api_logInfo__hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo(SF string("Example logInfo"));

  api_logDebug__hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo(SF string("Example logDebug"));

  api_logError__hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo(SF string("Example logError"));
  */
}

Unit hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_finalise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo.c", "", "hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_finalise_", 0);
}

Unit hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_timeTriggered_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo.c", "", "hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_timeTriggered_", 0);
/*
  // examples of api getter usage

  uint8_t t0[numBytes_hamr_CMASI_Polygon_i];
  size_t t0_numBits;
  if(api_get_keep_in_zones__hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo(SF &t0_numBits, t0)) {
    // sanity check
    sfAssert(SF (Z) t0_numBits == numBits_hamr_CMASI_Polygon_i, "numBits received does not match expected");

    DeclNewString(keep_in_zones_str);
    String__append(SF (String) &keep_in_zones_str, string("Received on keep_in_zones: "));
    byte_array_string(SF (String) &keep_in_zones_str, t0, numBytes_hamr_CMASI_Polygon_i);
    api_logInfo__hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo(SF (String) &keep_in_zones_str);
  }

  uint8_t t1[numBytes_hamr_CMASI_Polygon_i];
  size_t t1_numBits;
  if(api_get_keep_out_zones__hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo(SF &t1_numBits, t1)) {
    // sanity check
    sfAssert(SF (Z) t1_numBits == numBits_hamr_CMASI_Polygon_i, "numBits received does not match expected");

    DeclNewString(keep_out_zones_str);
    String__append(SF (String) &keep_out_zones_str, string("Received on keep_out_zones: "));
    byte_array_string(SF (String) &keep_out_zones_str, t1, numBytes_hamr_CMASI_Polygon_i);
    api_logInfo__hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo(SF (String) &keep_out_zones_str);
  }

  uint8_t t2[numBytes_hamr_CMASI_AutomationResponse_i];
  size_t t2_numBits;
  if(api_get_observed__hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo(SF &t2_numBits, t2)) {
    // sanity check
    sfAssert(SF (Z) t2_numBits == numBits_hamr_CMASI_AutomationResponse_i, "numBits received does not match expected");

    DeclNewString(observed_str);
    String__append(SF (String) &observed_str, string("Received on observed: "));
    byte_array_string(SF (String) &observed_str, t2, numBytes_hamr_CMASI_AutomationResponse_i);
    api_logInfo__hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo(SF (String) &observed_str);
  }
  */
}
