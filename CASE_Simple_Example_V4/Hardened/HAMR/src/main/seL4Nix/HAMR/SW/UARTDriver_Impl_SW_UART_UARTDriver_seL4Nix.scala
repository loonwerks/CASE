// #Sireum

// This file was auto-generated.  Do not edit

package HAMR.SW

import org.sireum._
import art._

@ext object UARTDriver_Impl_SW_UART_UARTDriver_seL4Nix {
  // send payload 'd' to components connected to seL4's Status port
  def Status_Send(d: DataContent): Unit = $

  // returns T if seL4's MissionWindow port is empty, F otherwise 
  def MissionWindow_IsEmpty(): B = $

  // returns result of dequeuing seL4's MissionWindow port 
  def MissionWindow_Receive(): Option[DataContent] = $
}
