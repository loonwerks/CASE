#include <FlyZoneDatabase_Impl_SW_FlyZones_FlyZoneDatabase_api.h>
#include <FlyZoneDatabase_Impl_SW_FlyZones_FlyZoneDatabase.h>
#include <ext.h>

// This file will not be overwritten so is safe to edit

Unit HAMR_SW_FlyZoneDatabase_Impl_SW_FlyZones_FlyZoneDatabase_initialise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "FlyZoneDatabase_Impl_SW_FlyZones_FlyZoneDatabase.c", "", "HAMR_SW_FlyZoneDatabase_Impl_SW_FlyZones_FlyZoneDatabase_initialise_", 0);

  // examples of api setter and logging usage

  DeclNewHAMR_SW_MapArray(t0);
  HAMR_SW_MapArray_example(SF &t0);
  api_put_FlyZones__HAMR_SW_FlyZoneDatabase_Impl_SW_FlyZones_FlyZoneDatabase(SF &t0);

  api_logInfo__HAMR_SW_FlyZoneDatabase_Impl_SW_FlyZones_FlyZoneDatabase(SF string("Example logInfo"));

  api_logDebug__HAMR_SW_FlyZoneDatabase_Impl_SW_FlyZones_FlyZoneDatabase(SF string("Example logDebug"));

  api_logError__HAMR_SW_FlyZoneDatabase_Impl_SW_FlyZones_FlyZoneDatabase(SF string("Example logError"));
}

Unit HAMR_SW_FlyZoneDatabase_Impl_SW_FlyZones_FlyZoneDatabase_finalise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "FlyZoneDatabase_Impl_SW_FlyZones_FlyZoneDatabase.c", "", "HAMR_SW_FlyZoneDatabase_Impl_SW_FlyZones_FlyZoneDatabase_finalise_", 0);
}
