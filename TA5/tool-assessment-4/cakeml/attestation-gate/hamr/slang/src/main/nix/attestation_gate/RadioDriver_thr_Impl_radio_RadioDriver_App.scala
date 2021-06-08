// #Sireum

package attestation_gate

import org.sireum._
import art._

// This file was auto-generated.  Do not edit

object RadioDriver_thr_Impl_radio_RadioDriver_App extends App {

  val entryPoints: Bridge.EntryPoints = Arch.top_Impl_Instance_radio_RadioDriver.entryPoints
  val appPortId: Art.PortId = IPCPorts.RadioDriver_thr_Impl_radio_RadioDriver_App
  val appPortIdOpt: Option[Art.PortId] = Some(appPortId)

  def initialiseArchitecture(seed: Z): Unit = {
    Platform.initialise(seed, appPortIdOpt)

    Art.run(Arch.ad)
  }

  def initialise(): Unit = {
    entryPoints.initialise()
  }

  def compute(): Unit = {

    entryPoints.compute()
    Process.sleep(500)
  }

  def finalise(): Unit = {
    entryPoints.finalise()
  }

  def main(args: ISZ[String]): Z = {

    val seed: Z = if (args.size == z"1") {
      val n = Z(args(0)).get
      if (n == z"0") 1 else n
    } else {
      1
    }

    initialiseArchitecture(seed)

    Platform.receive(appPortIdOpt, IPCPorts.emptyReceiveOut) // pause after setting up component

    initialise()

    Platform.receive(appPortIdOpt, IPCPorts.emptyReceiveOut) // pause after component init

    println("RadioDriver_thr_Impl_radio_RadioDriver_App starting ...")

    ArtNix.timeDispatch()

    var terminated = F
    while (!terminated) {
      val out = IPCPorts.emptyReceiveAsyncOut
      Platform.receiveAsync(appPortIdOpt, out)
      if (out.value2.isEmpty) {
        compute()
      } else {
        terminated = T
      }
    }
    exit()

    touch()

    return 0
  }

  def touch(): Unit = {
    if(F) {
      TranspilerToucher.touch()

      // touch each payload/type in case some are only used as a field in a record
      def printDataContent(a: art.DataContent): Unit = { println(s"${a}") }

      printDataContent(Base_Types.Bits_Payload(Base_Types.Bits_example()))
      printDataContent(art.Empty())

      attestation_gate.RadioDriver.RadioDriver_thr_Impl_radio_RadioDriver_Bridge.c_initialization_api.get.logInfo("")
      attestation_gate.RadioDriver.RadioDriver_thr_Impl_radio_RadioDriver_Bridge.c_initialization_api.get.logDebug("")
      attestation_gate.RadioDriver.RadioDriver_thr_Impl_radio_RadioDriver_Bridge.c_initialization_api.get.logError("")
      attestation_gate.RadioDriver.RadioDriver_thr_Impl_radio_RadioDriver_Bridge.c_operational_api.get.logInfo("")
      attestation_gate.RadioDriver.RadioDriver_thr_Impl_radio_RadioDriver_Bridge.c_operational_api.get.logDebug("")
      attestation_gate.RadioDriver.RadioDriver_thr_Impl_radio_RadioDriver_Bridge.c_operational_api.get.logError("")
      attestation_gate.RadioDriver.RadioDriver_thr_Impl_radio_RadioDriver_Bridge.c_initialization_api.get.put_trusted_ids_out(Base_Types.Bits_example())
      attestation_gate.RadioDriver.RadioDriver_thr_Impl_radio_RadioDriver_Bridge.c_operational_api.get.put_trusted_ids_out(Base_Types.Bits_example())
      attestation_gate.RadioDriver.RadioDriver_thr_Impl_radio_RadioDriver_Bridge.c_initialization_api.get.put_automation_request_out(Base_Types.Bits_example())
      attestation_gate.RadioDriver.RadioDriver_thr_Impl_radio_RadioDriver_Bridge.c_operational_api.get.put_automation_request_out(Base_Types.Bits_example())
      attestation_gate.RadioDriver.RadioDriver_thr_Impl_radio_RadioDriver_Bridge.c_initialization_api.get.put_operating_region_out(Base_Types.Bits_example())
      attestation_gate.RadioDriver.RadioDriver_thr_Impl_radio_RadioDriver_Bridge.c_operational_api.get.put_operating_region_out(Base_Types.Bits_example())
      attestation_gate.RadioDriver.RadioDriver_thr_Impl_radio_RadioDriver_Bridge.c_initialization_api.get.put_line_search_task_out(Base_Types.Bits_example())
      attestation_gate.RadioDriver.RadioDriver_thr_Impl_radio_RadioDriver_Bridge.c_operational_api.get.put_line_search_task_out(Base_Types.Bits_example())
    }
  }

  def exit(): Unit = {
    finalise()
    Platform.finalise()
  }

  override def atExit(): Unit = {
    exit()
  }
}