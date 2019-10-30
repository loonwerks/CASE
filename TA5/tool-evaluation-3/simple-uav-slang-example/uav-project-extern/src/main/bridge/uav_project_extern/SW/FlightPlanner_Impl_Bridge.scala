// #Sireum

package uav_project_extern.SW

import org.sireum._
import art._
import uav_project_extern._

// This file was auto-generated.  Do not edit

@record class FlightPlanner_Impl_Bridge(
  val id: Art.BridgeId,
  val name: String,
  val dispatchProtocol: DispatchPropertyProtocol,

  mission_rcv: Port[Base_Types.Boolean],
  recv_map: Port[SW.Command_Impl],
  flight_plan: Port[SW.Mission]
  ) extends Bridge {

  val ports : Bridge.Ports = Bridge.Ports(
    all = ISZ(mission_rcv,
              recv_map,
              flight_plan),

    dataIns = ISZ(),

    dataOuts = ISZ(),

    eventIns = ISZ(mission_rcv,
                   recv_map),

    eventOuts = ISZ(flight_plan)
  )

  val api : FlightPlanner_Impl_Bridge.Api =
    FlightPlanner_Impl_Bridge.Api(
      id,
      mission_rcv.id,
      recv_map.id,
      flight_plan.id
    )

  val entryPoints : Bridge.EntryPoints =
    FlightPlanner_Impl_Bridge.EntryPoints(
      id,

      mission_rcv.id,
      recv_map.id,
      flight_plan.id,

      FlightPlanner_Impl_Impl(api)
    )
}

object FlightPlanner_Impl_Bridge {

  @record class Api(
    id : Art.BridgeId,
    mission_rcv_Id : Art.PortId,
    recv_map_Id : Art.PortId,
    flight_plan_Id : Art.PortId) {

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

    def sendflight_plan(value : SW.Mission) : Unit = {
      Art.putValue(flight_plan_Id, SW.Mission_Payload(value))
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

    mission_rcv_Id : Art.PortId,
    recv_map_Id : Art.PortId,
    flight_plan_Id : Art.PortId,

    component : FlightPlanner_Impl_Impl ) extends Bridge.EntryPoints {

    val dataInPortIds: ISZ[Art.PortId] = ISZ()

    val eventInPortIds: ISZ[Art.PortId] = ISZ(mission_rcv_Id,
                                              recv_map_Id)

    val dataOutPortIds: ISZ[Art.PortId] = ISZ()

    val eventOutPortIds: ISZ[Art.PortId] = ISZ(flight_plan_Id)

    def compute(): Unit = {
      val EventTriggered(portIds) = Art.dispatchStatus(FlightPlanner_Impl_BridgeId)
      Art.receiveInput(eventInPortIds, dataInPortIds)

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

    def activate: Unit = {
      component.activate()
    }

    def deactivate: Unit = {
      component.deactivate()
    }

    def finalise: Unit = {
      component.finalise()
    }

    def initialise: Unit = {
      component.initialise()
      Art.sendOutput(eventOutPortIds, dataOutPortIds)
    }

    def recover: Unit = {
      component.recover()
    }
  }
}