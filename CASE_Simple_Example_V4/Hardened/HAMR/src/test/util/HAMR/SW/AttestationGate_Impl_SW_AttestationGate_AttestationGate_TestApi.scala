package HAMR.SW

import org.sireum._
import art.{ArtNative_Ext, Empty}
import HAMR._

// This file was auto-generated.  Do not edit
abstract class AttestationGate_Impl_SW_AttestationGate_AttestationGate_TestApi extends BridgeTestSuite[AttestationGate_Impl_SW_AttestationGate_AttestationGate_Bridge](Arch.MissionComputer_Impl_Instance_SW_AttestationGate_AttestationGate) {

  /** helper function to set the values of all input ports.
   * @param MissionCommand_in payloads for event data port MissionCommand_in.
   *   ART currently supports single element event data queues so
   *   only the last element of MissionCommand_in will be used
   * @param TrustedIds payloads for event data port TrustedIds.
   *   ART currently supports single element event data queues so
   *   only the last element of TrustedIds will be used
   */
  def put_concrete_inputs(MissionCommand_in : ISZ[Base_Types.Bits],
                          TrustedIds : ISZ[Base_Types.Bits]): Unit = {
    for(v <- MissionCommand_in){
      put_MissionCommand_in(v)
    }
    for(v <- TrustedIds){
      put_TrustedIds(v)
    }
  }


  /** helper function to check AttestationGate_Impl_SW_AttestationGate_AttestationGate's
   * output ports.  Use named arguments to check subsets of the output ports.
   * @param MissionCommand_out method that will be called with the payloads to be sent
   *        on the outgoing event data port 'MissionCommand_out'.
   */
  def check_concrete_output(MissionCommand_out: ISZ[Base_Types.Bits] => B = MissionCommand_outParam => {T}): Unit = {
    var testFailures: ISZ[ST] = ISZ()

    var MissionCommand_outValue: ISZ[Base_Types.Bits] = ISZ()
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
  def put_MissionCommand_in(value : Base_Types.Bits): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.operational_api.MissionCommand_in_Id, Base_Types.Bits_Payload(value))
  }

  // setter for in EventDataPort
  def put_TrustedIds(value : Base_Types.Bits): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.operational_api.TrustedIds_Id, Base_Types.Bits_Payload(value))
  }

  // getter for out EventDataPort
  def get_MissionCommand_out(): Option[Base_Types.Bits] = {
    val value: Option[Base_Types.Bits] = get_MissionCommand_out_payload() match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) => fail(s"Unexpected payload on port MissionCommand_out.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
      case _ => None[Base_Types.Bits]()
    }
    return value
  }

  // payload getter for out EventDataPort
  def get_MissionCommand_out_payload(): Option[Base_Types.Bits_Payload] = {
    return ArtNative_Ext.observeOutPortValue(bridge.initialization_api.MissionCommand_out_Id).asInstanceOf[Option[Base_Types.Bits_Payload]]
  }

}
