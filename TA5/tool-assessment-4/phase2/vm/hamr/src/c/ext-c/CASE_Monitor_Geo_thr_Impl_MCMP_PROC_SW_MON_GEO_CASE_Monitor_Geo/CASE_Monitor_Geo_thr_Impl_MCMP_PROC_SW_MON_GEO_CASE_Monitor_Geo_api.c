#include <CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_api.h>
#include <CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo.h>

// This file was auto-generated.  Do not edit

bool api_get_keep_in_zones__hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo(
  STACK_FRAME
  size_t *numBits,
  uint8_t *byteArray){
  DeclNewStackFrame(caller, "CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_api.c", "", "api_get_keep_in_zones__hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo", 0);

  // Option_30119F = Option[IS[Z, B]]
  // Some_8D03B1 = Some[IS[Z, B]]
  DeclNewOption_30119F(t_0);

  // Option_8499A8 = Option[hamr.SW.CASE_Monitor_Geo_thr_Impl_Operational_Api]
  DeclNewhamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api(api);
  Option_8499A8_get_(SF (hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api) &api, hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge_c_operational_api(SF_LAST));

  hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api_get_keep_in_zones_(
    SF
    (Option_30119F) &t_0,
    &api);

  if(t_0.type == TSome_8D03B1){
    *numBits = t_0.Some_8D03B1.value.size;
    if(*numBits > 0) {
      size_t numBytes = (*numBits - 1) / 8 + 1;
      memcpy(byteArray, &t_0.Some_8D03B1.value.value, numBytes);
    }
    return true;
  } else {
    return false;
  }
}

bool api_get_keep_out_zones__hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo(
  STACK_FRAME
  size_t *numBits,
  uint8_t *byteArray){
  DeclNewStackFrame(caller, "CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_api.c", "", "api_get_keep_out_zones__hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo", 0);

  // Option_30119F = Option[IS[Z, B]]
  // Some_8D03B1 = Some[IS[Z, B]]
  DeclNewOption_30119F(t_0);

  // Option_8499A8 = Option[hamr.SW.CASE_Monitor_Geo_thr_Impl_Operational_Api]
  DeclNewhamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api(api);
  Option_8499A8_get_(SF (hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api) &api, hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge_c_operational_api(SF_LAST));

  hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api_get_keep_out_zones_(
    SF
    (Option_30119F) &t_0,
    &api);

  if(t_0.type == TSome_8D03B1){
    *numBits = t_0.Some_8D03B1.value.size;
    if(*numBits > 0) {
      size_t numBytes = (*numBits - 1) / 8 + 1;
      memcpy(byteArray, &t_0.Some_8D03B1.value.value, numBytes);
    }
    return true;
  } else {
    return false;
  }
}

bool api_get_observed__hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo(
  STACK_FRAME
  size_t *numBits,
  uint8_t *byteArray){
  DeclNewStackFrame(caller, "CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_api.c", "", "api_get_observed__hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo", 0);

  // Option_30119F = Option[IS[Z, B]]
  // Some_8D03B1 = Some[IS[Z, B]]
  DeclNewOption_30119F(t_0);

  // Option_8499A8 = Option[hamr.SW.CASE_Monitor_Geo_thr_Impl_Operational_Api]
  DeclNewhamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api(api);
  Option_8499A8_get_(SF (hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api) &api, hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge_c_operational_api(SF_LAST));

  hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api_get_observed_(
    SF
    (Option_30119F) &t_0,
    &api);

  if(t_0.type == TSome_8D03B1){
    *numBits = t_0.Some_8D03B1.value.size;
    if(*numBits > 0) {
      size_t numBytes = (*numBits - 1) / 8 + 1;
      memcpy(byteArray, &t_0.Some_8D03B1.value.value, numBytes);
    }
    return true;
  } else {
    return false;
  }
}

void api_put_output__hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray) {
  DeclNewStackFrame(caller, "CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_api.c", "", "api_put_output__hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo", 0);

  sfAssert(SF (Z) numBits >= 0, "numBits must be non-negative for IS[Z, B].");
  sfAssert(SF (Z) numBits <= MaxIS_C4F575, "numBits too large for IS[Z, B].");

  DeclNewIS_C4F575(t_0);

  t_0.size = numBits;
  if(numBits > 0) {
    size_t numBytes = (numBits - 1) / 8 + 1;
    memcpy(&t_0.value, byteArray, numBytes);
  }

  // Option_63CBE2 = Option[hamr.SW.CASE_Monitor_Geo_thr_Impl_Initialization_Api]
  DeclNewhamr_SW_CASE_Monitor_Geo_thr_Impl_Initialization_Api(api);
  Option_63CBE2_get_(SF (hamr_SW_CASE_Monitor_Geo_thr_Impl_Initialization_Api) &api, hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge_c_initialization_api(SF_LAST));

  hamr_SW_CASE_Monitor_Geo_thr_Impl_Initialization_Api_put_output_(
    SF
    &api,
    &t_0);
}

void api_put_alert__hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_api.c", "", "api_put_alert__hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo", 0);

  // Option_63CBE2 = Option[hamr.SW.CASE_Monitor_Geo_thr_Impl_Initialization_Api]
  DeclNewhamr_SW_CASE_Monitor_Geo_thr_Impl_Initialization_Api(api);
  Option_63CBE2_get_(SF (hamr_SW_CASE_Monitor_Geo_thr_Impl_Initialization_Api) &api, hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge_c_initialization_api(SF_LAST));

  hamr_SW_CASE_Monitor_Geo_thr_Impl_Initialization_Api_put_alert_(
    SF
    &api);
}

void api_logInfo__hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_api.c", "", "api_logInfo__hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo", 0);

  // Option_63CBE2 = Option[hamr.SW.CASE_Monitor_Geo_thr_Impl_Initialization_Api]
  DeclNewhamr_SW_CASE_Monitor_Geo_thr_Impl_Initialization_Api(api);
  Option_63CBE2_get_(SF (hamr_SW_CASE_Monitor_Geo_thr_Impl_Initialization_Api) &api, hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge_c_initialization_api(SF_LAST));

  hamr_SW_CASE_Monitor_Geo_thr_Impl_Initialization_Api_logInfo_(
    SF
    &api,
    str);
}

void api_logDebug__hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_api.c", "", "api_logDebug__hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo", 0);

  // Option_63CBE2 = Option[hamr.SW.CASE_Monitor_Geo_thr_Impl_Initialization_Api]
  DeclNewhamr_SW_CASE_Monitor_Geo_thr_Impl_Initialization_Api(api);
  Option_63CBE2_get_(SF (hamr_SW_CASE_Monitor_Geo_thr_Impl_Initialization_Api) &api, hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge_c_initialization_api(SF_LAST));

  hamr_SW_CASE_Monitor_Geo_thr_Impl_Initialization_Api_logDebug_(
    SF
    &api,
    str);
}

void api_logError__hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_api.c", "", "api_logError__hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo", 0);

  // Option_63CBE2 = Option[hamr.SW.CASE_Monitor_Geo_thr_Impl_Initialization_Api]
  DeclNewhamr_SW_CASE_Monitor_Geo_thr_Impl_Initialization_Api(api);
  Option_63CBE2_get_(SF (hamr_SW_CASE_Monitor_Geo_thr_Impl_Initialization_Api) &api, hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge_c_initialization_api(SF_LAST));

  hamr_SW_CASE_Monitor_Geo_thr_Impl_Initialization_Api_logError_(
    SF
    &api,
    str);
}

Unit hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_initialise(
  STACK_FRAME
  hamr_SW_CASE_Monitor_Geo_thr_Impl_Initialization_Api api) {
  DeclNewStackFrame(caller, "CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_api.c", "", "hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_initialise", 0);

  hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_initialise_(SF_LAST);
}

Unit hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_finalise(
  STACK_FRAME
  hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api api) {
  DeclNewStackFrame(caller, "CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_api.c", "", "hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_finalise", 0);

  hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_finalise_(SF_LAST);
}

Unit hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_timeTriggered(
  STACK_FRAME
  hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api api) {
  DeclNewStackFrame(caller, "CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_api.c", "", "hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_timeTriggered", 0);

  hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_timeTriggered_(SF_LAST);
}
