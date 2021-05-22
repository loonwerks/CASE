// #Sireum

package attestation_gate.SysContext

import org.sireum._
import art._
import attestation_gate._
import attestation_gate.SysContext.{UxAS_thr_Impl_uxas_UxAS_thread => component}

// This file was auto-generated.  Do not edit

@datatype class UxAS_thr_Impl_uxas_UxAS_thread_Bridge(
  val id: Art.BridgeId,
  val name: String,
  val dispatchProtocol: DispatchPropertyProtocol,
  val dispatchTriggers: Option[ISZ[Art.PortId]],

  AutomationRequest: Port[Base_Types.Bits],
  OperatingRegion: Port[Base_Types.Bits],
  LineSearchTask: Port[Base_Types.Bits]
  ) extends Bridge {

  val ports : Bridge.Ports = Bridge.Ports(
    all = ISZ(AutomationRequest,
              OperatingRegion,
              LineSearchTask),

    dataIns = ISZ(),

    dataOuts = ISZ(),

    eventIns = ISZ(AutomationRequest,
                   OperatingRegion,
                   LineSearchTask),

    eventOuts = ISZ()
  )

  val initialization_api : UxAS_thr_Impl_Initialization_Api = {
    val api = UxAS_thr_Impl_Initialization_Api(
      id,
      AutomationRequest.id,
      OperatingRegion.id,
      LineSearchTask.id
    )
    UxAS_thr_Impl_uxas_UxAS_thread_Bridge.c_initialization_api = Some(api)
    api
  }

  val operational_api : UxAS_thr_Impl_Operational_Api = {
    val api = UxAS_thr_Impl_Operational_Api(
      id,
      AutomationRequest.id,
      OperatingRegion.id,
      LineSearchTask.id
    )
    UxAS_thr_Impl_uxas_UxAS_thread_Bridge.c_operational_api = Some(api)
    api
  }

  val entryPoints : Bridge.EntryPoints =
    UxAS_thr_Impl_uxas_UxAS_thread_Bridge.EntryPoints(
      id,

      AutomationRequest.id,
      OperatingRegion.id,
      LineSearchTask.id,

      dispatchTriggers,

      initialization_api,
      operational_api)
}

object UxAS_thr_Impl_uxas_UxAS_thread_Bridge {

  var c_initialization_api: Option[UxAS_thr_Impl_Initialization_Api] = None()
  var c_operational_api: Option[UxAS_thr_Impl_Operational_Api] = None()

  @datatype class EntryPoints(
    UxAS_thr_Impl_uxas_UxAS_thread_BridgeId : Art.BridgeId,

    AutomationRequest_Id : Art.PortId,
    OperatingRegion_Id : Art.PortId,
    LineSearchTask_Id : Art.PortId,

    dispatchTriggers : Option[ISZ[Art.PortId]],

    initialization_api: UxAS_thr_Impl_Initialization_Api,
    operational_api: UxAS_thr_Impl_Operational_Api) extends Bridge.EntryPoints {

    val dataInPortIds: ISZ[Art.PortId] = ISZ()

    val eventInPortIds: ISZ[Art.PortId] = ISZ(AutomationRequest_Id,
                                              OperatingRegion_Id,
                                              LineSearchTask_Id)

    val dataOutPortIds: ISZ[Art.PortId] = ISZ()

    val eventOutPortIds: ISZ[Art.PortId] = ISZ()

    def compute(): Unit = {
      Art.receiveInput(eventInPortIds, dataInPortIds)

      // implement the following in 'component':  def timeTriggered(api: UxAS_thr_Impl_Operational_Api): Unit = {}
      component.timeTriggered(operational_api)

      Art.sendOutput(eventOutPortIds, dataOutPortIds)
    }

    override
    def testCompute(): Unit = {
      Art.receiveInput(eventInPortIds, dataInPortIds)

      // implement the following in 'component':  def timeTriggered(api: UxAS_thr_Impl_Operational_Api): Unit = {}
      component.timeTriggered(operational_api)

      Art.releaseOutput(eventOutPortIds, dataOutPortIds)
    }

    def activate(): Unit = {
      // implement the following method in 'component':  def activate(api: UxAS_thr_Impl_Operational_Api): Unit = {}
      component.activate(operational_api)
    }

    def deactivate(): Unit = {
      // implement the following method in 'component':  def deactivate(api: UxAS_thr_Impl_Operational_Api): Unit = {}
      component.deactivate(operational_api)
    }

    def finalise(): Unit = {
      // implement the following method in 'component':  def finalise(api: UxAS_thr_Impl_Operational_Api): Unit = {}
      component.finalise(operational_api)
    }

    def initialise(): Unit = {
      // implement the following method in 'component':  def initialise(api: UxAS_thr_Impl_Initialization_Api): Unit = {}
      component.initialise(initialization_api)
      Art.sendOutput(eventOutPortIds, dataOutPortIds)
    }

    def recover(): Unit = {
      // implement the following method in 'component':  def recover(api: UxAS_thr_Impl_Operational_Api): Unit = {}
      component.recover(operational_api)
    }
  }
}