#include <UARTDriver_Impl_SW_UART_UARTDriver_api.h>
#include <UARTDriver_Impl_SW_UART_UARTDriver.h>
#include <ext.h>

// This file will not be overwritten so is safe to edit

Unit HAMR_SW_UARTDriver_Impl_SW_UART_UARTDriver_initialise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_SW_UART_UARTDriver.c", "", "HAMR_SW_UARTDriver_Impl_SW_UART_UARTDriver_initialise_", 0);

  // examples of api setter and logging usage

  DeclNewHAMR_SW_Coordinate_Impl(t0);
  HAMR_SW_Coordinate_Impl_example(SF &t0);
  api_put_Status__HAMR_SW_UARTDriver_Impl_SW_UART_UARTDriver(SF &t0);

  api_logInfo__HAMR_SW_UARTDriver_Impl_SW_UART_UARTDriver(SF string("Example logInfo"));

  api_logDebug__HAMR_SW_UARTDriver_Impl_SW_UART_UARTDriver(SF string("Example logDebug"));

  api_logError__HAMR_SW_UARTDriver_Impl_SW_UART_UARTDriver(SF string("Example logError"));
}

Unit HAMR_SW_UARTDriver_Impl_SW_UART_UARTDriver_finalise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_SW_UART_UARTDriver.c", "", "HAMR_SW_UARTDriver_Impl_SW_UART_UARTDriver_finalise_", 0);
}

Unit HAMR_SW_UARTDriver_Impl_SW_UART_UARTDriver_handle_MissionWindow_(
  STACK_FRAME
  HAMR_SW_MissionWindow value) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_SW_UART_UARTDriver.c", "", "HAMR_SW_UARTDriver_Impl_SW_UART_UARTDriver_handle_MissionWindow_", 0);

  DeclNewString(MissionWindowString);
  String__append(SF (String) &MissionWindowString, string("HAMR_SW_UARTDriver_Impl_SW_UART_UARTDriver_handle_MissionWindow called"));
  api_logInfo__HAMR_SW_UARTDriver_Impl_SW_UART_UARTDriver (SF (String) &MissionWindowString);

  DeclNewString(_str);
  String__append(SF (String) &_str, string("Received on MissionWindow: "));
  HAMR_SW_MissionWindow_string_(SF (String) &_str, value);
  api_logInfo__HAMR_SW_UARTDriver_Impl_SW_UART_UARTDriver(SF (String) &_str);

  // examples of api getter usage

  DeclNewHAMR_SW_MissionWindow(t0);
  if(api_get_MissionWindow__HAMR_SW_UARTDriver_Impl_SW_UART_UARTDriver(SF &t0)) {
    DeclNewString(MissionWindow_str);
    String__append(SF (String) &MissionWindow_str, string("Received on MissionWindow: "));
    HAMR_SW_MissionWindow_string_(SF (String) &MissionWindow_str, &t0);
    api_logInfo__HAMR_SW_UARTDriver_Impl_SW_UART_UARTDriver(SF (String) &MissionWindow_str);
  }
}
