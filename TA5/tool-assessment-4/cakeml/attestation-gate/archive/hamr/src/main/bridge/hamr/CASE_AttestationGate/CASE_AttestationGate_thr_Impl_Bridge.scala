// #Sireum

package hamr.CASE_AttestationGate

import org.sireum._
import art._
import hamr._

// This file was auto-generated.  Do not edit

@record class CASE_AttestationGate_thr_Impl_Bridge(
  val id: Art.BridgeId,
  val name: String,
  val dispatchProtocol: DispatchPropertyProtocol,
  val dispatchTriggers: Option[ISZ[Art.PortId]],

  trusted_ids: Port[Base_Types.Bits],
  AutomationRequest_in: Port[Base_Types.Bits],
  AutomationRequest_out: Port[Base_Types.Bits],
  OperatingRegion_in: Port[Base_Types.Bits],
  OperatingRegion_out: Port[Base_Types.Bits],
  LineSearchTask_in: Port[Base_Types.Bits],
  LineSearchTask_out: Port[Base_Types.Bits]
  ) extends Bridge {

  val ports : Bridge.Ports = Bridge.Ports(
    all = ISZ(trusted_ids,
              AutomationRequest_in,
              AutomationRequest_out,
              OperatingRegion_in,
              OperatingRegion_out,
              LineSearchTask_in,
              LineSearchTask_out),

    dataIns = ISZ(trusted_ids),

    dataOuts = ISZ(),

    eventIns = ISZ(AutomationRequest_in,
                   OperatingRegion_in,
                   LineSearchTask_in),

    eventOuts = ISZ(AutomationRequest_out,
                    OperatingRegion_out,
                    LineSearchTask_out)
  )

  val api : CASE_AttestationGate_thr_Impl_Bridge.Api =
    CASE_AttestationGate_thr_Impl_Bridge.Api(
      id,
      trusted_ids.id,
      AutomationRequest_in.id,
      AutomationRequest_out.id,
      OperatingRegion_in.id,
      OperatingRegion_out.id,
      LineSearchTask_in.id,
      LineSearchTask_out.id
    )

  val entryPoints : Bridge.EntryPoints =
    CASE_AttestationGate_thr_Impl_Bridge.EntryPoints(
      id,

      trusted_ids.id,
      AutomationRequest_in.id,
      AutomationRequest_out.id,
      OperatingRegion_in.id,
      OperatingRegion_out.id,
      LineSearchTask_in.id,
      LineSearchTask_out.id,

      dispatchTriggers,

      CASE_AttestationGate_thr_Impl_Impl(api)
    )
}

object CASE_AttestationGate_thr_Impl_Bridge {

  @record class Api(
    id : Art.BridgeId,
    trusted_ids_Id : Art.PortId,
    AutomationRequest_in_Id : Art.PortId,
    AutomationRequest_out_Id : Art.PortId,
    OperatingRegion_in_Id : Art.PortId,
    OperatingRegion_out_Id : Art.PortId,
    LineSearchTask_in_Id : Art.PortId,
    LineSearchTask_out_Id : Art.PortId) {

    def getAutomationRequest_in() : Option[Base_Types.Bits] = {
      val value : Option[Base_Types.Bits] = Art.getValue(AutomationRequest_in_Id) match {
        case Some(Base_Types.Bits_Payload(v)) => Some(v)
        case Some(v) => 
          Art.logError(id, s"Unexpected payload on port AutomationRequest_in.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
          None[Base_Types.Bits]() 
        case _ => None[Base_Types.Bits]()
      }
      return value
    }

    def sendAutomationRequest_out(value : Base_Types.Bits) : Unit = {
      Art.putValue(AutomationRequest_out_Id, Base_Types.Bits_Payload(value))
    }

    def getOperatingRegion_in() : Option[Base_Types.Bits] = {
      val value : Option[Base_Types.Bits] = Art.getValue(OperatingRegion_in_Id) match {
        case Some(Base_Types.Bits_Payload(v)) => Some(v)
        case Some(v) => 
          Art.logError(id, s"Unexpected payload on port OperatingRegion_in.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
          None[Base_Types.Bits]() 
        case _ => None[Base_Types.Bits]()
      }
      return value
    }

    def sendOperatingRegion_out(value : Base_Types.Bits) : Unit = {
      Art.putValue(OperatingRegion_out_Id, Base_Types.Bits_Payload(value))
    }

    def getLineSearchTask_in() : Option[Base_Types.Bits] = {
      val value : Option[Base_Types.Bits] = Art.getValue(LineSearchTask_in_Id) match {
        case Some(Base_Types.Bits_Payload(v)) => Some(v)
        case Some(v) => 
          Art.logError(id, s"Unexpected payload on port LineSearchTask_in.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
          None[Base_Types.Bits]() 
        case _ => None[Base_Types.Bits]()
      }
      return value
    }

    def sendLineSearchTask_out(value : Base_Types.Bits) : Unit = {
      Art.putValue(LineSearchTask_out_Id, Base_Types.Bits_Payload(value))
    }

    def gettrusted_ids() : Option[Base_Types.Bits] = {
      val value : Option[Base_Types.Bits] = Art.getValue(trusted_ids_Id) match {
        case Some(Base_Types.Bits_Payload(v)) => Some(v)
        case Some(v) => 
          Art.logError(id, s"Unexpected payload on port trusted_ids.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
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
    CASE_AttestationGate_thr_Impl_BridgeId : Art.BridgeId,

    trusted_ids_Id : Art.PortId,
    AutomationRequest_in_Id : Art.PortId,
    AutomationRequest_out_Id : Art.PortId,
    OperatingRegion_in_Id : Art.PortId,
    OperatingRegion_out_Id : Art.PortId,
    LineSearchTask_in_Id : Art.PortId,
    LineSearchTask_out_Id : Art.PortId,

    dispatchTriggers : Option[ISZ[Art.PortId]],

    component : CASE_AttestationGate_thr_Impl_Impl ) extends Bridge.EntryPoints {

    val dataInPortIds: ISZ[Art.PortId] = ISZ(trusted_ids_Id)

    val eventInPortIds: ISZ[Art.PortId] = ISZ(AutomationRequest_in_Id,
                                              OperatingRegion_in_Id,
                                              LineSearchTask_in_Id)

    val dataOutPortIds: ISZ[Art.PortId] = ISZ()

    val eventOutPortIds: ISZ[Art.PortId] = ISZ(AutomationRequest_out_Id,
                                               OperatingRegion_out_Id,
                                               LineSearchTask_out_Id)

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