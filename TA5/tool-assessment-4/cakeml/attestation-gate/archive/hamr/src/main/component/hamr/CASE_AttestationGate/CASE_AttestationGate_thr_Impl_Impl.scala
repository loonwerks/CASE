// #Sireum

package hamr.CASE_AttestationGate

import org.sireum._
import hamr._

// the contents of this file will not be overwritten
@record class CASE_AttestationGate_thr_Impl_Impl (val api : CASE_AttestationGate_thr_Impl_Bridge.Api) extends CASE_AttestationGate_thr_Impl {

  override def initialise(): Unit = {
    // example api usage

    api.logInfo("Example info logging")
    api.logDebug("Example debug logging")
    api.logError("Example error logging")

    val apiUsage_trusted_ids: Option[Base_Types.Bits] = api.gettrusted_ids()
    val apiUsage_AutomationRequest_in: Option[Base_Types.Bits] = api.getAutomationRequest_in()
    api.sendAutomationRequest_out(Base_Types.Bits_empty())
    val apiUsage_OperatingRegion_in: Option[Base_Types.Bits] = api.getOperatingRegion_in()
    api.sendOperatingRegion_out(Base_Types.Bits_empty())
    val apiUsage_LineSearchTask_in: Option[Base_Types.Bits] = api.getLineSearchTask_in()
    api.sendLineSearchTask_out(Base_Types.Bits_empty())
  }

  override def timeTriggered(): Unit = {
    // example override of timeTriggered
  }

  override def activate(): Unit = {
    // example override of activate
  }

  override def deactivate(): Unit = {
    // example override of deactivate
  }

  override def finalise(): Unit = {
    // example override of finalise
  }

  override def recover(): Unit = {
    // example override of recover
  }
}
