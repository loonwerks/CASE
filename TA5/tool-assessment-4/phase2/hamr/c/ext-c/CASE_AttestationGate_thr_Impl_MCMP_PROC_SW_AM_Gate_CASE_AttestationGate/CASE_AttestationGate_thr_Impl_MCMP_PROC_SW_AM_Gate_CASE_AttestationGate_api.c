#include <CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_api.h>
#include <CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate.h>

// This file was auto-generated.  Do not edit

bool api_get_trusted_ids__hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(
  STACK_FRAME
  size_t *numBits,
  uint8_t *byteArray){
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_api.c", "", "api_get_trusted_ids__hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate", 0);

  // Option_30119F = Option[IS[Z, B]]
  // Some_8D03B1 = Some[IS[Z, B]]
  DeclNewOption_30119F(t_0);

  // Option_80DF3B = Option[hamr.SW.CASE_AttestationGate_thr_Impl_Operational_Api]
  DeclNewhamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api(api);
  Option_80DF3B_get_(SF (hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api) &api, hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_c_operational_api(SF_LAST));

  hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api_get_trusted_ids_(
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

bool api_get_AutomationRequest_in__hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(
  STACK_FRAME
  size_t *numBits,
  uint8_t *byteArray){
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_api.c", "", "api_get_AutomationRequest_in__hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate", 0);

  // Option_30119F = Option[IS[Z, B]]
  // Some_8D03B1 = Some[IS[Z, B]]
  DeclNewOption_30119F(t_0);

  // Option_80DF3B = Option[hamr.SW.CASE_AttestationGate_thr_Impl_Operational_Api]
  DeclNewhamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api(api);
  Option_80DF3B_get_(SF (hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api) &api, hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_c_operational_api(SF_LAST));

  hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api_get_AutomationRequest_in_(
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

void api_put_AutomationRequest_out_UXAS__hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_api.c", "", "api_put_AutomationRequest_out_UXAS__hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate", 0);

  sfAssert(SF (Z) numBits >= 0, "numBits must be non-negative for IS[Z, B].");
  sfAssert(SF (Z) numBits <= MaxIS_C4F575, "numBits too large for IS[Z, B].");

  DeclNewIS_C4F575(t_0);

  t_0.size = numBits;
  if(numBits > 0) {
    size_t numBytes = (numBits - 1) / 8 + 1;
    memcpy(&t_0.value, byteArray, numBytes);
  }

  // Option_849849 = Option[hamr.SW.CASE_AttestationGate_thr_Impl_Initialization_Api]
  DeclNewhamr_SW_CASE_AttestationGate_thr_Impl_Initialization_Api(api);
  Option_849849_get_(SF (hamr_SW_CASE_AttestationGate_thr_Impl_Initialization_Api) &api, hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_c_initialization_api(SF_LAST));

  hamr_SW_CASE_AttestationGate_thr_Impl_Initialization_Api_put_AutomationRequest_out_UXAS_(
    SF
    &api,
    &t_0);
}

void api_put_AutomationRequest_out_MON_REQ__hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_api.c", "", "api_put_AutomationRequest_out_MON_REQ__hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate", 0);

  sfAssert(SF (Z) numBits >= 0, "numBits must be non-negative for IS[Z, B].");
  sfAssert(SF (Z) numBits <= MaxIS_C4F575, "numBits too large for IS[Z, B].");

  DeclNewIS_C4F575(t_0);

  t_0.size = numBits;
  if(numBits > 0) {
    size_t numBytes = (numBits - 1) / 8 + 1;
    memcpy(&t_0.value, byteArray, numBytes);
  }

  // Option_849849 = Option[hamr.SW.CASE_AttestationGate_thr_Impl_Initialization_Api]
  DeclNewhamr_SW_CASE_AttestationGate_thr_Impl_Initialization_Api(api);
  Option_849849_get_(SF (hamr_SW_CASE_AttestationGate_thr_Impl_Initialization_Api) &api, hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_c_initialization_api(SF_LAST));

  hamr_SW_CASE_AttestationGate_thr_Impl_Initialization_Api_put_AutomationRequest_out_MON_REQ_(
    SF
    &api,
    &t_0);
}

bool api_get_OperatingRegion_in__hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(
  STACK_FRAME
  size_t *numBits,
  uint8_t *byteArray){
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_api.c", "", "api_get_OperatingRegion_in__hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate", 0);

  // Option_30119F = Option[IS[Z, B]]
  // Some_8D03B1 = Some[IS[Z, B]]
  DeclNewOption_30119F(t_0);

  // Option_80DF3B = Option[hamr.SW.CASE_AttestationGate_thr_Impl_Operational_Api]
  DeclNewhamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api(api);
  Option_80DF3B_get_(SF (hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api) &api, hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_c_operational_api(SF_LAST));

  hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api_get_OperatingRegion_in_(
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

void api_put_OperatingRegion_out__hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_api.c", "", "api_put_OperatingRegion_out__hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate", 0);

  sfAssert(SF (Z) numBits >= 0, "numBits must be non-negative for IS[Z, B].");
  sfAssert(SF (Z) numBits <= MaxIS_C4F575, "numBits too large for IS[Z, B].");

  DeclNewIS_C4F575(t_0);

  t_0.size = numBits;
  if(numBits > 0) {
    size_t numBytes = (numBits - 1) / 8 + 1;
    memcpy(&t_0.value, byteArray, numBytes);
  }

  // Option_849849 = Option[hamr.SW.CASE_AttestationGate_thr_Impl_Initialization_Api]
  DeclNewhamr_SW_CASE_AttestationGate_thr_Impl_Initialization_Api(api);
  Option_849849_get_(SF (hamr_SW_CASE_AttestationGate_thr_Impl_Initialization_Api) &api, hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_c_initialization_api(SF_LAST));

  hamr_SW_CASE_AttestationGate_thr_Impl_Initialization_Api_put_OperatingRegion_out_(
    SF
    &api,
    &t_0);
}

bool api_get_LineSearchTask_in__hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(
  STACK_FRAME
  size_t *numBits,
  uint8_t *byteArray){
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_api.c", "", "api_get_LineSearchTask_in__hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate", 0);

  // Option_30119F = Option[IS[Z, B]]
  // Some_8D03B1 = Some[IS[Z, B]]
  DeclNewOption_30119F(t_0);

  // Option_80DF3B = Option[hamr.SW.CASE_AttestationGate_thr_Impl_Operational_Api]
  DeclNewhamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api(api);
  Option_80DF3B_get_(SF (hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api) &api, hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_c_operational_api(SF_LAST));

  hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api_get_LineSearchTask_in_(
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

void api_put_LineSearchTask_out__hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_api.c", "", "api_put_LineSearchTask_out__hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate", 0);

  sfAssert(SF (Z) numBits >= 0, "numBits must be non-negative for IS[Z, B].");
  sfAssert(SF (Z) numBits <= MaxIS_C4F575, "numBits too large for IS[Z, B].");

  DeclNewIS_C4F575(t_0);

  t_0.size = numBits;
  if(numBits > 0) {
    size_t numBytes = (numBits - 1) / 8 + 1;
    memcpy(&t_0.value, byteArray, numBytes);
  }

  // Option_849849 = Option[hamr.SW.CASE_AttestationGate_thr_Impl_Initialization_Api]
  DeclNewhamr_SW_CASE_AttestationGate_thr_Impl_Initialization_Api(api);
  Option_849849_get_(SF (hamr_SW_CASE_AttestationGate_thr_Impl_Initialization_Api) &api, hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_c_initialization_api(SF_LAST));

  hamr_SW_CASE_AttestationGate_thr_Impl_Initialization_Api_put_LineSearchTask_out_(
    SF
    &api,
    &t_0);
}

void api_logInfo__hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_api.c", "", "api_logInfo__hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate", 0);

  // Option_849849 = Option[hamr.SW.CASE_AttestationGate_thr_Impl_Initialization_Api]
  DeclNewhamr_SW_CASE_AttestationGate_thr_Impl_Initialization_Api(api);
  Option_849849_get_(SF (hamr_SW_CASE_AttestationGate_thr_Impl_Initialization_Api) &api, hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_c_initialization_api(SF_LAST));

  hamr_SW_CASE_AttestationGate_thr_Impl_Initialization_Api_logInfo_(
    SF
    &api,
    str);
}

void api_logDebug__hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_api.c", "", "api_logDebug__hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate", 0);

  // Option_849849 = Option[hamr.SW.CASE_AttestationGate_thr_Impl_Initialization_Api]
  DeclNewhamr_SW_CASE_AttestationGate_thr_Impl_Initialization_Api(api);
  Option_849849_get_(SF (hamr_SW_CASE_AttestationGate_thr_Impl_Initialization_Api) &api, hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_c_initialization_api(SF_LAST));

  hamr_SW_CASE_AttestationGate_thr_Impl_Initialization_Api_logDebug_(
    SF
    &api,
    str);
}

void api_logError__hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_api.c", "", "api_logError__hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate", 0);

  // Option_849849 = Option[hamr.SW.CASE_AttestationGate_thr_Impl_Initialization_Api]
  DeclNewhamr_SW_CASE_AttestationGate_thr_Impl_Initialization_Api(api);
  Option_849849_get_(SF (hamr_SW_CASE_AttestationGate_thr_Impl_Initialization_Api) &api, hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_c_initialization_api(SF_LAST));

  hamr_SW_CASE_AttestationGate_thr_Impl_Initialization_Api_logError_(
    SF
    &api,
    str);
}

Unit hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_initialise(
  STACK_FRAME
  hamr_SW_CASE_AttestationGate_thr_Impl_Initialization_Api api) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_api.c", "", "hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_initialise", 0);

  hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_initialise_(SF_LAST);
}

Unit hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_finalise(
  STACK_FRAME
  hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api api) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_api.c", "", "hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_finalise", 0);

  hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_finalise_(SF_LAST);
}

Unit hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_timeTriggered(
  STACK_FRAME
  hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api api) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_api.c", "", "hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_timeTriggered", 0);

  hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_timeTriggered_(SF_LAST);
}
