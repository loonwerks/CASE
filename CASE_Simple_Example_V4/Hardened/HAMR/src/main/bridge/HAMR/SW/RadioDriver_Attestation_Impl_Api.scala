// #Sireum

package HAMR.SW

import org.sireum._
import art._
import HAMR._

@sig trait RadioDriver_Attestation_Impl_Api {
  def id: Art.BridgeId
  def MissionCommand_Id : Art.PortId
  def AttestationRequest_Id : Art.PortId
  def AttestationResponse_Id : Art.PortId
  def Alert_Id : Art.PortId

  def put_MissionCommand(value : SW.RF_Msg_Impl) : Unit = {
    Art.putValue(MissionCommand_Id, SW.RF_Msg_Impl_Payload(value))
  }

  def put_AttestationResponse(value : CASE_Model_Transformations.CASE_AttestationResponseMsg_Impl) : Unit = {
    Art.putValue(AttestationResponse_Id, CASE_Model_Transformations.CASE_AttestationResponseMsg_Impl_Payload(value))
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
  val MissionCommand_Id : Art.PortId,
  val AttestationRequest_Id : Art.PortId,
  val AttestationResponse_Id : Art.PortId,
  val Alert_Id : Art.PortId) extends RadioDriver_Attestation_Impl_Api

@datatype class RadioDriver_Attestation_Impl_Operational_Api (
  val id: Art.BridgeId,
  val MissionCommand_Id : Art.PortId,
  val AttestationRequest_Id : Art.PortId,
  val AttestationResponse_Id : Art.PortId,
  val Alert_Id : Art.PortId) extends RadioDriver_Attestation_Impl_Api {

  def get_AttestationRequest() : Option[CASE_Model_Transformations.CASE_AttestationRequestMsg_Impl] = {
    val value : Option[CASE_Model_Transformations.CASE_AttestationRequestMsg_Impl] = Art.getValue(AttestationRequest_Id) match {
      case Some(CASE_Model_Transformations.CASE_AttestationRequestMsg_Impl_Payload(v)) => Some(v)
      case Some(v) =>
        Art.logError(id, s"Unexpected payload on port AttestationRequest.  Expecting 'CASE_Model_Transformations.CASE_AttestationRequestMsg_Impl_Payload' but received ${v}")
        None[CASE_Model_Transformations.CASE_AttestationRequestMsg_Impl]()
      case _ => None[CASE_Model_Transformations.CASE_AttestationRequestMsg_Impl]()
    }
    return value
  }

  def get_Alert() : Option[art.Empty] = {
    val value : Option[art.Empty] = Art.getValue(Alert_Id) match {
      case Some(Empty()) => Some(Empty())
      case Some(v) =>
        Art.logError(id, s"Unexpected payload on port Alert.  Expecting 'Empty' but received ${v}")
        None[art.Empty]()
      case _ => None[art.Empty]()
    }
    return value
  }
}
