#include <FlyZoneDatabase_Impl_SW_FlyZones_FlyZoneDatabase_api.h>
#include <FlyZoneDatabase_Impl_SW_FlyZones_FlyZoneDatabase.h>

// This file was auto-generated.  Do not edit

void api_put_FlyZones__HAMR_SW_FlyZoneDatabase_Impl_SW_FlyZones_FlyZoneDatabase(
  STACK_FRAME
  HAMR_SW_MapArray value) {
  DeclNewStackFrame(caller, "FlyZoneDatabase_Impl_SW_FlyZones_FlyZoneDatabase_api.c", "", "api_put_FlyZones__HAMR_SW_FlyZoneDatabase_Impl_SW_FlyZones_FlyZoneDatabase", 0);

  // Option_191DCF = Option[HAMR.SW.FlyZoneDatabase_Impl_Initialization_Api]
  DeclNewHAMR_SW_FlyZoneDatabase_Impl_Initialization_Api(api);
  Option_191DCF_get_(SF (HAMR_SW_FlyZoneDatabase_Impl_Initialization_Api) &api, HAMR_SW_FlyZoneDatabase_Impl_SW_FlyZones_FlyZoneDatabase_Bridge_c_initialization_api(SF_LAST));

  HAMR_SW_FlyZoneDatabase_Impl_Initialization_Api_put_FlyZones_(
    SF
    &api,
    value);
}

void api_logInfo__HAMR_SW_FlyZoneDatabase_Impl_SW_FlyZones_FlyZoneDatabase(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "FlyZoneDatabase_Impl_SW_FlyZones_FlyZoneDatabase_api.c", "", "api_logInfo__HAMR_SW_FlyZoneDatabase_Impl_SW_FlyZones_FlyZoneDatabase", 0);

  // Option_191DCF = Option[HAMR.SW.FlyZoneDatabase_Impl_Initialization_Api]
  DeclNewHAMR_SW_FlyZoneDatabase_Impl_Initialization_Api(api);
  Option_191DCF_get_(SF (HAMR_SW_FlyZoneDatabase_Impl_Initialization_Api) &api, HAMR_SW_FlyZoneDatabase_Impl_SW_FlyZones_FlyZoneDatabase_Bridge_c_initialization_api(SF_LAST));

  HAMR_SW_FlyZoneDatabase_Impl_Initialization_Api_logInfo_(
    SF
    &api,
    str);
}

void api_logDebug__HAMR_SW_FlyZoneDatabase_Impl_SW_FlyZones_FlyZoneDatabase(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "FlyZoneDatabase_Impl_SW_FlyZones_FlyZoneDatabase_api.c", "", "api_logDebug__HAMR_SW_FlyZoneDatabase_Impl_SW_FlyZones_FlyZoneDatabase", 0);

  // Option_191DCF = Option[HAMR.SW.FlyZoneDatabase_Impl_Initialization_Api]
  DeclNewHAMR_SW_FlyZoneDatabase_Impl_Initialization_Api(api);
  Option_191DCF_get_(SF (HAMR_SW_FlyZoneDatabase_Impl_Initialization_Api) &api, HAMR_SW_FlyZoneDatabase_Impl_SW_FlyZones_FlyZoneDatabase_Bridge_c_initialization_api(SF_LAST));

  HAMR_SW_FlyZoneDatabase_Impl_Initialization_Api_logDebug_(
    SF
    &api,
    str);
}

void api_logError__HAMR_SW_FlyZoneDatabase_Impl_SW_FlyZones_FlyZoneDatabase(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "FlyZoneDatabase_Impl_SW_FlyZones_FlyZoneDatabase_api.c", "", "api_logError__HAMR_SW_FlyZoneDatabase_Impl_SW_FlyZones_FlyZoneDatabase", 0);

  // Option_191DCF = Option[HAMR.SW.FlyZoneDatabase_Impl_Initialization_Api]
  DeclNewHAMR_SW_FlyZoneDatabase_Impl_Initialization_Api(api);
  Option_191DCF_get_(SF (HAMR_SW_FlyZoneDatabase_Impl_Initialization_Api) &api, HAMR_SW_FlyZoneDatabase_Impl_SW_FlyZones_FlyZoneDatabase_Bridge_c_initialization_api(SF_LAST));

  HAMR_SW_FlyZoneDatabase_Impl_Initialization_Api_logError_(
    SF
    &api,
    str);
}

Unit HAMR_SW_FlyZoneDatabase_Impl_SW_FlyZones_FlyZoneDatabase_initialise(
  STACK_FRAME
  HAMR_SW_FlyZoneDatabase_Impl_Initialization_Api api) {
  DeclNewStackFrame(caller, "FlyZoneDatabase_Impl_SW_FlyZones_FlyZoneDatabase_api.c", "", "HAMR_SW_FlyZoneDatabase_Impl_SW_FlyZones_FlyZoneDatabase_initialise", 0);

  HAMR_SW_FlyZoneDatabase_Impl_SW_FlyZones_FlyZoneDatabase_initialise_(SF_LAST);
}

Unit HAMR_SW_FlyZoneDatabase_Impl_SW_FlyZones_FlyZoneDatabase_finalise(
  STACK_FRAME
  HAMR_SW_FlyZoneDatabase_Impl_Operational_Api api) {
  DeclNewStackFrame(caller, "FlyZoneDatabase_Impl_SW_FlyZones_FlyZoneDatabase_api.c", "", "HAMR_SW_FlyZoneDatabase_Impl_SW_FlyZones_FlyZoneDatabase_finalise", 0);

  HAMR_SW_FlyZoneDatabase_Impl_SW_FlyZones_FlyZoneDatabase_finalise_(SF_LAST);
}
