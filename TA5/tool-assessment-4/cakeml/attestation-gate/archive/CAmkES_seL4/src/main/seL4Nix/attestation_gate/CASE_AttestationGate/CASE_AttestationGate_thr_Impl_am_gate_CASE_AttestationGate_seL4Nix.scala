// #Sireum

package attestation_gate.CASE_AttestationGate

import org.sireum._
import art._

@ext object CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_seL4Nix {
  // returns T if seL4's trusted_ids port is empty, F otherwise 
  def trusted_ids_IsEmpty(): B = $

  // returns result of dequeuing seL4's trusted_ids port 
  def trusted_ids_Receive(): Option[DataContent] = $

  // returns T if seL4's AutomationRequest_in port is empty, F otherwise 
  def AutomationRequest_in_IsEmpty(): B = $

  // returns result of dequeuing seL4's AutomationRequest_in port 
  def AutomationRequest_in_Receive(): Option[DataContent] = $

  // send payload 'd' to components connected to seL4's AutomationRequest_out port
  def AutomationRequest_out_Send(d: DataContent): Unit = $

  // returns T if seL4's OperatingRegion_in port is empty, F otherwise 
  def OperatingRegion_in_IsEmpty(): B = $

  // returns result of dequeuing seL4's OperatingRegion_in port 
  def OperatingRegion_in_Receive(): Option[DataContent] = $

  // send payload 'd' to components connected to seL4's OperatingRegion_out port
  def OperatingRegion_out_Send(d: DataContent): Unit = $

  // returns T if seL4's LineSearchTask_in port is empty, F otherwise 
  def LineSearchTask_in_IsEmpty(): B = $

  // returns result of dequeuing seL4's LineSearchTask_in port 
  def LineSearchTask_in_Receive(): Option[DataContent] = $

  // send payload 'd' to components connected to seL4's LineSearchTask_out port
  def LineSearchTask_out_Send(d: DataContent): Unit = $
}
