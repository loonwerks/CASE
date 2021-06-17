// #Sireum

// This file was auto-generated.  Do not edit

package hamr.Drivers

import org.sireum._
import art._

@ext object UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_seL4Nix {
  // returns T if seL4's recv_data port is empty, F otherwise 
  def recv_data_IsEmpty(): B = $

  // returns result of dequeuing seL4's recv_data port 
  def recv_data_Receive(): Option[DataContent] = $

  // returns T if seL4's MissionCommand port is empty, F otherwise 
  def MissionCommand_IsEmpty(): B = $

  // returns result of dequeuing seL4's MissionCommand port 
  def MissionCommand_Receive(): Option[DataContent] = $

  // send payload 'd' to components connected to seL4's send_data port
  def send_data_Send(d: DataContent): Unit = $

  // send payload 'd' to components connected to seL4's AirVehicleState_WPM port
  def AirVehicleState_WPM_Send(d: DataContent): Unit = $

  // send payload 'd' to components connected to seL4's AirVehicleState_UXAS port
  def AirVehicleState_UXAS_Send(d: DataContent): Unit = $
}
