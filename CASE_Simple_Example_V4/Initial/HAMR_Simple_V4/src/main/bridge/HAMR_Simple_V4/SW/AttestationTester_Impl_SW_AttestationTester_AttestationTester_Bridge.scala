// #Sireum

package HAMR_Simple_V4.SW

import org.sireum._
import art._
import HAMR_Simple_V4._
import HAMR_Simple_V4.SW.{AttestationTester_Impl_SW_AttestationTester_AttestationTester => component}

// This file was auto-generated.  Do not edit

@datatype class AttestationTester_Impl_SW_AttestationTester_AttestationTester_Bridge(
  val id: Art.BridgeId,
  val name: String,
  val dispatchProtocol: DispatchPropertyProtocol,
  val dispatchTriggers: Option[ISZ[Art.PortId]],

  AttestationRequest: Port[Base_Types.Bits],
  AttestationResponse: Port[Base_Types.Bits]
  ) extends Bridge {

  val ports : Bridge.Ports = Bridge.Ports(
    all = ISZ(AttestationRequest,
              AttestationResponse),

    dataIns = ISZ(),

    dataOuts = ISZ(),

    eventIns = ISZ(AttestationRequest),

    eventOuts = ISZ(AttestationResponse)
  )

  val initialization_api : AttestationTester_Impl_Initialization_Api = {
    val api = AttestationTester_Impl_Initialization_Api(
      id,
      AttestationRequest.id,
      AttestationResponse.id
    )
    AttestationTester_Impl_SW_AttestationTester_AttestationTester_Bridge.c_initialization_api = Some(api)
    api
  }

  val operational_api : AttestationTester_Impl_Operational_Api = {
    val api = AttestationTester_Impl_Operational_Api(
      id,
      AttestationRequest.id,
      AttestationResponse.id
    )
    AttestationTester_Impl_SW_AttestationTester_AttestationTester_Bridge.c_operational_api = Some(api)
    api
  }

  val entryPoints : Bridge.EntryPoints =
    AttestationTester_Impl_SW_AttestationTester_AttestationTester_Bridge.EntryPoints(
      id,

      AttestationRequest.id,
      AttestationResponse.id,

      dispatchTriggers,

      initialization_api,
      operational_api)
}

object AttestationTester_Impl_SW_AttestationTester_AttestationTester_Bridge {

  var c_initialization_api: Option[AttestationTester_Impl_Initialization_Api] = None()
  var c_operational_api: Option[AttestationTester_Impl_Operational_Api] = None()

  @datatype class EntryPoints(
    AttestationTester_Impl_SW_AttestationTester_AttestationTester_BridgeId : Art.BridgeId,

    AttestationRequest_Id : Art.PortId,
    AttestationResponse_Id : Art.PortId,

    dispatchTriggers : Option[ISZ[Art.PortId]],

    initialization_api: AttestationTester_Impl_Initialization_Api,
    operational_api: AttestationTester_Impl_Operational_Api) extends Bridge.EntryPoints {

    val dataInPortIds: ISZ[Art.PortId] = ISZ()

    val eventInPortIds: ISZ[Art.PortId] = ISZ(AttestationRequest_Id)

    val dataOutPortIds: ISZ[Art.PortId] = ISZ()

    val eventOutPortIds: ISZ[Art.PortId] = ISZ(AttestationResponse_Id)

    def compute(): Unit = {
      // transpiler friendly filter
      def filter(receivedEvents: ISZ[Art.PortId], triggers: ISZ[Art.PortId]): ISZ[Art.PortId] = {
        var r = ISZ[Art.PortId]()
        val opsTriggers = ops.ISZOps(triggers)
        for(e <- receivedEvents) {
          if(opsTriggers.contains(e)) {
            r = r :+ e
          }
        }
        return r
      }

      // fetch received events ordered by highest urgency then earliest arrival-time
      val EventTriggered(receivedEvents) = Art.dispatchStatus(AttestationTester_Impl_SW_AttestationTester_AttestationTester_BridgeId)

      // remove non-dispatching event ports
      val dispatchableEventPorts: ISZ[Art.PortId] =
        if(dispatchTriggers.isEmpty) receivedEvents
        else filter(receivedEvents, dispatchTriggers.get)

      Art.receiveInput(eventInPortIds, dataInPortIds)

      for(portId <- dispatchableEventPorts) {
        if(portId == AttestationRequest_Id){
          val Some(Base_Types.Bits_Payload(value)) = Art.getValue(AttestationRequest_Id)

          // implement the following in 'component':  def handle_AttestationRequest(api: AttestationTester_Impl_Operational_Api, value: Base_Types.Bits): Unit = {}
          component.handle_AttestationRequest(operational_api, value)
        }
      }

      Art.sendOutput(eventOutPortIds, dataOutPortIds)
    }

    override
    def testCompute(): Unit = {
      // transpiler friendly filter
      def filter(receivedEvents: ISZ[Art.PortId], triggers: ISZ[Art.PortId]): ISZ[Art.PortId] = {
        var r = ISZ[Art.PortId]()
        val opsTriggers = ops.ISZOps(triggers)
        for(e <- receivedEvents) {
          if(opsTriggers.contains(e)) {
            r = r :+ e
          }
        }
        return r
      }

      // fetch received events ordered by highest urgency then earliest arrival-time
      val EventTriggered(receivedEvents) = Art.dispatchStatus(AttestationTester_Impl_SW_AttestationTester_AttestationTester_BridgeId)

      // remove non-dispatching event ports
      val dispatchableEventPorts: ISZ[Art.PortId] =
        if(dispatchTriggers.isEmpty) receivedEvents
        else filter(receivedEvents, dispatchTriggers.get)

      Art.receiveInput(eventInPortIds, dataInPortIds)

      for(portId <- dispatchableEventPorts) {
        if(portId == AttestationRequest_Id){
          val Some(Base_Types.Bits_Payload(value)) = Art.getValue(AttestationRequest_Id)

          // implement the following in 'component':  def handle_AttestationRequest(api: AttestationTester_Impl_Operational_Api, value: Base_Types.Bits): Unit = {}
          component.handle_AttestationRequest(operational_api, value)
        }
      }

      Art.releaseOutput(eventOutPortIds, dataOutPortIds)
    }

    def activate(): Unit = {
      // implement the following method in 'component':  def activate(api: AttestationTester_Impl_Operational_Api): Unit = {}
      component.activate(operational_api)
    }

    def deactivate(): Unit = {
      // implement the following method in 'component':  def deactivate(api: AttestationTester_Impl_Operational_Api): Unit = {}
      component.deactivate(operational_api)
    }

    def finalise(): Unit = {
      // implement the following method in 'component':  def finalise(api: AttestationTester_Impl_Operational_Api): Unit = {}
      component.finalise(operational_api)
    }

    def initialise(): Unit = {
      // implement the following method in 'component':  def initialise(api: AttestationTester_Impl_Initialization_Api): Unit = {}
      component.initialise(initialization_api)
      Art.sendOutput(eventOutPortIds, dataOutPortIds)
    }

    def recover(): Unit = {
      // implement the following method in 'component':  def recover(api: AttestationTester_Impl_Operational_Api): Unit = {}
      component.recover(operational_api)
    }
  }
}