#include <RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_api.h>
#include <RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation.h>

// This file was auto-generated.  Do not edit

void api_put_MissionCommand__HAMR_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation(
  STACK_FRAME
  HAMR_SW_RF_Msg_Impl value) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_api.c", "", "api_put_MissionCommand__HAMR_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation", 0);

  // Option_4EC416 = Option[HAMR.SW.RadioDriver_Attestation_Impl_Initialization_Api]
  DeclNewHAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api(api);
  Option_4EC416_get_(SF (HAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api) &api, HAMR_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_Bridge_c_initialization_api(SF_LAST));

  HAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api_put_MissionCommand_(
    SF
    &api,
    value);
}

bool api_get_AttestationRequest__HAMR_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation(
  STACK_FRAME
  HAMR_CASE_Model_Transformations_CASE_AttestationRequestMsg_Impl value){
  DeclNewStackFrame(caller, "RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_api.c", "", "api_get_AttestationRequest__HAMR_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation", 0);

  // Option_87EF85 = Option[HAMR.SW.RadioDriver_Attestation_Impl_Operational_Api]
  DeclNewHAMR_SW_RadioDriver_Attestation_Impl_Operational_Api(api);
  Option_87EF85_get_(SF (HAMR_SW_RadioDriver_Attestation_Impl_Operational_Api) &api, HAMR_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_Bridge_c_operational_api(SF_LAST));

  // Option_21CC40 = Option[HAMR.CASE_Model_Transformations.CASE_AttestationRequestMsg_Impl]
  // Some_6DE28F = Some[HAMR.CASE_Model_Transformations.CASE_AttestationRequestMsg_Impl]
  DeclNewOption_21CC40(t_0);
  HAMR_SW_RadioDriver_Attestation_Impl_Operational_Api_get_AttestationRequest_(
    SF
    (Option_21CC40) &t_0,
    &api);

  if(t_0.type == TSome_6DE28F){
    Type_assign(value, &t_0.Some_6DE28F.value, sizeof(struct HAMR_CASE_Model_Transformations_CASE_AttestationRequestMsg_Impl));
    return true;
  } else {
    return false;
  }
}

void api_put_AttestationResponse__HAMR_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation(
  STACK_FRAME
  HAMR_CASE_Model_Transformations_CASE_AttestationResponseMsg_Impl value) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_api.c", "", "api_put_AttestationResponse__HAMR_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation", 0);

  // Option_4EC416 = Option[HAMR.SW.RadioDriver_Attestation_Impl_Initialization_Api]
  DeclNewHAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api(api);
  Option_4EC416_get_(SF (HAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api) &api, HAMR_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_Bridge_c_initialization_api(SF_LAST));

  HAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api_put_AttestationResponse_(
    SF
    &api,
    value);
}

bool api_get_Alert__HAMR_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation(STACK_FRAME_ONLY){
  DeclNewStackFrame(caller, "RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_api.c", "", "api_get_Alert__HAMR_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation", 0);

  // Option_87EF85 = Option[HAMR.SW.RadioDriver_Attestation_Impl_Operational_Api]
  DeclNewHAMR_SW_RadioDriver_Attestation_Impl_Operational_Api(api);
  Option_87EF85_get_(SF (HAMR_SW_RadioDriver_Attestation_Impl_Operational_Api) &api, HAMR_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_Bridge_c_operational_api(SF_LAST));

  // Option_C622DB = Option[art.Empty]
  // Some_4782C6 = Some[art.Empty]
  DeclNewOption_C622DB(t_0);
  HAMR_SW_RadioDriver_Attestation_Impl_Operational_Api_get_Alert_(
    SF
    (Option_C622DB) &t_0,
    &api);

  if(t_0.type == TSome_4782C6){
    return true;
  } else {
    return false;
  }
}

void api_logInfo__HAMR_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_api.c", "", "api_logInfo__HAMR_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation", 0);

  // Option_4EC416 = Option[HAMR.SW.RadioDriver_Attestation_Impl_Initialization_Api]
  DeclNewHAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api(api);
  Option_4EC416_get_(SF (HAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api) &api, HAMR_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_Bridge_c_initialization_api(SF_LAST));

  HAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api_logInfo_(
    SF
    &api,
    str);
}

void api_logDebug__HAMR_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_api.c", "", "api_logDebug__HAMR_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation", 0);

  // Option_4EC416 = Option[HAMR.SW.RadioDriver_Attestation_Impl_Initialization_Api]
  DeclNewHAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api(api);
  Option_4EC416_get_(SF (HAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api) &api, HAMR_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_Bridge_c_initialization_api(SF_LAST));

  HAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api_logDebug_(
    SF
    &api,
    str);
}

void api_logError__HAMR_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_api.c", "", "api_logError__HAMR_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation", 0);

  // Option_4EC416 = Option[HAMR.SW.RadioDriver_Attestation_Impl_Initialization_Api]
  DeclNewHAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api(api);
  Option_4EC416_get_(SF (HAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api) &api, HAMR_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_Bridge_c_initialization_api(SF_LAST));

  HAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api_logError_(
    SF
    &api,
    str);
}

Unit HAMR_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_initialise(
  STACK_FRAME
  HAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api api) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_api.c", "", "HAMR_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_initialise", 0);

  HAMR_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_initialise_(SF_LAST);
}

Unit HAMR_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_finalise(
  STACK_FRAME
  HAMR_SW_RadioDriver_Attestation_Impl_Operational_Api api) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_api.c", "", "HAMR_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_finalise", 0);

  HAMR_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_finalise_(SF_LAST);
}

Unit HAMR_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_handle_AttestationRequest(
  STACK_FRAME
  HAMR_SW_RadioDriver_Attestation_Impl_Operational_Api api,
  HAMR_CASE_Model_Transformations_CASE_AttestationRequestMsg_Impl value) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_api.c", "", "HAMR_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_handle_AttestationRequest", 0);

  HAMR_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_handle_AttestationRequest_(SF value);
}

Unit HAMR_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_handle_Alert(
  STACK_FRAME
  HAMR_SW_RadioDriver_Attestation_Impl_Operational_Api api) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_api.c", "", "HAMR_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_handle_Alert", 0);

  HAMR_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_handle_Alert_(SF_LAST);
}
