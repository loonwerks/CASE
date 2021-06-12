// #Sireum

package HAMR.SW

import org.sireum._
import HAMR._

// This file will not be overwritten so is safe to edit
object RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation {

  def initialise(api: RadioDriver_Attestation_Impl_Initialization_Api): Unit = { }

  def handle_AttestationTesterResponse(api: RadioDriver_Attestation_Impl_Operational_Api, value : SW.AttestationResponseMsg_Impl): Unit = { }

  def handle_AttestationRequest(api: RadioDriver_Attestation_Impl_Operational_Api, value : SW.AttestationRequestMsg_Impl): Unit = { }

  def activate(api: RadioDriver_Attestation_Impl_Operational_Api): Unit = { }

  def deactivate(api: RadioDriver_Attestation_Impl_Operational_Api): Unit = { }

  def finalise(api: RadioDriver_Attestation_Impl_Operational_Api): Unit = { }

  def recover(api: RadioDriver_Attestation_Impl_Operational_Api): Unit = { }
}
