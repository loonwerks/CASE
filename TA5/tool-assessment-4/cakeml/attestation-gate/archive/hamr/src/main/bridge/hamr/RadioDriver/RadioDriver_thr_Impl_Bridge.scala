// #Sireum

package hamr.RadioDriver

import org.sireum._
import art._
import hamr._

// This file was auto-generated.  Do not edit

@record class RadioDriver_thr_Impl_Bridge(
  val id: Art.BridgeId,
  val name: String,
  val dispatchProtocol: DispatchPropertyProtocol,
  val dispatchTriggers: Option[ISZ[Art.PortId]],

  trusted_ids_out: Port[Base_Types.Bits],
  automation_request_out: Port[Base_Types.Bits],
  operating_region_out: Port[Base_Types.Bits],
  line_search_task_out: Port[Base_Types.Bits]
  ) extends Bridge {

  val ports : Bridge.Ports = Bridge.Ports(
    all = ISZ(trusted_ids_out,
              automation_request_out,
              operating_region_out,
              line_search_task_out),

    dataIns = ISZ(),

    dataOuts = ISZ(trusted_ids_out),

    eventIns = ISZ(),

    eventOuts = ISZ(automation_request_out,
                    operating_region_out,
                    line_search_task_out)
  )

  val api : RadioDriver_thr_Impl_Bridge.Api =
    RadioDriver_thr_Impl_Bridge.Api(
      id,
      trusted_ids_out.id,
      automation_request_out.id,
      operating_region_out.id,
      line_search_task_out.id
    )

  val entryPoints : Bridge.EntryPoints =
    RadioDriver_thr_Impl_Bridge.EntryPoints(
      id,

      trusted_ids_out.id,
      automation_request_out.id,
      operating_region_out.id,
      line_search_task_out.id,

      dispatchTriggers,

      RadioDriver_thr_Impl_Impl(api)
    )
}

object RadioDriver_thr_Impl_Bridge {

  @record class Api(
    id : Art.BridgeId,
    trusted_ids_out_Id : Art.PortId,
    automation_request_out_Id : Art.PortId,
    operating_region_out_Id : Art.PortId,
    line_search_task_out_Id : Art.PortId) {

    def sendautomation_request_out(value : Base_Types.Bits) : Unit = {
      Art.putValue(automation_request_out_Id, Base_Types.Bits_Payload(value))
    }

    def sendoperating_region_out(value : Base_Types.Bits) : Unit = {
      Art.putValue(operating_region_out_Id, Base_Types.Bits_Payload(value))
    }

    def sendline_search_task_out(value : Base_Types.Bits) : Unit = {
      Art.putValue(line_search_task_out_Id, Base_Types.Bits_Payload(value))
    }

    def settrusted_ids_out(value : Base_Types.Bits) : Unit = {
      Art.putValue(trusted_ids_out_Id, Base_Types.Bits_Payload(value))
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
    RadioDriver_thr_Impl_BridgeId : Art.BridgeId,

    trusted_ids_out_Id : Art.PortId,
    automation_request_out_Id : Art.PortId,
    operating_region_out_Id : Art.PortId,
    line_search_task_out_Id : Art.PortId,

    dispatchTriggers : Option[ISZ[Art.PortId]],

    component : RadioDriver_thr_Impl_Impl ) extends Bridge.EntryPoints {

    val dataInPortIds: ISZ[Art.PortId] = ISZ()

    val eventInPortIds: ISZ[Art.PortId] = ISZ()

    val dataOutPortIds: ISZ[Art.PortId] = ISZ(trusted_ids_out_Id)

    val eventOutPortIds: ISZ[Art.PortId] = ISZ(automation_request_out_Id,
                                               operating_region_out_Id,
                                               line_search_task_out_Id)

    def compute(): Unit = {
      Art.receiveInput(eventInPortIds, dataInPortIds)
      component.timeTriggered()
      Art.sendOutput(eventOutPortIds, dataOutPortIds)
    }

    override
    def testCompute(): Unit = {
      Art.receiveInput(eventInPortIds, dataInPortIds)
      component.timeTriggered()
      Art.releaseOutput(eventOutPortIds, dataOutPortIds)
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