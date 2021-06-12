package HAMR.SW

import org.sireum._
import art.{ArtNative_Ext, Empty}
import HAMR._

// This file was auto-generated.  Do not edit
abstract class RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation_TestApi extends BridgeTestSuite[RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation_Bridge](Arch.SW_seL4_Impl_Instance_Radio_RadioDriver_Attestation) {

  /** helper function to set the values of all input ports.
   * @param AttestationTesterResponse payloads for event data port AttestationTesterResponse.
   *   ART currently supports single element event data queues so
   *   only the last element of AttestationTesterResponse will be used
   * @param AttestationRequest payloads for event data port AttestationRequest.
   *   ART currently supports single element event data queues so
   *   only the last element of AttestationRequest will be used
   */
  def put_concrete_inputs(AttestationTesterResponse : ISZ[SW.AttestationResponseMsg_Impl],
                          AttestationRequest : ISZ[SW.AttestationRequestMsg_Impl]): Unit = {
    for(v <- AttestationTesterResponse){
      put_AttestationTesterResponse(v)
    }
    for(v <- AttestationRequest){
      put_AttestationRequest(v)
    }
  }


  /** helper function to check RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation's
   * output ports.  Use named arguments to check subsets of the output ports.
   * @param AttestationTesterRequest method that will be called with the payloads to be sent
   *        on the outgoing event data port 'AttestationTesterRequest'.
   * @param MissionCommand method that will be called with the payloads to be sent
   *        on the outgoing event data port 'MissionCommand'.
   * @param AttestationResponse method that will be called with the payloads to be sent
   *        on the outgoing event data port 'AttestationResponse'.
   */
  def check_concrete_output(AttestationTesterRequest: ISZ[SW.AttestationRequestMsg_Impl] => B = AttestationTesterRequestParam => {T},
                            MissionCommand: ISZ[SW.RF_Msg_Impl] => B = MissionCommandParam => {T},
                            AttestationResponse: ISZ[SW.AttestationResponseMsg_Impl] => B = AttestationResponseParam => {T}): Unit = {
    var testFailures: ISZ[ST] = ISZ()

    var AttestationTesterRequestValue: ISZ[SW.AttestationRequestMsg_Impl] = ISZ()
    // TODO: event data port getter should return all of the events/payloads
    //       received on event data ports when queue sizes > 1 support is added
    //       to ART
    if(get_AttestationTesterRequest().nonEmpty) AttestationTesterRequestValue = AttestationTesterRequestValue :+ get_AttestationTesterRequest().get
    if(!AttestationTesterRequest(AttestationTesterRequestValue)) {
      testFailures = testFailures :+ st"'AttestationTesterRequest' did not match expected: received ${AttestationTesterRequestValue.size} events with the following payloads ${AttestationTesterRequestValue}"
    }
    var MissionCommandValue: ISZ[SW.RF_Msg_Impl] = ISZ()
    // TODO: event data port getter should return all of the events/payloads
    //       received on event data ports when queue sizes > 1 support is added
    //       to ART
    if(get_MissionCommand().nonEmpty) MissionCommandValue = MissionCommandValue :+ get_MissionCommand().get
    if(!MissionCommand(MissionCommandValue)) {
      testFailures = testFailures :+ st"'MissionCommand' did not match expected: received ${MissionCommandValue.size} events with the following payloads ${MissionCommandValue}"
    }
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
  def put_AttestationTesterResponse(value : SW.AttestationResponseMsg_Impl): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.operational_api.AttestationTesterResponse_Id, SW.AttestationResponseMsg_Impl_Payload(value))
  }

  // setter for in EventDataPort
  def put_AttestationRequest(value : SW.AttestationRequestMsg_Impl): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.operational_api.AttestationRequest_Id, SW.AttestationRequestMsg_Impl_Payload(value))
  }

  // getter for out EventDataPort
  def get_AttestationTesterRequest(): Option[SW.AttestationRequestMsg_Impl] = {
    val value: Option[SW.AttestationRequestMsg_Impl] = get_AttestationTesterRequest_payload() match {
      case Some(SW.AttestationRequestMsg_Impl_Payload(v)) => Some(v)
      case Some(v) => fail(s"Unexpected payload on port AttestationTesterRequest.  Expecting 'SW.AttestationRequestMsg_Impl_Payload' but received ${v}")
      case _ => None[SW.AttestationRequestMsg_Impl]()
    }
    return value
  }

  // payload getter for out EventDataPort
  def get_AttestationTesterRequest_payload(): Option[SW.AttestationRequestMsg_Impl_Payload] = {
    return ArtNative_Ext.observeOutPortValue(bridge.initialization_api.AttestationTesterRequest_Id).asInstanceOf[Option[SW.AttestationRequestMsg_Impl_Payload]]
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
