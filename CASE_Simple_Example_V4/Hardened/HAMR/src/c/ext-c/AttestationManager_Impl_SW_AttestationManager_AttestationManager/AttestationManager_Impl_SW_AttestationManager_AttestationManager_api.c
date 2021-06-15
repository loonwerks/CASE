#include <AttestationManager_Impl_SW_AttestationManager_AttestationManager_api.h>
#include <AttestationManager_Impl_SW_AttestationManager_AttestationManager.h>

// This file was auto-generated.  Do not edit

void api_put_AttestationRequest__HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray) {
  DeclNewStackFrame(caller, "AttestationManager_Impl_SW_AttestationManager_AttestationManager_api.c", "", "api_put_AttestationRequest__HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager", 0);

  sfAssert(SF (Z) numBits >= 0, "numBits must be non-negative for IS[Z, B].");
  sfAssert(SF (Z) numBits <= MaxIS_C4F575, "numBits too large for IS[Z, B].");

  DeclNewIS_C4F575(t_0);

  t_0.size = numBits;
  if(numBits > 0) {
    size_t numBytes = (numBits - 1) / 8 + 1;
    memcpy(&t_0.value, byteArray, numBytes);
  }

  // Option_96FA67 = Option[HAMR.SW.AttestationManager_Impl_Initialization_Api]
  DeclNewHAMR_SW_AttestationManager_Impl_Initialization_Api(api);
  Option_96FA67_get_(SF (HAMR_SW_AttestationManager_Impl_Initialization_Api) &api, HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_c_initialization_api(SF_LAST));

  HAMR_SW_AttestationManager_Impl_Initialization_Api_put_AttestationRequest_(
    SF
    &api,
    &t_0);
}

bool api_get_AttestationResponse__HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager(
  STACK_FRAME
  size_t *numBits,
  uint8_t *byteArray){
  DeclNewStackFrame(caller, "AttestationManager_Impl_SW_AttestationManager_AttestationManager_api.c", "", "api_get_AttestationResponse__HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager", 0);

  // Option_30119F = Option[IS[Z, B]]
  // Some_8D03B1 = Some[IS[Z, B]]
  DeclNewOption_30119F(t_0);

  // Option_75F258 = Option[HAMR.SW.AttestationManager_Impl_Operational_Api]
  DeclNewHAMR_SW_AttestationManager_Impl_Operational_Api(api);
  Option_75F258_get_(SF (HAMR_SW_AttestationManager_Impl_Operational_Api) &api, HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_c_operational_api(SF_LAST));

  HAMR_SW_AttestationManager_Impl_Operational_Api_get_AttestationResponse_(
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

void api_put_TrustedIds__HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray) {
  DeclNewStackFrame(caller, "AttestationManager_Impl_SW_AttestationManager_AttestationManager_api.c", "", "api_put_TrustedIds__HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager", 0);

  sfAssert(SF (Z) numBits >= 0, "numBits must be non-negative for IS[Z, B].");
  sfAssert(SF (Z) numBits <= MaxIS_C4F575, "numBits too large for IS[Z, B].");

  DeclNewIS_C4F575(t_0);

  t_0.size = numBits;
  if(numBits > 0) {
    size_t numBytes = (numBits - 1) / 8 + 1;
    memcpy(&t_0.value, byteArray, numBytes);
  }

  // Option_96FA67 = Option[HAMR.SW.AttestationManager_Impl_Initialization_Api]
  DeclNewHAMR_SW_AttestationManager_Impl_Initialization_Api(api);
  Option_96FA67_get_(SF (HAMR_SW_AttestationManager_Impl_Initialization_Api) &api, HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_c_initialization_api(SF_LAST));

  HAMR_SW_AttestationManager_Impl_Initialization_Api_put_TrustedIds_(
    SF
    &api,
    &t_0);
}

void api_logInfo__HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "AttestationManager_Impl_SW_AttestationManager_AttestationManager_api.c", "", "api_logInfo__HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager", 0);

  // Option_96FA67 = Option[HAMR.SW.AttestationManager_Impl_Initialization_Api]
  DeclNewHAMR_SW_AttestationManager_Impl_Initialization_Api(api);
  Option_96FA67_get_(SF (HAMR_SW_AttestationManager_Impl_Initialization_Api) &api, HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_c_initialization_api(SF_LAST));

  HAMR_SW_AttestationManager_Impl_Initialization_Api_logInfo_(
    SF
    &api,
    str);
}

void api_logDebug__HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "AttestationManager_Impl_SW_AttestationManager_AttestationManager_api.c", "", "api_logDebug__HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager", 0);

  // Option_96FA67 = Option[HAMR.SW.AttestationManager_Impl_Initialization_Api]
  DeclNewHAMR_SW_AttestationManager_Impl_Initialization_Api(api);
  Option_96FA67_get_(SF (HAMR_SW_AttestationManager_Impl_Initialization_Api) &api, HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_c_initialization_api(SF_LAST));

  HAMR_SW_AttestationManager_Impl_Initialization_Api_logDebug_(
    SF
    &api,
    str);
}

void api_logError__HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "AttestationManager_Impl_SW_AttestationManager_AttestationManager_api.c", "", "api_logError__HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager", 0);

  // Option_96FA67 = Option[HAMR.SW.AttestationManager_Impl_Initialization_Api]
  DeclNewHAMR_SW_AttestationManager_Impl_Initialization_Api(api);
  Option_96FA67_get_(SF (HAMR_SW_AttestationManager_Impl_Initialization_Api) &api, HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_c_initialization_api(SF_LAST));

  HAMR_SW_AttestationManager_Impl_Initialization_Api_logError_(
    SF
    &api,
    str);
}

Unit HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_initialise(
  STACK_FRAME
  HAMR_SW_AttestationManager_Impl_Initialization_Api api) {
  DeclNewStackFrame(caller, "AttestationManager_Impl_SW_AttestationManager_AttestationManager_api.c", "", "HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_initialise", 0);

  HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_initialise_(SF_LAST);
}

Unit HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_finalise(
  STACK_FRAME
  HAMR_SW_AttestationManager_Impl_Operational_Api api) {
  DeclNewStackFrame(caller, "AttestationManager_Impl_SW_AttestationManager_AttestationManager_api.c", "", "HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_finalise", 0);

  HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_finalise_(SF_LAST);
}

Unit HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_timeTriggered(
  STACK_FRAME
  HAMR_SW_AttestationManager_Impl_Operational_Api api) {
  DeclNewStackFrame(caller, "AttestationManager_Impl_SW_AttestationManager_AttestationManager_api.c", "", "HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_timeTriggered", 0);

  HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_timeTriggered_(SF_LAST);
}
