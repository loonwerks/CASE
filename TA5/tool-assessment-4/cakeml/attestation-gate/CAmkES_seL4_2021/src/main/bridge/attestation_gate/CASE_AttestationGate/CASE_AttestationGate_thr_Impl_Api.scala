// #Sireum

package attestation_gate.CASE_AttestationGate

import org.sireum._
import art._
import attestation_gate._

@sig trait CASE_AttestationGate_thr_Impl_Api {
  def id: Art.BridgeId
  def trusted_ids_Id : Art.PortId
  def AutomationRequest_in_Id : Art.PortId
  def AutomationRequest_out_Id : Art.PortId
  def OperatingRegion_in_Id : Art.PortId
  def OperatingRegion_out_Id : Art.PortId
  def LineSearchTask_in_Id : Art.PortId
  def LineSearchTask_out_Id : Art.PortId

  def put_AutomationRequest_out(value : Base_Types.Bits) : Unit = {
    Art.putValue(AutomationRequest_out_Id, Base_Types.Bits_Payload(value))
  }

  def put_OperatingRegion_out(value : Base_Types.Bits) : Unit = {
    Art.putValue(OperatingRegion_out_Id, Base_Types.Bits_Payload(value))
  }

  def put_LineSearchTask_out(value : Base_Types.Bits) : Unit = {
    Art.putValue(LineSearchTask_out_Id, Base_Types.Bits_Payload(value))
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

@datatype class CASE_AttestationGate_thr_Impl_Initialization_Api (
  val id: Art.BridgeId,
  val trusted_ids_Id : Art.PortId,
  val AutomationRequest_in_Id : Art.PortId,
  val AutomationRequest_out_Id : Art.PortId,
  val OperatingRegion_in_Id : Art.PortId,
  val OperatingRegion_out_Id : Art.PortId,
  val LineSearchTask_in_Id : Art.PortId,
  val LineSearchTask_out_Id : Art.PortId) extends CASE_AttestationGate_thr_Impl_Api

@datatype class CASE_AttestationGate_thr_Impl_Operational_Api (
  val id: Art.BridgeId,
  val trusted_ids_Id : Art.PortId,
  val AutomationRequest_in_Id : Art.PortId,
  val AutomationRequest_out_Id : Art.PortId,
  val OperatingRegion_in_Id : Art.PortId,
  val OperatingRegion_out_Id : Art.PortId,
  val LineSearchTask_in_Id : Art.PortId,
  val LineSearchTask_out_Id : Art.PortId) extends CASE_AttestationGate_thr_Impl_Api {

  def get_trusted_ids() : Option[Base_Types.Bits] = {
    val value : Option[Base_Types.Bits] = Art.getValue(trusted_ids_Id) match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) =>
        Art.logError(id, s"Unexpected payload on port trusted_ids.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
        None[Base_Types.Bits]()
      case _ => None[Base_Types.Bits]()
    }
    return value
  }

  def get_AutomationRequest_in() : Option[Base_Types.Bits] = {
    val value : Option[Base_Types.Bits] = Art.getValue(AutomationRequest_in_Id) match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) =>
        Art.logError(id, s"Unexpected payload on port AutomationRequest_in.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
        None[Base_Types.Bits]()
      case _ => None[Base_Types.Bits]()
    }
    return value
  }

  def get_OperatingRegion_in() : Option[Base_Types.Bits] = {
    val value : Option[Base_Types.Bits] = Art.getValue(OperatingRegion_in_Id) match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) =>
        Art.logError(id, s"Unexpected payload on port OperatingRegion_in.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
        None[Base_Types.Bits]()
      case _ => None[Base_Types.Bits]()
    }
    return value
  }

  def get_LineSearchTask_in() : Option[Base_Types.Bits] = {
    val value : Option[Base_Types.Bits] = Art.getValue(LineSearchTask_in_Id) match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) =>
        Art.logError(id, s"Unexpected payload on port LineSearchTask_in.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
        None[Base_Types.Bits]()
      case _ => None[Base_Types.Bits]()
    }
    return value
  }
}
