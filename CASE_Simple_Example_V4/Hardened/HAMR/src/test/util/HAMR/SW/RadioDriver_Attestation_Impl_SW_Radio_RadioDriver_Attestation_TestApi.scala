package HAMR.SW

import org.sireum._
import art.{ArtNative_Ext, Empty}
import HAMR._

// This file was auto-generated.  Do not edit
abstract class RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_TestApi extends BridgeTestSuite[RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_Bridge](Arch.MissionComputer_Impl_Instance_SW_Radio_RadioDriver_Attestation) {

  /** helper function to set the values of all input ports.
   * @param AttestationTesterResponse payloads for event data port AttestationTesterResponse.
   *   ART currently supports single element event data queues so
   *   only the last element of AttestationTesterResponse will be used
   * @param AttestationRequest payloads for event data port AttestationRequest.
   *   ART currently supports single element event data queues so
   *   only the last element of AttestationRequest will be used
   */
  def put_concrete_inputs(AttestationTesterResponse : ISZ[Base_Types.Bits],
                          AttestationRequest : ISZ[Base_Types.Bits]): Unit = {
    for(v <- AttestationTesterResponse){
      put_AttestationTesterResponse(v)
    }
    for(v <- AttestationRequest){
      put_AttestationRequest(v)
    }
  }


  /** helper function to check RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation's
   * output ports.  Use named arguments to check subsets of the output ports.
   * @param AttestationTesterRequest method that will be called with the payloads to be sent
   *        on the outgoing event data port 'AttestationTesterRequest'.
   * @param MissionCommand method that will be called with the payloads to be sent
   *        on the outgoing event data port 'MissionCommand'.
   * @param AttestationResponse method that will be called with the payloads to be sent
   *        on the outgoing event data port 'AttestationResponse'.
   */
  def check_concrete_output(AttestationTesterRequest: ISZ[Base_Types.Bits] => B = AttestationTesterRequestParam => {T},
                            MissionCommand: ISZ[Base_Types.Bits] => B = MissionCommandParam => {T},
                            AttestationResponse: ISZ[Base_Types.Bits] => B = AttestationResponseParam => {T}): Unit = {
    var testFailures: ISZ[ST] = ISZ()

    var AttestationTesterRequestValue: ISZ[Base_Types.Bits] = ISZ()
    // TODO: event data port getter should return all of the events/payloads
    //       received on event data ports when queue sizes > 1 support is added
    //       to ART
    if(get_AttestationTesterRequest().nonEmpty) AttestationTesterRequestValue = AttestationTesterRequestValue :+ get_AttestationTesterRequest().get
    if(!AttestationTesterRequest(AttestationTesterRequestValue)) {
      testFailures = testFailures :+ st"'AttestationTesterRequest' did not match expected: received ${AttestationTesterRequestValue.size} events with the following payloads ${AttestationTesterRequestValue}"
    }
    var MissionCommandValue: ISZ[Base_Types.Bits] = ISZ()
    // TODO: event data port getter should return all of the events/payloads
    //       received on event data ports when queue sizes > 1 support is added
    //       to ART
    if(get_MissionCommand().nonEmpty) MissionCommandValue = MissionCommandValue :+ get_MissionCommand().get
    if(!MissionCommand(MissionCommandValue)) {
      testFailures = testFailures :+ st"'MissionCommand' did not match expected: received ${MissionCommandValue.size} events with the following payloads ${MissionCommandValue}"
    }
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
  def put_AttestationTesterResponse(value : Base_Types.Bits): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.operational_api.AttestationTesterResponse_Id, Base_Types.Bits_Payload(value))
  }

  // setter for in EventDataPort
  def put_AttestationRequest(value : Base_Types.Bits): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.operational_api.AttestationRequest_Id, Base_Types.Bits_Payload(value))
  }

  // getter for out EventDataPort
  def get_AttestationTesterRequest(): Option[Base_Types.Bits] = {
    val value: Option[Base_Types.Bits] = get_AttestationTesterRequest_payload() match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) => fail(s"Unexpected payload on port AttestationTesterRequest.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
      case _ => None[Base_Types.Bits]()
    }
    return value
  }

  // payload getter for out EventDataPort
  def get_AttestationTesterRequest_payload(): Option[Base_Types.Bits_Payload] = {
    return ArtNative_Ext.observeOutPortValue(bridge.initialization_api.AttestationTesterRequest_Id).asInstanceOf[Option[Base_Types.Bits_Payload]]
  }

  // getter for out EventDataPort
  def get_MissionCommand(): Option[Base_Types.Bits] = {
    val value: Option[Base_Types.Bits] = get_MissionCommand_payload() match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) => fail(s"Unexpected payload on port MissionCommand.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
      case _ => None[Base_Types.Bits]()
    }
    return value
  }

  // payload getter for out EventDataPort
  def get_MissionCommand_payload(): Option[Base_Types.Bits_Payload] = {
    return ArtNative_Ext.observeOutPortValue(bridge.initialization_api.MissionCommand_Id).asInstanceOf[Option[Base_Types.Bits_Payload]]
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
