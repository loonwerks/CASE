#include <AttestationManager_Impl_AttestationManager_AttestationManager_api.h>
#include <AttestationManager_Impl_AttestationManager_AttestationManager.h>

// This file was auto-generated.  Do not edit

void api_put_AttestationRequest__HAMR_SW_AttestationManager_Impl_AttestationManager_AttestationManager(
  STACK_FRAME
  HAMR_SW_AttestationRequestMsg_Impl value) {
  DeclNewStackFrame(caller, "AttestationManager_Impl_AttestationManager_AttestationManager_api.c", "", "api_put_AttestationRequest__HAMR_SW_AttestationManager_Impl_AttestationManager_AttestationManager", 0);

  // Option_96FA67 = Option[HAMR.SW.AttestationManager_Impl_Initialization_Api]
  DeclNewHAMR_SW_AttestationManager_Impl_Initialization_Api(api);
  Option_96FA67_get_(SF (HAMR_SW_AttestationManager_Impl_Initialization_Api) &api, HAMR_SW_AttestationManager_Impl_AttestationManager_AttestationManager_Bridge_c_initialization_api(SF_LAST));

  HAMR_SW_AttestationManager_Impl_Initialization_Api_put_AttestationRequest_(
    SF
    &api,
    value);
}

bool api_get_AttestationResponse__HAMR_SW_AttestationManager_Impl_AttestationManager_AttestationManager(
  STACK_FRAME
  HAMR_SW_AttestationResponseMsg_Impl value){
  DeclNewStackFrame(caller, "AttestationManager_Impl_AttestationManager_AttestationManager_api.c", "", "api_get_AttestationResponse__HAMR_SW_AttestationManager_Impl_AttestationManager_AttestationManager", 0);

  // Option_75F258 = Option[HAMR.SW.AttestationManager_Impl_Operational_Api]
  DeclNewHAMR_SW_AttestationManager_Impl_Operational_Api(api);
  Option_75F258_get_(SF (HAMR_SW_AttestationManager_Impl_Operational_Api) &api, HAMR_SW_AttestationManager_Impl_AttestationManager_AttestationManager_Bridge_c_operational_api(SF_LAST));

  // Option_9AB8D4 = Option[HAMR.SW.AttestationResponseMsg_Impl]
  // Some_671DD1 = Some[HAMR.SW.AttestationResponseMsg_Impl]
  DeclNewOption_9AB8D4(t_0);
  HAMR_SW_AttestationManager_Impl_Operational_Api_get_AttestationResponse_(
    SF
    (Option_9AB8D4) &t_0,
    &api);

  if(t_0.type == TSome_671DD1){
    Type_assign(value, &t_0.Some_671DD1.value, sizeof(struct HAMR_SW_AttestationResponseMsg_Impl));
    return true;
  } else {
    return false;
  }
}

void api_put_TrustedIds__HAMR_SW_AttestationManager_Impl_AttestationManager_AttestationManager(
  STACK_FRAME
  HAMR_SW_AllowList_Impl value) {
  DeclNewStackFrame(caller, "AttestationManager_Impl_AttestationManager_AttestationManager_api.c", "", "api_put_TrustedIds__HAMR_SW_AttestationManager_Impl_AttestationManager_AttestationManager", 0);

  // Option_96FA67 = Option[HAMR.SW.AttestationManager_Impl_Initialization_Api]
  DeclNewHAMR_SW_AttestationManager_Impl_Initialization_Api(api);
  Option_96FA67_get_(SF (HAMR_SW_AttestationManager_Impl_Initialization_Api) &api, HAMR_SW_AttestationManager_Impl_AttestationManager_AttestationManager_Bridge_c_initialization_api(SF_LAST));

  HAMR_SW_AttestationManager_Impl_Initialization_Api_put_TrustedIds_(
    SF
    &api,
    value);
}

void api_logInfo__HAMR_SW_AttestationManager_Impl_AttestationManager_AttestationManager(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "AttestationManager_Impl_AttestationManager_AttestationManager_api.c", "", "api_logInfo__HAMR_SW_AttestationManager_Impl_AttestationManager_AttestationManager", 0);

  // Option_96FA67 = Option[HAMR.SW.AttestationManager_Impl_Initialization_Api]
  DeclNewHAMR_SW_AttestationManager_Impl_Initialization_Api(api);
  Option_96FA67_get_(SF (HAMR_SW_AttestationManager_Impl_Initialization_Api) &api, HAMR_SW_AttestationManager_Impl_AttestationManager_AttestationManager_Bridge_c_initialization_api(SF_LAST));

  HAMR_SW_AttestationManager_Impl_Initialization_Api_logInfo_(
    SF
    &api,
    str);
}

void api_logDebug__HAMR_SW_AttestationManager_Impl_AttestationManager_AttestationManager(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "AttestationManager_Impl_AttestationManager_AttestationManager_api.c", "", "api_logDebug__HAMR_SW_AttestationManager_Impl_AttestationManager_AttestationManager", 0);

  // Option_96FA67 = Option[HAMR.SW.AttestationManager_Impl_Initialization_Api]
  DeclNewHAMR_SW_AttestationManager_Impl_Initialization_Api(api);
  Option_96FA67_get_(SF (HAMR_SW_AttestationManager_Impl_Initialization_Api) &api, HAMR_SW_AttestationManager_Impl_AttestationManager_AttestationManager_Bridge_c_initialization_api(SF_LAST));

  HAMR_SW_AttestationManager_Impl_Initialization_Api_logDebug_(
    SF
    &api,
    str);
}

void api_logError__HAMR_SW_AttestationManager_Impl_AttestationManager_AttestationManager(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "AttestationManager_Impl_AttestationManager_AttestationManager_api.c", "", "api_logError__HAMR_SW_AttestationManager_Impl_AttestationManager_AttestationManager", 0);

  // Option_96FA67 = Option[HAMR.SW.AttestationManager_Impl_Initialization_Api]
  DeclNewHAMR_SW_AttestationManager_Impl_Initialization_Api(api);
  Option_96FA67_get_(SF (HAMR_SW_AttestationManager_Impl_Initialization_Api) &api, HAMR_SW_AttestationManager_Impl_AttestationManager_AttestationManager_Bridge_c_initialization_api(SF_LAST));

  HAMR_SW_AttestationManager_Impl_Initialization_Api_logError_(
    SF
    &api,
    str);
}

Unit HAMR_SW_AttestationManager_Impl_AttestationManager_AttestationManager_initialise(
  STACK_FRAME
  HAMR_SW_AttestationManager_Impl_Initialization_Api api) {
  DeclNewStackFrame(caller, "AttestationManager_Impl_AttestationManager_AttestationManager_api.c", "", "HAMR_SW_AttestationManager_Impl_AttestationManager_AttestationManager_initialise", 0);

  HAMR_SW_AttestationManager_Impl_AttestationManager_AttestationManager_initialise_(SF_LAST);
}

Unit HAMR_SW_AttestationManager_Impl_AttestationManager_AttestationManager_finalise(
  STACK_FRAME
  HAMR_SW_AttestationManager_Impl_Operational_Api api) {
  DeclNewStackFrame(caller, "AttestationManager_Impl_AttestationManager_AttestationManager_api.c", "", "HAMR_SW_AttestationManager_Impl_AttestationManager_AttestationManager_finalise", 0);

  HAMR_SW_AttestationManager_Impl_AttestationManager_AttestationManager_finalise_(SF_LAST);
}

Unit HAMR_SW_AttestationManager_Impl_AttestationManager_AttestationManager_handle_AttestationResponse(
  STACK_FRAME
  HAMR_SW_AttestationManager_Impl_Operational_Api api,
  HAMR_SW_AttestationResponseMsg_Impl value) {
  DeclNewStackFrame(caller, "AttestationManager_Impl_AttestationManager_AttestationManager_api.c", "", "HAMR_SW_AttestationManager_Impl_AttestationManager_AttestationManager_handle_AttestationResponse", 0);

  HAMR_SW_AttestationManager_Impl_AttestationManager_AttestationManager_handle_AttestationResponse_(SF value);
}
