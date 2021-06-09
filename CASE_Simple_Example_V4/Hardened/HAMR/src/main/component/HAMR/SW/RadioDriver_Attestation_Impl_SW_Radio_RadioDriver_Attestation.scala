// #Sireum

package HAMR.SW

import org.sireum._
import HAMR._

// This file will not be overwritten so is safe to edit
object RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation {

  def initialise(api: RadioDriver_Attestation_Impl_Initialization_Api): Unit = {
    // example api usage

    api.logInfo("Example info logging")
    api.logDebug("Example debug logging")
    api.logError("Example error logging")

    api.put_MissionCommand(Base_Types.Bits_example())
    api.put_AttestationResponse(Base_Types.Bits_example())
  }

  def handle_AttestationRequest(api: RadioDriver_Attestation_Impl_Operational_Api, value : Base_Types.Bits): Unit = {
    api.logInfo("example handle_AttestationRequest implementation")
    api.logInfo(s"received ${value}")
    // example api usage

    val apiUsage_AttestationRequest: Option[Base_Types.Bits] = api.get_AttestationRequest()
    api.logInfo(s"Received on AttestationRequest: ${apiUsage_AttestationRequest}")
    val apiUsage_Alert: Option[art.Empty] = api.get_Alert()
    api.logInfo(s"Received on Alert: ${apiUsage_Alert}")
  }

  def handle_Alert(api: RadioDriver_Attestation_Impl_Operational_Api): Unit = {
    api.logInfo("example handle_Alert implementation")
    api.logInfo("received Alert event")
  }

  def activate(api: RadioDriver_Attestation_Impl_Operational_Api): Unit = { }

  def deactivate(api: RadioDriver_Attestation_Impl_Operational_Api): Unit = { }

  def finalise(api: RadioDriver_Attestation_Impl_Operational_Api): Unit = { }

  def recover(api: RadioDriver_Attestation_Impl_Operational_Api): Unit = { }
}