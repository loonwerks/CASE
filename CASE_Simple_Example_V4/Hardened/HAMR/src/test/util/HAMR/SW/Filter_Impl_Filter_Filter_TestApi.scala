package HAMR.SW

import org.sireum._
import art.{ArtNative_Ext, Empty}
import HAMR._

// This file was auto-generated.  Do not edit
abstract class Filter_Impl_Filter_Filter_TestApi extends BridgeTestSuite[Filter_Impl_Filter_Filter_Bridge](Arch.SW_seL4_Impl_Instance_Filter_Filter) {

  /** helper function to set the values of all input ports.
   * @param Input payloads for event data port Input.
   *   ART currently supports single element event data queues so
   *   only the last element of Input will be used
   */
  def put_concrete_inputs(Input : ISZ[SW.RF_Msg_Impl]): Unit = {
    for(v <- Input){
      put_Input(v)
    }
  }


  /** helper function to check Filter_Impl_Filter_Filter's
   * output ports.  Use named arguments to check subsets of the output ports.
   * @param Output method that will be called with the payloads to be sent
   *        on the outgoing event data port 'Output'.
   */
  def check_concrete_output(Output: ISZ[SW.RF_Msg_Impl] => B = OutputParam => {T}): Unit = {
    var testFailures: ISZ[ST] = ISZ()

    var OutputValue: ISZ[SW.RF_Msg_Impl] = ISZ()
    // TODO: event data port getter should return all of the events/payloads
    //       received on event data ports when queue sizes > 1 support is added
    //       to ART
    if(get_Output().nonEmpty) OutputValue = OutputValue :+ get_Output().get
    if(!Output(OutputValue)) {
      testFailures = testFailures :+ st"'Output' did not match expected: received ${OutputValue.size} events with the following payloads ${OutputValue}"
    }

    assert(testFailures.isEmpty, st"${(testFailures, "\n")}".render)
  }


  // setter for in EventDataPort
  def put_Input(value : SW.RF_Msg_Impl): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.operational_api.Input_Id, SW.RF_Msg_Impl_Payload(value))
  }

  // getter for out EventDataPort
  def get_Output(): Option[SW.RF_Msg_Impl] = {
    val value: Option[SW.RF_Msg_Impl] = get_Output_payload() match {
      case Some(SW.RF_Msg_Impl_Payload(v)) => Some(v)
      case Some(v) => fail(s"Unexpected payload on port Output.  Expecting 'SW.RF_Msg_Impl_Payload' but received ${v}")
      case _ => None[SW.RF_Msg_Impl]()
    }
    return value
  }

  // payload getter for out EventDataPort
  def get_Output_payload(): Option[SW.RF_Msg_Impl_Payload] = {
    return ArtNative_Ext.observeOutPortValue(bridge.initialization_api.Output_Id).asInstanceOf[Option[SW.RF_Msg_Impl_Payload]]
  }

}
