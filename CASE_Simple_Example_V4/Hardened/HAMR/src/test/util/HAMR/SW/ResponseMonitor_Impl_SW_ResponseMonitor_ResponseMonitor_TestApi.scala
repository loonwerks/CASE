package HAMR.SW

import org.sireum._
import art.{ArtNative_Ext, Empty}
import HAMR._

// This file was auto-generated.  Do not edit
abstract class ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor_TestApi extends BridgeTestSuite[ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor_Bridge](Arch.MissionComputer_Impl_Instance_SW_ResponseMonitor_ResponseMonitor) {

  /** helper function to set the values of all input ports.
   * @param FlightPlan payloads for event data port FlightPlan.
   *   ART currently supports single element event data queues so
   *   only the last element of FlightPlan will be used
   * @param MissionCommand payloads for event data port MissionCommand.
   *   ART currently supports single element event data queues so
   *   only the last element of MissionCommand will be used
   */
  def put_concrete_inputs(FlightPlan : ISZ[SW.Mission],
                          MissionCommand : ISZ[SW.RF_Msg_Impl]): Unit = {
    for(v <- FlightPlan){
      put_FlightPlan(v)
    }
    for(v <- MissionCommand){
      put_MissionCommand(v)
    }
  }


  /** helper function to check ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor's
   * output ports.  Use named arguments to check subsets of the output ports.
   * @param Alert method that will be called with the number of events to be sent
   *        on the outgoing event port 'Alert'.
   */
  def check_concrete_output(Alert: Z => B = AlertParam => {T}): Unit = {
    var testFailures: ISZ[ST] = ISZ()

    // TODO: event port getter should return the number of events in
    //       the output queue when queue sizes > 1 support is added to ART
    val AlertValue: Z = if(get_Alert().nonEmpty) z"1" else z"0"
    if(!Alert(AlertValue)) {
      testFailures = testFailures :+ st"'Alert' did not match expected: ${AlertValue} events were in the outgoing event queue"
    }

    assert(testFailures.isEmpty, st"${(testFailures, "\n")}".render)
  }


  // setter for in EventDataPort
  def put_FlightPlan(value : SW.Mission): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.operational_api.FlightPlan_Id, SW.Mission_Payload(value))
  }

  // setter for in EventDataPort
  def put_MissionCommand(value : SW.RF_Msg_Impl): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.operational_api.MissionCommand_Id, SW.RF_Msg_Impl_Payload(value))
  }

  // getter for out EventPort
  def get_Alert(): Option[art.Empty] = {
    val value: Option[art.Empty] = get_Alert_payload() match {
      case Some(Empty()) => Some(Empty())
      case Some(v) => fail(s"Unexpected payload on port Alert.  Expecting 'Empty' but received ${v}")
      case _ => None[art.Empty]()
    }
    return value
  }

  // payload getter for out EventPort
  def get_Alert_payload(): Option[Empty] = {
    return ArtNative_Ext.observeOutPortValue(bridge.initialization_api.Alert_Id).asInstanceOf[Option[Empty]]
  }

}
