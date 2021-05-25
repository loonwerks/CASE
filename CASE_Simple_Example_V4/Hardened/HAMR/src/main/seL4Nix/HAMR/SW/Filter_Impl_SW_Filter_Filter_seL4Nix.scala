// #Sireum

// This file was auto-generated.  Do not edit

package HAMR.SW

import org.sireum._
import art._

@ext object Filter_Impl_SW_Filter_Filter_seL4Nix {
  // returns T if seL4's Input port is empty, F otherwise 
  def Input_IsEmpty(): B = $

  // returns result of dequeuing seL4's Input port 
  def Input_Receive(): Option[DataContent] = $

  // send payload 'd' to components connected to seL4's Output port
  def Output_Send(d: DataContent): Unit = $
}
