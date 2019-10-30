// #Sireum

package uav_project_extern.SW

import org.sireum._
import art._
import uav_project_extern._

// This file was auto-generated.  Do not edit

@record class RadioDriver_Impl_Bridge(
  val id: Art.BridgeId,
  val name: String,
  val dispatchProtocol: DispatchPropertyProtocol,

  recv_map_out: Port[SW.Command_Impl]
  ) extends Bridge {

  val ports : Bridge.Ports = Bridge.Ports(
    all = ISZ(recv_map_out),

    dataIns = ISZ(),

    dataOuts = ISZ(),

    eventIns = ISZ(),

    eventOuts = ISZ(recv_map_out)
  )

  val api : RadioDriver_Impl_Bridge.Api =
    RadioDriver_Impl_Bridge.Api(
      id,
      recv_map_out.id
    )

  val entryPoints : Bridge.EntryPoints =
    RadioDriver_Impl_Bridge.EntryPoints(
      id,

      recv_map_out.id,

      RadioDriver_Impl_Impl(api)
    )
}

object RadioDriver_Impl_Bridge {

  @record class Api(
    id : Art.BridgeId,
    recv_map_out_Id : Art.PortId) {

    def sendrecv_map_out(value : SW.Command_Impl) : Unit = {
      Art.putValue(recv_map_out_Id, SW.Command_Impl_Payload(value))
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
    RadioDriver_Impl_BridgeId : Art.BridgeId,

    recv_map_out_Id : Art.PortId,

    component : RadioDriver_Impl_Impl ) extends Bridge.EntryPoints {

    val dataInPortIds: ISZ[Art.PortId] = ISZ()

    val eventInPortIds: ISZ[Art.PortId] = ISZ()

    val dataOutPortIds: ISZ[Art.PortId] = ISZ()

    val eventOutPortIds: ISZ[Art.PortId] = ISZ(recv_map_out_Id)

    def compute(): Unit = {
      val EventTriggered(portIds) = Art.dispatchStatus(RadioDriver_Impl_BridgeId)
      Art.receiveInput(eventInPortIds, dataInPortIds)

      for(portId <- portIds) {

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