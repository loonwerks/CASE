// #Sireum

package attestation_gate

import org.sireum._
import art._

// This file was auto-generated.  Do not edit

object IPCPorts {
  val UxAS_thr_Impl_uxas_UxAS_thread_App: Art.PortId = 14
  val RadioDriver_thr_Impl_radio_RadioDriver_App: Art.PortId = 15
  val CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_App: Art.PortId = 16
  val Main: Art.PortId = 17

  def emptyReceiveOut: MBox2[Art.PortId, DataContent] = {
    return MBox2(-1, art.Empty())
  }

  def emptyReceiveAsyncOut: MBox2[Art.PortId, Option[DataContent]] = {
    return MBox2(-1, None())
  }
}
