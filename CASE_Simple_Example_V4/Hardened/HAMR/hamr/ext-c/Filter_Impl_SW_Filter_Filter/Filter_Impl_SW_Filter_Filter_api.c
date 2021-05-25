#include <Filter_Impl_SW_Filter_Filter_api.h>
#include <Filter_Impl_SW_Filter_Filter.h>

// This file was auto-generated.  Do not edit

bool api_get_Input__HAMR_SW_Filter_Impl_SW_Filter_Filter(
  STACK_FRAME
  size_t *numBits,
  uint8_t *byteArray){
  DeclNewStackFrame(caller, "Filter_Impl_SW_Filter_Filter_api.c", "", "api_get_Input__HAMR_SW_Filter_Impl_SW_Filter_Filter", 0);

  // Option_30119F = Option[IS[Z, B]]
  // Some_8D03B1 = Some[IS[Z, B]]
  DeclNewOption_30119F(t_0);

  // Option_6DC5D7 = Option[HAMR.SW.Filter_Impl_Operational_Api]
  DeclNewHAMR_SW_Filter_Impl_Operational_Api(api);
  Option_6DC5D7_get_(SF (HAMR_SW_Filter_Impl_Operational_Api) &api, HAMR_SW_Filter_Impl_SW_Filter_Filter_Bridge_c_operational_api(SF_LAST));

  HAMR_SW_Filter_Impl_Operational_Api_get_Input_(
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

void api_put_Output__HAMR_SW_Filter_Impl_SW_Filter_Filter(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray) {
  DeclNewStackFrame(caller, "Filter_Impl_SW_Filter_Filter_api.c", "", "api_put_Output__HAMR_SW_Filter_Impl_SW_Filter_Filter", 0);

  sfAssert(SF (Z) numBits >= 0, "numBits must be non-negative for IS[Z, B].");
  sfAssert(SF (Z) numBits <= MaxIS_C4F575, "numBits too large for IS[Z, B].");

  DeclNewIS_C4F575(t_0);

  t_0.size = numBits;
  if(numBits > 0) {
    size_t numBytes = (numBits - 1) / 8 + 1;
    memcpy(&t_0.value, byteArray, numBytes);
  }

  // Option_3ABCB9 = Option[HAMR.SW.Filter_Impl_Initialization_Api]
  DeclNewHAMR_SW_Filter_Impl_Initialization_Api(api);
  Option_3ABCB9_get_(SF (HAMR_SW_Filter_Impl_Initialization_Api) &api, HAMR_SW_Filter_Impl_SW_Filter_Filter_Bridge_c_initialization_api(SF_LAST));

  HAMR_SW_Filter_Impl_Initialization_Api_put_Output_(
    SF
    &api,
    &t_0);
}

void api_logInfo__HAMR_SW_Filter_Impl_SW_Filter_Filter(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "Filter_Impl_SW_Filter_Filter_api.c", "", "api_logInfo__HAMR_SW_Filter_Impl_SW_Filter_Filter", 0);

  // Option_3ABCB9 = Option[HAMR.SW.Filter_Impl_Initialization_Api]
  DeclNewHAMR_SW_Filter_Impl_Initialization_Api(api);
  Option_3ABCB9_get_(SF (HAMR_SW_Filter_Impl_Initialization_Api) &api, HAMR_SW_Filter_Impl_SW_Filter_Filter_Bridge_c_initialization_api(SF_LAST));

  HAMR_SW_Filter_Impl_Initialization_Api_logInfo_(
    SF
    &api,
    str);
}

void api_logDebug__HAMR_SW_Filter_Impl_SW_Filter_Filter(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "Filter_Impl_SW_Filter_Filter_api.c", "", "api_logDebug__HAMR_SW_Filter_Impl_SW_Filter_Filter", 0);

  // Option_3ABCB9 = Option[HAMR.SW.Filter_Impl_Initialization_Api]
  DeclNewHAMR_SW_Filter_Impl_Initialization_Api(api);
  Option_3ABCB9_get_(SF (HAMR_SW_Filter_Impl_Initialization_Api) &api, HAMR_SW_Filter_Impl_SW_Filter_Filter_Bridge_c_initialization_api(SF_LAST));

  HAMR_SW_Filter_Impl_Initialization_Api_logDebug_(
    SF
    &api,
    str);
}

void api_logError__HAMR_SW_Filter_Impl_SW_Filter_Filter(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "Filter_Impl_SW_Filter_Filter_api.c", "", "api_logError__HAMR_SW_Filter_Impl_SW_Filter_Filter", 0);

  // Option_3ABCB9 = Option[HAMR.SW.Filter_Impl_Initialization_Api]
  DeclNewHAMR_SW_Filter_Impl_Initialization_Api(api);
  Option_3ABCB9_get_(SF (HAMR_SW_Filter_Impl_Initialization_Api) &api, HAMR_SW_Filter_Impl_SW_Filter_Filter_Bridge_c_initialization_api(SF_LAST));

  HAMR_SW_Filter_Impl_Initialization_Api_logError_(
    SF
    &api,
    str);
}

Unit HAMR_SW_Filter_Impl_SW_Filter_Filter_initialise(
  STACK_FRAME
  HAMR_SW_Filter_Impl_Initialization_Api api) {
  DeclNewStackFrame(caller, "Filter_Impl_SW_Filter_Filter_api.c", "", "HAMR_SW_Filter_Impl_SW_Filter_Filter_initialise", 0);

  HAMR_SW_Filter_Impl_SW_Filter_Filter_initialise_(SF_LAST);
}

Unit HAMR_SW_Filter_Impl_SW_Filter_Filter_finalise(
  STACK_FRAME
  HAMR_SW_Filter_Impl_Operational_Api api) {
  DeclNewStackFrame(caller, "Filter_Impl_SW_Filter_Filter_api.c", "", "HAMR_SW_Filter_Impl_SW_Filter_Filter_finalise", 0);

  HAMR_SW_Filter_Impl_SW_Filter_Filter_finalise_(SF_LAST);
}

Unit HAMR_SW_Filter_Impl_SW_Filter_Filter_handle_Input(
  STACK_FRAME
  HAMR_SW_Filter_Impl_Operational_Api api,
  IS_C4F575 value) {
  DeclNewStackFrame(caller, "Filter_Impl_SW_Filter_Filter_api.c", "", "HAMR_SW_Filter_Impl_SW_Filter_Filter_handle_Input", 0);

  HAMR_SW_Filter_Impl_SW_Filter_Filter_handle_Input_(SF value);
}
