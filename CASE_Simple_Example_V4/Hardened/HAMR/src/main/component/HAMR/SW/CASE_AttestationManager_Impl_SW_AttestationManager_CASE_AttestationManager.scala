// #Sireum

package HAMR.SW

import org.sireum._
import HAMR._

// This file will not be overwritten so is safe to edit
object CASE_AttestationManager_Impl_SW_AttestationManager_CASE_AttestationManager {

  def initialise(api: CASE_AttestationManager_Impl_Initialization_Api): Unit = {
    // example api usage

    api.logInfo("Example info logging")
    api.logDebug("Example debug logging")
    api.logError("Example error logging")

    api.put_AttestationRequest(CASE_Model_Transformations.CASE_AttestationRequestMsg_Impl.example())
    api.put_TrustedIds(SW.Address_Impl.example())
  }

  def handle_AttestationResponse(api: CASE_AttestationManager_Impl_Operational_Api, value : CASE_Model_Transformations.CASE_AttestationResponseMsg_Impl): Unit = {
    api.logInfo("example handle_AttestationResponse implementation")
    api.logInfo(s"received ${value}")
    // example api usage

    val apiUsage_AttestationResponse: Option[CASE_Model_Transformations.CASE_AttestationResponseMsg_Impl] = api.get_AttestationResponse()
    api.logInfo(s"Received on AttestationResponse: ${apiUsage_AttestationResponse}")
  }

  def activate(api: CASE_AttestationManager_Impl_Operational_Api): Unit = { }

  def deactivate(api: CASE_AttestationManager_Impl_Operational_Api): Unit = { }

  def finalise(api: CASE_AttestationManager_Impl_Operational_Api): Unit = { }

  def recover(api: CASE_AttestationManager_Impl_Operational_Api): Unit = { }
}
