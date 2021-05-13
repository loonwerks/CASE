#include <UARTDriver_Impl_SW_UART_UARTDriver_api.h>
#include <UARTDriver_Impl_SW_UART_UARTDriver.h>

// This file was auto-generated.  Do not edit

void api_put_Status__HAMR_SW_UARTDriver_Impl_SW_UART_UARTDriver(
  STACK_FRAME
  HAMR_SW_Coordinate_Impl value) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_SW_UART_UARTDriver_api.c", "", "api_put_Status__HAMR_SW_UARTDriver_Impl_SW_UART_UARTDriver", 0);

  // Option_4FC841 = Option[HAMR.SW.UARTDriver_Impl_Initialization_Api]
  DeclNewHAMR_SW_UARTDriver_Impl_Initialization_Api(api);
  Option_4FC841_get_(SF (HAMR_SW_UARTDriver_Impl_Initialization_Api) &api, HAMR_SW_UARTDriver_Impl_SW_UART_UARTDriver_Bridge_c_initialization_api(SF_LAST));

  HAMR_SW_UARTDriver_Impl_Initialization_Api_put_Status_(
    SF
    &api,
    value);
}

bool api_get_MissionWindow__HAMR_SW_UARTDriver_Impl_SW_UART_UARTDriver(
  STACK_FRAME
  HAMR_SW_MissionWindow value){
  DeclNewStackFrame(caller, "UARTDriver_Impl_SW_UART_UARTDriver_api.c", "", "api_get_MissionWindow__HAMR_SW_UARTDriver_Impl_SW_UART_UARTDriver", 0);

  // Option_E4C2B4 = Option[HAMR.SW.UARTDriver_Impl_Operational_Api]
  DeclNewHAMR_SW_UARTDriver_Impl_Operational_Api(api);
  Option_E4C2B4_get_(SF (HAMR_SW_UARTDriver_Impl_Operational_Api) &api, HAMR_SW_UARTDriver_Impl_SW_UART_UARTDriver_Bridge_c_operational_api(SF_LAST));

  // Option_9DBBD1 = Option[HAMR.SW.MissionWindow]
  // Some_669F8E = Some[HAMR.SW.MissionWindow]
  DeclNewOption_9DBBD1(t_0);
  HAMR_SW_UARTDriver_Impl_Operational_Api_get_MissionWindow_(
    SF
    (Option_9DBBD1) &t_0,
    &api);

  if(t_0.type == TSome_669F8E){
    Type_assign(value, &t_0.Some_669F8E.value, sizeof(struct HAMR_SW_MissionWindow));
    return true;
  } else {
    return false;
  }
}

void api_logInfo__HAMR_SW_UARTDriver_Impl_SW_UART_UARTDriver(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_SW_UART_UARTDriver_api.c", "", "api_logInfo__HAMR_SW_UARTDriver_Impl_SW_UART_UARTDriver", 0);

  // Option_4FC841 = Option[HAMR.SW.UARTDriver_Impl_Initialization_Api]
  DeclNewHAMR_SW_UARTDriver_Impl_Initialization_Api(api);
  Option_4FC841_get_(SF (HAMR_SW_UARTDriver_Impl_Initialization_Api) &api, HAMR_SW_UARTDriver_Impl_SW_UART_UARTDriver_Bridge_c_initialization_api(SF_LAST));

  HAMR_SW_UARTDriver_Impl_Initialization_Api_logInfo_(
    SF
    &api,
    str);
}

void api_logDebug__HAMR_SW_UARTDriver_Impl_SW_UART_UARTDriver(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_SW_UART_UARTDriver_api.c", "", "api_logDebug__HAMR_SW_UARTDriver_Impl_SW_UART_UARTDriver", 0);

  // Option_4FC841 = Option[HAMR.SW.UARTDriver_Impl_Initialization_Api]
  DeclNewHAMR_SW_UARTDriver_Impl_Initialization_Api(api);
  Option_4FC841_get_(SF (HAMR_SW_UARTDriver_Impl_Initialization_Api) &api, HAMR_SW_UARTDriver_Impl_SW_UART_UARTDriver_Bridge_c_initialization_api(SF_LAST));

  HAMR_SW_UARTDriver_Impl_Initialization_Api_logDebug_(
    SF
    &api,
    str);
}

void api_logError__HAMR_SW_UARTDriver_Impl_SW_UART_UARTDriver(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_SW_UART_UARTDriver_api.c", "", "api_logError__HAMR_SW_UARTDriver_Impl_SW_UART_UARTDriver", 0);

  // Option_4FC841 = Option[HAMR.SW.UARTDriver_Impl_Initialization_Api]
  DeclNewHAMR_SW_UARTDriver_Impl_Initialization_Api(api);
  Option_4FC841_get_(SF (HAMR_SW_UARTDriver_Impl_Initialization_Api) &api, HAMR_SW_UARTDriver_Impl_SW_UART_UARTDriver_Bridge_c_initialization_api(SF_LAST));

  HAMR_SW_UARTDriver_Impl_Initialization_Api_logError_(
    SF
    &api,
    str);
}

Unit HAMR_SW_UARTDriver_Impl_SW_UART_UARTDriver_initialise(
  STACK_FRAME
  HAMR_SW_UARTDriver_Impl_Initialization_Api api) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_SW_UART_UARTDriver_api.c", "", "HAMR_SW_UARTDriver_Impl_SW_UART_UARTDriver_initialise", 0);

  HAMR_SW_UARTDriver_Impl_SW_UART_UARTDriver_initialise_(SF_LAST);
}

Unit HAMR_SW_UARTDriver_Impl_SW_UART_UARTDriver_finalise(
  STACK_FRAME
  HAMR_SW_UARTDriver_Impl_Operational_Api api) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_SW_UART_UARTDriver_api.c", "", "HAMR_SW_UARTDriver_Impl_SW_UART_UARTDriver_finalise", 0);

  HAMR_SW_UARTDriver_Impl_SW_UART_UARTDriver_finalise_(SF_LAST);
}

Unit HAMR_SW_UARTDriver_Impl_SW_UART_UARTDriver_handle_MissionWindow(
  STACK_FRAME
  HAMR_SW_UARTDriver_Impl_Operational_Api api,
  HAMR_SW_MissionWindow value) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_SW_UART_UARTDriver_api.c", "", "HAMR_SW_UARTDriver_Impl_SW_UART_UARTDriver_handle_MissionWindow", 0);

  HAMR_SW_UARTDriver_Impl_SW_UART_UARTDriver_handle_MissionWindow_(SF value);
}
