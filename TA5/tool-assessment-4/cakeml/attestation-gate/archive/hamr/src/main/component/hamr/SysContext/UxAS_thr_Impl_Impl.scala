// #Sireum

package hamr.SysContext

import org.sireum._
import hamr._

// the contents of this file will not be overwritten
@record class UxAS_thr_Impl_Impl (val api : UxAS_thr_Impl_Bridge.Api) extends UxAS_thr_Impl {

  override def initialise(): Unit = {
    // example api usage

    api.logInfo("Example info logging")
    api.logDebug("Example debug logging")
    api.logError("Example error logging")

    val apiUsage_AutomationRequest: Option[Base_Types.Bits] = api.getAutomationRequest()
    val apiUsage_OperatingRegion: Option[Base_Types.Bits] = api.getOperatingRegion()
    val apiUsage_LineSearchTask: Option[Base_Types.Bits] = api.getLineSearchTask()
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
