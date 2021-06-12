#include <AttestationTester_Impl_AttestationTester_AttestationTester_api.h>
#include <AttestationTester_Impl_AttestationTester_AttestationTester.h>

// This file was auto-generated.  Do not edit

bool api_get_AttestationRequest__HAMR_SW_AttestationTester_Impl_AttestationTester_AttestationTester(
  STACK_FRAME
  HAMR_SW_AttestationRequestMsg_Impl value){
  DeclNewStackFrame(caller, "AttestationTester_Impl_AttestationTester_AttestationTester_api.c", "", "api_get_AttestationRequest__HAMR_SW_AttestationTester_Impl_AttestationTester_AttestationTester", 0);

  // Option_B221FE = Option[HAMR.SW.AttestationTester_Impl_Operational_Api]
  DeclNewHAMR_SW_AttestationTester_Impl_Operational_Api(api);
  Option_B221FE_get_(SF (HAMR_SW_AttestationTester_Impl_Operational_Api) &api, HAMR_SW_AttestationTester_Impl_AttestationTester_AttestationTester_Bridge_c_operational_api(SF_LAST));

  // Option_EB1DFD = Option[HAMR.SW.AttestationRequestMsg_Impl]
  // Some_042E39 = Some[HAMR.SW.AttestationRequestMsg_Impl]
  DeclNewOption_EB1DFD(t_0);
  HAMR_SW_AttestationTester_Impl_Operational_Api_get_AttestationRequest_(
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

void api_put_AttestationResponse__HAMR_SW_AttestationTester_Impl_AttestationTester_AttestationTester(
  STACK_FRAME
  HAMR_SW_AttestationResponseMsg_Impl value) {
  DeclNewStackFrame(caller, "AttestationTester_Impl_AttestationTester_AttestationTester_api.c", "", "api_put_AttestationResponse__HAMR_SW_AttestationTester_Impl_AttestationTester_AttestationTester", 0);

  // Option_432E9F = Option[HAMR.SW.AttestationTester_Impl_Initialization_Api]
  DeclNewHAMR_SW_AttestationTester_Impl_Initialization_Api(api);
  Option_432E9F_get_(SF (HAMR_SW_AttestationTester_Impl_Initialization_Api) &api, HAMR_SW_AttestationTester_Impl_AttestationTester_AttestationTester_Bridge_c_initialization_api(SF_LAST));

  HAMR_SW_AttestationTester_Impl_Initialization_Api_put_AttestationResponse_(
    SF
    &api,
    value);
}

void api_logInfo__HAMR_SW_AttestationTester_Impl_AttestationTester_AttestationTester(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "AttestationTester_Impl_AttestationTester_AttestationTester_api.c", "", "api_logInfo__HAMR_SW_AttestationTester_Impl_AttestationTester_AttestationTester", 0);

  // Option_432E9F = Option[HAMR.SW.AttestationTester_Impl_Initialization_Api]
  DeclNewHAMR_SW_AttestationTester_Impl_Initialization_Api(api);
  Option_432E9F_get_(SF (HAMR_SW_AttestationTester_Impl_Initialization_Api) &api, HAMR_SW_AttestationTester_Impl_AttestationTester_AttestationTester_Bridge_c_initialization_api(SF_LAST));

  HAMR_SW_AttestationTester_Impl_Initialization_Api_logInfo_(
    SF
    &api,
    str);
}

void api_logDebug__HAMR_SW_AttestationTester_Impl_AttestationTester_AttestationTester(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "AttestationTester_Impl_AttestationTester_AttestationTester_api.c", "", "api_logDebug__HAMR_SW_AttestationTester_Impl_AttestationTester_AttestationTester", 0);

  // Option_432E9F = Option[HAMR.SW.AttestationTester_Impl_Initialization_Api]
  DeclNewHAMR_SW_AttestationTester_Impl_Initialization_Api(api);
  Option_432E9F_get_(SF (HAMR_SW_AttestationTester_Impl_Initialization_Api) &api, HAMR_SW_AttestationTester_Impl_AttestationTester_AttestationTester_Bridge_c_initialization_api(SF_LAST));

  HAMR_SW_AttestationTester_Impl_Initialization_Api_logDebug_(
    SF
    &api,
    str);
}

void api_logError__HAMR_SW_AttestationTester_Impl_AttestationTester_AttestationTester(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "AttestationTester_Impl_AttestationTester_AttestationTester_api.c", "", "api_logError__HAMR_SW_AttestationTester_Impl_AttestationTester_AttestationTester", 0);

  // Option_432E9F = Option[HAMR.SW.AttestationTester_Impl_Initialization_Api]
  DeclNewHAMR_SW_AttestationTester_Impl_Initialization_Api(api);
  Option_432E9F_get_(SF (HAMR_SW_AttestationTester_Impl_Initialization_Api) &api, HAMR_SW_AttestationTester_Impl_AttestationTester_AttestationTester_Bridge_c_initialization_api(SF_LAST));

  HAMR_SW_AttestationTester_Impl_Initialization_Api_logError_(
    SF
    &api,
    str);
}

Unit HAMR_SW_AttestationTester_Impl_AttestationTester_AttestationTester_initialise(
  STACK_FRAME
  HAMR_SW_AttestationTester_Impl_Initialization_Api api) {
  DeclNewStackFrame(caller, "AttestationTester_Impl_AttestationTester_AttestationTester_api.c", "", "HAMR_SW_AttestationTester_Impl_AttestationTester_AttestationTester_initialise", 0);

  HAMR_SW_AttestationTester_Impl_AttestationTester_AttestationTester_initialise_(SF_LAST);
}

Unit HAMR_SW_AttestationTester_Impl_AttestationTester_AttestationTester_finalise(
  STACK_FRAME
  HAMR_SW_AttestationTester_Impl_Operational_Api api) {
  DeclNewStackFrame(caller, "AttestationTester_Impl_AttestationTester_AttestationTester_api.c", "", "HAMR_SW_AttestationTester_Impl_AttestationTester_AttestationTester_finalise", 0);

  HAMR_SW_AttestationTester_Impl_AttestationTester_AttestationTester_finalise_(SF_LAST);
}

Unit HAMR_SW_AttestationTester_Impl_AttestationTester_AttestationTester_handle_AttestationRequest(
  STACK_FRAME
  HAMR_SW_AttestationTester_Impl_Operational_Api api,
  HAMR_SW_AttestationRequestMsg_Impl value) {
  DeclNewStackFrame(caller, "AttestationTester_Impl_AttestationTester_AttestationTester_api.c", "", "HAMR_SW_AttestationTester_Impl_AttestationTester_AttestationTester_handle_AttestationRequest", 0);

  HAMR_SW_AttestationTester_Impl_AttestationTester_AttestationTester_handle_AttestationRequest_(SF value);
}
