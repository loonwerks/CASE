#include <consumer_t_consumer_consumer_api.h>
#include <consumer_t_consumer_consumer.h>

// This file was auto-generated.  Do not edit

bool api_get_from_filter__pfc_PFC_consumer_t_consumer_consumer(
  STACK_FRAME
  size_t *numBits,
  uint8_t *byteArray){
  DeclNewStackFrame(caller, "consumer_t_consumer_consumer_api.c", "", "api_get_from_filter__pfc_PFC_consumer_t_consumer_consumer", 0);

  // Option_30119F = Option[IS[Z, B]]
  // Some_8D03B1 = Some[IS[Z, B]]
  DeclNewOption_30119F(t_0);

  // Option_88412A = Option[pfc.PFC.consumer_t_Operational_Api]
  DeclNewpfc_PFC_consumer_t_Operational_Api(api);
  Option_88412A_get_(SF (pfc_PFC_consumer_t_Operational_Api) &api, pfc_PFC_consumer_t_consumer_consumer_Bridge_c_operational_api(SF_LAST));

  pfc_PFC_consumer_t_Operational_Api_get_from_filter_(
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

void api_logInfo__pfc_PFC_consumer_t_consumer_consumer(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "consumer_t_consumer_consumer_api.c", "", "api_logInfo__pfc_PFC_consumer_t_consumer_consumer", 0);

  // Option_F71068 = Option[pfc.PFC.consumer_t_Initialization_Api]
  DeclNewpfc_PFC_consumer_t_Initialization_Api(api);
  Option_F71068_get_(SF (pfc_PFC_consumer_t_Initialization_Api) &api, pfc_PFC_consumer_t_consumer_consumer_Bridge_c_initialization_api(SF_LAST));

  pfc_PFC_consumer_t_Initialization_Api_logInfo_(
    SF
    &api,
    str);
}

void api_logDebug__pfc_PFC_consumer_t_consumer_consumer(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "consumer_t_consumer_consumer_api.c", "", "api_logDebug__pfc_PFC_consumer_t_consumer_consumer", 0);

  // Option_F71068 = Option[pfc.PFC.consumer_t_Initialization_Api]
  DeclNewpfc_PFC_consumer_t_Initialization_Api(api);
  Option_F71068_get_(SF (pfc_PFC_consumer_t_Initialization_Api) &api, pfc_PFC_consumer_t_consumer_consumer_Bridge_c_initialization_api(SF_LAST));

  pfc_PFC_consumer_t_Initialization_Api_logDebug_(
    SF
    &api,
    str);
}

void api_logError__pfc_PFC_consumer_t_consumer_consumer(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "consumer_t_consumer_consumer_api.c", "", "api_logError__pfc_PFC_consumer_t_consumer_consumer", 0);

  // Option_F71068 = Option[pfc.PFC.consumer_t_Initialization_Api]
  DeclNewpfc_PFC_consumer_t_Initialization_Api(api);
  Option_F71068_get_(SF (pfc_PFC_consumer_t_Initialization_Api) &api, pfc_PFC_consumer_t_consumer_consumer_Bridge_c_initialization_api(SF_LAST));

  pfc_PFC_consumer_t_Initialization_Api_logError_(
    SF
    &api,
    str);
}

Unit pfc_PFC_consumer_t_consumer_consumer_initialise(
  STACK_FRAME
  pfc_PFC_consumer_t_Initialization_Api api) {
  DeclNewStackFrame(caller, "consumer_t_consumer_consumer_api.c", "", "pfc_PFC_consumer_t_consumer_consumer_initialise", 0);

  pfc_PFC_consumer_t_consumer_consumer_initialise_(SF_LAST);
}

Unit pfc_PFC_consumer_t_consumer_consumer_finalise(
  STACK_FRAME
  pfc_PFC_consumer_t_Operational_Api api) {
  DeclNewStackFrame(caller, "consumer_t_consumer_consumer_api.c", "", "pfc_PFC_consumer_t_consumer_consumer_finalise", 0);

  pfc_PFC_consumer_t_consumer_consumer_finalise_(SF_LAST);
}

Unit pfc_PFC_consumer_t_consumer_consumer_timeTriggered(
  STACK_FRAME
  pfc_PFC_consumer_t_Operational_Api api) {
  DeclNewStackFrame(caller, "consumer_t_consumer_consumer_api.c", "", "pfc_PFC_consumer_t_consumer_consumer_timeTriggered", 0);

  pfc_PFC_consumer_t_consumer_consumer_timeTriggered_(SF_LAST);
}
