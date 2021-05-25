// #Sireum

package HAMR.SW

import org.sireum._
import HAMR._

// This file will not be overwritten so is safe to edit
object AttestationGate_Impl_SW_AttestationGate_AttestationGate {

  def initialise(api: AttestationGate_Impl_Initialization_Api): Unit = {
    // example api usage

    api.logInfo("Example info logging")
    api.logDebug("Example debug logging")
    api.logError("Example error logging")

    api.put_MissionCommand_out(Base_Types.Bits_example())
  }

  def handle_MissionCommand_in(api: AttestationGate_Impl_Operational_Api, value : Base_Types.Bits): Unit = {
    api.logInfo("example handle_MissionCommand_in implementation")
    api.logInfo(s"received ${value}")
    // example api usage

    val apiUsage_MissionCommand_in: Option[Base_Types.Bits] = api.get_MissionCommand_in()
    api.logInfo(s"Received on MissionCommand_in: ${apiUsage_MissionCommand_in}")
    val apiUsage_TrustedIds: Option[Base_Types.Bits] = api.get_TrustedIds()
    api.logInfo(s"Received on TrustedIds: ${apiUsage_TrustedIds}")
  }

  def handle_TrustedIds(api: AttestationGate_Impl_Operational_Api, value : Base_Types.Bits): Unit = {
    api.logInfo("example handle_TrustedIds implementation")
    api.logInfo(s"received ${value}")
  }

  def activate(api: AttestationGate_Impl_Operational_Api): Unit = { }

  def deactivate(api: AttestationGate_Impl_Operational_Api): Unit = { }

  def finalise(api: AttestationGate_Impl_Operational_Api): Unit = { }

  def recover(api: AttestationGate_Impl_Operational_Api): Unit = { }
}
