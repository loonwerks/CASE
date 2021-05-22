// #Sireum

package hamr.RadioDriver

import org.sireum._
import hamr._

// the contents of this file will not be overwritten
@record class RadioDriver_thr_Impl_Impl (val api : RadioDriver_thr_Impl_Bridge.Api) extends RadioDriver_thr_Impl {

  override def initialise(): Unit = {
    // example api usage

    api.logInfo("Example info logging")
    api.logDebug("Example debug logging")
    api.logError("Example error logging")

    api.settrusted_ids_out(Base_Types.Bits_empty())
    api.sendautomation_request_out(Base_Types.Bits_empty())
    api.sendoperating_region_out(Base_Types.Bits_empty())
    api.sendline_search_task_out(Base_Types.Bits_empty())
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
