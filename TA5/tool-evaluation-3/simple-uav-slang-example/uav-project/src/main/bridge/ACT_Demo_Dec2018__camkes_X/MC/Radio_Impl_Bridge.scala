// #Sireum

package ACT_Demo_Dec2018__camkes_X.MC

import org.sireum._
import art._
import ACT_Demo_Dec2018__camkes_X._

// This file was auto-generated.  Do not edit

@record class Radio_Impl_Bridge(
  val id: Art.BridgeId,
  val name: String,
  val dispatchProtocol: DispatchPropertyProtocol,

  recv_map_inn: Port[MC.MISSING_TYPE_Impl],
  recv_map_out: Port[SW.Command_Impl],
  send_status_inn: Port[SW.Coordinate_Impl],
  send_status_out: Port[MC.MISSING_TYPE_Impl]
  ) extends Bridge {

  val ports : Bridge.Ports = Bridge.Ports(
    all = ISZ(recv_map_inn,
              recv_map_out,
              send_status_inn,
              send_status_out),

    dataIns = ISZ(),

    dataOuts = ISZ(),

    eventIns = ISZ(recv_map_inn,
                   send_status_inn),

    eventOuts = ISZ(recv_map_out,
                    send_status_out)
  )

  val api : Radio_Impl_Bridge.Api =
    Radio_Impl_Bridge.Api(
      id,
      recv_map_inn.id,
      recv_map_out.id,
      send_status_inn.id,
      send_status_out.id
    )

  val entryPoints : Bridge.EntryPoints =
    Radio_Impl_Bridge.EntryPoints(
      id,

      recv_map_inn.id,
      recv_map_out.id,
      send_status_inn.id,
      send_status_out.id,

      Radio_Impl_Impl(api)
    )
}

object Radio_Impl_Bridge {

  @record class Api(
    id : Art.BridgeId,
    recv_map_inn_Id : Art.PortId,
    recv_map_out_Id : Art.PortId,
    send_status_inn_Id : Art.PortId,
    send_status_out_Id : Art.PortId) {

    def getrecv_map_inn() : Option[MC.MISSING_TYPE_Impl] = {
      val value : Option[MC.MISSING_TYPE_Impl] = Art.getValue(recv_map_inn_Id) match {
        case Some(MC.MISSING_TYPE_Impl_Payload(v)) => Some(v)
        case _ => None[MC.MISSING_TYPE_Impl]()
      }
      return value
    }

    def sendrecv_map_out(value : SW.Command_Impl) : Unit = {
      Art.putValue(recv_map_out_Id, SW.Command_Impl_Payload(value))
    }

    def getsend_status_inn() : Option[SW.Coordinate_Impl] = {
      val value : Option[SW.Coordinate_Impl] = Art.getValue(send_status_inn_Id) match {
        case Some(SW.Coordinate_Impl_Payload(v)) => Some(v)
        case _ => None[SW.Coordinate_Impl]()
      }
      return value
    }

    def sendsend_status_out(value : MC.MISSING_TYPE_Impl) : Unit = {
      Art.putValue(send_status_out_Id, MC.MISSING_TYPE_Impl_Payload(value))
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
    Radio_Impl_BridgeId : Art.BridgeId,

    recv_map_inn_Id : Art.PortId,
    recv_map_out_Id : Art.PortId,
    send_status_inn_Id : Art.PortId,
    send_status_out_Id : Art.PortId,

    component : Radio_Impl_Impl ) extends Bridge.EntryPoints {

    val dataInPortIds: ISZ[Art.PortId] = ISZ()

    val eventInPortIds: ISZ[Art.PortId] = ISZ(recv_map_inn_Id,
                                              send_status_inn_Id)

    val dataOutPortIds: ISZ[Art.PortId] = ISZ()

    val eventOutPortIds: ISZ[Art.PortId] = ISZ(recv_map_out_Id,
                                               send_status_out_Id)

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