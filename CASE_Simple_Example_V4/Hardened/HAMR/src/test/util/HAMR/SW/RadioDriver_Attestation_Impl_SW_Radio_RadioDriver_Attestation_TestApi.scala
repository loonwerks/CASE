package HAMR.SW

import org.sireum._
import art.{ArtNative_Ext, Empty}
import HAMR._

// This file was auto-generated.  Do not edit
abstract class RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_TestApi extends BridgeTestSuite[RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_Bridge](Arch.MissionComputer_Impl_Instance_SW_Radio_RadioDriver_Attestation) {

  /** helper function to set the values of all input ports.
   * @param AttestationRequest payloads for event data port AttestationRequest.
   *   ART currently supports single element event data queues so
   *   only the last element of AttestationRequest will be used
   * @param Alert the number of events to place in the Alert event port queue.
   *   ART currently supports single element event queues so at most
   *   one event will be placed in the queue.
   */
  def put_concrete_inputs(AttestationRequest : ISZ[CASE_Model_Transformations.CASE_AttestationRequestMsg_Impl],
                          Alert : Z): Unit = {
    for(v <- AttestationRequest){
      put_AttestationRequest(v)
    }
    for(i <- 0 until Alert) {
      put_Alert()
    }
  }


  /** helper function to check RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation's
   * output ports.  Use named arguments to check subsets of the output ports.
   * @param MissionCommand method that will be called with the payloads to be sent
   *        on the outgoing event data port 'MissionCommand'.
   * @param AttestationResponse method that will be called with the payloads to be sent
   *        on the outgoing event data port 'AttestationResponse'.
   */
  def check_concrete_output(MissionCommand: ISZ[SW.RF_Msg_Impl] => B = MissionCommandParam => {T},
                            AttestationResponse: ISZ[CASE_Model_Transformations.CASE_AttestationResponseMsg_Impl] => B = AttestationResponseParam => {T}): Unit = {
    var testFailures: ISZ[ST] = ISZ()

    var MissionCommandValue: ISZ[SW.RF_Msg_Impl] = ISZ()
    // TODO: event data port getter should return all of the events/payloads
    //       received on event data ports when queue sizes > 1 support is added
    //       to ART
    if(get_MissionCommand().nonEmpty) MissionCommandValue = MissionCommandValue :+ get_MissionCommand().get
    if(!MissionCommand(MissionCommandValue)) {
      testFailures = testFailures :+ st"'MissionCommand' did not match expected: received ${MissionCommandValue.size} events with the following payloads ${MissionCommandValue}"
    }
    var AttestationResponseValue: ISZ[CASE_Model_Transformations.CASE_AttestationResponseMsg_Impl] = ISZ()
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
  def put_AttestationRequest(value : CASE_Model_Transformations.CASE_AttestationRequestMsg_Impl): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.operational_api.AttestationRequest_Id, CASE_Model_Transformations.CASE_AttestationRequestMsg_Impl_Payload(value))
  }

  // setter for in EventPort
  def put_Alert(): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.operational_api.Alert_Id, Empty())
  }

  // getter for out EventDataPort
  def get_MissionCommand(): Option[SW.RF_Msg_Impl] = {
    val value: Option[SW.RF_Msg_Impl] = get_MissionCommand_payload() match {
      case Some(SW.RF_Msg_Impl_Payload(v)) => Some(v)
      case Some(v) => fail(s"Unexpected payload on port MissionCommand.  Expecting 'SW.RF_Msg_Impl_Payload' but received ${v}")
      case _ => None[SW.RF_Msg_Impl]()
    }
    return value
  }

  // payload getter for out EventDataPort
  def get_MissionCommand_payload(): Option[SW.RF_Msg_Impl_Payload] = {
    return ArtNative_Ext.observeOutPortValue(bridge.initialization_api.MissionCommand_Id).asInstanceOf[Option[SW.RF_Msg_Impl_Payload]]
  }

  // getter for out EventDataPort
  def get_AttestationResponse(): Option[CASE_Model_Transformations.CASE_AttestationResponseMsg_Impl] = {
    val value: Option[CASE_Model_Transformations.CASE_AttestationResponseMsg_Impl] = get_AttestationResponse_payload() match {
      case Some(CASE_Model_Transformations.CASE_AttestationResponseMsg_Impl_Payload(v)) => Some(v)
      case Some(v) => fail(s"Unexpected payload on port AttestationResponse.  Expecting 'CASE_Model_Transformations.CASE_AttestationResponseMsg_Impl_Payload' but received ${v}")
      case _ => None[CASE_Model_Transformations.CASE_AttestationResponseMsg_Impl]()
    }
    return value
  }

  // payload getter for out EventDataPort
  def get_AttestationResponse_payload(): Option[CASE_Model_Transformations.CASE_AttestationResponseMsg_Impl_Payload] = {
    return ArtNative_Ext.observeOutPortValue(bridge.initialization_api.AttestationResponse_Id).asInstanceOf[Option[CASE_Model_Transformations.CASE_AttestationResponseMsg_Impl_Payload]]
  }

}
