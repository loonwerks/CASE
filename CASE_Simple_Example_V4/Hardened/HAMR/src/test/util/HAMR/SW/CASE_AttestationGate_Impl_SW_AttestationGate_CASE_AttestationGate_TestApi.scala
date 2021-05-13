package HAMR.SW

import org.sireum._
import art.{ArtNative_Ext, Empty}
import HAMR._

// This file was auto-generated.  Do not edit
abstract class CASE_AttestationGate_Impl_SW_AttestationGate_CASE_AttestationGate_TestApi extends BridgeTestSuite[CASE_AttestationGate_Impl_SW_AttestationGate_CASE_AttestationGate_Bridge](Arch.MissionComputer_Impl_Instance_SW_AttestationGate_CASE_AttestationGate) {

  /** helper function to set the values of all input ports.
   * @param MissionCommand_in payloads for event data port MissionCommand_in.
   *   ART currently supports single element event data queues so
   *   only the last element of MissionCommand_in will be used
   * @param TrustedIds payloads for event data port TrustedIds.
   *   ART currently supports single element event data queues so
   *   only the last element of TrustedIds will be used
   */
  def put_concrete_inputs(MissionCommand_in : ISZ[SW.RF_Msg_Impl],
                          TrustedIds : ISZ[SW.Address_Impl]): Unit = {
    for(v <- MissionCommand_in){
      put_MissionCommand_in(v)
    }
    for(v <- TrustedIds){
      put_TrustedIds(v)
    }
  }


  /** helper function to check CASE_AttestationGate_Impl_SW_AttestationGate_CASE_AttestationGate's
   * output ports.  Use named arguments to check subsets of the output ports.
   * @param MissionCommand_out method that will be called with the payloads to be sent
   *        on the outgoing event data port 'MissionCommand_out'.
   */
  def check_concrete_output(MissionCommand_out: ISZ[SW.RF_Msg_Impl] => B = MissionCommand_outParam => {T}): Unit = {
    var testFailures: ISZ[ST] = ISZ()

    var MissionCommand_outValue: ISZ[SW.RF_Msg_Impl] = ISZ()
    // TODO: event data port getter should return all of the events/payloads
    //       received on event data ports when queue sizes > 1 support is added
    //       to ART
    if(get_MissionCommand_out().nonEmpty) MissionCommand_outValue = MissionCommand_outValue :+ get_MissionCommand_out().get
    if(!MissionCommand_out(MissionCommand_outValue)) {
      testFailures = testFailures :+ st"'MissionCommand_out' did not match expected: received ${MissionCommand_outValue.size} events with the following payloads ${MissionCommand_outValue}"
    }

    assert(testFailures.isEmpty, st"${(testFailures, "\n")}".render)
  }


  // setter for in EventDataPort
  def put_MissionCommand_in(value : SW.RF_Msg_Impl): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.operational_api.MissionCommand_in_Id, SW.RF_Msg_Impl_Payload(value))
  }

  // setter for in EventDataPort
  def put_TrustedIds(value : SW.Address_Impl): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.operational_api.TrustedIds_Id, SW.Address_Impl_Payload(value))
  }

  // getter for out EventDataPort
  def get_MissionCommand_out(): Option[SW.RF_Msg_Impl] = {
    val value: Option[SW.RF_Msg_Impl] = get_MissionCommand_out_payload() match {
      case Some(SW.RF_Msg_Impl_Payload(v)) => Some(v)
      case Some(v) => fail(s"Unexpected payload on port MissionCommand_out.  Expecting 'SW.RF_Msg_Impl_Payload' but received ${v}")
      case _ => None[SW.RF_Msg_Impl]()
    }
    return value
  }

  // payload getter for out EventDataPort
  def get_MissionCommand_out_payload(): Option[SW.RF_Msg_Impl_Payload] = {
    return ArtNative_Ext.observeOutPortValue(bridge.initialization_api.MissionCommand_out_Id).asInstanceOf[Option[SW.RF_Msg_Impl_Payload]]
  }

}
