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

  def put_AttestationTesterRequest(value : SW.AttestationRequestMsg_Impl) : Unit = {
    Art.putValue(AttestationTesterRequest_Id, SW.AttestationRequestMsg_Impl_Payload(value))
  }

  def put_MissionCommand(value : SW.RF_Msg_Impl) : Unit = {
    Art.putValue(MissionCommand_Id, SW.RF_Msg_Impl_Payload(value))
  }

  def put_AttestationResponse(value : SW.AttestationResponseMsg_Impl) : Unit = {
    Art.putValue(AttestationResponse_Id, SW.AttestationResponseMsg_Impl_Payload(value))
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

  def get_AttestationTesterResponse() : Option[SW.AttestationResponseMsg_Impl] = {
    val value : Option[SW.AttestationResponseMsg_Impl] = Art.getValue(AttestationTesterResponse_Id) match {
      case Some(SW.AttestationResponseMsg_Impl_Payload(v)) => Some(v)
      case Some(v) =>
        Art.logError(id, s"Unexpected payload on port AttestationTesterResponse.  Expecting 'SW.AttestationResponseMsg_Impl_Payload' but received ${v}")
        None[SW.AttestationResponseMsg_Impl]()
      case _ => None[SW.AttestationResponseMsg_Impl]()
    }
    return value
  }

  def get_AttestationRequest() : Option[SW.AttestationRequestMsg_Impl] = {
    val value : Option[SW.AttestationRequestMsg_Impl] = Art.getValue(AttestationRequest_Id) match {
      case Some(SW.AttestationRequestMsg_Impl_Payload(v)) => Some(v)
      case Some(v) =>
        Art.logError(id, s"Unexpected payload on port AttestationRequest.  Expecting 'SW.AttestationRequestMsg_Impl_Payload' but received ${v}")
        None[SW.AttestationRequestMsg_Impl]()
      case _ => None[SW.AttestationRequestMsg_Impl]()
    }
    return value
  }
}
