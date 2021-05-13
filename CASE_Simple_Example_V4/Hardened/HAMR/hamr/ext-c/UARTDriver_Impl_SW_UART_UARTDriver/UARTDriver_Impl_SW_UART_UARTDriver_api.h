#ifndef UARTDRIVER_IMPL_SW_UART_UARTDRIVER_API_H
#define UARTDRIVER_IMPL_SW_UART_UARTDRIVER_API_H

#include <all.h>

// This file was auto-generated.  Do not edit

void api_put_Status__HAMR_SW_UARTDriver_Impl_SW_UART_UARTDriver(
  STACK_FRAME
  HAMR_SW_Coordinate_Impl value);

bool api_get_MissionWindow__HAMR_SW_UARTDriver_Impl_SW_UART_UARTDriver(
  STACK_FRAME
  HAMR_SW_MissionWindow value);

void api_logInfo__HAMR_SW_UARTDriver_Impl_SW_UART_UARTDriver(
  STACK_FRAME
  String str);

void api_logDebug__HAMR_SW_UARTDriver_Impl_SW_UART_UARTDriver(
  STACK_FRAME
  String str);

void api_logError__HAMR_SW_UARTDriver_Impl_SW_UART_UARTDriver(
  STACK_FRAME
  String str);

#endif
