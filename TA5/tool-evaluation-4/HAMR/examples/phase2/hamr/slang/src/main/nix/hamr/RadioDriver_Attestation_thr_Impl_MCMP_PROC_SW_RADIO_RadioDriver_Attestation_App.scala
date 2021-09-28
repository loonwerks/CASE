// #Sireum

package hamr

import org.sireum._
import art._
import art.scheduling.nop.NopScheduler

// This file was auto-generated.  Do not edit

object RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App extends App {

  val entryPoints: Bridge.EntryPoints = Arch.UAV_Impl_Instance_MCMP_PROC_SW_RADIO_RadioDriver_Attestation.entryPoints
  val appPortId: Art.PortId = IPCPorts.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App
  val appPortIdOpt: Option[Art.PortId] = Some(appPortId)
  val recv_dataPortId: Art.PortId = Arch.UAV_Impl_Instance_MCMP_PROC_SW_RADIO_RadioDriver_Attestation.recv_data.id
  val recv_dataPortIdOpt: Option[Art.PortId] = Some(recv_dataPortId)

  def initialiseArchitecture(seed: Z): Unit = {
    Platform.initialise(seed, appPortIdOpt)
    Platform.initialise(seed, recv_dataPortIdOpt)

    Art.run(Arch.ad, NopScheduler())
  }

  def initialise(): Unit = {
    entryPoints.initialise()
  }

  def compute(): Unit = {

    {
      val out = IPCPorts.emptyReceiveAsyncOut
      Platform.receiveAsync(recv_dataPortIdOpt, out)
      out.value2 match {
        case Some(v: Base_Types.Bits_Payload) => ArtNix.updateData(recv_dataPortId, v)
        case Some(v) => halt(s"Unexpected payload on port recv_data.  Expecting something of type Base_Types.Bits_Payload but received ${v}")
        case None() => // do nothing
      }
    }
    entryPoints.compute()
    hamr.Process.sleep(500)
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

    println("RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App starting ...")

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

      // add types used in Platform.receive and Platform.receiveAsync
      val mbox2Boolean_Payload: MBox2[Art.PortId, DataContent] = MBox2(0, Base_Types.Boolean_Payload(T))
      val mbox2OptionDataContent: MBox2[Art.PortId, Option[DataContent]] = MBox2(0, None())

      // touch each payload/type in case some are only used as a field in a record
      def printDataContent(a: art.DataContent): Unit = { println(s"${a}") }

      printDataContent(Base_Types.Bits_Payload(Base_Types.Bits_example()))
      printDataContent(art.Empty())

      hamr.SW.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge.c_initialization_api.get.logInfo("")
      hamr.SW.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge.c_initialization_api.get.logDebug("")
      hamr.SW.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge.c_initialization_api.get.logError("")
      hamr.SW.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge.c_operational_api.get.logInfo("")
      hamr.SW.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge.c_operational_api.get.logDebug("")
      hamr.SW.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge.c_operational_api.get.logError("")
      val apiUsage_recv_data: Option[Base_Types.Bits] = hamr.SW.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge.c_operational_api.get.get_recv_data()
      hamr.SW.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge.c_initialization_api.get.put_send_data(Base_Types.Bits_example())
      hamr.SW.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge.c_operational_api.get.put_send_data(Base_Types.Bits_example())
      hamr.SW.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge.c_initialization_api.get.put_trusted_ids(Base_Types.Bits_example())
      hamr.SW.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge.c_operational_api.get.put_trusted_ids(Base_Types.Bits_example())
      hamr.SW.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge.c_initialization_api.get.put_AutomationRequest(Base_Types.Bits_example())
      hamr.SW.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge.c_operational_api.get.put_AutomationRequest(Base_Types.Bits_example())
      hamr.SW.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge.c_initialization_api.get.put_OperatingRegion(Base_Types.Bits_example())
      hamr.SW.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge.c_operational_api.get.put_OperatingRegion(Base_Types.Bits_example())
      hamr.SW.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge.c_initialization_api.get.put_LineSearchTask(Base_Types.Bits_example())
      hamr.SW.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge.c_operational_api.get.put_LineSearchTask(Base_Types.Bits_example())
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