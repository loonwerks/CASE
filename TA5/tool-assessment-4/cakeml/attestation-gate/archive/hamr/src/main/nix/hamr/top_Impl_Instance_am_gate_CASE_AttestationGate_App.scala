// #Sireum

package hamr

import org.sireum._
import art._

// This file was auto-generated.  Do not edit

object top_Impl_Instance_am_gate_CASE_AttestationGate_App extends App {

  val entryPoints: Bridge.EntryPoints = Arch.top_Impl_Instance_am_gate_CASE_AttestationGate.entryPoints
  val appPortId: Art.PortId = IPCPorts.top_Impl_Instance_am_gate_CASE_AttestationGate_App
  val appPortIdOpt: Option[Art.PortId] = Some(appPortId)
  val trusted_idsPortId: Art.PortId = Arch.top_Impl_Instance_am_gate_CASE_AttestationGate.trusted_ids.id
  val trusted_idsPortIdOpt: Option[Art.PortId] = Some(trusted_idsPortId)
  val AutomationRequest_inPortId: Art.PortId = Arch.top_Impl_Instance_am_gate_CASE_AttestationGate.AutomationRequest_in.id
  val AutomationRequest_inPortIdOpt: Option[Art.PortId] = Some(AutomationRequest_inPortId)
  val OperatingRegion_inPortId: Art.PortId = Arch.top_Impl_Instance_am_gate_CASE_AttestationGate.OperatingRegion_in.id
  val OperatingRegion_inPortIdOpt: Option[Art.PortId] = Some(OperatingRegion_inPortId)
  val LineSearchTask_inPortId: Art.PortId = Arch.top_Impl_Instance_am_gate_CASE_AttestationGate.LineSearchTask_in.id
  val LineSearchTask_inPortIdOpt: Option[Art.PortId] = Some(LineSearchTask_inPortId)

  def initialiseArchitecture(seed: Z): Unit = {
    Platform.initialise(seed, appPortIdOpt)
    Platform.initialise(seed, trusted_idsPortIdOpt)
    Platform.initialise(seed, AutomationRequest_inPortIdOpt)
    Platform.initialise(seed, OperatingRegion_inPortIdOpt)
    Platform.initialise(seed, LineSearchTask_inPortIdOpt)

    Art.run(Arch.ad)
  }

  def initialise(): Unit = {
    entryPoints.initialise()
  }

  def compute(): Unit = {
    Platform.receiveAsync(trusted_idsPortIdOpt) match {
      case Some((_, v: Base_Types.Bits_Payload)) => ArtNix.updateData(trusted_idsPortId, v)
      case Some((_, v)) => halt(s"Unexpected payload on port trusted_ids.  Expecting something of type Base_Types.Bits_Payload but received ${v}")
      case None() => // do nothing
    }
    Platform.receiveAsync(AutomationRequest_inPortIdOpt) match {
      case Some((_, v: Base_Types.Bits_Payload)) => ArtNix.updateData(AutomationRequest_inPortId, v)
      case Some((_, v)) => halt(s"Unexpected payload on port AutomationRequest_in.  Expecting something of type Base_Types.Bits_Payload but received ${v}")
      case None() => // do nothing
    }
    Platform.receiveAsync(OperatingRegion_inPortIdOpt) match {
      case Some((_, v: Base_Types.Bits_Payload)) => ArtNix.updateData(OperatingRegion_inPortId, v)
      case Some((_, v)) => halt(s"Unexpected payload on port OperatingRegion_in.  Expecting something of type Base_Types.Bits_Payload but received ${v}")
      case None() => // do nothing
    }
    Platform.receiveAsync(LineSearchTask_inPortIdOpt) match {
      case Some((_, v: Base_Types.Bits_Payload)) => ArtNix.updateData(LineSearchTask_inPortId, v)
      case Some((_, v)) => halt(s"Unexpected payload on port LineSearchTask_in.  Expecting something of type Base_Types.Bits_Payload but received ${v}")
      case None() => // do nothing
    }
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

    Platform.receive(appPortIdOpt) // pause after setting up component

    initialise()

    Platform.receive(appPortIdOpt) // pause after component init

    println("top_Impl_Instance_am_gate_CASE_AttestationGate_App starting ...")

    ArtNix.timeDispatch()

    var terminated = F
    while (!terminated) {
      val termOpt = Platform.receiveAsync(appPortIdOpt)
      if (termOpt.isEmpty) {
        compute()
      } else {
        terminated = T
      }
    }
    exit()

    return 0
  }

  def exit(): Unit = {
    finalise()
    Platform.finalise()
  }

  override def atExit(): Unit = {
    exit()
  }
}