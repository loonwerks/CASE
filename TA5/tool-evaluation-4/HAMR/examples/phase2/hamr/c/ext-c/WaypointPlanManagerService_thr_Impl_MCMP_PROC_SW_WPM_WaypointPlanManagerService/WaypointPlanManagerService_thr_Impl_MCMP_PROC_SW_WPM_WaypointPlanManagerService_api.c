#include <WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_api.h>
#include <WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService.h>

static bool apis_initialized = false;
static struct hamr_SW_WaypointPlanManagerService_thr_Impl_Initialization_Api initialization_api;
static struct hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api operational_api;

static void initialize_apis(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService.c", "", "initialize_apis", 0);

  // Option_E8930C = Option[hamr.SW.WaypointPlanManagerService_thr_Impl_Initialization_Api]
  Option_E8930C_get_(SF (hamr_SW_WaypointPlanManagerService_thr_Impl_Initialization_Api) &initialization_api, hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge_c_initialization_api(SF_LAST));
  // Option_869AEE = Option[hamr.SW.WaypointPlanManagerService_thr_Impl_Operational_Api]
  Option_869AEE_get_(SF (hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api) &operational_api, hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge_c_operational_api(SF_LAST));
  apis_initialized = true;
}

// This file was auto-generated.  Do not edit

bool api_get_AutomationResponse__hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService(
  STACK_FRAME
  size_t *numBits,
  uint8_t *byteArray){
  DeclNewStackFrame(caller, "WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_api.c", "", "api_get_AutomationResponse__hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService", 0);

  if(!apis_initialized) { initialize_apis(SF_LAST); }

  // Option_30119F = Option[IS[Z, B]]
  // Some_8D03B1 = Some[IS[Z, B]]
  DeclNewOption_30119F(t_0);

  hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api_get_AutomationResponse_(
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

bool api_get_AirVehicleState__hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService(
  STACK_FRAME
  size_t *numBits,
  uint8_t *byteArray){
  DeclNewStackFrame(caller, "WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_api.c", "", "api_get_AirVehicleState__hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService", 0);

  if(!apis_initialized) { initialize_apis(SF_LAST); }

  // Option_30119F = Option[IS[Z, B]]
  // Some_8D03B1 = Some[IS[Z, B]]
  DeclNewOption_30119F(t_0);

  hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api_get_AirVehicleState_(
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

void api_put_MissionCommand__hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray) {
  DeclNewStackFrame(caller, "WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_api.c", "", "api_put_MissionCommand__hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService", 0);

  sfAssert((Z) numBits >= 0, "numBits must be non-negative for IS[Z, B].")
  sfAssert((Z) numBits <= MaxIS_C4F575, "numBits too large for IS[Z, B].")

  if(!apis_initialized) { initialize_apis(SF_LAST); }

  DeclNewIS_C4F575(t_0);

  t_0.size = numBits;
  if(numBits > 0) {
    size_t numBytes = (numBits - 1) / 8 + 1;
    memcpy(&t_0.value, byteArray, numBytes);
  }

  hamr_SW_WaypointPlanManagerService_thr_Impl_Initialization_Api_put_MissionCommand_(
    SF
    &initialization_api,
    &t_0);
}

bool api_get_ReturnHome__hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService(STACK_FRAME_ONLY){
  DeclNewStackFrame(caller, "WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_api.c", "", "api_get_ReturnHome__hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService", 0);

  if(!apis_initialized) { initialize_apis(SF_LAST); }

  // Option_C622DB = Option[art.Empty]
  // Some_4782C6 = Some[art.Empty]
  DeclNewOption_C622DB(t_0);
  hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api_get_ReturnHome_(
    SF
    (Option_C622DB) &t_0,
    &operational_api);

  if(t_0.type == TSome_4782C6){
    return true;
  } else {
    return false;
  }
}

void api_logInfo__hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_api.c", "", "api_logInfo__hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService", 0);

  if(!apis_initialized) { initialize_apis(SF_LAST); }

  hamr_SW_WaypointPlanManagerService_thr_Impl_Initialization_Api_logInfo_(
    SF
    &initialization_api,
    str);
}

void api_logDebug__hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_api.c", "", "api_logDebug__hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService", 0);

  if(!apis_initialized) { initialize_apis(SF_LAST); }

  hamr_SW_WaypointPlanManagerService_thr_Impl_Initialization_Api_logDebug_(
    SF
    &initialization_api,
    str);
}

void api_logError__hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_api.c", "", "api_logError__hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService", 0);

  if(!apis_initialized) { initialize_apis(SF_LAST); }

  hamr_SW_WaypointPlanManagerService_thr_Impl_Initialization_Api_logError_(
    SF
    &initialization_api,
    str);
}

Unit hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_initialise(
  STACK_FRAME
  hamr_SW_WaypointPlanManagerService_thr_Impl_Initialization_Api api) {
  DeclNewStackFrame(caller, "WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_api.c", "", "hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_initialise", 0);

  hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_initialise_(SF_LAST);
}

Unit hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_finalise(
  STACK_FRAME
  hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api api) {
  DeclNewStackFrame(caller, "WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_api.c", "", "hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_finalise", 0);

  hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_finalise_(SF_LAST);
}

Unit hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_timeTriggered(
  STACK_FRAME
  hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api api) {
  DeclNewStackFrame(caller, "WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_api.c", "", "hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_timeTriggered", 0);

  hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_timeTriggered_(SF_LAST);
}
