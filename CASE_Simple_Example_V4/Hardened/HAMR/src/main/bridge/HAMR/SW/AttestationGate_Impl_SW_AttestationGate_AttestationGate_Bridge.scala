// #Sireum

package HAMR.SW

import org.sireum._
import art._
import HAMR._
import HAMR.SW.{AttestationGate_Impl_SW_AttestationGate_AttestationGate => component}

// This file was auto-generated.  Do not edit

@datatype class AttestationGate_Impl_SW_AttestationGate_AttestationGate_Bridge(
  val id: Art.BridgeId,
  val name: String,
  val dispatchProtocol: DispatchPropertyProtocol,
  val dispatchTriggers: Option[ISZ[Art.PortId]],

  MissionCommand_in: Port[Base_Types.Bits],
  MissionCommand_out: Port[Base_Types.Bits],
  TrustedIds: Port[Base_Types.Bits]
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

  val initialization_api : AttestationGate_Impl_Initialization_Api = {
    val api = AttestationGate_Impl_Initialization_Api(
      id,
      MissionCommand_in.id,
      MissionCommand_out.id,
      TrustedIds.id
    )
    AttestationGate_Impl_SW_AttestationGate_AttestationGate_Bridge.c_initialization_api = Some(api)
    api
  }

  val operational_api : AttestationGate_Impl_Operational_Api = {
    val api = AttestationGate_Impl_Operational_Api(
      id,
      MissionCommand_in.id,
      MissionCommand_out.id,
      TrustedIds.id
    )
    AttestationGate_Impl_SW_AttestationGate_AttestationGate_Bridge.c_operational_api = Some(api)
    api
  }

  val entryPoints : Bridge.EntryPoints =
    AttestationGate_Impl_SW_AttestationGate_AttestationGate_Bridge.EntryPoints(
      id,

      MissionCommand_in.id,
      MissionCommand_out.id,
      TrustedIds.id,

      dispatchTriggers,

      initialization_api,
      operational_api)
}

object AttestationGate_Impl_SW_AttestationGate_AttestationGate_Bridge {

  var c_initialization_api: Option[AttestationGate_Impl_Initialization_Api] = None()
  var c_operational_api: Option[AttestationGate_Impl_Operational_Api] = None()

  @datatype class EntryPoints(
    AttestationGate_Impl_SW_AttestationGate_AttestationGate_BridgeId : Art.BridgeId,

    MissionCommand_in_Id : Art.PortId,
    MissionCommand_out_Id : Art.PortId,
    TrustedIds_Id : Art.PortId,

    dispatchTriggers : Option[ISZ[Art.PortId]],

    initialization_api: AttestationGate_Impl_Initialization_Api,
    operational_api: AttestationGate_Impl_Operational_Api) extends Bridge.EntryPoints {

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
      val EventTriggered(receivedEvents) = Art.dispatchStatus(AttestationGate_Impl_SW_AttestationGate_AttestationGate_BridgeId)

      // remove non-dispatching event ports
      val dispatchableEventPorts: ISZ[Art.PortId] =
        if(dispatchTriggers.isEmpty) receivedEvents
        else filter(receivedEvents, dispatchTriggers.get)

      Art.receiveInput(eventInPortIds, dataInPortIds)

      for(portId <- dispatchableEventPorts) {
        if(portId == MissionCommand_in_Id){
          val Some(Base_Types.Bits_Payload(value)) = Art.getValue(MissionCommand_in_Id)

          // implement the following in 'component':  def handle_MissionCommand_in(api: AttestationGate_Impl_Operational_Api, value: Base_Types.Bits): Unit = {}
          component.handle_MissionCommand_in(operational_api, value)
        }
        else if(portId == TrustedIds_Id){
          val Some(Base_Types.Bits_Payload(value)) = Art.getValue(TrustedIds_Id)

          // implement the following in 'component':  def handle_TrustedIds(api: AttestationGate_Impl_Operational_Api, value: Base_Types.Bits): Unit = {}
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
      val EventTriggered(receivedEvents) = Art.dispatchStatus(AttestationGate_Impl_SW_AttestationGate_AttestationGate_BridgeId)

      // remove non-dispatching event ports
      val dispatchableEventPorts: ISZ[Art.PortId] =
        if(dispatchTriggers.isEmpty) receivedEvents
        else filter(receivedEvents, dispatchTriggers.get)

      Art.receiveInput(eventInPortIds, dataInPortIds)

      for(portId <- dispatchableEventPorts) {
        if(portId == MissionCommand_in_Id){
          val Some(Base_Types.Bits_Payload(value)) = Art.getValue(MissionCommand_in_Id)

          // implement the following in 'component':  def handle_MissionCommand_in(api: AttestationGate_Impl_Operational_Api, value: Base_Types.Bits): Unit = {}
          component.handle_MissionCommand_in(operational_api, value)
        }
        else if(portId == TrustedIds_Id){
          val Some(Base_Types.Bits_Payload(value)) = Art.getValue(TrustedIds_Id)

          // implement the following in 'component':  def handle_TrustedIds(api: AttestationGate_Impl_Operational_Api, value: Base_Types.Bits): Unit = {}
          component.handle_TrustedIds(operational_api, value)
        }
      }

      Art.releaseOutput(eventOutPortIds, dataOutPortIds)
    }

    def activate(): Unit = {
      // implement the following method in 'component':  def activate(api: AttestationGate_Impl_Operational_Api): Unit = {}
      component.activate(operational_api)
    }

    def deactivate(): Unit = {
      // implement the following method in 'component':  def deactivate(api: AttestationGate_Impl_Operational_Api): Unit = {}
      component.deactivate(operational_api)
    }

    def finalise(): Unit = {
      // implement the following method in 'component':  def finalise(api: AttestationGate_Impl_Operational_Api): Unit = {}
      component.finalise(operational_api)
    }

    def initialise(): Unit = {
      // implement the following method in 'component':  def initialise(api: AttestationGate_Impl_Initialization_Api): Unit = {}
      component.initialise(initialization_api)
      Art.sendOutput(eventOutPortIds, dataOutPortIds)
    }

    def recover(): Unit = {
      // implement the following method in 'component':  def recover(api: AttestationGate_Impl_Operational_Api): Unit = {}
      component.recover(operational_api)
    }
  }
}