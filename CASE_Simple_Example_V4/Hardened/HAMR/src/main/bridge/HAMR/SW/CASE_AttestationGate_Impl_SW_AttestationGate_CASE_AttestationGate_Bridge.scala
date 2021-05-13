// #Sireum

package HAMR.SW

import org.sireum._
import art._
import HAMR._
import HAMR.SW.{CASE_AttestationGate_Impl_SW_AttestationGate_CASE_AttestationGate => component}

// This file was auto-generated.  Do not edit

@record class CASE_AttestationGate_Impl_SW_AttestationGate_CASE_AttestationGate_Bridge(
  val id: Art.BridgeId,
  val name: String,
  val dispatchProtocol: DispatchPropertyProtocol,
  val dispatchTriggers: Option[ISZ[Art.PortId]],

  MissionCommand_in: Port[SW.RF_Msg_Impl],
  MissionCommand_out: Port[SW.RF_Msg_Impl],
  TrustedIds: Port[SW.Address_Impl]
  ) extends Bridge {

  val ports : Bridge.Ports = Bridge.Ports(
    all = ISZ(MissionCommand_in,
              MissionCommand_out,
              TrustedIds),

    dataIns = ISZ(),

    dataOuts = ISZ(),

    eventIns = ISZ(MissionCommand_in,
                   TrustedIds),

    eventOuts = ISZ(MissionCommand_out)
  )

  val initialization_api : CASE_AttestationGate_Impl_Initialization_Api = {
    val api = CASE_AttestationGate_Impl_Initialization_Api(
      id,
      MissionCommand_in.id,
      MissionCommand_out.id,
      TrustedIds.id
    )
    CASE_AttestationGate_Impl_SW_AttestationGate_CASE_AttestationGate_Bridge.c_initialization_api = Some(api)
    api
  }

  val operational_api : CASE_AttestationGate_Impl_Operational_Api = {
    val api = CASE_AttestationGate_Impl_Operational_Api(
      id,
      MissionCommand_in.id,
      MissionCommand_out.id,
      TrustedIds.id
    )
    CASE_AttestationGate_Impl_SW_AttestationGate_CASE_AttestationGate_Bridge.c_operational_api = Some(api)
    api
  }

  val entryPoints : Bridge.EntryPoints =
    CASE_AttestationGate_Impl_SW_AttestationGate_CASE_AttestationGate_Bridge.EntryPoints(
      id,

      MissionCommand_in.id,
      MissionCommand_out.id,
      TrustedIds.id,

      dispatchTriggers,

      initialization_api,
      operational_api)
}

object CASE_AttestationGate_Impl_SW_AttestationGate_CASE_AttestationGate_Bridge {

  var c_initialization_api: Option[CASE_AttestationGate_Impl_Initialization_Api] = None()
  var c_operational_api: Option[CASE_AttestationGate_Impl_Operational_Api] = None()

  @record class EntryPoints(
    CASE_AttestationGate_Impl_SW_AttestationGate_CASE_AttestationGate_BridgeId : Art.BridgeId,

    MissionCommand_in_Id : Art.PortId,
    MissionCommand_out_Id : Art.PortId,
    TrustedIds_Id : Art.PortId,

    dispatchTriggers : Option[ISZ[Art.PortId]],

    initialization_api: CASE_AttestationGate_Impl_Initialization_Api,
    operational_api: CASE_AttestationGate_Impl_Operational_Api) extends Bridge.EntryPoints {

    val dataInPortIds: ISZ[Art.PortId] = ISZ()

    val eventInPortIds: ISZ[Art.PortId] = ISZ(MissionCommand_in_Id,
                                              TrustedIds_Id)

    val dataOutPortIds: ISZ[Art.PortId] = ISZ()

    val eventOutPortIds: ISZ[Art.PortId] = ISZ(MissionCommand_out_Id)

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
      val EventTriggered(receivedEvents) = Art.dispatchStatus(CASE_AttestationGate_Impl_SW_AttestationGate_CASE_AttestationGate_BridgeId)

      // remove non-dispatching event ports
      val dispatchableEventPorts: ISZ[Art.PortId] =
        if(dispatchTriggers.isEmpty) receivedEvents
        else filter(receivedEvents, dispatchTriggers.get)

      Art.receiveInput(eventInPortIds, dataInPortIds)

      for(portId <- dispatchableEventPorts) {
        if(portId == MissionCommand_in_Id){
          val Some(SW.RF_Msg_Impl_Payload(value)) = Art.getValue(MissionCommand_in_Id)

          // implement the following in 'component':  def handle_MissionCommand_in(api: CASE_AttestationGate_Impl_Operational_Api, value: SW.RF_Msg_Impl): Unit = {}
          component.handle_MissionCommand_in(operational_api, value)
        }
        else if(portId == TrustedIds_Id){
          val Some(SW.Address_Impl_Payload(value)) = Art.getValue(TrustedIds_Id)

          // implement the following in 'component':  def handle_TrustedIds(api: CASE_AttestationGate_Impl_Operational_Api, value: SW.Address_Impl): Unit = {}
          component.handle_TrustedIds(operational_api, value)
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
      val EventTriggered(receivedEvents) = Art.dispatchStatus(CASE_AttestationGate_Impl_SW_AttestationGate_CASE_AttestationGate_BridgeId)

      // remove non-dispatching event ports
      val dispatchableEventPorts: ISZ[Art.PortId] =
        if(dispatchTriggers.isEmpty) receivedEvents
        else filter(receivedEvents, dispatchTriggers.get)

      Art.receiveInput(eventInPortIds, dataInPortIds)

      for(portId <- dispatchableEventPorts) {
        if(portId == MissionCommand_in_Id){
          val Some(SW.RF_Msg_Impl_Payload(value)) = Art.getValue(MissionCommand_in_Id)

          // implement the following in 'component':  def handle_MissionCommand_in(api: CASE_AttestationGate_Impl_Operational_Api, value: SW.RF_Msg_Impl): Unit = {}
          component.handle_MissionCommand_in(operational_api, value)
        }
        else if(portId == TrustedIds_Id){
          val Some(SW.Address_Impl_Payload(value)) = Art.getValue(TrustedIds_Id)

          // implement the following in 'component':  def handle_TrustedIds(api: CASE_AttestationGate_Impl_Operational_Api, value: SW.Address_Impl): Unit = {}
          component.handle_TrustedIds(operational_api, value)
        }
      }

      Art.releaseOutput(eventOutPortIds, dataOutPortIds)
    }

    def activate(): Unit = {
      // implement the following method in 'component':  def activate(api: CASE_AttestationGate_Impl_Operational_Api): Unit = {}
      component.activate(operational_api)
    }

    def deactivate(): Unit = {
      // implement the following method in 'component':  def deactivate(api: CASE_AttestationGate_Impl_Operational_Api): Unit = {}
      component.deactivate(operational_api)
    }

    def finalise(): Unit = {
      // implement the following method in 'component':  def finalise(api: CASE_AttestationGate_Impl_Operational_Api): Unit = {}
      component.finalise(operational_api)
    }

    def initialise(): Unit = {
      // implement the following method in 'component':  def initialise(api: CASE_AttestationGate_Impl_Initialization_Api): Unit = {}
      component.initialise(initialization_api)
      Art.sendOutput(eventOutPortIds, dataOutPortIds)
    }

    def recover(): Unit = {
      // implement the following method in 'component':  def recover(api: CASE_AttestationGate_Impl_Operational_Api): Unit = {}
      component.recover(operational_api)
    }
  }
}