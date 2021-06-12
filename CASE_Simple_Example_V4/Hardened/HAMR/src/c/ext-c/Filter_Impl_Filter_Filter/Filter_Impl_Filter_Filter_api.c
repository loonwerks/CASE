#include <Filter_Impl_Filter_Filter_api.h>
#include <Filter_Impl_Filter_Filter.h>

// This file was auto-generated.  Do not edit

bool api_get_Input__HAMR_SW_Filter_Impl_Filter_Filter(
  STACK_FRAME
  HAMR_SW_RF_Msg_Impl value){
  DeclNewStackFrame(caller, "Filter_Impl_Filter_Filter_api.c", "", "api_get_Input__HAMR_SW_Filter_Impl_Filter_Filter", 0);

  // Option_6DC5D7 = Option[HAMR.SW.Filter_Impl_Operational_Api]
  DeclNewHAMR_SW_Filter_Impl_Operational_Api(api);
  Option_6DC5D7_get_(SF (HAMR_SW_Filter_Impl_Operational_Api) &api, HAMR_SW_Filter_Impl_Filter_Filter_Bridge_c_operational_api(SF_LAST));

  // Option_50CDFF = Option[HAMR.SW.RF_Msg_Impl]
  // Some_B09443 = Some[HAMR.SW.RF_Msg_Impl]
  DeclNewOption_50CDFF(t_0);
  HAMR_SW_Filter_Impl_Operational_Api_get_Input_(
    SF
    (Option_50CDFF) &t_0,
    &api);

  if(t_0.type == TSome_B09443){
    Type_assign(value, &t_0.Some_B09443.value, sizeof(struct HAMR_SW_RF_Msg_Impl));
    return true;
  } else {
    return false;
  }
}

void api_put_Output__HAMR_SW_Filter_Impl_Filter_Filter(
  STACK_FRAME
  HAMR_SW_RF_Msg_Impl value) {
  DeclNewStackFrame(caller, "Filter_Impl_Filter_Filter_api.c", "", "api_put_Output__HAMR_SW_Filter_Impl_Filter_Filter", 0);

  // Option_3ABCB9 = Option[HAMR.SW.Filter_Impl_Initialization_Api]
  DeclNewHAMR_SW_Filter_Impl_Initialization_Api(api);
  Option_3ABCB9_get_(SF (HAMR_SW_Filter_Impl_Initialization_Api) &api, HAMR_SW_Filter_Impl_Filter_Filter_Bridge_c_initialization_api(SF_LAST));

  HAMR_SW_Filter_Impl_Initialization_Api_put_Output_(
    SF
    &api,
    value);
}

void api_logInfo__HAMR_SW_Filter_Impl_Filter_Filter(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "Filter_Impl_Filter_Filter_api.c", "", "api_logInfo__HAMR_SW_Filter_Impl_Filter_Filter", 0);

  // Option_3ABCB9 = Option[HAMR.SW.Filter_Impl_Initialization_Api]
  DeclNewHAMR_SW_Filter_Impl_Initialization_Api(api);
  Option_3ABCB9_get_(SF (HAMR_SW_Filter_Impl_Initialization_Api) &api, HAMR_SW_Filter_Impl_Filter_Filter_Bridge_c_initialization_api(SF_LAST));

  HAMR_SW_Filter_Impl_Initialization_Api_logInfo_(
    SF
    &api,
    str);
}

void api_logDebug__HAMR_SW_Filter_Impl_Filter_Filter(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "Filter_Impl_Filter_Filter_api.c", "", "api_logDebug__HAMR_SW_Filter_Impl_Filter_Filter", 0);

  // Option_3ABCB9 = Option[HAMR.SW.Filter_Impl_Initialization_Api]
  DeclNewHAMR_SW_Filter_Impl_Initialization_Api(api);
  Option_3ABCB9_get_(SF (HAMR_SW_Filter_Impl_Initialization_Api) &api, HAMR_SW_Filter_Impl_Filter_Filter_Bridge_c_initialization_api(SF_LAST));

  HAMR_SW_Filter_Impl_Initialization_Api_logDebug_(
    SF
    &api,
    str);
}

void api_logError__HAMR_SW_Filter_Impl_Filter_Filter(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "Filter_Impl_Filter_Filter_api.c", "", "api_logError__HAMR_SW_Filter_Impl_Filter_Filter", 0);

  // Option_3ABCB9 = Option[HAMR.SW.Filter_Impl_Initialization_Api]
  DeclNewHAMR_SW_Filter_Impl_Initialization_Api(api);
  Option_3ABCB9_get_(SF (HAMR_SW_Filter_Impl_Initialization_Api) &api, HAMR_SW_Filter_Impl_Filter_Filter_Bridge_c_initialization_api(SF_LAST));

  HAMR_SW_Filter_Impl_Initialization_Api_logError_(
    SF
    &api,
    str);
}

Unit HAMR_SW_Filter_Impl_Filter_Filter_initialise(
  STACK_FRAME
  HAMR_SW_Filter_Impl_Initialization_Api api) {
  DeclNewStackFrame(caller, "Filter_Impl_Filter_Filter_api.c", "", "HAMR_SW_Filter_Impl_Filter_Filter_initialise", 0);

  HAMR_SW_Filter_Impl_Filter_Filter_initialise_(SF_LAST);
}

Unit HAMR_SW_Filter_Impl_Filter_Filter_finalise(
  STACK_FRAME
  HAMR_SW_Filter_Impl_Operational_Api api) {
  DeclNewStackFrame(caller, "Filter_Impl_Filter_Filter_api.c", "", "HAMR_SW_Filter_Impl_Filter_Filter_finalise", 0);

  HAMR_SW_Filter_Impl_Filter_Filter_finalise_(SF_LAST);
}

Unit HAMR_SW_Filter_Impl_Filter_Filter_handle_Input(
  STACK_FRAME
  HAMR_SW_Filter_Impl_Operational_Api api,
  HAMR_SW_RF_Msg_Impl value) {
  DeclNewStackFrame(caller, "Filter_Impl_Filter_Filter_api.c", "", "HAMR_SW_Filter_Impl_Filter_Filter_handle_Input", 0);

  HAMR_SW_Filter_Impl_Filter_Filter_handle_Input_(SF value);
}
