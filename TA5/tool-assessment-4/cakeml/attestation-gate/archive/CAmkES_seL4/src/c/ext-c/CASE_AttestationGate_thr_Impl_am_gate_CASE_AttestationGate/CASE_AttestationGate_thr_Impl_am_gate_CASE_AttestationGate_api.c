#include <CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_api.h>
#include <CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate.h>

// This file was auto-generated.  Do not edit

bool api_get_trusted_ids__attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate(
  STACK_FRAME
  size_t *numBits,
  uint8_t *byteArray){
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_api.c", "", "api_get_trusted_ids__attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate", 0);

  // Option_30119F = Option[IS[Z, B]]
  // Some_8D03B1 = Some[IS[Z, B]]
  DeclNewOption_30119F(t_0);

  // Option_162513 = Option[attestation_gate.CASE_AttestationGate.CASE_AttestationGate_thr_Impl_Operational_Api]
  DeclNewattestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Operational_Api(api);
  Option_162513_get_(SF (attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Operational_Api) &api, attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_Bridge_c_operational_api(SF_LAST));

  attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Operational_Api_gettrusted_ids_(
    SF
    (Option_30119F) &t_0,
    &api);

  if(t_0.type == TSome_8D03B1){
    *numBits = t_0.Some_8D03B1.value.size;
    memcpy(byteArray, &t_0.Some_8D03B1.value.value, (*numBits / 8) + 1);
    return true;
  } else {
    return false;
  }
}

bool api_get_AutomationRequest_in__attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate(
  STACK_FRAME
  size_t *numBits,
  uint8_t *byteArray){
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_api.c", "", "api_get_AutomationRequest_in__attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate", 0);

  // Option_30119F = Option[IS[Z, B]]
  // Some_8D03B1 = Some[IS[Z, B]]
  DeclNewOption_30119F(t_0);

  // Option_162513 = Option[attestation_gate.CASE_AttestationGate.CASE_AttestationGate_thr_Impl_Operational_Api]
  DeclNewattestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Operational_Api(api);
  Option_162513_get_(SF (attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Operational_Api) &api, attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_Bridge_c_operational_api(SF_LAST));

  attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Operational_Api_getAutomationRequest_in_(
    SF
    (Option_30119F) &t_0,
    &api);

  if(t_0.type == TSome_8D03B1){
    *numBits = t_0.Some_8D03B1.value.size;
    memcpy(byteArray, &t_0.Some_8D03B1.value.value, (*numBits / 8) + 1);
    return true;
  } else {
    return false;
  }
}

void api_send_AutomationRequest_out__attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_api.c", "", "api_send_AutomationRequest_out__attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate", 0);

  sfAssert(SF (Z) numBits >= 0, "numBits must be non-negative for IS[Z, B].");
  sfAssert(SF (Z) numBits <= MaxIS_C4F575, "numBits too large for IS[Z, B].");

  DeclNewIS_C4F575(t_0);

  t_0.size = numBits;
  if(numBits > 0) {
    memcpy(&t_0.value, byteArray, (numBits / 8) + 1);
  }

  // Option_508DB4 = Option[attestation_gate.CASE_AttestationGate.CASE_AttestationGate_thr_Impl_Initialization_Api]
  DeclNewattestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Initialization_Api(api);
  Option_508DB4_get_(SF (attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Initialization_Api) &api, attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_Bridge_c_initialization_api(SF_LAST));

  attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Initialization_Api_sendAutomationRequest_out_(
    SF
    &api,
    &t_0);
}

bool api_get_OperatingRegion_in__attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate(
  STACK_FRAME
  size_t *numBits,
  uint8_t *byteArray){
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_api.c", "", "api_get_OperatingRegion_in__attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate", 0);

  // Option_30119F = Option[IS[Z, B]]
  // Some_8D03B1 = Some[IS[Z, B]]
  DeclNewOption_30119F(t_0);

  // Option_162513 = Option[attestation_gate.CASE_AttestationGate.CASE_AttestationGate_thr_Impl_Operational_Api]
  DeclNewattestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Operational_Api(api);
  Option_162513_get_(SF (attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Operational_Api) &api, attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_Bridge_c_operational_api(SF_LAST));

  attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Operational_Api_getOperatingRegion_in_(
    SF
    (Option_30119F) &t_0,
    &api);

  if(t_0.type == TSome_8D03B1){
    *numBits = t_0.Some_8D03B1.value.size;
    memcpy(byteArray, &t_0.Some_8D03B1.value.value, (*numBits / 8) + 1);
    return true;
  } else {
    return false;
  }
}

void api_send_OperatingRegion_out__attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_api.c", "", "api_send_OperatingRegion_out__attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate", 0);

  sfAssert(SF (Z) numBits >= 0, "numBits must be non-negative for IS[Z, B].");
  sfAssert(SF (Z) numBits <= MaxIS_C4F575, "numBits too large for IS[Z, B].");

  DeclNewIS_C4F575(t_0);

  t_0.size = numBits;
  if(numBits > 0) {
    memcpy(&t_0.value, byteArray, (numBits / 8) + 1);
  }

  // Option_508DB4 = Option[attestation_gate.CASE_AttestationGate.CASE_AttestationGate_thr_Impl_Initialization_Api]
  DeclNewattestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Initialization_Api(api);
  Option_508DB4_get_(SF (attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Initialization_Api) &api, attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_Bridge_c_initialization_api(SF_LAST));

  attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Initialization_Api_sendOperatingRegion_out_(
    SF
    &api,
    &t_0);
}

bool api_get_LineSearchTask_in__attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate(
  STACK_FRAME
  size_t *numBits,
  uint8_t *byteArray){
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_api.c", "", "api_get_LineSearchTask_in__attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate", 0);

  // Option_30119F = Option[IS[Z, B]]
  // Some_8D03B1 = Some[IS[Z, B]]
  DeclNewOption_30119F(t_0);

  // Option_162513 = Option[attestation_gate.CASE_AttestationGate.CASE_AttestationGate_thr_Impl_Operational_Api]
  DeclNewattestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Operational_Api(api);
  Option_162513_get_(SF (attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Operational_Api) &api, attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_Bridge_c_operational_api(SF_LAST));

  attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Operational_Api_getLineSearchTask_in_(
    SF
    (Option_30119F) &t_0,
    &api);

  if(t_0.type == TSome_8D03B1){
    *numBits = t_0.Some_8D03B1.value.size;
    memcpy(byteArray, &t_0.Some_8D03B1.value.value, (*numBits / 8) + 1);
    return true;
  } else {
    return false;
  }
}

void api_send_LineSearchTask_out__attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_api.c", "", "api_send_LineSearchTask_out__attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate", 0);

  sfAssert(SF (Z) numBits >= 0, "numBits must be non-negative for IS[Z, B].");
  sfAssert(SF (Z) numBits <= MaxIS_C4F575, "numBits too large for IS[Z, B].");

  DeclNewIS_C4F575(t_0);

  t_0.size = numBits;
  if(numBits > 0) {
    memcpy(&t_0.value, byteArray, (numBits / 8) + 1);
  }

  // Option_508DB4 = Option[attestation_gate.CASE_AttestationGate.CASE_AttestationGate_thr_Impl_Initialization_Api]
  DeclNewattestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Initialization_Api(api);
  Option_508DB4_get_(SF (attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Initialization_Api) &api, attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_Bridge_c_initialization_api(SF_LAST));

  attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Initialization_Api_sendLineSearchTask_out_(
    SF
    &api,
    &t_0);
}

void api_logInfo__attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_api.c", "", "api_logInfo__attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate", 0);

  // Option_508DB4 = Option[attestation_gate.CASE_AttestationGate.CASE_AttestationGate_thr_Impl_Initialization_Api]
  DeclNewattestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Initialization_Api(api);
  Option_508DB4_get_(SF (attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Initialization_Api) &api, attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_Bridge_c_initialization_api(SF_LAST));

  attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Initialization_Api_logInfo_(
    SF
    &api,
    str);
}

void api_logDebug__attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_api.c", "", "api_logDebug__attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate", 0);

  // Option_508DB4 = Option[attestation_gate.CASE_AttestationGate.CASE_AttestationGate_thr_Impl_Initialization_Api]
  DeclNewattestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Initialization_Api(api);
  Option_508DB4_get_(SF (attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Initialization_Api) &api, attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_Bridge_c_initialization_api(SF_LAST));

  attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Initialization_Api_logDebug_(
    SF
    &api,
    str);
}

void api_logError__attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_api.c", "", "api_logError__attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate", 0);

  // Option_508DB4 = Option[attestation_gate.CASE_AttestationGate.CASE_AttestationGate_thr_Impl_Initialization_Api]
  DeclNewattestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Initialization_Api(api);
  Option_508DB4_get_(SF (attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Initialization_Api) &api, attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_Bridge_c_initialization_api(SF_LAST));

  attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Initialization_Api_logError_(
    SF
    &api,
    str);
}

Unit attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_initialise(
  STACK_FRAME
  attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Initialization_Api api) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_api.c", "", "attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_initialise", 0);

  attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_initialise_(SF_LAST);
}

Unit attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_finalise(
  STACK_FRAME
  attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Operational_Api api) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_api.c", "", "attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_finalise", 0);

  attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_finalise_(SF_LAST);
}

Unit attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_timeTriggered(
  STACK_FRAME
  attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Operational_Api api) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_api.c", "", "attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_timeTriggered", 0);

  attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_timeTriggered_(SF_LAST);
}
