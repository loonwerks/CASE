#include <AttestationTester_Impl_SW_AttestationTester_AttestationTester_api.h>
#include <AttestationTester_Impl_SW_AttestationTester_AttestationTester.h>

// This file was auto-generated.  Do not edit

bool api_get_AttestationRequest__HAMR_Simple_V4_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester(
  STACK_FRAME
  size_t *numBits,
  uint8_t *byteArray){
  DeclNewStackFrame(caller, "AttestationTester_Impl_SW_AttestationTester_AttestationTester_api.c", "", "api_get_AttestationRequest__HAMR_Simple_V4_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester", 0);

  // Option_30119F = Option[IS[Z, B]]
  // Some_8D03B1 = Some[IS[Z, B]]
  DeclNewOption_30119F(t_0);

  // Option_089975 = Option[HAMR_Simple_V4.SW.AttestationTester_Impl_Operational_Api]
  DeclNewHAMR_Simple_V4_SW_AttestationTester_Impl_Operational_Api(api);
  Option_089975_get_(SF (HAMR_Simple_V4_SW_AttestationTester_Impl_Operational_Api) &api, HAMR_Simple_V4_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester_Bridge_c_operational_api(SF_LAST));

  HAMR_Simple_V4_SW_AttestationTester_Impl_Operational_Api_get_AttestationRequest_(
    SF
    (Option_30119F) &t_0,
    &api);

  if(t_0.type == TSome_8D03B1){
    *numBits = t_0.Some_8D03B1.value.size;
    if(*numBits > 0) {
      size_t numBytes = (*numBits - 1) / 8 + 1;
      memcpy(byteArray, &t_0.Some_8D03B1.value.value, numBytes);
    }
    return true;
  } else {
    return false;
  }
}

void api_put_AttestationResponse__HAMR_Simple_V4_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray) {
  DeclNewStackFrame(caller, "AttestationTester_Impl_SW_AttestationTester_AttestationTester_api.c", "", "api_put_AttestationResponse__HAMR_Simple_V4_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester", 0);

  sfAssert(SF (Z) numBits >= 0, "numBits must be non-negative for IS[Z, B].");
  sfAssert(SF (Z) numBits <= MaxIS_C4F575, "numBits too large for IS[Z, B].");

  DeclNewIS_C4F575(t_0);

  t_0.size = numBits;
  if(numBits > 0) {
    size_t numBytes = (numBits - 1) / 8 + 1;
    memcpy(&t_0.value, byteArray, numBytes);
  }

  // Option_680CAA = Option[HAMR_Simple_V4.SW.AttestationTester_Impl_Initialization_Api]
  DeclNewHAMR_Simple_V4_SW_AttestationTester_Impl_Initialization_Api(api);
  Option_680CAA_get_(SF (HAMR_Simple_V4_SW_AttestationTester_Impl_Initialization_Api) &api, HAMR_Simple_V4_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester_Bridge_c_initialization_api(SF_LAST));

  HAMR_Simple_V4_SW_AttestationTester_Impl_Initialization_Api_put_AttestationResponse_(
    SF
    &api,
    &t_0);
}

void api_logInfo__HAMR_Simple_V4_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "AttestationTester_Impl_SW_AttestationTester_AttestationTester_api.c", "", "api_logInfo__HAMR_Simple_V4_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester", 0);

  // Option_680CAA = Option[HAMR_Simple_V4.SW.AttestationTester_Impl_Initialization_Api]
  DeclNewHAMR_Simple_V4_SW_AttestationTester_Impl_Initialization_Api(api);
  Option_680CAA_get_(SF (HAMR_Simple_V4_SW_AttestationTester_Impl_Initialization_Api) &api, HAMR_Simple_V4_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester_Bridge_c_initialization_api(SF_LAST));

  HAMR_Simple_V4_SW_AttestationTester_Impl_Initialization_Api_logInfo_(
    SF
    &api,
    str);
}

void api_logDebug__HAMR_Simple_V4_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "AttestationTester_Impl_SW_AttestationTester_AttestationTester_api.c", "", "api_logDebug__HAMR_Simple_V4_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester", 0);

  // Option_680CAA = Option[HAMR_Simple_V4.SW.AttestationTester_Impl_Initialization_Api]
  DeclNewHAMR_Simple_V4_SW_AttestationTester_Impl_Initialization_Api(api);
  Option_680CAA_get_(SF (HAMR_Simple_V4_SW_AttestationTester_Impl_Initialization_Api) &api, HAMR_Simple_V4_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester_Bridge_c_initialization_api(SF_LAST));

  HAMR_Simple_V4_SW_AttestationTester_Impl_Initialization_Api_logDebug_(
    SF
    &api,
    str);
}

void api_logError__HAMR_Simple_V4_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "AttestationTester_Impl_SW_AttestationTester_AttestationTester_api.c", "", "api_logError__HAMR_Simple_V4_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester", 0);

  // Option_680CAA = Option[HAMR_Simple_V4.SW.AttestationTester_Impl_Initialization_Api]
  DeclNewHAMR_Simple_V4_SW_AttestationTester_Impl_Initialization_Api(api);
  Option_680CAA_get_(SF (HAMR_Simple_V4_SW_AttestationTester_Impl_Initialization_Api) &api, HAMR_Simple_V4_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester_Bridge_c_initialization_api(SF_LAST));

  HAMR_Simple_V4_SW_AttestationTester_Impl_Initialization_Api_logError_(
    SF
    &api,
    str);
}

Unit HAMR_Simple_V4_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester_initialise(
  STACK_FRAME
  HAMR_Simple_V4_SW_AttestationTester_Impl_Initialization_Api api) {
  DeclNewStackFrame(caller, "AttestationTester_Impl_SW_AttestationTester_AttestationTester_api.c", "", "HAMR_Simple_V4_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester_initialise", 0);

  HAMR_Simple_V4_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester_initialise_(SF_LAST);
}

Unit HAMR_Simple_V4_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester_finalise(
  STACK_FRAME
  HAMR_Simple_V4_SW_AttestationTester_Impl_Operational_Api api) {
  DeclNewStackFrame(caller, "AttestationTester_Impl_SW_AttestationTester_AttestationTester_api.c", "", "HAMR_Simple_V4_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester_finalise", 0);

  HAMR_Simple_V4_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester_finalise_(SF_LAST);
}

Unit HAMR_Simple_V4_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester_handle_AttestationRequest(
  STACK_FRAME
  HAMR_Simple_V4_SW_AttestationTester_Impl_Operational_Api api,
  IS_C4F575 value) {
  DeclNewStackFrame(caller, "AttestationTester_Impl_SW_AttestationTester_AttestationTester_api.c", "", "HAMR_Simple_V4_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester_handle_AttestationRequest", 0);

  HAMR_Simple_V4_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester_handle_AttestationRequest_(SF value);
}
