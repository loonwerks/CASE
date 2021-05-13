// #Sireum

package HAMR.SW

import org.sireum._
import HAMR._

// This file will not be overwritten so is safe to edit
object UARTDriver_Impl_SW_UART_UARTDriver {

  def initialise(api: UARTDriver_Impl_Initialization_Api): Unit = {
    // example api usage

    api.logInfo("Example info logging")
    api.logDebug("Example debug logging")
    api.logError("Example error logging")

    api.put_Status(SW.Coordinate_Impl.example())
  }

  def handle_MissionWindow(api: UARTDriver_Impl_Operational_Api, value : SW.MissionWindow): Unit = {
    api.logInfo("example handle_MissionWindow implementation")
    api.logInfo(s"received ${value}")
    // example api usage

    val apiUsage_MissionWindow: Option[SW.MissionWindow] = api.get_MissionWindow()
    api.logInfo(s"Received on MissionWindow: ${apiUsage_MissionWindow}")
  }

  def activate(api: UARTDriver_Impl_Operational_Api): Unit = { }

  def deactivate(api: UARTDriver_Impl_Operational_Api): Unit = { }

  def finalise(api: UARTDriver_Impl_Operational_Api): Unit = { }

  def recover(api: UARTDriver_Impl_Operational_Api): Unit = { }
}
