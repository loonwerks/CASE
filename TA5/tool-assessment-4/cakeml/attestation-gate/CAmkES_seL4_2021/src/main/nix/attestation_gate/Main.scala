// #Sireum

package attestation_gate

import org.sireum._
import art._

// This file was auto-generated.  Do not edit

object Main extends App {
  def main(args: ISZ[String]): Z = {

    val seed: Z = if (args.size == z"1") {
      val n = Z(args(0)).get
      if (n == z"0") 1 else n
    } else {
      1
    }

    Platform.initialise(seed, None())

    val empty = art.Empty()

    Platform.sendAsync(IPCPorts.UxAS_thr_Impl_uxas_UxAS_thread_App, IPCPorts.UxAS_thr_Impl_uxas_UxAS_thread_App, empty)
    Platform.sendAsync(IPCPorts.RadioDriver_thr_Impl_radio_RadioDriver_App, IPCPorts.RadioDriver_thr_Impl_radio_RadioDriver_App, empty)
    Platform.sendAsync(IPCPorts.CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_App, IPCPorts.CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_App, empty)

    Platform.finalise()
    return 0
  }
}
