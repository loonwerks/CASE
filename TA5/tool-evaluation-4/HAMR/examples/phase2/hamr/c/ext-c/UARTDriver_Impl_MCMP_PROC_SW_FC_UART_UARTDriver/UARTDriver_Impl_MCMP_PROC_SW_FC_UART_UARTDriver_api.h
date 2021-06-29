#ifndef UARTDRIVER_IMPL_MCMP_PROC_SW_FC_UART_UARTDRIVER_API_H
#define UARTDRIVER_IMPL_MCMP_PROC_SW_FC_UART_UARTDRIVER_API_H

#include <all.h>

// This file was auto-generated.  Do not edit

bool api_get_recv_data__hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver(
  STACK_FRAME
  size_t *numBits,
  uint8_t *byteArray);

bool api_get_MissionCommand__hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver(
  STACK_FRAME
  size_t *numBits,
  uint8_t *byteArray);

void api_put_send_data__hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray);

void api_put_AirVehicleState_WPM__hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray);

void api_put_AirVehicleState_UXAS__hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray);

void api_logInfo__hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver(
  STACK_FRAME
  String str);

void api_logDebug__hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver(
  STACK_FRAME
  String str);

void api_logError__hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver(
  STACK_FRAME
  String str);

#endif
