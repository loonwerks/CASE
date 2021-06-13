package HAMR.SW

import org.sireum._
import art.{ArtNative_Ext, Empty}
import HAMR._

// This file was auto-generated.  Do not edit
abstract class AttestationTester_Impl_SW_AttestationTester_AttestationTester_TestApi extends BridgeTestSuite[AttestationTester_Impl_SW_AttestationTester_AttestationTester_Bridge](Arch.MissionComputer_Impl_Instance_SW_AttestationTester_AttestationTester) {

  /** helper function to set the values of all input ports.
   * @param AttestationRequest payloads for event data port AttestationRequest.
   *   ART currently supports single element event data queues so
   *   only the last element of AttestationRequest will be used
   */
  def put_concrete_inputs(AttestationRequest : ISZ[Base_Types.Bits]): Unit = {
    for(v <- AttestationRequest){
      put_AttestationRequest(v)
    }
  }


  /** helper function to check AttestationTester_Impl_SW_AttestationTester_AttestationTester's
   * output ports.  Use named arguments to check subsets of the output ports.
   * @param AttestationResponse method that will be called with the payloads to be sent
   *        on the outgoing event data port 'AttestationResponse'.
   */
  def check_concrete_output(AttestationResponse: ISZ[Base_Types.Bits] => B = AttestationResponseParam => {T}): Unit = {
    var testFailures: ISZ[ST] = ISZ()

    var AttestationResponseValue: ISZ[Base_Types.Bits] = ISZ()
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
  def put_AttestationRequest(value : Base_Types.Bits): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.operational_api.AttestationRequest_Id, Base_Types.Bits_Payload(value))
  }

  // getter for out EventDataPort
  def get_AttestationResponse(): Option[Base_Types.Bits] = {
    val value: Option[Base_Types.Bits] = get_AttestationResponse_payload() match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) => fail(s"Unexpected payload on port AttestationResponse.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
      case _ => None[Base_Types.Bits]()
    }
    return value
  }

  // payload getter for out EventDataPort
  def get_AttestationResponse_payload(): Option[Base_Types.Bits_Payload] = {
    return ArtNative_Ext.observeOutPortValue(bridge.initialization_api.AttestationResponse_Id).asInstanceOf[Option[Base_Types.Bits_Payload]]
  }

}
