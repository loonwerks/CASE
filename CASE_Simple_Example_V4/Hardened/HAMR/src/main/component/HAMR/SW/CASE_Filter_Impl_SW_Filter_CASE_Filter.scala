// #Sireum

package HAMR.SW

import org.sireum._
import HAMR._

// This file will not be overwritten so is safe to edit
object CASE_Filter_Impl_SW_Filter_CASE_Filter {

  def initialise(api: CASE_Filter_Impl_Initialization_Api): Unit = {
    // example api usage

    api.logInfo("Example info logging")
    api.logDebug("Example debug logging")
    api.logError("Example error logging")

    api.put_Output(SW.RF_Msg_Impl.example())
  }

  def handle_Input(api: CASE_Filter_Impl_Operational_Api, value : SW.RF_Msg_Impl): Unit = {
    api.logInfo("example handle_Input implementation")
    api.logInfo(s"received ${value}")
    // example api usage

    val apiUsage_Input: Option[SW.RF_Msg_Impl] = api.get_Input()
    api.logInfo(s"Received on Input: ${apiUsage_Input}")
  }

  def activate(api: CASE_Filter_Impl_Operational_Api): Unit = { }

  def deactivate(api: CASE_Filter_Impl_Operational_Api): Unit = { }

  def finalise(api: CASE_Filter_Impl_Operational_Api): Unit = { }

  def recover(api: CASE_Filter_Impl_Operational_Api): Unit = { }
}
