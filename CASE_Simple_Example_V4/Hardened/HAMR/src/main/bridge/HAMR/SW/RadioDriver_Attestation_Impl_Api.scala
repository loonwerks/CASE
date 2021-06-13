// #Sireum

package HAMR.SW

import org.sireum._
import art._
import HAMR._

@sig trait RadioDriver_Attestation_Impl_Api {
  def id: Art.BridgeId
  def AttestationTesterResponse_Id : Art.PortId
  def AttestationTesterRequest_Id : Art.PortId
  def MissionCommand_Id : Art.PortId
  def AttestationRequest_Id : Art.PortId
  def AttestationResponse_Id : Art.PortId

  def put_AttestationTesterRequest(value : Base_Types.Bits) : Unit = {
    Art.putValue(AttestationTesterRequest_Id, Base_Types.Bits_Payload(value))
  }

  def put_MissionCommand(value : Base_Types.Bits) : Unit = {
    Art.putValue(MissionCommand_Id, Base_Types.Bits_Payload(value))
  }

  def put_AttestationResponse(value : Base_Types.Bits) : Unit = {
    Art.putValue(AttestationResponse_Id, Base_Types.Bits_Payload(value))
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

@datatype class RadioDriver_Attestation_Impl_Initialization_Api (
  val id: Art.BridgeId,
  val AttestationTesterResponse_Id : Art.PortId,
  val AttestationTesterRequest_Id : Art.PortId,
  val MissionCommand_Id : Art.PortId,
  val AttestationRequest_Id : Art.PortId,
  val AttestationResponse_Id : Art.PortId) extends RadioDriver_Attestation_Impl_Api

@datatype class RadioDriver_Attestation_Impl_Operational_Api (
  val id: Art.BridgeId,
  val AttestationTesterResponse_Id : Art.PortId,
  val AttestationTesterRequest_Id : Art.PortId,
  val MissionCommand_Id : Art.PortId,
  val AttestationRequest_Id : Art.PortId,
  val AttestationResponse_Id : Art.PortId) extends RadioDriver_Attestation_Impl_Api {

  def get_AttestationTesterResponse() : Option[Base_Types.Bits] = {
    val value : Option[Base_Types.Bits] = Art.getValue(AttestationTesterResponse_Id) match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) =>
        Art.logError(id, s"Unexpected payload on port AttestationTesterResponse.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
        None[Base_Types.Bits]()
      case _ => None[Base_Types.Bits]()
    }
    return value
  }

  def get_AttestationRequest() : Option[Base_Types.Bits] = {
    val value : Option[Base_Types.Bits] = Art.getValue(AttestationRequest_Id) match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) =>
        Art.logError(id, s"Unexpected payload on port AttestationRequest.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
        None[Base_Types.Bits]()
      case _ => None[Base_Types.Bits]()
    }
    return value
  }
}
