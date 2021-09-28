// #Sireum

package hamr

import org.sireum._
import art._
import art.scheduling.nop.NopScheduler

// This file was auto-generated.  Do not edit

object UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App extends App {

  val entryPoints: Bridge.EntryPoints = Arch.UAV_Impl_Instance_MCMP_PROC_SW_UXAS_UxAS.entryPoints
  val appPortId: Art.PortId = IPCPorts.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App
  val appPortIdOpt: Option[Art.PortId] = Some(appPortId)
  val AutomationRequestPortId: Art.PortId = Arch.UAV_Impl_Instance_MCMP_PROC_SW_UXAS_UxAS.AutomationRequest.id
  val AutomationRequestPortIdOpt: Option[Art.PortId] = Some(AutomationRequestPortId)
  val AirVehicleStatePortId: Art.PortId = Arch.UAV_Impl_Instance_MCMP_PROC_SW_UXAS_UxAS.AirVehicleState.id
  val AirVehicleStatePortIdOpt: Option[Art.PortId] = Some(AirVehicleStatePortId)
  val OperatingRegionPortId: Art.PortId = Arch.UAV_Impl_Instance_MCMP_PROC_SW_UXAS_UxAS.OperatingRegion.id
  val OperatingRegionPortIdOpt: Option[Art.PortId] = Some(OperatingRegionPortId)
  val LineSearchTaskPortId: Art.PortId = Arch.UAV_Impl_Instance_MCMP_PROC_SW_UXAS_UxAS.LineSearchTask.id
  val LineSearchTaskPortIdOpt: Option[Art.PortId] = Some(LineSearchTaskPortId)

  def initialiseArchitecture(seed: Z): Unit = {
    Platform.initialise(seed, appPortIdOpt)
    Platform.initialise(seed, AutomationRequestPortIdOpt)
    Platform.initialise(seed, AirVehicleStatePortIdOpt)
    Platform.initialise(seed, OperatingRegionPortIdOpt)
    Platform.initialise(seed, LineSearchTaskPortIdOpt)

    Art.run(Arch.ad, NopScheduler())
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
      Platform.receiveAsync(AirVehicleStatePortIdOpt, out)
      out.value2 match {
        case Some(v: Base_Types.Bits_Payload) => ArtNix.updateData(AirVehicleStatePortId, v)
        case Some(v) => halt(s"Unexpected payload on port AirVehicleState.  Expecting something of type Base_Types.Bits_Payload but received ${v}")
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

    println("UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App starting ...")

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

      hamr.SW.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge.c_initialization_api.get.logInfo("")
      hamr.SW.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge.c_initialization_api.get.logDebug("")
      hamr.SW.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge.c_initialization_api.get.logError("")
      hamr.SW.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge.c_operational_api.get.logInfo("")
      hamr.SW.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge.c_operational_api.get.logDebug("")
      hamr.SW.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge.c_operational_api.get.logError("")
      val apiUsage_AutomationRequest: Option[Base_Types.Bits] = hamr.SW.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge.c_operational_api.get.get_AutomationRequest()
      val apiUsage_AirVehicleState: Option[Base_Types.Bits] = hamr.SW.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge.c_operational_api.get.get_AirVehicleState()
      val apiUsage_OperatingRegion: Option[Base_Types.Bits] = hamr.SW.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge.c_operational_api.get.get_OperatingRegion()
      val apiUsage_LineSearchTask: Option[Base_Types.Bits] = hamr.SW.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge.c_operational_api.get.get_LineSearchTask()
      hamr.SW.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge.c_initialization_api.get.put_AutomationResponse_MON_GEO(Base_Types.Bits_example())
      hamr.SW.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge.c_operational_api.get.put_AutomationResponse_MON_GEO(Base_Types.Bits_example())
      hamr.SW.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge.c_initialization_api.get.put_AutomationResponse_MON_REQ(Base_Types.Bits_example())
      hamr.SW.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge.c_operational_api.get.put_AutomationResponse_MON_REQ(Base_Types.Bits_example())
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