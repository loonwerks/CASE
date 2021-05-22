// #Sireum

package hamr.SysContext

import org.sireum._
import art._
import hamr._

// This file was auto-generated.  Do not edit

@record class UxAS_thr_Impl_Bridge(
  val id: Art.BridgeId,
  val name: String,
  val dispatchProtocol: DispatchPropertyProtocol,
  val dispatchTriggers: Option[ISZ[Art.PortId]],

  AutomationRequest: Port[Base_Types.Bits],
  OperatingRegion: Port[Base_Types.Bits],
  LineSearchTask: Port[Base_Types.Bits]
  ) extends Bridge {

  val ports : Bridge.Ports = Bridge.Ports(
    all = ISZ(AutomationRequest,
              OperatingRegion,
              LineSearchTask),

    dataIns = ISZ(),

    dataOuts = ISZ(),

    eventIns = ISZ(AutomationRequest,
                   OperatingRegion,
                   LineSearchTask),

    eventOuts = ISZ()
  )

  val api : UxAS_thr_Impl_Bridge.Api =
    UxAS_thr_Impl_Bridge.Api(
      id,
      AutomationRequest.id,
      OperatingRegion.id,
      LineSearchTask.id
    )

  val entryPoints : Bridge.EntryPoints =
    UxAS_thr_Impl_Bridge.EntryPoints(
      id,

      AutomationRequest.id,
      OperatingRegion.id,
      LineSearchTask.id,

      dispatchTriggers,

      UxAS_thr_Impl_Impl(api)
    )
}

object UxAS_thr_Impl_Bridge {

  @record class Api(
    id : Art.BridgeId,
    AutomationRequest_Id : Art.PortId,
    OperatingRegion_Id : Art.PortId,
    LineSearchTask_Id : Art.PortId) {

    def getAutomationRequest() : Option[Base_Types.Bits] = {
      val value : Option[Base_Types.Bits] = Art.getValue(AutomationRequest_Id) match {
        case Some(Base_Types.Bits_Payload(v)) => Some(v)
        case Some(v) => 
          Art.logError(id, s"Unexpected payload on port AutomationRequest.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
          None[Base_Types.Bits]() 
        case _ => None[Base_Types.Bits]()
      }
      return value
    }

    def getOperatingRegion() : Option[Base_Types.Bits] = {
      val value : Option[Base_Types.Bits] = Art.getValue(OperatingRegion_Id) match {
        case Some(Base_Types.Bits_Payload(v)) => Some(v)
        case Some(v) => 
          Art.logError(id, s"Unexpected payload on port OperatingRegion.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
          None[Base_Types.Bits]() 
        case _ => None[Base_Types.Bits]()
      }
      return value
    }

    def getLineSearchTask() : Option[Base_Types.Bits] = {
      val value : Option[Base_Types.Bits] = Art.getValue(LineSearchTask_Id) match {
        case Some(Base_Types.Bits_Payload(v)) => Some(v)
        case Some(v) => 
          Art.logError(id, s"Unexpected payload on port LineSearchTask.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
          None[Base_Types.Bits]() 
        case _ => None[Base_Types.Bits]()
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
    UxAS_thr_Impl_BridgeId : Art.BridgeId,

    AutomationRequest_Id : Art.PortId,
    OperatingRegion_Id : Art.PortId,
    LineSearchTask_Id : Art.PortId,

    dispatchTriggers : Option[ISZ[Art.PortId]],

    component : UxAS_thr_Impl_Impl ) extends Bridge.EntryPoints {

    val dataInPortIds: ISZ[Art.PortId] = ISZ()

    val eventInPortIds: ISZ[Art.PortId] = ISZ(AutomationRequest_Id,
                                              OperatingRegion_Id,
                                              LineSearchTask_Id)

    val dataOutPortIds: ISZ[Art.PortId] = ISZ()

    val eventOutPortIds: ISZ[Art.PortId] = ISZ()

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