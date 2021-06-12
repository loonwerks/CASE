// #Sireum

package HAMR.SW

import org.sireum._
import HAMR._

// This file will not be overwritten so is safe to edit
object AttestationGate_Impl_AttestationGate_AttestationGate {

  def initialise(api: AttestationGate_Impl_Initialization_Api): Unit = { }

  def handle_MissionCommand_in(api: AttestationGate_Impl_Operational_Api, value : SW.RF_Msg_Impl): Unit = { }

  def handle_TrustedIds(api: AttestationGate_Impl_Operational_Api, value : SW.AllowList_Impl): Unit = { }

  def activate(api: AttestationGate_Impl_Operational_Api): Unit = { }

  def deactivate(api: AttestationGate_Impl_Operational_Api): Unit = { }

  def finalise(api: AttestationGate_Impl_Operational_Api): Unit = { }

  def recover(api: AttestationGate_Impl_Operational_Api): Unit = { }
}
