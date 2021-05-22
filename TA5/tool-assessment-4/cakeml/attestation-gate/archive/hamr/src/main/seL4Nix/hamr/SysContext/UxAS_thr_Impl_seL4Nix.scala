// #Sireum

package hamr.SysContext

import org.sireum._
import art._

@ext object UxAS_thr_Impl_seL4Nix {
  // returns T if seL4's AutomationRequest port is empty, F otherwise 
  def AutomationRequest_IsEmpty(): B = $

  // returns result of dequeuing seL4's AutomationRequest port 
  def AutomationRequest_Receive(): Option[DataContent] = $

  // returns T if seL4's OperatingRegion port is empty, F otherwise 
  def OperatingRegion_IsEmpty(): B = $

  // returns result of dequeuing seL4's OperatingRegion port 
  def OperatingRegion_Receive(): Option[DataContent] = $

  // returns T if seL4's LineSearchTask port is empty, F otherwise 
  def LineSearchTask_IsEmpty(): B = $

  // returns result of dequeuing seL4's LineSearchTask port 
  def LineSearchTask_Receive(): Option[DataContent] = $
}
