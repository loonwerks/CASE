package HAMR.SW

import org.sireum._
import art._

object UARTDriver_Impl_SW_UART_UARTDriver_seL4Nix_Ext {
  def Status_Send(d: DataContent): Unit = halt("stub")

  def MissionWindow_IsEmpty(): B = halt("stub")

  def MissionWindow_Receive(): Option[DataContent] = halt("stub")
}
