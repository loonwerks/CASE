// #Sireum

package hamr.Drivers

import org.sireum._
import hamr._

// This file will not be overwritten so is safe to edit
object UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver {

  def initialise(api: UARTDriver_Impl_Initialization_Api): Unit = {
    // example api usage

    api.logInfo("Example info logging")
    api.logDebug("Example debug logging")
    api.logError("Example error logging")

    api.put_send_data(Base_Types.Bits_example())
    api.put_AirVehicleState_WPM(Base_Types.Bits_example())
    api.put_AirVehicleState_UXAS(Base_Types.Bits_example())
  }

  def timeTriggered(api: UARTDriver_Impl_Operational_Api): Unit = {
    // example api usage

    val apiUsage_recv_data: Option[Base_Types.Bits] = api.get_recv_data()
    api.logInfo(s"Received on recv_data: ${apiUsage_recv_data}")
    val apiUsage_MissionCommand: Option[Base_Types.Bits] = api.get_MissionCommand()
    api.logInfo(s"Received on MissionCommand: ${apiUsage_MissionCommand}")
  }

  def activate(api: UARTDriver_Impl_Operational_Api): Unit = { }

  def deactivate(api: UARTDriver_Impl_Operational_Api): Unit = { }

  def finalise(api: UARTDriver_Impl_Operational_Api): Unit = { }

  def recover(api: UARTDriver_Impl_Operational_Api): Unit = { }
}
