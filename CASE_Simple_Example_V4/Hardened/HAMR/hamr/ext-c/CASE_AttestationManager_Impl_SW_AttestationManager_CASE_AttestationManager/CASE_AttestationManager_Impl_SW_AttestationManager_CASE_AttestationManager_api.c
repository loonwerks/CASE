#include <CASE_AttestationManager_Impl_SW_AttestationManager_CASE_AttestationManager_api.h>
#include <CASE_AttestationManager_Impl_SW_AttestationManager_CASE_AttestationManager.h>

// This file was auto-generated.  Do not edit

void api_put_AttestationRequest__HAMR_SW_CASE_AttestationManager_Impl_SW_AttestationManager_CASE_AttestationManager(
  STACK_FRAME
  HAMR_CASE_Model_Transformations_CASE_AttestationRequestMsg_Impl value) {
  DeclNewStackFrame(caller, "CASE_AttestationManager_Impl_SW_AttestationManager_CASE_AttestationManager_api.c", "", "api_put_AttestationRequest__HAMR_SW_CASE_AttestationManager_Impl_SW_AttestationManager_CASE_AttestationManager", 0);

  // Option_D15808 = Option[HAMR.SW.CASE_AttestationManager_Impl_Initialization_Api]
  DeclNewHAMR_SW_CASE_AttestationManager_Impl_Initialization_Api(api);
  Option_D15808_get_(SF (HAMR_SW_CASE_AttestationManager_Impl_Initialization_Api) &api, HAMR_SW_CASE_AttestationManager_Impl_SW_AttestationManager_CASE_AttestationManager_Bridge_c_initialization_api(SF_LAST));

  HAMR_SW_CASE_AttestationManager_Impl_Initialization_Api_put_AttestationRequest_(
    SF
    &api,
    value);
}

bool api_get_AttestationResponse__HAMR_SW_CASE_AttestationManager_Impl_SW_AttestationManager_CASE_AttestationManager(
  STACK_FRAME
  HAMR_CASE_Model_Transformations_CASE_AttestationResponseMsg_Impl value){
  DeclNewStackFrame(caller, "CASE_AttestationManager_Impl_SW_AttestationManager_CASE_AttestationManager_api.c", "", "api_get_AttestationResponse__HAMR_SW_CASE_AttestationManager_Impl_SW_AttestationManager_CASE_AttestationManager", 0);

  // Option_886089 = Option[HAMR.SW.CASE_AttestationManager_Impl_Operational_Api]
  DeclNewHAMR_SW_CASE_AttestationManager_Impl_Operational_Api(api);
  Option_886089_get_(SF (HAMR_SW_CASE_AttestationManager_Impl_Operational_Api) &api, HAMR_SW_CASE_AttestationManager_Impl_SW_AttestationManager_CASE_AttestationManager_Bridge_c_operational_api(SF_LAST));

  // Option_C06E6F = Option[HAMR.CASE_Model_Transformations.CASE_AttestationResponseMsg_Impl]
  // Some_CB50D6 = Some[HAMR.CASE_Model_Transformations.CASE_AttestationResponseMsg_Impl]
  DeclNewOption_C06E6F(t_0);
  HAMR_SW_CASE_AttestationManager_Impl_Operational_Api_get_AttestationResponse_(
    SF
    (Option_C06E6F) &t_0,
    &api);

  if(t_0.type == TSome_CB50D6){
    Type_assign(value, &t_0.Some_CB50D6.value, sizeof(struct HAMR_CASE_Model_Transformations_CASE_AttestationResponseMsg_Impl));
    return true;
  } else {
    return false;
  }
}

void api_put_TrustedIds__HAMR_SW_CASE_AttestationManager_Impl_SW_AttestationManager_CASE_AttestationManager(
  STACK_FRAME
  HAMR_SW_Address_Impl value) {
  DeclNewStackFrame(caller, "CASE_AttestationManager_Impl_SW_AttestationManager_CASE_AttestationManager_api.c", "", "api_put_TrustedIds__HAMR_SW_CASE_AttestationManager_Impl_SW_AttestationManager_CASE_AttestationManager", 0);

  // Option_D15808 = Option[HAMR.SW.CASE_AttestationManager_Impl_Initialization_Api]
  DeclNewHAMR_SW_CASE_AttestationManager_Impl_Initialization_Api(api);
  Option_D15808_get_(SF (HAMR_SW_CASE_AttestationManager_Impl_Initialization_Api) &api, HAMR_SW_CASE_AttestationManager_Impl_SW_AttestationManager_CASE_AttestationManager_Bridge_c_initialization_api(SF_LAST));

  HAMR_SW_CASE_AttestationManager_Impl_Initialization_Api_put_TrustedIds_(
    SF
    &api,
    value);
}

void api_logInfo__HAMR_SW_CASE_AttestationManager_Impl_SW_AttestationManager_CASE_AttestationManager(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "CASE_AttestationManager_Impl_SW_AttestationManager_CASE_AttestationManager_api.c", "", "api_logInfo__HAMR_SW_CASE_AttestationManager_Impl_SW_AttestationManager_CASE_AttestationManager", 0);

  // Option_D15808 = Option[HAMR.SW.CASE_AttestationManager_Impl_Initialization_Api]
  DeclNewHAMR_SW_CASE_AttestationManager_Impl_Initialization_Api(api);
  Option_D15808_get_(SF (HAMR_SW_CASE_AttestationManager_Impl_Initialization_Api) &api, HAMR_SW_CASE_AttestationManager_Impl_SW_AttestationManager_CASE_AttestationManager_Bridge_c_initialization_api(SF_LAST));

  HAMR_SW_CASE_AttestationManager_Impl_Initialization_Api_logInfo_(
    SF
    &api,
    str);
}

void api_logDebug__HAMR_SW_CASE_AttestationManager_Impl_SW_AttestationManager_CASE_AttestationManager(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "CASE_AttestationManager_Impl_SW_AttestationManager_CASE_AttestationManager_api.c", "", "api_logDebug__HAMR_SW_CASE_AttestationManager_Impl_SW_AttestationManager_CASE_AttestationManager", 0);

  // Option_D15808 = Option[HAMR.SW.CASE_AttestationManager_Impl_Initialization_Api]
  DeclNewHAMR_SW_CASE_AttestationManager_Impl_Initialization_Api(api);
  Option_D15808_get_(SF (HAMR_SW_CASE_AttestationManager_Impl_Initialization_Api) &api, HAMR_SW_CASE_AttestationManager_Impl_SW_AttestationManager_CASE_AttestationManager_Bridge_c_initialization_api(SF_LAST));

  HAMR_SW_CASE_AttestationManager_Impl_Initialization_Api_logDebug_(
    SF
    &api,
    str);
}

void api_logError__HAMR_SW_CASE_AttestationManager_Impl_SW_AttestationManager_CASE_AttestationManager(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "CASE_AttestationManager_Impl_SW_AttestationManager_CASE_AttestationManager_api.c", "", "api_logError__HAMR_SW_CASE_AttestationManager_Impl_SW_AttestationManager_CASE_AttestationManager", 0);

  // Option_D15808 = Option[HAMR.SW.CASE_AttestationManager_Impl_Initialization_Api]
  DeclNewHAMR_SW_CASE_AttestationManager_Impl_Initialization_Api(api);
  Option_D15808_get_(SF (HAMR_SW_CASE_AttestationManager_Impl_Initialization_Api) &api, HAMR_SW_CASE_AttestationManager_Impl_SW_AttestationManager_CASE_AttestationManager_Bridge_c_initialization_api(SF_LAST));

  HAMR_SW_CASE_AttestationManager_Impl_Initialization_Api_logError_(
    SF
    &api,
    str);
}

Unit HAMR_SW_CASE_AttestationManager_Impl_SW_AttestationManager_CASE_AttestationManager_initialise(
  STACK_FRAME
  HAMR_SW_CASE_AttestationManager_Impl_Initialization_Api api) {
  DeclNewStackFrame(caller, "CASE_AttestationManager_Impl_SW_AttestationManager_CASE_AttestationManager_api.c", "", "HAMR_SW_CASE_AttestationManager_Impl_SW_AttestationManager_CASE_AttestationManager_initialise", 0);

  HAMR_SW_CASE_AttestationManager_Impl_SW_AttestationManager_CASE_AttestationManager_initialise_(SF_LAST);
}

Unit HAMR_SW_CASE_AttestationManager_Impl_SW_AttestationManager_CASE_AttestationManager_finalise(
  STACK_FRAME
  HAMR_SW_CASE_AttestationManager_Impl_Operational_Api api) {
  DeclNewStackFrame(caller, "CASE_AttestationManager_Impl_SW_AttestationManager_CASE_AttestationManager_api.c", "", "HAMR_SW_CASE_AttestationManager_Impl_SW_AttestationManager_CASE_AttestationManager_finalise", 0);

  HAMR_SW_CASE_AttestationManager_Impl_SW_AttestationManager_CASE_AttestationManager_finalise_(SF_LAST);
}

Unit HAMR_SW_CASE_AttestationManager_Impl_SW_AttestationManager_CASE_AttestationManager_handle_AttestationResponse(
  STACK_FRAME
  HAMR_SW_CASE_AttestationManager_Impl_Operational_Api api,
  HAMR_CASE_Model_Transformations_CASE_AttestationResponseMsg_Impl value) {
  DeclNewStackFrame(caller, "CASE_AttestationManager_Impl_SW_AttestationManager_CASE_AttestationManager_api.c", "", "HAMR_SW_CASE_AttestationManager_Impl_SW_AttestationManager_CASE_AttestationManager_handle_AttestationResponse", 0);

  HAMR_SW_CASE_AttestationManager_Impl_SW_AttestationManager_CASE_AttestationManager_handle_AttestationResponse_(SF value);
}
