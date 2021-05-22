// #Sireum

package attestation_gate.SysContext

import org.sireum._
import art._
import attestation_gate._

@sig trait UxAS_thr_Impl_Api {
  def id: Art.BridgeId
  def AutomationRequest_Id : Art.PortId
  def OperatingRegion_Id : Art.PortId
  def LineSearchTask_Id : Art.PortId


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

@datatype class UxAS_thr_Impl_Initialization_Api (
  val id: Art.BridgeId,
  val AutomationRequest_Id : Art.PortId,
  val OperatingRegion_Id : Art.PortId,
  val LineSearchTask_Id : Art.PortId) extends UxAS_thr_Impl_Api

@datatype class UxAS_thr_Impl_Operational_Api (
  val id: Art.BridgeId,
  val AutomationRequest_Id : Art.PortId,
  val OperatingRegion_Id : Art.PortId,
  val LineSearchTask_Id : Art.PortId) extends UxAS_thr_Impl_Api {

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
}
