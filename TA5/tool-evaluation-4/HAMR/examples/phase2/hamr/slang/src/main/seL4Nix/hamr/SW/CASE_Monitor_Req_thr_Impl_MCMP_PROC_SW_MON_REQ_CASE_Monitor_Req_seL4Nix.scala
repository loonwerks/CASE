// #Sireum

// This file was auto-generated.  Do not edit

package hamr.SW

import org.sireum._
import art._

@ext object CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_seL4Nix {
  // returns T if seL4's observed port is empty, F otherwise 
  def observed_IsEmpty(): B = $

  // returns result of dequeuing seL4's observed port 
  def observed_Receive(): Option[DataContent] = $

  // returns T if seL4's reference_1 port is empty, F otherwise 
  def reference_1_IsEmpty(): B = $

  // returns result of dequeuing seL4's reference_1 port 
  def reference_1_Receive(): Option[DataContent] = $
}
