#include <UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_api.h>
#include <UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver.h>

// This file was auto-generated.  Do not edit

bool api_get_recv_data__hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver(
  STACK_FRAME
  size_t *numBits,
  uint8_t *byteArray){
  DeclNewStackFrame(caller, "UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_api.c", "", "api_get_recv_data__hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver", 0);

  // Option_30119F = Option[IS[Z, B]]
  // Some_8D03B1 = Some[IS[Z, B]]
  DeclNewOption_30119F(t_0);

  // Option_AE3831 = Option[hamr.Drivers.UARTDriver_Impl_Operational_Api]
  DeclNewhamr_Drivers_UARTDriver_Impl_Operational_Api(api);
  Option_AE3831_get_(SF (hamr_Drivers_UARTDriver_Impl_Operational_Api) &api, hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_c_operational_api(SF_LAST));

  hamr_Drivers_UARTDriver_Impl_Operational_Api_get_recv_data_(
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

bool api_get_MissionCommand__hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver(
  STACK_FRAME
  size_t *numBits,
  uint8_t *byteArray){
  DeclNewStackFrame(caller, "UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_api.c", "", "api_get_MissionCommand__hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver", 0);

  // Option_30119F = Option[IS[Z, B]]
  // Some_8D03B1 = Some[IS[Z, B]]
  DeclNewOption_30119F(t_0);

  // Option_AE3831 = Option[hamr.Drivers.UARTDriver_Impl_Operational_Api]
  DeclNewhamr_Drivers_UARTDriver_Impl_Operational_Api(api);
  Option_AE3831_get_(SF (hamr_Drivers_UARTDriver_Impl_Operational_Api) &api, hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_c_operational_api(SF_LAST));

  hamr_Drivers_UARTDriver_Impl_Operational_Api_get_MissionCommand_(
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

void api_put_send_data__hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_api.c", "", "api_put_send_data__hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver", 0);

  sfAssert(SF (Z) numBits >= 0, "numBits must be non-negative for IS[Z, B].");
  sfAssert(SF (Z) numBits <= MaxIS_C4F575, "numBits too large for IS[Z, B].");

  DeclNewIS_C4F575(t_0);

  t_0.size = numBits;
  if(numBits > 0) {
    size_t numBytes = (numBits - 1) / 8 + 1;
    memcpy(&t_0.value, byteArray, numBytes);
  }

  // Option_21F455 = Option[hamr.Drivers.UARTDriver_Impl_Initialization_Api]
  DeclNewhamr_Drivers_UARTDriver_Impl_Initialization_Api(api);
  Option_21F455_get_(SF (hamr_Drivers_UARTDriver_Impl_Initialization_Api) &api, hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_c_initialization_api(SF_LAST));

  hamr_Drivers_UARTDriver_Impl_Initialization_Api_put_send_data_(
    SF
    &api,
    &t_0);
}

void api_put_AirVehicleState_WPM__hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_api.c", "", "api_put_AirVehicleState_WPM__hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver", 0);

  sfAssert(SF (Z) numBits >= 0, "numBits must be non-negative for IS[Z, B].");
  sfAssert(SF (Z) numBits <= MaxIS_C4F575, "numBits too large for IS[Z, B].");

  DeclNewIS_C4F575(t_0);

  t_0.size = numBits;
  if(numBits > 0) {
    size_t numBytes = (numBits - 1) / 8 + 1;
    memcpy(&t_0.value, byteArray, numBytes);
  }

  // Option_21F455 = Option[hamr.Drivers.UARTDriver_Impl_Initialization_Api]
  DeclNewhamr_Drivers_UARTDriver_Impl_Initialization_Api(api);
  Option_21F455_get_(SF (hamr_Drivers_UARTDriver_Impl_Initialization_Api) &api, hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_c_initialization_api(SF_LAST));

  hamr_Drivers_UARTDriver_Impl_Initialization_Api_put_AirVehicleState_WPM_(
    SF
    &api,
    &t_0);
}

void api_put_AirVehicleState_UXAS__hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_api.c", "", "api_put_AirVehicleState_UXAS__hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver", 0);

  sfAssert(SF (Z) numBits >= 0, "numBits must be non-negative for IS[Z, B].");
  sfAssert(SF (Z) numBits <= MaxIS_C4F575, "numBits too large for IS[Z, B].");

  DeclNewIS_C4F575(t_0);

  t_0.size = numBits;
  if(numBits > 0) {
    size_t numBytes = (numBits - 1) / 8 + 1;
    memcpy(&t_0.value, byteArray, numBytes);
  }

  // Option_21F455 = Option[hamr.Drivers.UARTDriver_Impl_Initialization_Api]
  DeclNewhamr_Drivers_UARTDriver_Impl_Initialization_Api(api);
  Option_21F455_get_(SF (hamr_Drivers_UARTDriver_Impl_Initialization_Api) &api, hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_c_initialization_api(SF_LAST));

  hamr_Drivers_UARTDriver_Impl_Initialization_Api_put_AirVehicleState_UXAS_(
    SF
    &api,
    &t_0);
}

void api_logInfo__hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_api.c", "", "api_logInfo__hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver", 0);

  // Option_21F455 = Option[hamr.Drivers.UARTDriver_Impl_Initialization_Api]
  DeclNewhamr_Drivers_UARTDriver_Impl_Initialization_Api(api);
  Option_21F455_get_(SF (hamr_Drivers_UARTDriver_Impl_Initialization_Api) &api, hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_c_initialization_api(SF_LAST));

  hamr_Drivers_UARTDriver_Impl_Initialization_Api_logInfo_(
    SF
    &api,
    str);
}

void api_logDebug__hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_api.c", "", "api_logDebug__hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver", 0);

  // Option_21F455 = Option[hamr.Drivers.UARTDriver_Impl_Initialization_Api]
  DeclNewhamr_Drivers_UARTDriver_Impl_Initialization_Api(api);
  Option_21F455_get_(SF (hamr_Drivers_UARTDriver_Impl_Initialization_Api) &api, hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_c_initialization_api(SF_LAST));

  hamr_Drivers_UARTDriver_Impl_Initialization_Api_logDebug_(
    SF
    &api,
    str);
}

void api_logError__hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_api.c", "", "api_logError__hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver", 0);

  // Option_21F455 = Option[hamr.Drivers.UARTDriver_Impl_Initialization_Api]
  DeclNewhamr_Drivers_UARTDriver_Impl_Initialization_Api(api);
  Option_21F455_get_(SF (hamr_Drivers_UARTDriver_Impl_Initialization_Api) &api, hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_c_initialization_api(SF_LAST));

  hamr_Drivers_UARTDriver_Impl_Initialization_Api_logError_(
    SF
    &api,
    str);
}

Unit hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_initialise(
  STACK_FRAME
  hamr_Drivers_UARTDriver_Impl_Initialization_Api api) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_api.c", "", "hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_initialise", 0);

  hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_initialise_(SF_LAST);
}

Unit hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_finalise(
  STACK_FRAME
  hamr_Drivers_UARTDriver_Impl_Operational_Api api) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_api.c", "", "hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_finalise", 0);

  hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_finalise_(SF_LAST);
}

Unit hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_timeTriggered(
  STACK_FRAME
  hamr_Drivers_UARTDriver_Impl_Operational_Api api) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_api.c", "", "hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_timeTriggered", 0);

  hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_timeTriggered_(SF_LAST);
}
