package HAMR.SW

import org.sireum._
import art.{ArtNative_Ext, Empty}
import HAMR._

// This file was auto-generated.  Do not edit
abstract class AttestationTester_Impl_AttestationTester_AttestationTester_TestApi extends BridgeTestSuite[AttestationTester_Impl_AttestationTester_AttestationTester_Bridge](Arch.SW_seL4_Impl_Instance_AttestationTester_AttestationTester) {

  /** helper function to set the values of all input ports.
   * @param AttestationRequest payloads for event data port AttestationRequest.
   *   ART currently supports single element event data queues so
   *   only the last element of AttestationRequest will be used
   */
  def put_concrete_inputs(AttestationRequest : ISZ[SW.AttestationRequestMsg_Impl]): Unit = {
    for(v <- AttestationRequest){
      put_AttestationRequest(v)
    }
  }


  /** helper function to check AttestationTester_Impl_AttestationTester_AttestationTester's
   * output ports.  Use named arguments to check subsets of the output ports.
   * @param AttestationResponse method that will be called with the payloads to be sent
   *        on the outgoing event data port 'AttestationResponse'.
   */
  def check_concrete_output(AttestationResponse: ISZ[SW.AttestationResponseMsg_Impl] => B = AttestationResponseParam => {T}): Unit = {
    var testFailures: ISZ[ST] = ISZ()

    var AttestationResponseValue: ISZ[SW.AttestationResponseMsg_Impl] = ISZ()
    // TODO: event data port getter should return all of the events/payloads
    //       received on event data ports when queue sizes > 1 support is added
    //       to ART
    if(get_AttestationResponse().nonEmpty) AttestationResponseValue = AttestationResponseValue :+ get_AttestationResponse().get
    if(!AttestationResponse(AttestationResponseValue)) {
      testFailures = testFailures :+ st"'AttestationResponse' did not match expected: received ${AttestationResponseValue.size} events with the following payloads ${AttestationResponseValue}"
    }

    assert(testFailures.isEmpty, st"${(testFailures, "\n")}".render)
  }


  // setter for in EventDataPort
  def put_AttestationRequest(value : SW.AttestationRequestMsg_Impl): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.operational_api.AttestationRequest_Id, SW.AttestationRequestMsg_Impl_Payload(value))
  }

  // getter for out EventDataPort
  def get_AttestationResponse(): Option[SW.AttestationResponseMsg_Impl] = {
    val value: Option[SW.AttestationResponseMsg_Impl] = get_AttestationResponse_payload() match {
      case Some(SW.AttestationResponseMsg_Impl_Payload(v)) => Some(v)
      case Some(v) => fail(s"Unexpected payload on port AttestationResponse.  Expecting 'SW.AttestationResponseMsg_Impl_Payload' but received ${v}")
      case _ => None[SW.AttestationResponseMsg_Impl]()
    }
    return value
  }

  // payload getter for out EventDataPort
  def get_AttestationResponse_payload(): Option[SW.AttestationResponseMsg_Impl_Payload] = {
    return ArtNative_Ext.observeOutPortValue(bridge.initialization_api.AttestationResponse_Id).asInstanceOf[Option[SW.AttestationResponseMsg_Impl_Payload]]
  }

}
