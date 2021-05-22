#include <producer_t_producer_producer_api.h>
#include <producer_t_producer_producer.h>

// This file was auto-generated.  Do not edit

void api_put_to_filter__pfc_PFC_producer_t_producer_producer(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray) {
  DeclNewStackFrame(caller, "producer_t_producer_producer_api.c", "", "api_put_to_filter__pfc_PFC_producer_t_producer_producer", 0);

  sfAssert(SF (Z) numBits >= 0, "numBits must be non-negative for IS[Z, B].");
  sfAssert(SF (Z) numBits <= MaxIS_C4F575, "numBits too large for IS[Z, B].");

  DeclNewIS_C4F575(t_0);

  t_0.size = numBits;
  if(numBits > 0) {
    size_t numBytes = (numBits - 1) / 8 + 1;
    memcpy(&t_0.value, byteArray, numBytes);
  }

  // Option_4CDC9D = Option[pfc.PFC.producer_t_Initialization_Api]
  DeclNewpfc_PFC_producer_t_Initialization_Api(api);
  Option_4CDC9D_get_(SF (pfc_PFC_producer_t_Initialization_Api) &api, pfc_PFC_producer_t_producer_producer_Bridge_c_initialization_api(SF_LAST));

  pfc_PFC_producer_t_Initialization_Api_put_to_filter_(
    SF
    &api,
    &t_0);
}

void api_logInfo__pfc_PFC_producer_t_producer_producer(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "producer_t_producer_producer_api.c", "", "api_logInfo__pfc_PFC_producer_t_producer_producer", 0);

  // Option_4CDC9D = Option[pfc.PFC.producer_t_Initialization_Api]
  DeclNewpfc_PFC_producer_t_Initialization_Api(api);
  Option_4CDC9D_get_(SF (pfc_PFC_producer_t_Initialization_Api) &api, pfc_PFC_producer_t_producer_producer_Bridge_c_initialization_api(SF_LAST));

  pfc_PFC_producer_t_Initialization_Api_logInfo_(
    SF
    &api,
    str);
}

void api_logDebug__pfc_PFC_producer_t_producer_producer(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "producer_t_producer_producer_api.c", "", "api_logDebug__pfc_PFC_producer_t_producer_producer", 0);

  // Option_4CDC9D = Option[pfc.PFC.producer_t_Initialization_Api]
  DeclNewpfc_PFC_producer_t_Initialization_Api(api);
  Option_4CDC9D_get_(SF (pfc_PFC_producer_t_Initialization_Api) &api, pfc_PFC_producer_t_producer_producer_Bridge_c_initialization_api(SF_LAST));

  pfc_PFC_producer_t_Initialization_Api_logDebug_(
    SF
    &api,
    str);
}

void api_logError__pfc_PFC_producer_t_producer_producer(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "producer_t_producer_producer_api.c", "", "api_logError__pfc_PFC_producer_t_producer_producer", 0);

  // Option_4CDC9D = Option[pfc.PFC.producer_t_Initialization_Api]
  DeclNewpfc_PFC_producer_t_Initialization_Api(api);
  Option_4CDC9D_get_(SF (pfc_PFC_producer_t_Initialization_Api) &api, pfc_PFC_producer_t_producer_producer_Bridge_c_initialization_api(SF_LAST));

  pfc_PFC_producer_t_Initialization_Api_logError_(
    SF
    &api,
    str);
}

Unit pfc_PFC_producer_t_producer_producer_initialise(
  STACK_FRAME
  pfc_PFC_producer_t_Initialization_Api api) {
  DeclNewStackFrame(caller, "producer_t_producer_producer_api.c", "", "pfc_PFC_producer_t_producer_producer_initialise", 0);

  pfc_PFC_producer_t_producer_producer_initialise_(SF_LAST);
}

Unit pfc_PFC_producer_t_producer_producer_finalise(
  STACK_FRAME
  pfc_PFC_producer_t_Operational_Api api) {
  DeclNewStackFrame(caller, "producer_t_producer_producer_api.c", "", "pfc_PFC_producer_t_producer_producer_finalise", 0);

  pfc_PFC_producer_t_producer_producer_finalise_(SF_LAST);
}

Unit pfc_PFC_producer_t_producer_producer_timeTriggered(
  STACK_FRAME
  pfc_PFC_producer_t_Operational_Api api) {
  DeclNewStackFrame(caller, "producer_t_producer_producer_api.c", "", "pfc_PFC_producer_t_producer_producer_timeTriggered", 0);

  pfc_PFC_producer_t_producer_producer_timeTriggered_(SF_LAST);
}
