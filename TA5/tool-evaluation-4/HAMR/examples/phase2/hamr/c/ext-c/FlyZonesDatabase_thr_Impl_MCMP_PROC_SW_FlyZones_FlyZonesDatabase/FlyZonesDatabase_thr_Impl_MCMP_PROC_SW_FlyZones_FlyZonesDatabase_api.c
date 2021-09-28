#include <FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_api.h>
#include <FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase.h>

static bool apis_initialized = false;
static struct hamr_SW_FlyZonesDatabase_thr_Impl_Initialization_Api initialization_api;
static struct hamr_SW_FlyZonesDatabase_thr_Impl_Operational_Api operational_api;

static void initialize_apis(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase.c", "", "initialize_apis", 0);

  // Option_C04856 = Option[hamr.SW.FlyZonesDatabase_thr_Impl_Initialization_Api]
  Option_C04856_get_(SF (hamr_SW_FlyZonesDatabase_thr_Impl_Initialization_Api) &initialization_api, hamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_Bridge_c_initialization_api(SF_LAST));
  // Option_F010C8 = Option[hamr.SW.FlyZonesDatabase_thr_Impl_Operational_Api]
  Option_F010C8_get_(SF (hamr_SW_FlyZonesDatabase_thr_Impl_Operational_Api) &operational_api, hamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_Bridge_c_operational_api(SF_LAST));
  apis_initialized = true;
}

// This file was auto-generated.  Do not edit

void api_put_keep_in_zones__hamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray) {
  DeclNewStackFrame(caller, "FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_api.c", "", "api_put_keep_in_zones__hamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase", 0);

  sfAssert((Z) numBits >= 0, "numBits must be non-negative for IS[Z, B].")
  sfAssert((Z) numBits <= MaxIS_C4F575, "numBits too large for IS[Z, B].")

  if(!apis_initialized) { initialize_apis(SF_LAST); }

  DeclNewIS_C4F575(t_0);

  t_0.size = numBits;
  if(numBits > 0) {
    size_t numBytes = (numBits - 1) / 8 + 1;
    memcpy(&t_0.value, byteArray, numBytes);
  }

  hamr_SW_FlyZonesDatabase_thr_Impl_Initialization_Api_put_keep_in_zones_(
    SF
    &initialization_api,
    &t_0);
}

void api_put_keep_out_zones__hamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray) {
  DeclNewStackFrame(caller, "FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_api.c", "", "api_put_keep_out_zones__hamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase", 0);

  sfAssert((Z) numBits >= 0, "numBits must be non-negative for IS[Z, B].")
  sfAssert((Z) numBits <= MaxIS_C4F575, "numBits too large for IS[Z, B].")

  if(!apis_initialized) { initialize_apis(SF_LAST); }

  DeclNewIS_C4F575(t_0);

  t_0.size = numBits;
  if(numBits > 0) {
    size_t numBytes = (numBits - 1) / 8 + 1;
    memcpy(&t_0.value, byteArray, numBytes);
  }

  hamr_SW_FlyZonesDatabase_thr_Impl_Initialization_Api_put_keep_out_zones_(
    SF
    &initialization_api,
    &t_0);
}

void api_logInfo__hamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_api.c", "", "api_logInfo__hamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase", 0);

  if(!apis_initialized) { initialize_apis(SF_LAST); }

  hamr_SW_FlyZonesDatabase_thr_Impl_Initialization_Api_logInfo_(
    SF
    &initialization_api,
    str);
}

void api_logDebug__hamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_api.c", "", "api_logDebug__hamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase", 0);

  if(!apis_initialized) { initialize_apis(SF_LAST); }

  hamr_SW_FlyZonesDatabase_thr_Impl_Initialization_Api_logDebug_(
    SF
    &initialization_api,
    str);
}

void api_logError__hamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_api.c", "", "api_logError__hamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase", 0);

  if(!apis_initialized) { initialize_apis(SF_LAST); }

  hamr_SW_FlyZonesDatabase_thr_Impl_Initialization_Api_logError_(
    SF
    &initialization_api,
    str);
}

Unit hamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_initialise(
  STACK_FRAME
  hamr_SW_FlyZonesDatabase_thr_Impl_Initialization_Api api) {
  DeclNewStackFrame(caller, "FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_api.c", "", "hamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_initialise", 0);

  hamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_initialise_(SF_LAST);
}

Unit hamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_finalise(
  STACK_FRAME
  hamr_SW_FlyZonesDatabase_thr_Impl_Operational_Api api) {
  DeclNewStackFrame(caller, "FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_api.c", "", "hamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_finalise", 0);

  hamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_finalise_(SF_LAST);
}

Unit hamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_timeTriggered(
  STACK_FRAME
  hamr_SW_FlyZonesDatabase_thr_Impl_Operational_Api api) {
  DeclNewStackFrame(caller, "FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_api.c", "", "hamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_timeTriggered", 0);

  hamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_timeTriggered_(SF_LAST);
}
