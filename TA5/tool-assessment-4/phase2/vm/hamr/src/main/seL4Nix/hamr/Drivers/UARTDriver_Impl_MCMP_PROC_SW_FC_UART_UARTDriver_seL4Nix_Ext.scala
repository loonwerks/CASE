package hamr.Drivers

import org.sireum._
import art._

object UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_seL4Nix_Ext {
  def recv_data_IsEmpty(): B = halt("stub")

  def recv_data_Receive(): Option[DataContent] = halt("stub")

  def MissionCommand_IsEmpty(): B = halt("stub")

  def MissionCommand_Receive(): Option[DataContent] = halt("stub")

  def send_data_Send(d: DataContent): Unit = halt("stub")

  def AirVehicleState_WPM_Send(d: DataContent): Unit = halt("stub")

  def AirVehicleState_UXAS_Send(d: DataContent): Unit = halt("stub")
}
