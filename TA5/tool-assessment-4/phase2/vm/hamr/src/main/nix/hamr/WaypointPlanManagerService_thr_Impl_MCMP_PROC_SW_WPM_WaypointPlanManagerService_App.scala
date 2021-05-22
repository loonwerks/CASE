// #Sireum

package hamr

import org.sireum._
import art._

// This file was auto-generated.  Do not edit

object WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_App extends App {

  val entryPoints: Bridge.EntryPoints = Arch.UAV_Impl_Instance_MCMP_PROC_SW_WPM_WaypointPlanManagerService.entryPoints
  val appPortId: Art.PortId = IPCPorts.WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_App
  val appPortIdOpt: Option[Art.PortId] = Some(appPortId)
  val AutomationResponsePortId: Art.PortId = Arch.UAV_Impl_Instance_MCMP_PROC_SW_WPM_WaypointPlanManagerService.AutomationResponse.id
  val AutomationResponsePortIdOpt: Option[Art.PortId] = Some(AutomationResponsePortId)
  val AirVehicleStatePortId: Art.PortId = Arch.UAV_Impl_Instance_MCMP_PROC_SW_WPM_WaypointPlanManagerService.AirVehicleState.id
  val AirVehicleStatePortIdOpt: Option[Art.PortId] = Some(AirVehicleStatePortId)
  val ReturnHomePortId: Art.PortId = Arch.UAV_Impl_Instance_MCMP_PROC_SW_WPM_WaypointPlanManagerService.ReturnHome.id
  val ReturnHomePortIdOpt: Option[Art.PortId] = Some(ReturnHomePortId)

  def initialiseArchitecture(seed: Z): Unit = {
    Platform.initialise(seed, appPortIdOpt)
    Platform.initialise(seed, AutomationResponsePortIdOpt)
    Platform.initialise(seed, AirVehicleStatePortIdOpt)
    Platform.initialise(seed, ReturnHomePortIdOpt)

    Art.run(Arch.ad)
  }

  def initialise(): Unit = {
    entryPoints.initialise()
  }

  def compute(): Unit = {

    {
      val out = IPCPorts.emptyReceiveAsyncOut
      Platform.receiveAsync(AutomationResponsePortIdOpt, out)
      out.value2 match {
        case Some(v: Base_Types.Bits_Payload) => ArtNix.updateData(AutomationResponsePortId, v)
        case Some(v) => halt(s"Unexpected payload on port AutomationResponse.  Expecting something of type Base_Types.Bits_Payload but received ${v}")
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
      Platform.receiveAsync(ReturnHomePortIdOpt, out)
      out.value2 match {
        case Some(v: art.Empty) => ArtNix.updateData(ReturnHomePortId, v)
        case Some(v) => halt(s"Unexpected payload on port ReturnHome.  Expecting something of type art.Empty but received ${v}")
        case None() => // do nothing
      }
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

    Platform.receive(appPortIdOpt, IPCPorts.emptyReceiveOut) // pause after setting up component

    initialise()

    Platform.receive(appPortIdOpt, IPCPorts.emptyReceiveOut) // pause after component init

    println("WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_App starting ...")

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

      hamr.SW.WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge.c_initialization_api.get.logInfo("")
      hamr.SW.WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge.c_initialization_api.get.logDebug("")
      hamr.SW.WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge.c_initialization_api.get.logError("")
      hamr.SW.WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge.c_operational_api.get.logInfo("")
      hamr.SW.WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge.c_operational_api.get.logDebug("")
      hamr.SW.WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge.c_operational_api.get.logError("")
      val apiUsage_AutomationResponse: Option[Base_Types.Bits] = hamr.SW.WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge.c_operational_api.get.get_AutomationResponse()
      val apiUsage_AirVehicleState: Option[Base_Types.Bits] = hamr.SW.WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge.c_operational_api.get.get_AirVehicleState()
      hamr.SW.WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge.c_initialization_api.get.put_MissionCommand(Base_Types.Bits_example())
      hamr.SW.WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge.c_operational_api.get.put_MissionCommand(Base_Types.Bits_example())
      val apiUsage_ReturnHome: Option[art.Empty] = hamr.SW.WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge.c_operational_api.get.get_ReturnHome()
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