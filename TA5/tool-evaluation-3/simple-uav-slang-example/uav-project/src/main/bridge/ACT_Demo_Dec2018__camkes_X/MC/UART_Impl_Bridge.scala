// #Sireum

package ACT_Demo_Dec2018__camkes_X.MC

import org.sireum._
import art._
import ACT_Demo_Dec2018__camkes_X._

// This file was auto-generated.  Do not edit

@record class UART_Impl_Bridge(
  val id: Art.BridgeId,
  val name: String,
  val dispatchProtocol: DispatchPropertyProtocol,

  waypoint_out: Port[MC.MISSING_TYPE_Impl],
  position_status_inn: Port[MC.MISSING_TYPE_Impl],
  position_status_out: Port[SW.Coordinate_Impl]
  ) extends Bridge {

  val ports : Bridge.Ports = Bridge.Ports(
    all = ISZ(waypoint_out,
              position_status_inn,
              position_status_out),

    dataIns = ISZ(),

    dataOuts = ISZ(),

    eventIns = ISZ(position_status_inn),

    eventOuts = ISZ(waypoint_out,
                    position_status_out)
  )

  val api : UART_Impl_Bridge.Api =
    UART_Impl_Bridge.Api(
      id,
      waypoint_out.id,
      position_status_inn.id,
      position_status_out.id
    )

  val entryPoints : Bridge.EntryPoints =
    UART_Impl_Bridge.EntryPoints(
      id,

      waypoint_out.id,
      position_status_inn.id,
      position_status_out.id,

      UART_Impl_Impl(api)
    )
}

object UART_Impl_Bridge {

  @record class Api(
    id : Art.BridgeId,
    waypoint_out_Id : Art.PortId,
    position_status_inn_Id : Art.PortId,
    position_status_out_Id : Art.PortId) {

    def sendwaypoint_out(value : MC.MISSING_TYPE_Impl) : Unit = {
      Art.putValue(waypoint_out_Id, MC.MISSING_TYPE_Impl_Payload(value))
    }

    def getposition_status_inn() : Option[MC.MISSING_TYPE_Impl] = {
      val value : Option[MC.MISSING_TYPE_Impl] = Art.getValue(position_status_inn_Id) match {
        case Some(MC.MISSING_TYPE_Impl_Payload(v)) => Some(v)
        case _ => None[MC.MISSING_TYPE_Impl]()
      }
      return value
    }

    def sendposition_status_out(value : SW.Coordinate_Impl) : Unit = {
      Art.putValue(position_status_out_Id, SW.Coordinate_Impl_Payload(value))
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
    UART_Impl_BridgeId : Art.BridgeId,

    waypoint_out_Id : Art.PortId,
    position_status_inn_Id : Art.PortId,
    position_status_out_Id : Art.PortId,

    component : UART_Impl_Impl ) extends Bridge.EntryPoints {

    val dataInPortIds: ISZ[Art.PortId] = ISZ()

    val eventInPortIds: ISZ[Art.PortId] = ISZ(position_status_inn_Id)

    val dataOutPortIds: ISZ[Art.PortId] = ISZ()

    val eventOutPortIds: ISZ[Art.PortId] = ISZ(waypoint_out_Id,
                                               position_status_out_Id)

    def initialise(): Unit = {
      component.initialise()
    }

    def compute(): Unit = {
      Art.receiveInput(eventInPortIds, dataInPortIds)
      component.timeTriggered()
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