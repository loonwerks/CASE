#include <CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_api.h>
#include <CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req.h>

static bool apis_initialized = false;
static struct hamr_SW_CASE_Monitor_Req_thr_Impl_Initialization_Api initialization_api;
static struct hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api operational_api;

static void initialize_apis(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req.c", "", "initialize_apis", 0);

  // Option_6F37E4 = Option[hamr.SW.CASE_Monitor_Req_thr_Impl_Initialization_Api]
  Option_6F37E4_get_(SF (hamr_SW_CASE_Monitor_Req_thr_Impl_Initialization_Api) &initialization_api, hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge_c_initialization_api(SF_LAST));
  // Option_9382FA = Option[hamr.SW.CASE_Monitor_Req_thr_Impl_Operational_Api]
  Option_9382FA_get_(SF (hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api) &operational_api, hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge_c_operational_api(SF_LAST));
  apis_initialized = true;
}

// This file was auto-generated.  Do not edit

bool api_get_observed__hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req(
  STACK_FRAME
  size_t *numBits,
  uint8_t *byteArray){
  DeclNewStackFrame(caller, "CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_api.c", "", "api_get_observed__hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req", 0);

  if(!apis_initialized) { initialize_apis(SF_LAST); }

  // Option_30119F = Option[IS[Z, B]]
  // Some_8D03B1 = Some[IS[Z, B]]
  DeclNewOption_30119F(t_0);

  hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api_get_observed_(
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

bool api_get_reference_1__hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req(
  STACK_FRAME
  size_t *numBits,
  uint8_t *byteArray){
  DeclNewStackFrame(caller, "CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_api.c", "", "api_get_reference_1__hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req", 0);

  if(!apis_initialized) { initialize_apis(SF_LAST); }

  // Option_30119F = Option[IS[Z, B]]
  // Some_8D03B1 = Some[IS[Z, B]]
  DeclNewOption_30119F(t_0);

  hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api_get_reference_1_(
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

void api_logInfo__hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_api.c", "", "api_logInfo__hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req", 0);

  if(!apis_initialized) { initialize_apis(SF_LAST); }

  hamr_SW_CASE_Monitor_Req_thr_Impl_Initialization_Api_logInfo_(
    SF
    &initialization_api,
    str);
}

void api_logDebug__hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_api.c", "", "api_logDebug__hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req", 0);

  if(!apis_initialized) { initialize_apis(SF_LAST); }

  hamr_SW_CASE_Monitor_Req_thr_Impl_Initialization_Api_logDebug_(
    SF
    &initialization_api,
    str);
}

void api_logError__hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_api.c", "", "api_logError__hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req", 0);

  if(!apis_initialized) { initialize_apis(SF_LAST); }

  hamr_SW_CASE_Monitor_Req_thr_Impl_Initialization_Api_logError_(
    SF
    &initialization_api,
    str);
}

Unit hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_initialise(
  STACK_FRAME
  hamr_SW_CASE_Monitor_Req_thr_Impl_Initialization_Api api) {
  DeclNewStackFrame(caller, "CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_api.c", "", "hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_initialise", 0);

  hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_initialise_(SF_LAST);
}

Unit hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_finalise(
  STACK_FRAME
  hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api api) {
  DeclNewStackFrame(caller, "CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_api.c", "", "hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_finalise", 0);

  hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_finalise_(SF_LAST);
}

Unit hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_timeTriggered(
  STACK_FRAME
  hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api api) {
  DeclNewStackFrame(caller, "CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_api.c", "", "hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_timeTriggered", 0);

  hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_timeTriggered_(SF_LAST);
}
