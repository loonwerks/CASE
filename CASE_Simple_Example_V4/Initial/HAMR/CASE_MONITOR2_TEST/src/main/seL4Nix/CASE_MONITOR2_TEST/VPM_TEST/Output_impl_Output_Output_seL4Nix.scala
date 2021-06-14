// #Sireum

// This file was auto-generated.  Do not edit

package CASE_MONITOR2_TEST.VPM_TEST

import org.sireum._
import art._

@ext object Output_impl_Output_Output_seL4Nix {
  // returns T if seL4's Suspect_Traffic_Out port is empty, F otherwise 
  def Suspect_Traffic_Out_IsEmpty(): B = $

  // returns result of dequeuing seL4's Suspect_Traffic_Out port 
  def Suspect_Traffic_Out_Receive(): Option[DataContent] = $
}
