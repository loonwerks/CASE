// #Sireum

package HAMR.SW

import org.sireum._
import art._
import HAMR._

@sig trait CASE_AttestationManager_Impl_Api {
  def id: Art.BridgeId
  def AttestationRequest_Id : Art.PortId
  def AttestationResponse_Id : Art.PortId
  def TrustedIds_Id : Art.PortId

  def put_AttestationRequest(value : CASE_Model_Transformations.CASE_AttestationRequestMsg_Impl) : Unit = {
    Art.putValue(AttestationRequest_Id, CASE_Model_Transformations.CASE_AttestationRequestMsg_Impl_Payload(value))
  }

  def put_TrustedIds(value : SW.Address_Impl) : Unit = {
    Art.putValue(TrustedIds_Id, SW.Address_Impl_Payload(value))
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

@datatype class CASE_AttestationManager_Impl_Initialization_Api (
  val id: Art.BridgeId,
  val AttestationRequest_Id : Art.PortId,
  val AttestationResponse_Id : Art.PortId,
  val TrustedIds_Id : Art.PortId) extends CASE_AttestationManager_Impl_Api

@datatype class CASE_AttestationManager_Impl_Operational_Api (
  val id: Art.BridgeId,
  val AttestationRequest_Id : Art.PortId,
  val AttestationResponse_Id : Art.PortId,
  val TrustedIds_Id : Art.PortId) extends CASE_AttestationManager_Impl_Api {

  def get_AttestationResponse() : Option[CASE_Model_Transformations.CASE_AttestationResponseMsg_Impl] = {
    val value : Option[CASE_Model_Transformations.CASE_AttestationResponseMsg_Impl] = Art.getValue(AttestationResponse_Id) match {
      case Some(CASE_Model_Transformations.CASE_AttestationResponseMsg_Impl_Payload(v)) => Some(v)
      case Some(v) =>
        Art.logError(id, s"Unexpected payload on port AttestationResponse.  Expecting 'CASE_Model_Transformations.CASE_AttestationResponseMsg_Impl_Payload' but received ${v}")
        None[CASE_Model_Transformations.CASE_AttestationResponseMsg_Impl]()
      case _ => None[CASE_Model_Transformations.CASE_AttestationResponseMsg_Impl]()
    }
    return value
  }
}
