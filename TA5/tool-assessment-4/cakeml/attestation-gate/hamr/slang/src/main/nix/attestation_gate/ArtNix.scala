// #Sireum

package attestation_gate

import org.sireum._
import art._

// This file was auto-generated.  Do not edit

object ArtNix {

  val maxPortIds: Art.PortId = IPCPorts.Main + 1
  val timeTriggered: TimeTriggered = TimeTriggered()
  val noData: Option[DataContent] = None()
  val data: MS[Art.PortId, Option[DataContent]] = MS.create(maxPortIds, noData)
  val connection: MS[Art.PortId, ISZ[(Art.PortId, Art.PortId)]] = {
    val r = MS.create[Art.PortId, ISZ[(Art.PortId, Art.PortId)]](maxPortIds, ISZ())

    r(Arch.top_Impl_Instance_radio_RadioDriver.trusted_ids_out.id) = ISZ(
      (IPCPorts.CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_App, Arch.top_Impl_Instance_am_gate_CASE_AttestationGate.trusted_ids.id)
    )
    r(Arch.top_Impl_Instance_radio_RadioDriver.automation_request_out.id) = ISZ(
      (IPCPorts.CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_App, Arch.top_Impl_Instance_am_gate_CASE_AttestationGate.AutomationRequest_in.id)
    )
    r(Arch.top_Impl_Instance_radio_RadioDriver.operating_region_out.id) = ISZ(
      (IPCPorts.CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_App, Arch.top_Impl_Instance_am_gate_CASE_AttestationGate.OperatingRegion_in.id)
    )
    r(Arch.top_Impl_Instance_radio_RadioDriver.line_search_task_out.id) = ISZ(
      (IPCPorts.CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_App, Arch.top_Impl_Instance_am_gate_CASE_AttestationGate.LineSearchTask_in.id)
    )
    r(Arch.top_Impl_Instance_am_gate_CASE_AttestationGate.AutomationRequest_out.id) = ISZ(
      (IPCPorts.UxAS_thr_Impl_uxas_UxAS_thread_App, Arch.top_Impl_Instance_uxas_UxAS_thread.AutomationRequest.id)
    )
    r(Arch.top_Impl_Instance_am_gate_CASE_AttestationGate.OperatingRegion_out.id) = ISZ(
      (IPCPorts.UxAS_thr_Impl_uxas_UxAS_thread_App, Arch.top_Impl_Instance_uxas_UxAS_thread.OperatingRegion.id)
    )
    r(Arch.top_Impl_Instance_am_gate_CASE_AttestationGate.LineSearchTask_out.id) = ISZ(
      (IPCPorts.UxAS_thr_Impl_uxas_UxAS_thread_App, Arch.top_Impl_Instance_uxas_UxAS_thread.LineSearchTask.id)
    )

    r
  }
  val eventInPorts: MS[Z, Art.PortId] = MSZ(
    Arch.top_Impl_Instance_uxas_UxAS_thread.AutomationRequest.id,
    Arch.top_Impl_Instance_uxas_UxAS_thread.OperatingRegion.id,
    Arch.top_Impl_Instance_uxas_UxAS_thread.LineSearchTask.id,
    Arch.top_Impl_Instance_am_gate_CASE_AttestationGate.AutomationRequest_in.id,
    Arch.top_Impl_Instance_am_gate_CASE_AttestationGate.OperatingRegion_in.id,
    Arch.top_Impl_Instance_am_gate_CASE_AttestationGate.LineSearchTask_in.id
  )
  var frozen: MS[Art.PortId, Option[DataContent]] = MS.create(maxPortIds, noData)
  var outgoing: MS[Art.PortId, Option[DataContent]] = MS.create(maxPortIds, noData)
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

  def time(): Art.Time = {
    return Process.time()
  }
}
