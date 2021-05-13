#include <GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor_api.h>
#include <GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor.h>
#include <ext.h>

// This file will not be overwritten so is safe to edit

Unit HAMR_SW_GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor_initialise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor.c", "", "HAMR_SW_GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor_initialise_", 0);

  // examples of api setter and logging usage

  DeclNewHAMR_SW_Mission(t0);
  HAMR_SW_Mission_example(SF &t0);
  api_put_FlightPlan_Out__HAMR_SW_GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor(SF &t0);

  api_put_Alert__HAMR_SW_GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor(SF_LAST);

  api_logInfo__HAMR_SW_GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor(SF string("Example logInfo"));

  api_logDebug__HAMR_SW_GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor(SF string("Example logDebug"));

  api_logError__HAMR_SW_GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor(SF string("Example logError"));
}

Unit HAMR_SW_GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor_finalise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor.c", "", "HAMR_SW_GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor_finalise_", 0);
}

Unit HAMR_SW_GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor_handle_FlightPlan_In_(
  STACK_FRAME
  HAMR_SW_Mission value) {
  DeclNewStackFrame(caller, "GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor.c", "", "HAMR_SW_GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor_handle_FlightPlan_In_", 0);

  DeclNewString(FlightPlan_InString);
  String__append(SF (String) &FlightPlan_InString, string("HAMR_SW_GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor_handle_FlightPlan_In called"));
  api_logInfo__HAMR_SW_GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor (SF (String) &FlightPlan_InString);

  DeclNewString(_str);
  String__append(SF (String) &_str, string("Received on FlightPlan_In: "));
  HAMR_SW_Mission_string_(SF (String) &_str, value);
  api_logInfo__HAMR_SW_GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor(SF (String) &_str);

  // examples of api getter usage

  DeclNewHAMR_SW_MapArray(t0);
  if(api_get_FlyZones__HAMR_SW_GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor(SF &t0)) {
    DeclNewString(FlyZones_str);
    String__append(SF (String) &FlyZones_str, string("Received on FlyZones: "));
    HAMR_SW_MapArray_string_(SF (String) &FlyZones_str, &t0);
    api_logInfo__HAMR_SW_GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor(SF (String) &FlyZones_str);
  }

  DeclNewHAMR_SW_Mission(t1);
  if(api_get_FlightPlan_In__HAMR_SW_GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor(SF &t1)) {
    DeclNewString(FlightPlan_In_str);
    String__append(SF (String) &FlightPlan_In_str, string("Received on FlightPlan_In: "));
    HAMR_SW_Mission_string_(SF (String) &FlightPlan_In_str, &t1);
    api_logInfo__HAMR_SW_GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor(SF (String) &FlightPlan_In_str);
  }
}
