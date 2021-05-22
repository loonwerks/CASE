package hamr.SW

import org.sireum._
import art._

object CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_seL4Nix_Ext {
  def trusted_ids_IsEmpty(): B = halt("stub")

  def trusted_ids_Receive(): Option[DataContent] = halt("stub")

  def AutomationRequest_in_IsEmpty(): B = halt("stub")

  def AutomationRequest_in_Receive(): Option[DataContent] = halt("stub")

  def AutomationRequest_out_UXAS_Send(d: DataContent): Unit = halt("stub")

  def AutomationRequest_out_MON_REQ_Send(d: DataContent): Unit = halt("stub")

  def OperatingRegion_in_IsEmpty(): B = halt("stub")

  def OperatingRegion_in_Receive(): Option[DataContent] = halt("stub")

  def OperatingRegion_out_Send(d: DataContent): Unit = halt("stub")

  def LineSearchTask_in_IsEmpty(): B = halt("stub")

  def LineSearchTask_in_Receive(): Option[DataContent] = halt("stub")

  def LineSearchTask_out_Send(d: DataContent): Unit = halt("stub")
}
