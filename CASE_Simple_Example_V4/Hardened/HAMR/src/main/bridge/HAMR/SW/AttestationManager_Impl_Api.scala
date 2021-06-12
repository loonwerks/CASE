// #Sireum

package HAMR.SW

import org.sireum._
import art._
import HAMR._

@sig trait AttestationManager_Impl_Api {
  def id: Art.BridgeId
  def AttestationRequest_Id : Art.PortId
  def AttestationResponse_Id : Art.PortId
  def TrustedIds_Id : Art.PortId

  def put_AttestationRequest(value : SW.AttestationRequestMsg_Impl) : Unit = {
    Art.putValue(AttestationRequest_Id, SW.AttestationRequestMsg_Impl_Payload(value))
  }

  def put_TrustedIds(value : SW.AllowList_Impl) : Unit = {
    Art.putValue(TrustedIds_Id, SW.AllowList_Impl_Payload(value))
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

@datatype class AttestationManager_Impl_Initialization_Api (
  val id: Art.BridgeId,
  val AttestationRequest_Id : Art.PortId,
  val AttestationResponse_Id : Art.PortId,
  val TrustedIds_Id : Art.PortId) extends AttestationManager_Impl_Api

@datatype class AttestationManager_Impl_Operational_Api (
  val id: Art.BridgeId,
  val AttestationRequest_Id : Art.PortId,
  val AttestationResponse_Id : Art.PortId,
  val TrustedIds_Id : Art.PortId) extends AttestationManager_Impl_Api {

  def get_AttestationResponse() : Option[SW.AttestationResponseMsg_Impl] = {
    val value : Option[SW.AttestationResponseMsg_Impl] = Art.getValue(AttestationResponse_Id) match {
      case Some(SW.AttestationResponseMsg_Impl_Payload(v)) => Some(v)
      case Some(v) =>
        Art.logError(id, s"Unexpected payload on port AttestationResponse.  Expecting 'SW.AttestationResponseMsg_Impl_Payload' but received ${v}")
        None[SW.AttestationResponseMsg_Impl]()
      case _ => None[SW.AttestationResponseMsg_Impl]()
    }
    return value
  }
}
