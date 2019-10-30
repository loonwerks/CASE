// #Sireum

package uav_project_extern.SW

import org.sireum._
import art._
import uav_project_extern._

// This file was auto-generated.  Do not edit

@record class WaypointManager_Impl_Bridge(
  val id: Art.BridgeId,
  val name: String,
  val dispatchProtocol: DispatchPropertyProtocol,

  flight_plan: Port[SW.Mission],
  tracking_id: Port[Base_Types.Integer_64],
  mission_rcv: Port[Base_Types.Boolean],
  mission_window: Port[SW.MissionWindow]
  ) extends Bridge {

  val ports : Bridge.Ports = Bridge.Ports(
    all = ISZ(flight_plan,
              tracking_id,
              mission_rcv,
              mission_window),

    dataIns = ISZ(),

    dataOuts = ISZ(),

    eventIns = ISZ(flight_plan,
                   tracking_id),

    eventOuts = ISZ(mission_rcv,
                    mission_window)
  )

  val api : WaypointManager_Impl_Bridge.Api =
    WaypointManager_Impl_Bridge.Api(
      id,
      flight_plan.id,
      tracking_id.id,
      mission_rcv.id,
      mission_window.id
    )

  val entryPoints : Bridge.EntryPoints =
    WaypointManager_Impl_Bridge.EntryPoints(
      id,

      flight_plan.id,
      tracking_id.id,
      mission_rcv.id,
      mission_window.id,

      WaypointManager_Impl_Impl(api)
    )
}

object WaypointManager_Impl_Bridge {

  @record class Api(
    id : Art.BridgeId,
    flight_plan_Id : Art.PortId,
    tracking_id_Id : Art.PortId,
    mission_rcv_Id : Art.PortId,
    mission_window_Id : Art.PortId) {

    def getflight_plan() : Option[SW.Mission] = {
      val value : Option[SW.Mission] = Art.getValue(flight_plan_Id) match {
        case Some(SW.Mission_Payload(v)) => Some(v)
        case _ => None[SW.Mission]()
      }
      return value
    }

    def gettracking_id() : Option[Base_Types.Integer_64] = {
      val value : Option[Base_Types.Integer_64] = Art.getValue(tracking_id_Id) match {
        case Some(Base_Types.Integer_64_Payload(v)) => Some(v)
        case _ => None[Base_Types.Integer_64]()
      }
      return value
    }

    def sendmission_rcv(value : Base_Types.Boolean) : Unit = {
      Art.putValue(mission_rcv_Id, Base_Types.Boolean_Payload(value))
    }

    def sendmission_window(value : SW.MissionWindow) : Unit = {
      Art.putValue(mission_window_Id, SW.MissionWindow_Payload(value))
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
    WaypointManager_Impl_BridgeId : Art.BridgeId,

    flight_plan_Id : Art.PortId,
    tracking_id_Id : Art.PortId,
    mission_rcv_Id : Art.PortId,
    mission_window_Id : Art.PortId,

    component : WaypointManager_Impl_Impl ) extends Bridge.EntryPoints {

    val dataInPortIds: ISZ[Art.PortId] = ISZ()

    val eventInPortIds: ISZ[Art.PortId] = ISZ(flight_plan_Id,
                                              tracking_id_Id)

    val dataOutPortIds: ISZ[Art.PortId] = ISZ()

    val eventOutPortIds: ISZ[Art.PortId] = ISZ(mission_rcv_Id,
                                               mission_window_Id)

    def compute(): Unit = {
      val EventTriggered(portIds) = Art.dispatchStatus(WaypointManager_Impl_BridgeId)
      Art.receiveInput(eventInPortIds, dataInPortIds)

      for(portId <- portIds) {

        if(portId == flight_plan_Id){
          val Some(SW.Mission_Payload(value)) = Art.getValue(flight_plan_Id)
          component.handleflight_plan(value)
        }
        else if(portId == tracking_id_Id){
          val Some(Base_Types.Integer_64_Payload(value)) = Art.getValue(tracking_id_Id)
          component.handletracking_id(value)
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