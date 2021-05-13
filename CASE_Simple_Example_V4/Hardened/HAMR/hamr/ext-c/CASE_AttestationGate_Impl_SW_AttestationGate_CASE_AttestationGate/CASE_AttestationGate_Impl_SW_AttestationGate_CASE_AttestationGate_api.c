#include <CASE_AttestationGate_Impl_SW_AttestationGate_CASE_AttestationGate_api.h>
#include <CASE_AttestationGate_Impl_SW_AttestationGate_CASE_AttestationGate.h>

// This file was auto-generated.  Do not edit

bool api_get_MissionCommand_in__HAMR_SW_CASE_AttestationGate_Impl_SW_AttestationGate_CASE_AttestationGate(
  STACK_FRAME
  HAMR_SW_RF_Msg_Impl value){
  DeclNewStackFrame(caller, "CASE_AttestationGate_Impl_SW_AttestationGate_CASE_AttestationGate_api.c", "", "api_get_MissionCommand_in__HAMR_SW_CASE_AttestationGate_Impl_SW_AttestationGate_CASE_AttestationGate", 0);

  // Option_15093E = Option[HAMR.SW.CASE_AttestationGate_Impl_Operational_Api]
  DeclNewHAMR_SW_CASE_AttestationGate_Impl_Operational_Api(api);
  Option_15093E_get_(SF (HAMR_SW_CASE_AttestationGate_Impl_Operational_Api) &api, HAMR_SW_CASE_AttestationGate_Impl_SW_AttestationGate_CASE_AttestationGate_Bridge_c_operational_api(SF_LAST));

  // Option_50CDFF = Option[HAMR.SW.RF_Msg_Impl]
  // Some_B09443 = Some[HAMR.SW.RF_Msg_Impl]
  DeclNewOption_50CDFF(t_0);
  HAMR_SW_CASE_AttestationGate_Impl_Operational_Api_get_MissionCommand_in_(
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

void api_put_MissionCommand_out__HAMR_SW_CASE_AttestationGate_Impl_SW_AttestationGate_CASE_AttestationGate(
  STACK_FRAME
  HAMR_SW_RF_Msg_Impl value) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_Impl_SW_AttestationGate_CASE_AttestationGate_api.c", "", "api_put_MissionCommand_out__HAMR_SW_CASE_AttestationGate_Impl_SW_AttestationGate_CASE_AttestationGate", 0);

  // Option_65D346 = Option[HAMR.SW.CASE_AttestationGate_Impl_Initialization_Api]
  DeclNewHAMR_SW_CASE_AttestationGate_Impl_Initialization_Api(api);
  Option_65D346_get_(SF (HAMR_SW_CASE_AttestationGate_Impl_Initialization_Api) &api, HAMR_SW_CASE_AttestationGate_Impl_SW_AttestationGate_CASE_AttestationGate_Bridge_c_initialization_api(SF_LAST));

  HAMR_SW_CASE_AttestationGate_Impl_Initialization_Api_put_MissionCommand_out_(
    SF
    &api,
    value);
}

bool api_get_TrustedIds__HAMR_SW_CASE_AttestationGate_Impl_SW_AttestationGate_CASE_AttestationGate(
  STACK_FRAME
  HAMR_SW_Address_Impl value){
  DeclNewStackFrame(caller, "CASE_AttestationGate_Impl_SW_AttestationGate_CASE_AttestationGate_api.c", "", "api_get_TrustedIds__HAMR_SW_CASE_AttestationGate_Impl_SW_AttestationGate_CASE_AttestationGate", 0);

  // Option_15093E = Option[HAMR.SW.CASE_AttestationGate_Impl_Operational_Api]
  DeclNewHAMR_SW_CASE_AttestationGate_Impl_Operational_Api(api);
  Option_15093E_get_(SF (HAMR_SW_CASE_AttestationGate_Impl_Operational_Api) &api, HAMR_SW_CASE_AttestationGate_Impl_SW_AttestationGate_CASE_AttestationGate_Bridge_c_operational_api(SF_LAST));

  // Option_7B8C79 = Option[HAMR.SW.Address_Impl]
  // Some_C4E5CA = Some[HAMR.SW.Address_Impl]
  DeclNewOption_7B8C79(t_0);
  HAMR_SW_CASE_AttestationGate_Impl_Operational_Api_get_TrustedIds_(
    SF
    (Option_7B8C79) &t_0,
    &api);

  if(t_0.type == TSome_C4E5CA){
    Type_assign(value, &t_0.Some_C4E5CA.value, sizeof(struct HAMR_SW_Address_Impl));
    return true;
  } else {
    return false;
  }
}

void api_logInfo__HAMR_SW_CASE_AttestationGate_Impl_SW_AttestationGate_CASE_AttestationGate(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_Impl_SW_AttestationGate_CASE_AttestationGate_api.c", "", "api_logInfo__HAMR_SW_CASE_AttestationGate_Impl_SW_AttestationGate_CASE_AttestationGate", 0);

  // Option_65D346 = Option[HAMR.SW.CASE_AttestationGate_Impl_Initialization_Api]
  DeclNewHAMR_SW_CASE_AttestationGate_Impl_Initialization_Api(api);
  Option_65D346_get_(SF (HAMR_SW_CASE_AttestationGate_Impl_Initialization_Api) &api, HAMR_SW_CASE_AttestationGate_Impl_SW_AttestationGate_CASE_AttestationGate_Bridge_c_initialization_api(SF_LAST));

  HAMR_SW_CASE_AttestationGate_Impl_Initialization_Api_logInfo_(
    SF
    &api,
    str);
}

void api_logDebug__HAMR_SW_CASE_AttestationGate_Impl_SW_AttestationGate_CASE_AttestationGate(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_Impl_SW_AttestationGate_CASE_AttestationGate_api.c", "", "api_logDebug__HAMR_SW_CASE_AttestationGate_Impl_SW_AttestationGate_CASE_AttestationGate", 0);

  // Option_65D346 = Option[HAMR.SW.CASE_AttestationGate_Impl_Initialization_Api]
  DeclNewHAMR_SW_CASE_AttestationGate_Impl_Initialization_Api(api);
  Option_65D346_get_(SF (HAMR_SW_CASE_AttestationGate_Impl_Initialization_Api) &api, HAMR_SW_CASE_AttestationGate_Impl_SW_AttestationGate_CASE_AttestationGate_Bridge_c_initialization_api(SF_LAST));

  HAMR_SW_CASE_AttestationGate_Impl_Initialization_Api_logDebug_(
    SF
    &api,
    str);
}

void api_logError__HAMR_SW_CASE_AttestationGate_Impl_SW_AttestationGate_CASE_AttestationGate(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_Impl_SW_AttestationGate_CASE_AttestationGate_api.c", "", "api_logError__HAMR_SW_CASE_AttestationGate_Impl_SW_AttestationGate_CASE_AttestationGate", 0);

  // Option_65D346 = Option[HAMR.SW.CASE_AttestationGate_Impl_Initialization_Api]
  DeclNewHAMR_SW_CASE_AttestationGate_Impl_Initialization_Api(api);
  Option_65D346_get_(SF (HAMR_SW_CASE_AttestationGate_Impl_Initialization_Api) &api, HAMR_SW_CASE_AttestationGate_Impl_SW_AttestationGate_CASE_AttestationGate_Bridge_c_initialization_api(SF_LAST));

  HAMR_SW_CASE_AttestationGate_Impl_Initialization_Api_logError_(
    SF
    &api,
    str);
}

Unit HAMR_SW_CASE_AttestationGate_Impl_SW_AttestationGate_CASE_AttestationGate_initialise(
  STACK_FRAME
  HAMR_SW_CASE_AttestationGate_Impl_Initialization_Api api) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_Impl_SW_AttestationGate_CASE_AttestationGate_api.c", "", "HAMR_SW_CASE_AttestationGate_Impl_SW_AttestationGate_CASE_AttestationGate_initialise", 0);

  HAMR_SW_CASE_AttestationGate_Impl_SW_AttestationGate_CASE_AttestationGate_initialise_(SF_LAST);
}

Unit HAMR_SW_CASE_AttestationGate_Impl_SW_AttestationGate_CASE_AttestationGate_finalise(
  STACK_FRAME
  HAMR_SW_CASE_AttestationGate_Impl_Operational_Api api) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_Impl_SW_AttestationGate_CASE_AttestationGate_api.c", "", "HAMR_SW_CASE_AttestationGate_Impl_SW_AttestationGate_CASE_AttestationGate_finalise", 0);

  HAMR_SW_CASE_AttestationGate_Impl_SW_AttestationGate_CASE_AttestationGate_finalise_(SF_LAST);
}

Unit HAMR_SW_CASE_AttestationGate_Impl_SW_AttestationGate_CASE_AttestationGate_handle_MissionCommand_in(
  STACK_FRAME
  HAMR_SW_CASE_AttestationGate_Impl_Operational_Api api,
  HAMR_SW_RF_Msg_Impl value) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_Impl_SW_AttestationGate_CASE_AttestationGate_api.c", "", "HAMR_SW_CASE_AttestationGate_Impl_SW_AttestationGate_CASE_AttestationGate_handle_MissionCommand_in", 0);

  HAMR_SW_CASE_AttestationGate_Impl_SW_AttestationGate_CASE_AttestationGate_handle_MissionCommand_in_(SF value);
}

Unit HAMR_SW_CASE_AttestationGate_Impl_SW_AttestationGate_CASE_AttestationGate_handle_TrustedIds(
  STACK_FRAME
  HAMR_SW_CASE_AttestationGate_Impl_Operational_Api api,
  HAMR_SW_Address_Impl value) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_Impl_SW_AttestationGate_CASE_AttestationGate_api.c", "", "HAMR_SW_CASE_AttestationGate_Impl_SW_AttestationGate_CASE_AttestationGate_handle_TrustedIds", 0);

  HAMR_SW_CASE_AttestationGate_Impl_SW_AttestationGate_CASE_AttestationGate_handle_TrustedIds_(SF value);
}
