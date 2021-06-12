package HAMR.SW

import org.sireum._
import art.{ArtNative_Ext, Empty}
import HAMR._

// This file was auto-generated.  Do not edit
abstract class AttestationManager_Impl_AttestationManager_AttestationManager_TestApi extends BridgeTestSuite[AttestationManager_Impl_AttestationManager_AttestationManager_Bridge](Arch.SW_seL4_Impl_Instance_AttestationManager_AttestationManager) {

  /** helper function to set the values of all input ports.
   * @param AttestationResponse payloads for event data port AttestationResponse.
   *   ART currently supports single element event data queues so
   *   only the last element of AttestationResponse will be used
   */
  def put_concrete_inputs(AttestationResponse : ISZ[SW.AttestationResponseMsg_Impl]): Unit = {
    for(v <- AttestationResponse){
      put_AttestationResponse(v)
    }
  }


  /** helper function to check AttestationManager_Impl_AttestationManager_AttestationManager's
   * output ports.  Use named arguments to check subsets of the output ports.
   * @param AttestationRequest method that will be called with the payloads to be sent
   *        on the outgoing event data port 'AttestationRequest'.
   * @param TrustedIds method that will be called with the payloads to be sent
   *        on the outgoing event data port 'TrustedIds'.
   */
  def check_concrete_output(AttestationRequest: ISZ[SW.AttestationRequestMsg_Impl] => B = AttestationRequestParam => {T},
                            TrustedIds: ISZ[SW.AllowList_Impl] => B = TrustedIdsParam => {T}): Unit = {
    var testFailures: ISZ[ST] = ISZ()

    var AttestationRequestValue: ISZ[SW.AttestationRequestMsg_Impl] = ISZ()
    // TODO: event data port getter should return all of the events/payloads
    //       received on event data ports when queue sizes > 1 support is added
    //       to ART
    if(get_AttestationRequest().nonEmpty) AttestationRequestValue = AttestationRequestValue :+ get_AttestationRequest().get
    if(!AttestationRequest(AttestationRequestValue)) {
      testFailures = testFailures :+ st"'AttestationRequest' did not match expected: received ${AttestationRequestValue.size} events with the following payloads ${AttestationRequestValue}"
    }
    var TrustedIdsValue: ISZ[SW.AllowList_Impl] = ISZ()
    // TODO: event data port getter should return all of the events/payloads
    //       received on event data ports when queue sizes > 1 support is added
    //       to ART
    if(get_TrustedIds().nonEmpty) TrustedIdsValue = TrustedIdsValue :+ get_TrustedIds().get
    if(!TrustedIds(TrustedIdsValue)) {
      testFailures = testFailures :+ st"'TrustedIds' did not match expected: received ${TrustedIdsValue.size} events with the following payloads ${TrustedIdsValue}"
    }

    assert(testFailures.isEmpty, st"${(testFailures, "\n")}".render)
  }


  // setter for in EventDataPort
  def put_AttestationResponse(value : SW.AttestationResponseMsg_Impl): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.operational_api.AttestationResponse_Id, SW.AttestationResponseMsg_Impl_Payload(value))
  }

  // getter for out EventDataPort
  def get_AttestationRequest(): Option[SW.AttestationRequestMsg_Impl] = {
    val value: Option[SW.AttestationRequestMsg_Impl] = get_AttestationRequest_payload() match {
      case Some(SW.AttestationRequestMsg_Impl_Payload(v)) => Some(v)
      case Some(v) => fail(s"Unexpected payload on port AttestationRequest.  Expecting 'SW.AttestationRequestMsg_Impl_Payload' but received ${v}")
      case _ => None[SW.AttestationRequestMsg_Impl]()
    }
    return value
  }

  // payload getter for out EventDataPort
  def get_AttestationRequest_payload(): Option[SW.AttestationRequestMsg_Impl_Payload] = {
    return ArtNative_Ext.observeOutPortValue(bridge.initialization_api.AttestationRequest_Id).asInstanceOf[Option[SW.AttestationRequestMsg_Impl_Payload]]
  }

  // getter for out EventDataPort
  def get_TrustedIds(): Option[SW.AllowList_Impl] = {
    val value: Option[SW.AllowList_Impl] = get_TrustedIds_payload() match {
      case Some(SW.AllowList_Impl_Payload(v)) => Some(v)
      case Some(v) => fail(s"Unexpected payload on port TrustedIds.  Expecting 'SW.AllowList_Impl_Payload' but received ${v}")
      case _ => None[SW.AllowList_Impl]()
    }
    return value
  }

  // payload getter for out EventDataPort
  def get_TrustedIds_payload(): Option[SW.AllowList_Impl_Payload] = {
    return ArtNative_Ext.observeOutPortValue(bridge.initialization_api.TrustedIds_Id).asInstanceOf[Option[SW.AllowList_Impl_Payload]]
  }

}
