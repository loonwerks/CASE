#include <RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation_api.h>
#include <RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation.h>

// This file was auto-generated.  Do not edit

bool api_get_AttestationTesterResponse__HAMR_SW_RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation(
  STACK_FRAME
  HAMR_SW_AttestationResponseMsg_Impl value){
  DeclNewStackFrame(caller, "RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation_api.c", "", "api_get_AttestationTesterResponse__HAMR_SW_RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation", 0);

  // Option_87EF85 = Option[HAMR.SW.RadioDriver_Attestation_Impl_Operational_Api]
  DeclNewHAMR_SW_RadioDriver_Attestation_Impl_Operational_Api(api);
  Option_87EF85_get_(SF (HAMR_SW_RadioDriver_Attestation_Impl_Operational_Api) &api, HAMR_SW_RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation_Bridge_c_operational_api(SF_LAST));

  // Option_9AB8D4 = Option[HAMR.SW.AttestationResponseMsg_Impl]
  // Some_671DD1 = Some[HAMR.SW.AttestationResponseMsg_Impl]
  DeclNewOption_9AB8D4(t_0);
  HAMR_SW_RadioDriver_Attestation_Impl_Operational_Api_get_AttestationTesterResponse_(
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

void api_put_AttestationTesterRequest__HAMR_SW_RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation(
  STACK_FRAME
  HAMR_SW_AttestationRequestMsg_Impl value) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation_api.c", "", "api_put_AttestationTesterRequest__HAMR_SW_RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation", 0);

  // Option_4EC416 = Option[HAMR.SW.RadioDriver_Attestation_Impl_Initialization_Api]
  DeclNewHAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api(api);
  Option_4EC416_get_(SF (HAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api) &api, HAMR_SW_RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation_Bridge_c_initialization_api(SF_LAST));

  HAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api_put_AttestationTesterRequest_(
    SF
    &api,
    value);
}

void api_put_MissionCommand__HAMR_SW_RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation(
  STACK_FRAME
  HAMR_SW_RF_Msg_Impl value) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation_api.c", "", "api_put_MissionCommand__HAMR_SW_RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation", 0);

  // Option_4EC416 = Option[HAMR.SW.RadioDriver_Attestation_Impl_Initialization_Api]
  DeclNewHAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api(api);
  Option_4EC416_get_(SF (HAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api) &api, HAMR_SW_RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation_Bridge_c_initialization_api(SF_LAST));

  HAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api_put_MissionCommand_(
    SF
    &api,
    value);
}

bool api_get_AttestationRequest__HAMR_SW_RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation(
  STACK_FRAME
  HAMR_SW_AttestationRequestMsg_Impl value){
  DeclNewStackFrame(caller, "RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation_api.c", "", "api_get_AttestationRequest__HAMR_SW_RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation", 0);

  // Option_87EF85 = Option[HAMR.SW.RadioDriver_Attestation_Impl_Operational_Api]
  DeclNewHAMR_SW_RadioDriver_Attestation_Impl_Operational_Api(api);
  Option_87EF85_get_(SF (HAMR_SW_RadioDriver_Attestation_Impl_Operational_Api) &api, HAMR_SW_RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation_Bridge_c_operational_api(SF_LAST));

  // Option_EB1DFD = Option[HAMR.SW.AttestationRequestMsg_Impl]
  // Some_042E39 = Some[HAMR.SW.AttestationRequestMsg_Impl]
  DeclNewOption_EB1DFD(t_0);
  HAMR_SW_RadioDriver_Attestation_Impl_Operational_Api_get_AttestationRequest_(
    SF
    (Option_EB1DFD) &t_0,
    &api);

  if(t_0.type == TSome_042E39){
    Type_assign(value, &t_0.Some_042E39.value, sizeof(struct HAMR_SW_AttestationRequestMsg_Impl));
    return true;
  } else {
    return false;
  }
}

void api_put_AttestationResponse__HAMR_SW_RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation(
  STACK_FRAME
  HAMR_SW_AttestationResponseMsg_Impl value) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation_api.c", "", "api_put_AttestationResponse__HAMR_SW_RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation", 0);

  // Option_4EC416 = Option[HAMR.SW.RadioDriver_Attestation_Impl_Initialization_Api]
  DeclNewHAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api(api);
  Option_4EC416_get_(SF (HAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api) &api, HAMR_SW_RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation_Bridge_c_initialization_api(SF_LAST));

  HAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api_put_AttestationResponse_(
    SF
    &api,
    value);
}

void api_logInfo__HAMR_SW_RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation_api.c", "", "api_logInfo__HAMR_SW_RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation", 0);

  // Option_4EC416 = Option[HAMR.SW.RadioDriver_Attestation_Impl_Initialization_Api]
  DeclNewHAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api(api);
  Option_4EC416_get_(SF (HAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api) &api, HAMR_SW_RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation_Bridge_c_initialization_api(SF_LAST));

  HAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api_logInfo_(
    SF
    &api,
    str);
}

void api_logDebug__HAMR_SW_RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation_api.c", "", "api_logDebug__HAMR_SW_RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation", 0);

  // Option_4EC416 = Option[HAMR.SW.RadioDriver_Attestation_Impl_Initialization_Api]
  DeclNewHAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api(api);
  Option_4EC416_get_(SF (HAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api) &api, HAMR_SW_RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation_Bridge_c_initialization_api(SF_LAST));

  HAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api_logDebug_(
    SF
    &api,
    str);
}

void api_logError__HAMR_SW_RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation_api.c", "", "api_logError__HAMR_SW_RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation", 0);

  // Option_4EC416 = Option[HAMR.SW.RadioDriver_Attestation_Impl_Initialization_Api]
  DeclNewHAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api(api);
  Option_4EC416_get_(SF (HAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api) &api, HAMR_SW_RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation_Bridge_c_initialization_api(SF_LAST));

  HAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api_logError_(
    SF
    &api,
    str);
}

Unit HAMR_SW_RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation_initialise(
  STACK_FRAME
  HAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api api) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation_api.c", "", "HAMR_SW_RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation_initialise", 0);

  HAMR_SW_RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation_initialise_(SF_LAST);
}

Unit HAMR_SW_RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation_finalise(
  STACK_FRAME
  HAMR_SW_RadioDriver_Attestation_Impl_Operational_Api api) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation_api.c", "", "HAMR_SW_RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation_finalise", 0);

  HAMR_SW_RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation_finalise_(SF_LAST);
}

Unit HAMR_SW_RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation_handle_AttestationTesterResponse(
  STACK_FRAME
  HAMR_SW_RadioDriver_Attestation_Impl_Operational_Api api,
  HAMR_SW_AttestationResponseMsg_Impl value) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation_api.c", "", "HAMR_SW_RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation_handle_AttestationTesterResponse", 0);

  HAMR_SW_RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation_handle_AttestationTesterResponse_(SF value);
}

Unit HAMR_SW_RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation_handle_AttestationRequest(
  STACK_FRAME
  HAMR_SW_RadioDriver_Attestation_Impl_Operational_Api api,
  HAMR_SW_AttestationRequestMsg_Impl value) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation_api.c", "", "HAMR_SW_RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation_handle_AttestationRequest", 0);

  HAMR_SW_RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation_handle_AttestationRequest_(SF value);
}
