#include <CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_api.h>
#include <CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST.h>

// This file was auto-generated.  Do not edit

bool api_get_filter_in__hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST(
  STACK_FRAME
  size_t *numBits,
  uint8_t *byteArray){
  DeclNewStackFrame(caller, "CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_api.c", "", "api_get_filter_in__hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST", 0);

  // Option_30119F = Option[IS[Z, B]]
  // Some_8D03B1 = Some[IS[Z, B]]
  DeclNewOption_30119F(t_0);

  // Option_54EF1B = Option[hamr.SW.CASE_Filter_LST_thr_Impl_Operational_Api]
  DeclNewhamr_SW_CASE_Filter_LST_thr_Impl_Operational_Api(api);
  Option_54EF1B_get_(SF (hamr_SW_CASE_Filter_LST_thr_Impl_Operational_Api) &api, hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge_c_operational_api(SF_LAST));

  hamr_SW_CASE_Filter_LST_thr_Impl_Operational_Api_get_filter_in_(
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

void api_put_filter_out__hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray) {
  DeclNewStackFrame(caller, "CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_api.c", "", "api_put_filter_out__hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST", 0);

  sfAssert(SF (Z) numBits >= 0, "numBits must be non-negative for IS[Z, B].");
  sfAssert(SF (Z) numBits <= MaxIS_C4F575, "numBits too large for IS[Z, B].");

  DeclNewIS_C4F575(t_0);

  t_0.size = numBits;
  if(numBits > 0) {
    size_t numBytes = (numBits - 1) / 8 + 1;
    memcpy(&t_0.value, byteArray, numBytes);
  }

  // Option_B4E093 = Option[hamr.SW.CASE_Filter_LST_thr_Impl_Initialization_Api]
  DeclNewhamr_SW_CASE_Filter_LST_thr_Impl_Initialization_Api(api);
  Option_B4E093_get_(SF (hamr_SW_CASE_Filter_LST_thr_Impl_Initialization_Api) &api, hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge_c_initialization_api(SF_LAST));

  hamr_SW_CASE_Filter_LST_thr_Impl_Initialization_Api_put_filter_out_(
    SF
    &api,
    &t_0);
}

void api_logInfo__hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_api.c", "", "api_logInfo__hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST", 0);

  // Option_B4E093 = Option[hamr.SW.CASE_Filter_LST_thr_Impl_Initialization_Api]
  DeclNewhamr_SW_CASE_Filter_LST_thr_Impl_Initialization_Api(api);
  Option_B4E093_get_(SF (hamr_SW_CASE_Filter_LST_thr_Impl_Initialization_Api) &api, hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge_c_initialization_api(SF_LAST));

  hamr_SW_CASE_Filter_LST_thr_Impl_Initialization_Api_logInfo_(
    SF
    &api,
    str);
}

void api_logDebug__hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_api.c", "", "api_logDebug__hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST", 0);

  // Option_B4E093 = Option[hamr.SW.CASE_Filter_LST_thr_Impl_Initialization_Api]
  DeclNewhamr_SW_CASE_Filter_LST_thr_Impl_Initialization_Api(api);
  Option_B4E093_get_(SF (hamr_SW_CASE_Filter_LST_thr_Impl_Initialization_Api) &api, hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge_c_initialization_api(SF_LAST));

  hamr_SW_CASE_Filter_LST_thr_Impl_Initialization_Api_logDebug_(
    SF
    &api,
    str);
}

void api_logError__hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_api.c", "", "api_logError__hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST", 0);

  // Option_B4E093 = Option[hamr.SW.CASE_Filter_LST_thr_Impl_Initialization_Api]
  DeclNewhamr_SW_CASE_Filter_LST_thr_Impl_Initialization_Api(api);
  Option_B4E093_get_(SF (hamr_SW_CASE_Filter_LST_thr_Impl_Initialization_Api) &api, hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge_c_initialization_api(SF_LAST));

  hamr_SW_CASE_Filter_LST_thr_Impl_Initialization_Api_logError_(
    SF
    &api,
    str);
}

Unit hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_initialise(
  STACK_FRAME
  hamr_SW_CASE_Filter_LST_thr_Impl_Initialization_Api api) {
  DeclNewStackFrame(caller, "CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_api.c", "", "hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_initialise", 0);

  hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_initialise_(SF_LAST);
}

Unit hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_finalise(
  STACK_FRAME
  hamr_SW_CASE_Filter_LST_thr_Impl_Operational_Api api) {
  DeclNewStackFrame(caller, "CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_api.c", "", "hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_finalise", 0);

  hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_finalise_(SF_LAST);
}

Unit hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_timeTriggered(
  STACK_FRAME
  hamr_SW_CASE_Filter_LST_thr_Impl_Operational_Api api) {
  DeclNewStackFrame(caller, "CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_api.c", "", "hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_timeTriggered", 0);

  hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_timeTriggered_(SF_LAST);
}
