// #Sireum

package HAMR.SW

import org.sireum._
import HAMR._

// This file will not be overwritten so is safe to edit
object Filter_Impl_SW_Filter_Filter {

  def initialise(api: Filter_Impl_Initialization_Api): Unit = {
    // example api usage

    api.logInfo("Example info logging")
    api.logDebug("Example debug logging")
    api.logError("Example error logging")

    api.put_Output(Base_Types.Bits_example())
  }

  def handle_Input(api: Filter_Impl_Operational_Api, value : Base_Types.Bits): Unit = {
    api.logInfo("example handle_Input implementation")
    api.logInfo(s"received ${value}")
    // example api usage

    val apiUsage_Input: Option[Base_Types.Bits] = api.get_Input()
    api.logInfo(s"Received on Input: ${apiUsage_Input}")
  }

  def activate(api: Filter_Impl_Operational_Api): Unit = { }

  def deactivate(api: Filter_Impl_Operational_Api): Unit = { }

  def finalise(api: Filter_Impl_Operational_Api): Unit = { }

  def recover(api: Filter_Impl_Operational_Api): Unit = { }
}
