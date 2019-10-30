// #Sireum

package ACT_Demo_Dec2018__camkes_X

import org.sireum._
import art._

// This file was auto-generated.  Do not edit

object ArtNix {

  val maxPortIds: Art.PortId = IPCPorts.Main + 1
  val timeTriggered: TimeTriggered = TimeTriggered()
  val data: MS[Art.PortId, Option[DataContent]] = MS.create(maxPortIds, None())
  val noData: Option[DataContent] = None()
  val connection: MS[Art.PortId, ISZ[(Art.PortId, Art.PortId)]] = {
    val r = MS.create[Art.PortId, ISZ[(Art.PortId, Art.PortId)]](maxPortIds, ISZ())

    r(Arch.UAV_Impl_Instance_MCMP_PROC_SW_RADIO.recv_map_out.id) = ISZ(
      (IPCPorts.FlightPlanner_Impl_App, Arch.UAV_Impl_Instance_MCMP_PROC_SW_FPLN.recv_map.id)
    )
    r(Arch.UAV_Impl_Instance_MCMP_PROC_SW_FPLN.flight_plan.id) = ISZ(
      (IPCPorts.WaypointManager_Impl_App, Arch.UAV_Impl_Instance_MCMP_PROC_SW_WPM.flight_plan.id)
    )
    r(Arch.UAV_Impl_Instance_MCMP_PROC_SW_WPM.mission_rcv.id) = ISZ(
      (IPCPorts.FlightPlanner_Impl_App, Arch.UAV_Impl_Instance_MCMP_PROC_SW_FPLN.mission_rcv.id)
    )
    r(Arch.UAV_Impl_Instance_MCMP_PROC_SW_WPM.mission_window.id) = ISZ(
      (IPCPorts.UARTDriver_Impl_App, Arch.UAV_Impl_Instance_MCMP_PROC_SW_UART.mission_window.id)
    )
    r(Arch.UAV_Impl_Instance_MCMP_PROC_SW_UART.tracking_id.id) = ISZ(
      (IPCPorts.WaypointManager_Impl_App, Arch.UAV_Impl_Instance_MCMP_PROC_SW_WPM.tracking_id.id)
    )

    r
  }
  val eventInPorts: MS[Z, Art.PortId] = MSZ(
    Arch.UAV_Impl_Instance_MCMP_UART_HW.position_status_inn.id,
    Arch.UAV_Impl_Instance_MCMP_PROC_SW_WPM.flight_plan.id,
    Arch.UAV_Impl_Instance_MCMP_PROC_SW_WPM.tracking_id.id,
    Arch.UAV_Impl_Instance_MCMP_RADIO_HW.recv_map_inn.id,
    Arch.UAV_Impl_Instance_MCMP_RADIO_HW.send_status_inn.id,
    Arch.UAV_Impl_Instance_MCMP_PROC_SW_FPLN.mission_rcv.id,
    Arch.UAV_Impl_Instance_MCMP_PROC_SW_FPLN.recv_map.id,
    Arch.UAV_Impl_Instance_MCMP_PROC_SW_UART.mission_window.id
  )
  var frozen: MS[Art.PortId, Option[DataContent]] = MS()
  var outgoing: MS[Art.PortId, Option[DataContent]] = MS.create(maxPortIds, None())
  var isTimeDispatch: B = F

  def updateData(port: Art.PortId, d: DataContent): Unit = {
    data(port) = Some(d)
  }

  def timeDispatch(): Unit = {
    isTimeDispatch = T
  }

  def eventDispatch(): Unit = {
    isTimeDispatch = F
  }

  def dispatchStatus(bridgeId: Art.BridgeId): DispatchStatus = {
    if (isTimeDispatch) {
      return timeTriggered
    } else {
      var r = ISZ[Art.PortId]()
      for (i <- eventInPorts if data(i).nonEmpty) {
        r = r :+ i
      }
      return EventTriggered(r)
    }
  }

  def receiveInput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    frozen = data
    for (i <- eventPortIds) {
      data(i) = noData
    }
  }

  def putValue(portId: Art.PortId, data: DataContent): Unit = {
    outgoing(portId) = Some(data)
  }

  def getValue(portId: Art.PortId): Option[DataContent] = {
    return frozen(portId)
  }

  def sendOutput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    for (p <- dataPortIds) {
      outgoing(p) match {
        case Some(d) =>
          outgoing(p) = noData
          for(e <- connection(p)){
            Platform.sendAsync(e._1, e._2, d)
          }
        case _ =>
      }
    }

    for (p <- eventPortIds) {
      outgoing(p) match {
        case Some(d) =>
          outgoing(p) = noData
          for(e <- connection(p)){
            Platform.sendAsync(e._1, e._2, d)
          }
        case _ =>
      }
    }
  }

  def logInfo(title: String, msg: String): Unit = {
    print(title)
    print(": ")
    println(msg)
  }

  def logError(title: String, msg: String): Unit = {
    eprint(title)
    eprint(": ")
    eprintln(msg)
  }

  def logDebug(title: String, msg: String): Unit = {
    print(title)
    print(": ")
    println(msg)
  }

  def run(): Unit = {
  }
}
