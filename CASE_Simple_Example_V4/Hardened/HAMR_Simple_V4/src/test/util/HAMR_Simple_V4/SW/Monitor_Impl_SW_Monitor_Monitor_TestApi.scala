package HAMR_Simple_V4.SW

import org.sireum._
import art.{ArtNative_Ext, Empty}
import HAMR_Simple_V4._

// This file was auto-generated.  Do not edit
abstract class Monitor_Impl_SW_Monitor_Monitor_TestApi extends BridgeTestSuite[Monitor_Impl_SW_Monitor_Monitor_Bridge](Arch.MissionComputer_Impl_Instance_SW_Monitor_Monitor) {

  /** helper function to set the values of all input ports.
   * @param FlightPlan_in payloads for event data port FlightPlan_in.
   *   ART currently supports single element event data queues so
   *   only the last element of FlightPlan_in will be used
   */
  def put_concrete_inputs(FlightPlan_in : ISZ[Base_Types.Bits]): Unit = {
    for(v <- FlightPlan_in){
      put_FlightPlan_in(v)
    }
  }


  /** helper function to check Monitor_Impl_SW_Monitor_Monitor's
   * output ports.  Use named arguments to check subsets of the output ports.
   * @param FlightPlan_out method that will be called with the payloads to be sent
   *        on the outgoing event data port 'FlightPlan_out'.
   * @param Alert method that will be called with the number of events to be sent
   *        on the outgoing event port 'Alert'.
   */
  def check_concrete_output(FlightPlan_out: ISZ[Base_Types.Bits] => B = FlightPlan_outParam => {T},
                            Alert: Z => B = AlertParam => {T}): Unit = {
    var testFailures: ISZ[ST] = ISZ()

    var FlightPlan_outValue: ISZ[Base_Types.Bits] = ISZ()
    // TODO: event data port getter should return all of the events/payloads
    //       received on event data ports when queue sizes > 1 support is added
    //       to ART
    if(get_FlightPlan_out().nonEmpty) FlightPlan_outValue = FlightPlan_outValue :+ get_FlightPlan_out().get
    if(!FlightPlan_out(FlightPlan_outValue)) {
      testFailures = testFailures :+ st"'FlightPlan_out' did not match expected: received ${FlightPlan_outValue.size} events with the following payloads ${FlightPlan_outValue}"
    }
    // TODO: event port getter should return the number of events in
    //       the output queue when queue sizes > 1 support is added to ART
    val AlertValue: Z = if(get_Alert().nonEmpty) z"1" else z"0"
    if(!Alert(AlertValue)) {
      testFailures = testFailures :+ st"'Alert' did not match expected: ${AlertValue} events were in the outgoing event queue"
    }

    assert(testFailures.isEmpty, st"${(testFailures, "\n")}".render)
  }


  // setter for in EventDataPort
  def put_FlightPlan_in(value : Base_Types.Bits): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.operational_api.FlightPlan_in_Id, Base_Types.Bits_Payload(value))
  }

  // getter for out EventDataPort
  def get_FlightPlan_out(): Option[Base_Types.Bits] = {
    val value: Option[Base_Types.Bits] = get_FlightPlan_out_payload() match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) => fail(s"Unexpected payload on port FlightPlan_out.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
      case _ => None[Base_Types.Bits]()
    }
    return value
  }

  // payload getter for out EventDataPort
  def get_FlightPlan_out_payload(): Option[Base_Types.Bits_Payload] = {
    return ArtNative_Ext.observeOutPortValue(bridge.initialization_api.FlightPlan_out_Id).asInstanceOf[Option[Base_Types.Bits_Payload]]
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
