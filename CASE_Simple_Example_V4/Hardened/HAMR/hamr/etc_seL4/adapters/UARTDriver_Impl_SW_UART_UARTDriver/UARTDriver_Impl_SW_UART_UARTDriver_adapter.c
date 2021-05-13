#include <UARTDriver_Impl_SW_UART_UARTDriver_adapter.h>

Unit HAMR_SW_UARTDriver_Impl_SW_UART_UARTDriver_adapter_initialiseArchitecture(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_SW_UART_UARTDriver_adapter.c", "", "HAMR_SW_UARTDriver_Impl_SW_UART_UARTDriver_adapter_initialiseArchitecture", 0);

  HAMR_UARTDriver_Impl_SW_UART_UARTDriver_UARTDriver_initialiseArchitecture(SF_LAST);
}

Unit HAMR_SW_UARTDriver_Impl_SW_UART_UARTDriver_adapter_initialiseEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_SW_UART_UARTDriver_adapter.c", "", "HAMR_SW_UARTDriver_Impl_SW_UART_UARTDriver_adapter_initialiseEntryPoint", 0);

  HAMR_UARTDriver_Impl_SW_UART_UARTDriver_UARTDriver_initialiseEntryPoint(SF_LAST);
}

Unit HAMR_SW_UARTDriver_Impl_SW_UART_UARTDriver_adapter_computeEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_SW_UART_UARTDriver_adapter.c", "", "HAMR_SW_UARTDriver_Impl_SW_UART_UARTDriver_adapter_computeEntryPoint", 0);

  HAMR_UARTDriver_Impl_SW_UART_UARTDriver_UARTDriver_computeEntryPoint(SF_LAST);
}

art_Bridge_EntryPoints HAMR_SW_UARTDriver_Impl_SW_UART_UARTDriver_adapter_entryPoints(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_SW_UART_UARTDriver_adapter.c", "", "HAMR_SW_UARTDriver_Impl_SW_UART_UARTDriver_adapter_entryPoints", 0);

  return HAMR_UARTDriver_Impl_SW_UART_UARTDriver_UARTDriver_entryPoints(SF_LAST);
}
