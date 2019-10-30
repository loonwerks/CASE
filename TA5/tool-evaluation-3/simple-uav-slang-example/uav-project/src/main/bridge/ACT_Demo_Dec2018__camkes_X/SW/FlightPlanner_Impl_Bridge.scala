// #Sireum

package ACT_Demo_Dec2018__camkes_X.SW

import org.sireum._
import art._
import ACT_Demo_Dec2018__camkes_X._

// This file was auto-generated.  Do not edit

@record class FlightPlanner_Impl_Bridge(
  val id: Art.BridgeId,
  val name: String,
  val dispatchProtocol: DispatchPropertyProtocol,

  flight_plan: Port[SW.Mission],
  mission_rcv: Port[Base_Types.Boolean],
  recv_map: Port[SW.Command_Impl]
  ) extends Bridge {

  val ports : Bridge.Ports = Bridge.Ports(
    all = ISZ(flight_plan,
              mission_rcv,
              recv_map),

    dataIns = ISZ(),

    dataOuts = ISZ(),

    eventIns = ISZ(mission_rcv,
                   recv_map),

    eventOuts = ISZ(flight_plan)
  )

  val api : FlightPlanner_Impl_Bridge.Api =
    FlightPlanner_Impl_Bridge.Api(
      id,
      flight_plan.id,
      mission_rcv.id,
      recv_map.id
    )

  val entryPoints : Bridge.EntryPoints =
    FlightPlanner_Impl_Bridge.EntryPoints(
      id,

      flight_plan.id,
      mission_rcv.id,
      recv_map.id,

      FlightPlanner_Impl_Impl(api)
    )
}

object FlightPlanner_Impl_Bridge {

  @record class Api(
    id : Art.BridgeId,
    flight_plan_Id : Art.PortId,
    mission_rcv_Id : Art.PortId,
    recv_map_Id : Art.PortId) {

    def sendflight_plan(value : SW.Mission) : Unit = {
      Art.putValue(flight_plan_Id, SW.Mission_Payload(value))
    }

    def getmission_rcv() : Option[Base_Types.Boolean] = {
      val value : Option[Base_Types.Boolean] = Art.getValue(mission_rcv_Id) match {
        case Some(Base_Types.Boolean_Payload(v)) => Some(v)
        case _ => None[Base_Types.Boolean]()
      }
      return value
    }

    def getrecv_map() : Option[SW.Command_Impl] = {
      val value : Option[SW.Command_Impl] = Art.getValue(recv_map_Id) match {
        case Some(SW.Command_Impl_Payload(v)) => Some(v)
        case _ => None[SW.Command_Impl]()
      }
      return value
    }


    def logInfo(msg: String): Unit = {
      Art.logInfo(id, msg)
    }

    def logDebug(msg: String): Unit = {
      Art.logDebug(id, msg)
    }

    def logError(msg: String): Unit = {
      Art.logError(id, msg)
    }
  }

  @record class EntryPoints(
    FlightPlanner_Impl_BridgeId : Art.BridgeId,

    flight_plan_Id : Art.PortId,
    mission_rcv_Id : Art.PortId,
    recv_map_Id : Art.PortId,

    component : FlightPlanner_Impl_Impl ) extends Bridge.EntryPoints {

    val dataInPortIds: ISZ[Art.PortId] = ISZ()

    val eventInPortIds: ISZ[Art.PortId] = ISZ(mission_rcv_Id,
                                              recv_map_Id)

    val dataOutPortIds: ISZ[Art.PortId] = ISZ()

    val eventOutPortIds: ISZ[Art.PortId] = ISZ(flight_plan_Id)

    def initialise(): Unit = {
      component.initialise()
    }

    def compute(): Unit = {
      val EventTriggered(portIds) = Art.dispatchStatus(FlightPlanner_Impl_BridgeId)
      Art.receiveInput(portIds, dataInPortIds)

      for(portId <- portIds) {

        if(portId == mission_rcv_Id){
          val Some(Base_Types.Boolean_Payload(value)) = Art.getValue(mission_rcv_Id)
          component.handlemission_rcv(value)
        }
        else if(portId == recv_map_Id){
          val Some(SW.Command_Impl_Payload(value)) = Art.getValue(recv_map_Id)
          component.handlerecv_map(value)
        }
      }

      Art.sendOutput(eventOutPortIds, dataOutPortIds)
    }

    def activate(): Unit = {
      component.activate()
    }

    def deactivate(): Unit = {
      component.deactivate()
    }

    def recover(): Unit = {
      component.recover()
    }

    def finalise(): Unit = {
      component.finalise()
    }
  }
}