// #Sireum

package attestation_gate.CASE_AttestationGate

import org.sireum._
import attestation_gate._

// This file will not be overwritten so is safe to edit
object CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate {

  def initialise(api: CASE_AttestationGate_thr_Impl_Initialization_Api): Unit = {
    // example api usage

    api.logInfo("Example info logging")
    api.logDebug("Example debug logging")
    api.logError("Example error logging")

    api.sendAutomationRequest_out(Base_Types.Bits_empty())
    api.sendOperatingRegion_out(Base_Types.Bits_empty())
    api.sendLineSearchTask_out(Base_Types.Bits_empty())
  }

  def timeTriggered(api: CASE_AttestationGate_thr_Impl_Operational_Api): Unit = {
    // example api usage

    val apiUsage_trusted_ids: Option[Base_Types.Bits] = api.gettrusted_ids()
    val apiUsage_AutomationRequest_in: Option[Base_Types.Bits] = api.getAutomationRequest_in()
    api.sendAutomationRequest_out(Base_Types.Bits_empty())
    val apiUsage_OperatingRegion_in: Option[Base_Types.Bits] = api.getOperatingRegion_in()
    api.sendOperatingRegion_out(Base_Types.Bits_empty())
    val apiUsage_LineSearchTask_in: Option[Base_Types.Bits] = api.getLineSearchTask_in()
    api.sendLineSearchTask_out(Base_Types.Bits_empty())
  }

  def activate(api: CASE_AttestationGate_thr_Impl_Operational_Api): Unit = { }

  def deactivate(api: CASE_AttestationGate_thr_Impl_Operational_Api): Unit = { }

  def finalise(api: CASE_AttestationGate_thr_Impl_Operational_Api): Unit = { }

  def recover(api: CASE_AttestationGate_thr_Impl_Operational_Api): Unit = { }
}
