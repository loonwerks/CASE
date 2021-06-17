#include <RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_api.h>
#include <RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation.h>

// This file was auto-generated.  Do not edit

bool api_get_recv_data__hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation(
  STACK_FRAME
  size_t *numBits,
  uint8_t *byteArray){
  DeclNewStackFrame(caller, "RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_api.c", "", "api_get_recv_data__hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation", 0);

  // Option_30119F = Option[IS[Z, B]]
  // Some_8D03B1 = Some[IS[Z, B]]
  DeclNewOption_30119F(t_0);

  // Option_B4EF66 = Option[hamr.SW.RadioDriver_Attestation_thr_Impl_Operational_Api]
  DeclNewhamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api(api);
  Option_B4EF66_get_(SF (hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api) &api, hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_c_operational_api(SF_LAST));

  hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api_get_recv_data_(
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

void api_put_send_data__hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_api.c", "", "api_put_send_data__hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation", 0);

  sfAssert(SF (Z) numBits >= 0, "numBits must be non-negative for IS[Z, B].");
  sfAssert(SF (Z) numBits <= MaxIS_C4F575, "numBits too large for IS[Z, B].");

  DeclNewIS_C4F575(t_0);

  t_0.size = numBits;
  if(numBits > 0) {
    size_t numBytes = (numBits - 1) / 8 + 1;
    memcpy(&t_0.value, byteArray, numBytes);
  }

  // Option_9CA19A = Option[hamr.SW.RadioDriver_Attestation_thr_Impl_Initialization_Api]
  DeclNewhamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api(api);
  Option_9CA19A_get_(SF (hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api) &api, hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_c_initialization_api(SF_LAST));

  hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api_put_send_data_(
    SF
    &api,
    &t_0);
}

void api_put_trusted_ids__hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_api.c", "", "api_put_trusted_ids__hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation", 0);

  sfAssert(SF (Z) numBits >= 0, "numBits must be non-negative for IS[Z, B].");
  sfAssert(SF (Z) numBits <= MaxIS_C4F575, "numBits too large for IS[Z, B].");

  DeclNewIS_C4F575(t_0);

  t_0.size = numBits;
  if(numBits > 0) {
    size_t numBytes = (numBits - 1) / 8 + 1;
    memcpy(&t_0.value, byteArray, numBytes);
  }

  // Option_9CA19A = Option[hamr.SW.RadioDriver_Attestation_thr_Impl_Initialization_Api]
  DeclNewhamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api(api);
  Option_9CA19A_get_(SF (hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api) &api, hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_c_initialization_api(SF_LAST));

  hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api_put_trusted_ids_(
    SF
    &api,
    &t_0);
}

void api_put_AutomationRequest__hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_api.c", "", "api_put_AutomationRequest__hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation", 0);

  sfAssert(SF (Z) numBits >= 0, "numBits must be non-negative for IS[Z, B].");
  sfAssert(SF (Z) numBits <= MaxIS_C4F575, "numBits too large for IS[Z, B].");

  DeclNewIS_C4F575(t_0);

  t_0.size = numBits;
  if(numBits > 0) {
    size_t numBytes = (numBits - 1) / 8 + 1;
    memcpy(&t_0.value, byteArray, numBytes);
  }

  // Option_9CA19A = Option[hamr.SW.RadioDriver_Attestation_thr_Impl_Initialization_Api]
  DeclNewhamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api(api);
  Option_9CA19A_get_(SF (hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api) &api, hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_c_initialization_api(SF_LAST));

  hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api_put_AutomationRequest_(
    SF
    &api,
    &t_0);
}

void api_put_OperatingRegion__hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_api.c", "", "api_put_OperatingRegion__hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation", 0);

  sfAssert(SF (Z) numBits >= 0, "numBits must be non-negative for IS[Z, B].");
  sfAssert(SF (Z) numBits <= MaxIS_C4F575, "numBits too large for IS[Z, B].");

  DeclNewIS_C4F575(t_0);

  t_0.size = numBits;
  if(numBits > 0) {
    size_t numBytes = (numBits - 1) / 8 + 1;
    memcpy(&t_0.value, byteArray, numBytes);
  }

  // Option_9CA19A = Option[hamr.SW.RadioDriver_Attestation_thr_Impl_Initialization_Api]
  DeclNewhamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api(api);
  Option_9CA19A_get_(SF (hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api) &api, hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_c_initialization_api(SF_LAST));

  hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api_put_OperatingRegion_(
    SF
    &api,
    &t_0);
}

void api_put_LineSearchTask__hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_api.c", "", "api_put_LineSearchTask__hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation", 0);

  sfAssert(SF (Z) numBits >= 0, "numBits must be non-negative for IS[Z, B].");
  sfAssert(SF (Z) numBits <= MaxIS_C4F575, "numBits too large for IS[Z, B].");

  DeclNewIS_C4F575(t_0);

  t_0.size = numBits;
  if(numBits > 0) {
    size_t numBytes = (numBits - 1) / 8 + 1;
    memcpy(&t_0.value, byteArray, numBytes);
  }

  // Option_9CA19A = Option[hamr.SW.RadioDriver_Attestation_thr_Impl_Initialization_Api]
  DeclNewhamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api(api);
  Option_9CA19A_get_(SF (hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api) &api, hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_c_initialization_api(SF_LAST));

  hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api_put_LineSearchTask_(
    SF
    &api,
    &t_0);
}

void api_logInfo__hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_api.c", "", "api_logInfo__hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation", 0);

  // Option_9CA19A = Option[hamr.SW.RadioDriver_Attestation_thr_Impl_Initialization_Api]
  DeclNewhamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api(api);
  Option_9CA19A_get_(SF (hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api) &api, hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_c_initialization_api(SF_LAST));

  hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api_logInfo_(
    SF
    &api,
    str);
}

void api_logDebug__hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_api.c", "", "api_logDebug__hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation", 0);

  // Option_9CA19A = Option[hamr.SW.RadioDriver_Attestation_thr_Impl_Initialization_Api]
  DeclNewhamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api(api);
  Option_9CA19A_get_(SF (hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api) &api, hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_c_initialization_api(SF_LAST));

  hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api_logDebug_(
    SF
    &api,
    str);
}

void api_logError__hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_api.c", "", "api_logError__hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation", 0);

  // Option_9CA19A = Option[hamr.SW.RadioDriver_Attestation_thr_Impl_Initialization_Api]
  DeclNewhamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api(api);
  Option_9CA19A_get_(SF (hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api) &api, hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_c_initialization_api(SF_LAST));

  hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api_logError_(
    SF
    &api,
    str);
}

Unit hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_initialise(
  STACK_FRAME
  hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api api) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_api.c", "", "hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_initialise", 0);

  hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_initialise_(SF_LAST);
}

Unit hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_finalise(
  STACK_FRAME
  hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api api) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_api.c", "", "hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_finalise", 0);

  hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_finalise_(SF_LAST);
}

Unit hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_timeTriggered(
  STACK_FRAME
  hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api api) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_api.c", "", "hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_timeTriggered", 0);

  hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_timeTriggered_(SF_LAST);
}
