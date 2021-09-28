#include <CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_api.h>
#include <CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST.h>

static bool apis_initialized = false;
static struct hamr_SW_CASE_Filter_LST_thr_Impl_Initialization_Api initialization_api;
static struct hamr_SW_CASE_Filter_LST_thr_Impl_Operational_Api operational_api;

static void initialize_apis(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST.c", "", "initialize_apis", 0);

  // Option_B4E093 = Option[hamr.SW.CASE_Filter_LST_thr_Impl_Initialization_Api]
  Option_B4E093_get_(SF (hamr_SW_CASE_Filter_LST_thr_Impl_Initialization_Api) &initialization_api, hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge_c_initialization_api(SF_LAST));
  // Option_54EF1B = Option[hamr.SW.CASE_Filter_LST_thr_Impl_Operational_Api]
  Option_54EF1B_get_(SF (hamr_SW_CASE_Filter_LST_thr_Impl_Operational_Api) &operational_api, hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge_c_operational_api(SF_LAST));
  apis_initialized = true;
}

// This file was auto-generated.  Do not edit

bool api_get_filter_in__hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST(
  STACK_FRAME
  size_t *numBits,
  uint8_t *byteArray){
  DeclNewStackFrame(caller, "CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_api.c", "", "api_get_filter_in__hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST", 0);

  if(!apis_initialized) { initialize_apis(SF_LAST); }

  // Option_30119F = Option[IS[Z, B]]
  // Some_8D03B1 = Some[IS[Z, B]]
  DeclNewOption_30119F(t_0);

  hamr_SW_CASE_Filter_LST_thr_Impl_Operational_Api_get_filter_in_(
    SF
    (Option_30119F) &t_0,
    &operational_api);

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

  sfAssert((Z) numBits >= 0, "numBits must be non-negative for IS[Z, B].")
  sfAssert((Z) numBits <= MaxIS_C4F575, "numBits too large for IS[Z, B].")

  if(!apis_initialized) { initialize_apis(SF_LAST); }

  DeclNewIS_C4F575(t_0);

  t_0.size = numBits;
  if(numBits > 0) {
    size_t numBytes = (numBits - 1) / 8 + 1;
    memcpy(&t_0.value, byteArray, numBytes);
  }

  hamr_SW_CASE_Filter_LST_thr_Impl_Initialization_Api_put_filter_out_(
    SF
    &initialization_api,
    &t_0);
}

void api_logInfo__hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_api.c", "", "api_logInfo__hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST", 0);

  if(!apis_initialized) { initialize_apis(SF_LAST); }

  hamr_SW_CASE_Filter_LST_thr_Impl_Initialization_Api_logInfo_(
    SF
    &initialization_api,
    str);
}

void api_logDebug__hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_api.c", "", "api_logDebug__hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST", 0);

  if(!apis_initialized) { initialize_apis(SF_LAST); }

  hamr_SW_CASE_Filter_LST_thr_Impl_Initialization_Api_logDebug_(
    SF
    &initialization_api,
    str);
}

void api_logError__hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_api.c", "", "api_logError__hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST", 0);

  if(!apis_initialized) { initialize_apis(SF_LAST); }

  hamr_SW_CASE_Filter_LST_thr_Impl_Initialization_Api_logError_(
    SF
    &initialization_api,
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
