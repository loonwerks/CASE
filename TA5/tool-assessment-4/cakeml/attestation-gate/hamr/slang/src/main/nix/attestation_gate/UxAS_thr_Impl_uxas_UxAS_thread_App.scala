// #Sireum

package attestation_gate

import org.sireum._
import art._

// This file was auto-generated.  Do not edit

object UxAS_thr_Impl_uxas_UxAS_thread_App extends App {

  val entryPoints: Bridge.EntryPoints = Arch.top_Impl_Instance_uxas_UxAS_thread.entryPoints
  val appPortId: Art.PortId = IPCPorts.UxAS_thr_Impl_uxas_UxAS_thread_App
  val appPortIdOpt: Option[Art.PortId] = Some(appPortId)
  val AutomationRequestPortId: Art.PortId = Arch.top_Impl_Instance_uxas_UxAS_thread.AutomationRequest.id
  val AutomationRequestPortIdOpt: Option[Art.PortId] = Some(AutomationRequestPortId)
  val OperatingRegionPortId: Art.PortId = Arch.top_Impl_Instance_uxas_UxAS_thread.OperatingRegion.id
  val OperatingRegionPortIdOpt: Option[Art.PortId] = Some(OperatingRegionPortId)
  val LineSearchTaskPortId: Art.PortId = Arch.top_Impl_Instance_uxas_UxAS_thread.LineSearchTask.id
  val LineSearchTaskPortIdOpt: Option[Art.PortId] = Some(LineSearchTaskPortId)

  def initialiseArchitecture(seed: Z): Unit = {
    Platform.initialise(seed, appPortIdOpt)
    Platform.initialise(seed, AutomationRequestPortIdOpt)
    Platform.initialise(seed, OperatingRegionPortIdOpt)
    Platform.initialise(seed, LineSearchTaskPortIdOpt)

    Art.run(Arch.ad)
  }

  def initialise(): Unit = {
    entryPoints.initialise()
  }

  def compute(): Unit = {

    {
      val out = IPCPorts.emptyReceiveAsyncOut
      Platform.receiveAsync(AutomationRequestPortIdOpt, out)
      out.value2 match {
        case Some(v: Base_Types.Bits_Payload) => ArtNix.updateData(AutomationRequestPortId, v)
        case Some(v) => halt(s"Unexpected payload on port AutomationRequest.  Expecting something of type Base_Types.Bits_Payload but received ${v}")
        case None() => // do nothing
      }
    }
    {
      val out = IPCPorts.emptyReceiveAsyncOut
      Platform.receiveAsync(OperatingRegionPortIdOpt, out)
      out.value2 match {
        case Some(v: Base_Types.Bits_Payload) => ArtNix.updateData(OperatingRegionPortId, v)
        case Some(v) => halt(s"Unexpected payload on port OperatingRegion.  Expecting something of type Base_Types.Bits_Payload but received ${v}")
        case None() => // do nothing
      }
    }
    {
      val out = IPCPorts.emptyReceiveAsyncOut
      Platform.receiveAsync(LineSearchTaskPortIdOpt, out)
      out.value2 match {
        case Some(v: Base_Types.Bits_Payload) => ArtNix.updateData(LineSearchTaskPortId, v)
        case Some(v) => halt(s"Unexpected payload on port LineSearchTask.  Expecting something of type Base_Types.Bits_Payload but received ${v}")
        case None() => // do nothing
      }
    }
    entryPoints.compute()
    Process.sleep(1000)
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

    println("UxAS_thr_Impl_uxas_UxAS_thread_App starting ...")

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

      attestation_gate.SysContext.UxAS_thr_Impl_uxas_UxAS_thread_Bridge.c_initialization_api.get.logInfo("")
      attestation_gate.SysContext.UxAS_thr_Impl_uxas_UxAS_thread_Bridge.c_initialization_api.get.logDebug("")
      attestation_gate.SysContext.UxAS_thr_Impl_uxas_UxAS_thread_Bridge.c_initialization_api.get.logError("")
      attestation_gate.SysContext.UxAS_thr_Impl_uxas_UxAS_thread_Bridge.c_operational_api.get.logInfo("")
      attestation_gate.SysContext.UxAS_thr_Impl_uxas_UxAS_thread_Bridge.c_operational_api.get.logDebug("")
      attestation_gate.SysContext.UxAS_thr_Impl_uxas_UxAS_thread_Bridge.c_operational_api.get.logError("")
      val apiUsage_AutomationRequest: Option[Base_Types.Bits] = attestation_gate.SysContext.UxAS_thr_Impl_uxas_UxAS_thread_Bridge.c_operational_api.get.get_AutomationRequest()
      val apiUsage_OperatingRegion: Option[Base_Types.Bits] = attestation_gate.SysContext.UxAS_thr_Impl_uxas_UxAS_thread_Bridge.c_operational_api.get.get_OperatingRegion()
      val apiUsage_LineSearchTask: Option[Base_Types.Bits] = attestation_gate.SysContext.UxAS_thr_Impl_uxas_UxAS_thread_Bridge.c_operational_api.get.get_LineSearchTask()
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