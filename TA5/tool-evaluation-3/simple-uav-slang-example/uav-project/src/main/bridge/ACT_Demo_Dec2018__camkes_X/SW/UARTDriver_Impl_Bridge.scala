// #Sireum

package ACT_Demo_Dec2018__camkes_X.SW

import org.sireum._
import art._
import ACT_Demo_Dec2018__camkes_X._

// This file was auto-generated.  Do not edit

@record class UARTDriver_Impl_Bridge(
  val id: Art.BridgeId,
  val name: String,
  val dispatchProtocol: DispatchPropertyProtocol,

  mission_window: Port[SW.MissionWindow],
  tracking_id: Port[Base_Types.Integer_64]
  ) extends Bridge {

  val ports : Bridge.Ports = Bridge.Ports(
    all = ISZ(mission_window,
              tracking_id),

    dataIns = ISZ(),

    dataOuts = ISZ(),

    eventIns = ISZ(mission_window),

    eventOuts = ISZ(tracking_id)
  )

  val api : UARTDriver_Impl_Bridge.Api =
    UARTDriver_Impl_Bridge.Api(
      id,
      mission_window.id,
      tracking_id.id
    )

  val entryPoints : Bridge.EntryPoints =
    UARTDriver_Impl_Bridge.EntryPoints(
      id,

      mission_window.id,
      tracking_id.id,

      UARTDriver_Impl_Impl(api)
    )
}

object UARTDriver_Impl_Bridge {

  @record class Api(
    id : Art.BridgeId,
    mission_window_Id : Art.PortId,
    tracking_id_Id : Art.PortId) {

    def getmission_window() : Option[SW.MissionWindow] = {
      val value : Option[SW.MissionWindow] = Art.getValue(mission_window_Id) match {
        case Some(SW.MissionWindow_Payload(v)) => Some(v)
        case _ => None[SW.MissionWindow]()
      }
      return value
    }

    def sendtracking_id(value : Base_Types.Integer_64) : Unit = {
      Art.putValue(tracking_id_Id, Base_Types.Integer_64_Payload(value))
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
    UARTDriver_Impl_BridgeId : Art.BridgeId,

    mission_window_Id : Art.PortId,
    tracking_id_Id : Art.PortId,

    component : UARTDriver_Impl_Impl ) extends Bridge.EntryPoints {

    val dataInPortIds: ISZ[Art.PortId] = ISZ()

    val eventInPortIds: ISZ[Art.PortId] = ISZ(mission_window_Id)

    val dataOutPortIds: ISZ[Art.PortId] = ISZ()

    val eventOutPortIds: ISZ[Art.PortId] = ISZ(tracking_id_Id)

    def initialise(): Unit = {
      component.initialise()
    }

    def compute(): Unit = {
      val EventTriggered(portIds) = Art.dispatchStatus(UARTDriver_Impl_BridgeId)
      Art.receiveInput(portIds, dataInPortIds)

      for(portId <- portIds) {

        if(portId == mission_window_Id){
          val Some(SW.MissionWindow_Payload(value)) = Art.getValue(mission_window_Id)
          component.handlemission_window(value)
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