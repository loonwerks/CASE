// #Sireum

package HAMR.SW

import org.sireum._
import HAMR._

// This file will not be overwritten so is safe to edit
object CASE_AttestationGate_Impl_SW_AttestationGate_CASE_AttestationGate {

  def initialise(api: CASE_AttestationGate_Impl_Initialization_Api): Unit = {
    // example api usage

    api.logInfo("Example info logging")
    api.logDebug("Example debug logging")
    api.logError("Example error logging")

    api.put_MissionCommand_out(SW.RF_Msg_Impl.example())
  }

  def handle_MissionCommand_in(api: CASE_AttestationGate_Impl_Operational_Api, value : SW.RF_Msg_Impl): Unit = {
    api.logInfo("example handle_MissionCommand_in implementation")
    api.logInfo(s"received ${value}")
    // example api usage

    val apiUsage_MissionCommand_in: Option[SW.RF_Msg_Impl] = api.get_MissionCommand_in()
    api.logInfo(s"Received on MissionCommand_in: ${apiUsage_MissionCommand_in}")
    val apiUsage_TrustedIds: Option[SW.Address_Impl] = api.get_TrustedIds()
    api.logInfo(s"Received on TrustedIds: ${apiUsage_TrustedIds}")
  }

  def handle_TrustedIds(api: CASE_AttestationGate_Impl_Operational_Api, value : SW.Address_Impl): Unit = {
    api.logInfo("example handle_TrustedIds implementation")
    api.logInfo(s"received ${value}")
  }

  def activate(api: CASE_AttestationGate_Impl_Operational_Api): Unit = { }

  def deactivate(api: CASE_AttestationGate_Impl_Operational_Api): Unit = { }

  def finalise(api: CASE_AttestationGate_Impl_Operational_Api): Unit = { }

  def recover(api: CASE_AttestationGate_Impl_Operational_Api): Unit = { }
}
