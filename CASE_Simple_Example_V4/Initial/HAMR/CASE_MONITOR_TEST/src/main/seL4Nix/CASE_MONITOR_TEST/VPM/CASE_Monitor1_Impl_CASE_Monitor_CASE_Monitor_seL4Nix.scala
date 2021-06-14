// #Sireum

// This file was auto-generated.  Do not edit

package CASE_MONITOR_TEST.VPM

import org.sireum._
import art._

@ext object CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_seL4Nix {
  // returns T if seL4's Observed port is empty, F otherwise 
  def Observed_IsEmpty(): B = $

  // returns result of dequeuing seL4's Observed port 
  def Observed_Receive(): Option[DataContent] = $

  // send payload 'd' to components connected to seL4's Suspect_Traffic_Out port
  def Suspect_Traffic_Out_Send(d: DataContent): Unit = $
}
