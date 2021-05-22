// #Sireum

package hamr.SW

import org.sireum._
import hamr._

// This file will not be overwritten so is safe to edit
object CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate {

  def initialise(api: CASE_AttestationGate_thr_Impl_Initialization_Api): Unit = {
    // example api usage

    api.logInfo("Example info logging")
    api.logDebug("Example debug logging")
    api.logError("Example error logging")

    api.put_AutomationRequest_out_UXAS(Base_Types.Bits_example())
    api.put_AutomationRequest_out_MON_REQ(Base_Types.Bits_example())
    api.put_OperatingRegion_out(Base_Types.Bits_example())
    api.put_LineSearchTask_out(Base_Types.Bits_example())
  }

  def timeTriggered(api: CASE_AttestationGate_thr_Impl_Operational_Api): Unit = {
    // example api usage

    val apiUsage_trusted_ids: Option[Base_Types.Bits] = api.get_trusted_ids()
    api.logInfo(s"Received on trusted_ids: ${apiUsage_trusted_ids}")
    val apiUsage_AutomationRequest_in: Option[Base_Types.Bits] = api.get_AutomationRequest_in()
    api.logInfo(s"Received on AutomationRequest_in: ${apiUsage_AutomationRequest_in}")
    val apiUsage_OperatingRegion_in: Option[Base_Types.Bits] = api.get_OperatingRegion_in()
    api.logInfo(s"Received on OperatingRegion_in: ${apiUsage_OperatingRegion_in}")
    val apiUsage_LineSearchTask_in: Option[Base_Types.Bits] = api.get_LineSearchTask_in()
    api.logInfo(s"Received on LineSearchTask_in: ${apiUsage_LineSearchTask_in}")
  }

  def activate(api: CASE_AttestationGate_thr_Impl_Operational_Api): Unit = { }

  def deactivate(api: CASE_AttestationGate_thr_Impl_Operational_Api): Unit = { }

  def finalise(api: CASE_AttestationGate_thr_Impl_Operational_Api): Unit = { }

  def recover(api: CASE_AttestationGate_thr_Impl_Operational_Api): Unit = { }
}
