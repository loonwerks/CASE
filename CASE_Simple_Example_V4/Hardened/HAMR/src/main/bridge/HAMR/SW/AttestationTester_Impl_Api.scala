// #Sireum

package HAMR.SW

import org.sireum._
import art._
import HAMR._

@sig trait AttestationTester_Impl_Api {
  def id: Art.BridgeId
  def AttestationRequest_Id : Art.PortId
  def AttestationResponse_Id : Art.PortId

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

@datatype class AttestationTester_Impl_Initialization_Api (
  val id: Art.BridgeId,
  val AttestationRequest_Id : Art.PortId,
  val AttestationResponse_Id : Art.PortId) extends AttestationTester_Impl_Api

@datatype class AttestationTester_Impl_Operational_Api (
  val id: Art.BridgeId,
  val AttestationRequest_Id : Art.PortId,
  val AttestationResponse_Id : Art.PortId) extends AttestationTester_Impl_Api {

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
