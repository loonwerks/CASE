#include <RadioDriver_thr_Impl_radio_RadioDriver_api.h>
#include <RadioDriver_thr_Impl_radio_RadioDriver.h>

// This file was auto-generated.  Do not edit

void api_send_trusted_ids_out__attestation_gate_RadioDriver_RadioDriver_thr_Impl_radio_RadioDriver(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray) {
  DeclNewStackFrame(caller, "RadioDriver_thr_Impl_radio_RadioDriver_api.c", "", "api_send_trusted_ids_out__attestation_gate_RadioDriver_RadioDriver_thr_Impl_radio_RadioDriver", 0);

  sfAssert(SF (Z) numBits >= 0, "numBits must be non-negative for IS[Z, B].");
  sfAssert(SF (Z) numBits <= MaxIS_C4F575, "numBits too large for IS[Z, B].");

  DeclNewIS_C4F575(t_0);

  t_0.size = numBits;
  if(numBits > 0) {
    memcpy(&t_0.value, byteArray, (numBits / 8) + 1);
  }

  // Option_76A699 = Option[attestation_gate.RadioDriver.RadioDriver_thr_Impl_Initialization_Api]
  DeclNewattestation_gate_RadioDriver_RadioDriver_thr_Impl_Initialization_Api(api);
  Option_76A699_get_(SF (attestation_gate_RadioDriver_RadioDriver_thr_Impl_Initialization_Api) &api, attestation_gate_RadioDriver_RadioDriver_thr_Impl_radio_RadioDriver_Bridge_c_initialization_api(SF_LAST));

  attestation_gate_RadioDriver_RadioDriver_thr_Impl_Initialization_Api_settrusted_ids_out_(
    SF
    &api,
    &t_0);
}

void api_send_automation_request_out__attestation_gate_RadioDriver_RadioDriver_thr_Impl_radio_RadioDriver(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray) {
  DeclNewStackFrame(caller, "RadioDriver_thr_Impl_radio_RadioDriver_api.c", "", "api_send_automation_request_out__attestation_gate_RadioDriver_RadioDriver_thr_Impl_radio_RadioDriver", 0);

  sfAssert(SF (Z) numBits >= 0, "numBits must be non-negative for IS[Z, B].");
  sfAssert(SF (Z) numBits <= MaxIS_C4F575, "numBits too large for IS[Z, B].");

  DeclNewIS_C4F575(t_0);

  t_0.size = numBits;
  if(numBits > 0) {
    memcpy(&t_0.value, byteArray, (numBits / 8) + 1);
  }

  // Option_76A699 = Option[attestation_gate.RadioDriver.RadioDriver_thr_Impl_Initialization_Api]
  DeclNewattestation_gate_RadioDriver_RadioDriver_thr_Impl_Initialization_Api(api);
  Option_76A699_get_(SF (attestation_gate_RadioDriver_RadioDriver_thr_Impl_Initialization_Api) &api, attestation_gate_RadioDriver_RadioDriver_thr_Impl_radio_RadioDriver_Bridge_c_initialization_api(SF_LAST));

  attestation_gate_RadioDriver_RadioDriver_thr_Impl_Initialization_Api_sendautomation_request_out_(
    SF
    &api,
    &t_0);
}

void api_send_operating_region_out__attestation_gate_RadioDriver_RadioDriver_thr_Impl_radio_RadioDriver(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray) {
  DeclNewStackFrame(caller, "RadioDriver_thr_Impl_radio_RadioDriver_api.c", "", "api_send_operating_region_out__attestation_gate_RadioDriver_RadioDriver_thr_Impl_radio_RadioDriver", 0);

  sfAssert(SF (Z) numBits >= 0, "numBits must be non-negative for IS[Z, B].");
  sfAssert(SF (Z) numBits <= MaxIS_C4F575, "numBits too large for IS[Z, B].");

  DeclNewIS_C4F575(t_0);

  t_0.size = numBits;
  if(numBits > 0) {
    memcpy(&t_0.value, byteArray, (numBits / 8) + 1);
  }

  // Option_76A699 = Option[attestation_gate.RadioDriver.RadioDriver_thr_Impl_Initialization_Api]
  DeclNewattestation_gate_RadioDriver_RadioDriver_thr_Impl_Initialization_Api(api);
  Option_76A699_get_(SF (attestation_gate_RadioDriver_RadioDriver_thr_Impl_Initialization_Api) &api, attestation_gate_RadioDriver_RadioDriver_thr_Impl_radio_RadioDriver_Bridge_c_initialization_api(SF_LAST));

  attestation_gate_RadioDriver_RadioDriver_thr_Impl_Initialization_Api_sendoperating_region_out_(
    SF
    &api,
    &t_0);
}

void api_send_line_search_task_out__attestation_gate_RadioDriver_RadioDriver_thr_Impl_radio_RadioDriver(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray) {
  DeclNewStackFrame(caller, "RadioDriver_thr_Impl_radio_RadioDriver_api.c", "", "api_send_line_search_task_out__attestation_gate_RadioDriver_RadioDriver_thr_Impl_radio_RadioDriver", 0);

  sfAssert(SF (Z) numBits >= 0, "numBits must be non-negative for IS[Z, B].");
  sfAssert(SF (Z) numBits <= MaxIS_C4F575, "numBits too large for IS[Z, B].");

  DeclNewIS_C4F575(t_0);

  t_0.size = numBits;
  if(numBits > 0) {
    memcpy(&t_0.value, byteArray, (numBits / 8) + 1);
  }

  // Option_76A699 = Option[attestation_gate.RadioDriver.RadioDriver_thr_Impl_Initialization_Api]
  DeclNewattestation_gate_RadioDriver_RadioDriver_thr_Impl_Initialization_Api(api);
  Option_76A699_get_(SF (attestation_gate_RadioDriver_RadioDriver_thr_Impl_Initialization_Api) &api, attestation_gate_RadioDriver_RadioDriver_thr_Impl_radio_RadioDriver_Bridge_c_initialization_api(SF_LAST));

  attestation_gate_RadioDriver_RadioDriver_thr_Impl_Initialization_Api_sendline_search_task_out_(
    SF
    &api,
    &t_0);
}

void api_logInfo__attestation_gate_RadioDriver_RadioDriver_thr_Impl_radio_RadioDriver(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "RadioDriver_thr_Impl_radio_RadioDriver_api.c", "", "api_logInfo__attestation_gate_RadioDriver_RadioDriver_thr_Impl_radio_RadioDriver", 0);

  // Option_76A699 = Option[attestation_gate.RadioDriver.RadioDriver_thr_Impl_Initialization_Api]
  DeclNewattestation_gate_RadioDriver_RadioDriver_thr_Impl_Initialization_Api(api);
  Option_76A699_get_(SF (attestation_gate_RadioDriver_RadioDriver_thr_Impl_Initialization_Api) &api, attestation_gate_RadioDriver_RadioDriver_thr_Impl_radio_RadioDriver_Bridge_c_initialization_api(SF_LAST));

  attestation_gate_RadioDriver_RadioDriver_thr_Impl_Initialization_Api_logInfo_(
    SF
    &api,
    str);
}

void api_logDebug__attestation_gate_RadioDriver_RadioDriver_thr_Impl_radio_RadioDriver(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "RadioDriver_thr_Impl_radio_RadioDriver_api.c", "", "api_logDebug__attestation_gate_RadioDriver_RadioDriver_thr_Impl_radio_RadioDriver", 0);

  // Option_76A699 = Option[attestation_gate.RadioDriver.RadioDriver_thr_Impl_Initialization_Api]
  DeclNewattestation_gate_RadioDriver_RadioDriver_thr_Impl_Initialization_Api(api);
  Option_76A699_get_(SF (attestation_gate_RadioDriver_RadioDriver_thr_Impl_Initialization_Api) &api, attestation_gate_RadioDriver_RadioDriver_thr_Impl_radio_RadioDriver_Bridge_c_initialization_api(SF_LAST));

  attestation_gate_RadioDriver_RadioDriver_thr_Impl_Initialization_Api_logDebug_(
    SF
    &api,
    str);
}

void api_logError__attestation_gate_RadioDriver_RadioDriver_thr_Impl_radio_RadioDriver(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "RadioDriver_thr_Impl_radio_RadioDriver_api.c", "", "api_logError__attestation_gate_RadioDriver_RadioDriver_thr_Impl_radio_RadioDriver", 0);

  // Option_76A699 = Option[attestation_gate.RadioDriver.RadioDriver_thr_Impl_Initialization_Api]
  DeclNewattestation_gate_RadioDriver_RadioDriver_thr_Impl_Initialization_Api(api);
  Option_76A699_get_(SF (attestation_gate_RadioDriver_RadioDriver_thr_Impl_Initialization_Api) &api, attestation_gate_RadioDriver_RadioDriver_thr_Impl_radio_RadioDriver_Bridge_c_initialization_api(SF_LAST));

  attestation_gate_RadioDriver_RadioDriver_thr_Impl_Initialization_Api_logError_(
    SF
    &api,
    str);
}

Unit attestation_gate_RadioDriver_RadioDriver_thr_Impl_radio_RadioDriver_initialise(
  STACK_FRAME
  attestation_gate_RadioDriver_RadioDriver_thr_Impl_Initialization_Api api) {
  DeclNewStackFrame(caller, "RadioDriver_thr_Impl_radio_RadioDriver_api.c", "", "attestation_gate_RadioDriver_RadioDriver_thr_Impl_radio_RadioDriver_initialise", 0);

  attestation_gate_RadioDriver_RadioDriver_thr_Impl_radio_RadioDriver_initialise_(SF_LAST);
}

Unit attestation_gate_RadioDriver_RadioDriver_thr_Impl_radio_RadioDriver_finalise(
  STACK_FRAME
  attestation_gate_RadioDriver_RadioDriver_thr_Impl_Operational_Api api) {
  DeclNewStackFrame(caller, "RadioDriver_thr_Impl_radio_RadioDriver_api.c", "", "attestation_gate_RadioDriver_RadioDriver_thr_Impl_radio_RadioDriver_finalise", 0);

  attestation_gate_RadioDriver_RadioDriver_thr_Impl_radio_RadioDriver_finalise_(SF_LAST);
}

Unit attestation_gate_RadioDriver_RadioDriver_thr_Impl_radio_RadioDriver_timeTriggered(
  STACK_FRAME
  attestation_gate_RadioDriver_RadioDriver_thr_Impl_Operational_Api api) {
  DeclNewStackFrame(caller, "RadioDriver_thr_Impl_radio_RadioDriver_api.c", "", "attestation_gate_RadioDriver_RadioDriver_thr_Impl_radio_RadioDriver_timeTriggered", 0);

  attestation_gate_RadioDriver_RadioDriver_thr_Impl_radio_RadioDriver_timeTriggered_(SF_LAST);
}
