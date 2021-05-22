// #Sireum

// This file was auto-generated.  Do not edit

package hamr.SW

import org.sireum._
import art._

@ext object RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_seL4Nix {
  // returns T if seL4's recv_data port is empty, F otherwise 
  def recv_data_IsEmpty(): B = $

  // returns result of dequeuing seL4's recv_data port 
  def recv_data_Receive(): Option[DataContent] = $

  // send payload 'd' to components connected to seL4's send_data port
  def send_data_Send(d: DataContent): Unit = $

  // send payload 'd' to components connected to seL4's trusted_ids port
  def trusted_ids_Send(d: DataContent): Unit = $

  // send payload 'd' to components connected to seL4's AutomationRequest port
  def AutomationRequest_Send(d: DataContent): Unit = $

  // send payload 'd' to components connected to seL4's OperatingRegion port
  def OperatingRegion_Send(d: DataContent): Unit = $

  // send payload 'd' to components connected to seL4's LineSearchTask port
  def LineSearchTask_Send(d: DataContent): Unit = $
}
