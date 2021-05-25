// #Sireum

package HAMR.SW

import org.sireum._
import HAMR._

// This file will not be overwritten so is safe to edit
object AttestationManager_Impl_SW_AttestationManager_AttestationManager {

  def initialise(api: AttestationManager_Impl_Initialization_Api): Unit = {
    // example api usage

    api.logInfo("Example info logging")
    api.logDebug("Example debug logging")
    api.logError("Example error logging")

    api.put_AttestationRequest(Base_Types.Bits_example())
    api.put_TrustedIds(Base_Types.Bits_example())
  }

  def handle_AttestationResponse(api: AttestationManager_Impl_Operational_Api, value : Base_Types.Bits): Unit = {
    api.logInfo("example handle_AttestationResponse implementation")
    api.logInfo(s"received ${value}")
    // example api usage

    val apiUsage_AttestationResponse: Option[Base_Types.Bits] = api.get_AttestationResponse()
    api.logInfo(s"Received on AttestationResponse: ${apiUsage_AttestationResponse}")
  }

  def activate(api: AttestationManager_Impl_Operational_Api): Unit = { }

  def deactivate(api: AttestationManager_Impl_Operational_Api): Unit = { }

  def finalise(api: AttestationManager_Impl_Operational_Api): Unit = { }

  def recover(api: AttestationManager_Impl_Operational_Api): Unit = { }
}
