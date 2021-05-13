// #Sireum

package HAMR.SW

import org.sireum._
import art._
import HAMR._
import HAMR.SW.{CASE_AttestationManager_Impl_SW_AttestationManager_CASE_AttestationManager => component}

// This file was auto-generated.  Do not edit

@record class CASE_AttestationManager_Impl_SW_AttestationManager_CASE_AttestationManager_Bridge(
  val id: Art.BridgeId,
  val name: String,
  val dispatchProtocol: DispatchPropertyProtocol,
  val dispatchTriggers: Option[ISZ[Art.PortId]],

  AttestationRequest: Port[CASE_Model_Transformations.CASE_AttestationRequestMsg_Impl],
  AttestationResponse: Port[CASE_Model_Transformations.CASE_AttestationResponseMsg_Impl],
  TrustedIds: Port[SW.Address_Impl]
  ) extends Bridge {

  val ports : Bridge.Ports = Bridge.Ports(
    all = ISZ(AttestationRequest,
              AttestationResponse,
              TrustedIds),

    dataIns = ISZ(),

    dataOuts = ISZ(),

    eventIns = ISZ(AttestationResponse),

    eventOuts = ISZ(AttestationRequest,
                    TrustedIds)
  )

  val initialization_api : CASE_AttestationManager_Impl_Initialization_Api = {
    val api = CASE_AttestationManager_Impl_Initialization_Api(
      id,
      AttestationRequest.id,
      AttestationResponse.id,
      TrustedIds.id
    )
    CASE_AttestationManager_Impl_SW_AttestationManager_CASE_AttestationManager_Bridge.c_initialization_api = Some(api)
    api
  }

  val operational_api : CASE_AttestationManager_Impl_Operational_Api = {
    val api = CASE_AttestationManager_Impl_Operational_Api(
      id,
      AttestationRequest.id,
      AttestationResponse.id,
      TrustedIds.id
    )
    CASE_AttestationManager_Impl_SW_AttestationManager_CASE_AttestationManager_Bridge.c_operational_api = Some(api)
    api
  }

  val entryPoints : Bridge.EntryPoints =
    CASE_AttestationManager_Impl_SW_AttestationManager_CASE_AttestationManager_Bridge.EntryPoints(
      id,

      AttestationRequest.id,
      AttestationResponse.id,
      TrustedIds.id,

      dispatchTriggers,

      initialization_api,
      operational_api)
}

object CASE_AttestationManager_Impl_SW_AttestationManager_CASE_AttestationManager_Bridge {

  var c_initialization_api: Option[CASE_AttestationManager_Impl_Initialization_Api] = None()
  var c_operational_api: Option[CASE_AttestationManager_Impl_Operational_Api] = None()

  @record class EntryPoints(
    CASE_AttestationManager_Impl_SW_AttestationManager_CASE_AttestationManager_BridgeId : Art.BridgeId,

    AttestationRequest_Id : Art.PortId,
    AttestationResponse_Id : Art.PortId,
    TrustedIds_Id : Art.PortId,

    dispatchTriggers : Option[ISZ[Art.PortId]],

    initialization_api: CASE_AttestationManager_Impl_Initialization_Api,
    operational_api: CASE_AttestationManager_Impl_Operational_Api) extends Bridge.EntryPoints {

    val dataInPortIds: ISZ[Art.PortId] = ISZ()

    val eventInPortIds: ISZ[Art.PortId] = ISZ(AttestationResponse_Id)

    val dataOutPortIds: ISZ[Art.PortId] = ISZ()

    val eventOutPortIds: ISZ[Art.PortId] = ISZ(AttestationRequest_Id,
                                               TrustedIds_Id)

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
      val EventTriggered(receivedEvents) = Art.dispatchStatus(CASE_AttestationManager_Impl_SW_AttestationManager_CASE_AttestationManager_BridgeId)

      // remove non-dispatching event ports
      val dispatchableEventPorts: ISZ[Art.PortId] =
        if(dispatchTriggers.isEmpty) receivedEvents
        else filter(receivedEvents, dispatchTriggers.get)

      Art.receiveInput(eventInPortIds, dataInPortIds)

      for(portId <- dispatchableEventPorts) {
        if(portId == AttestationResponse_Id){
          val Some(CASE_Model_Transformations.CASE_AttestationResponseMsg_Impl_Payload(value)) = Art.getValue(AttestationResponse_Id)

          // implement the following in 'component':  def handle_AttestationResponse(api: CASE_AttestationManager_Impl_Operational_Api, value: CASE_Model_Transformations.CASE_AttestationResponseMsg_Impl): Unit = {}
          component.handle_AttestationResponse(operational_api, value)
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
      val EventTriggered(receivedEvents) = Art.dispatchStatus(CASE_AttestationManager_Impl_SW_AttestationManager_CASE_AttestationManager_BridgeId)

      // remove non-dispatching event ports
      val dispatchableEventPorts: ISZ[Art.PortId] =
        if(dispatchTriggers.isEmpty) receivedEvents
        else filter(receivedEvents, dispatchTriggers.get)

      Art.receiveInput(eventInPortIds, dataInPortIds)

      for(portId <- dispatchableEventPorts) {
        if(portId == AttestationResponse_Id){
          val Some(CASE_Model_Transformations.CASE_AttestationResponseMsg_Impl_Payload(value)) = Art.getValue(AttestationResponse_Id)

          // implement the following in 'component':  def handle_AttestationResponse(api: CASE_AttestationManager_Impl_Operational_Api, value: CASE_Model_Transformations.CASE_AttestationResponseMsg_Impl): Unit = {}
          component.handle_AttestationResponse(operational_api, value)
        }
      }

      Art.releaseOutput(eventOutPortIds, dataOutPortIds)
    }

    def activate(): Unit = {
      // implement the following method in 'component':  def activate(api: CASE_AttestationManager_Impl_Operational_Api): Unit = {}
      component.activate(operational_api)
    }

    def deactivate(): Unit = {
      // implement the following method in 'component':  def deactivate(api: CASE_AttestationManager_Impl_Operational_Api): Unit = {}
      component.deactivate(operational_api)
    }

    def finalise(): Unit = {
      // implement the following method in 'component':  def finalise(api: CASE_AttestationManager_Impl_Operational_Api): Unit = {}
      component.finalise(operational_api)
    }

    def initialise(): Unit = {
      // implement the following method in 'component':  def initialise(api: CASE_AttestationManager_Impl_Initialization_Api): Unit = {}
      component.initialise(initialization_api)
      Art.sendOutput(eventOutPortIds, dataOutPortIds)
    }

    def recover(): Unit = {
      // implement the following method in 'component':  def recover(api: CASE_AttestationManager_Impl_Operational_Api): Unit = {}
      component.recover(operational_api)
    }
  }
}