// #Sireum

package hamr.SW

import org.sireum._
import art._
import hamr._
import hamr.SW.{UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS => component}

// This file was auto-generated.  Do not edit

@datatype class UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge(
  val id: Art.BridgeId,
  val name: String,
  val dispatchProtocol: DispatchPropertyProtocol,
  val dispatchTriggers: Option[ISZ[Art.PortId]],

  AutomationRequest: Port[Base_Types.Bits],
  AirVehicleState: Port[Base_Types.Bits],
  OperatingRegion: Port[Base_Types.Bits],
  LineSearchTask: Port[Base_Types.Bits],
  AutomationResponse_MON_GEO: Port[Base_Types.Bits],
  AutomationResponse_MON_REQ: Port[Base_Types.Bits]
  ) extends Bridge {

  val ports : Bridge.Ports = Bridge.Ports(
    all = ISZ(AutomationRequest,
              AirVehicleState,
              OperatingRegion,
              LineSearchTask,
              AutomationResponse_MON_GEO,
              AutomationResponse_MON_REQ),

    dataIns = ISZ(),

    dataOuts = ISZ(),

    eventIns = ISZ(AutomationRequest,
                   AirVehicleState,
                   OperatingRegion,
                   LineSearchTask),

    eventOuts = ISZ(AutomationResponse_MON_GEO,
                    AutomationResponse_MON_REQ)
  )

  val initialization_api : UxAS_thr_Impl_Initialization_Api = {
    val api = UxAS_thr_Impl_Initialization_Api(
      id,
      AutomationRequest.id,
      AirVehicleState.id,
      OperatingRegion.id,
      LineSearchTask.id,
      AutomationResponse_MON_GEO.id,
      AutomationResponse_MON_REQ.id
    )
    UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge.c_initialization_api = Some(api)
    api
  }

  val operational_api : UxAS_thr_Impl_Operational_Api = {
    val api = UxAS_thr_Impl_Operational_Api(
      id,
      AutomationRequest.id,
      AirVehicleState.id,
      OperatingRegion.id,
      LineSearchTask.id,
      AutomationResponse_MON_GEO.id,
      AutomationResponse_MON_REQ.id
    )
    UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge.c_operational_api = Some(api)
    api
  }

  val entryPoints : Bridge.EntryPoints =
    UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge.EntryPoints(
      id,

      AutomationRequest.id,
      AirVehicleState.id,
      OperatingRegion.id,
      LineSearchTask.id,
      AutomationResponse_MON_GEO.id,
      AutomationResponse_MON_REQ.id,

      dispatchTriggers,

      initialization_api,
      operational_api)
}

object UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge {

  var c_initialization_api: Option[UxAS_thr_Impl_Initialization_Api] = None()
  var c_operational_api: Option[UxAS_thr_Impl_Operational_Api] = None()

  @datatype class EntryPoints(
    UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_BridgeId : Art.BridgeId,

    AutomationRequest_Id : Art.PortId,
    AirVehicleState_Id : Art.PortId,
    OperatingRegion_Id : Art.PortId,
    LineSearchTask_Id : Art.PortId,
    AutomationResponse_MON_GEO_Id : Art.PortId,
    AutomationResponse_MON_REQ_Id : Art.PortId,

    dispatchTriggers : Option[ISZ[Art.PortId]],

    initialization_api: UxAS_thr_Impl_Initialization_Api,
    operational_api: UxAS_thr_Impl_Operational_Api) extends Bridge.EntryPoints {

    val dataInPortIds: ISZ[Art.PortId] = ISZ()

    val eventInPortIds: ISZ[Art.PortId] = ISZ(AutomationRequest_Id,
                                              AirVehicleState_Id,
                                              OperatingRegion_Id,
                                              LineSearchTask_Id)

    val dataOutPortIds: ISZ[Art.PortId] = ISZ()

    val eventOutPortIds: ISZ[Art.PortId] = ISZ(AutomationResponse_MON_GEO_Id,
                                               AutomationResponse_MON_REQ_Id)

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