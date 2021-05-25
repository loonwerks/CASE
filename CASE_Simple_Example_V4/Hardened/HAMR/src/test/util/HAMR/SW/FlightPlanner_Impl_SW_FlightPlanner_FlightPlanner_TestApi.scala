package HAMR.SW

import org.sireum._
import art.{ArtNative_Ext, Empty}
import HAMR._

// This file was auto-generated.  Do not edit
abstract class FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_TestApi extends BridgeTestSuite[FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge](Arch.MissionComputer_Impl_Instance_SW_FlightPlanner_FlightPlanner) {

  /** helper function to set the values of all input ports.
   * @param MissionCommand payloads for event data port MissionCommand.
   *   ART currently supports single element event data queues so
   *   only the last element of MissionCommand will be used
   */
  def put_concrete_inputs(MissionCommand : ISZ[Base_Types.Bits]): Unit = {
    for(v <- MissionCommand){
      put_MissionCommand(v)
    }
  }


  /** helper function to check FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner's
   * output ports.  Use named arguments to check subsets of the output ports.
   * @param FlightPlan method that will be called with the payloads to be sent
   *        on the outgoing event data port 'FlightPlan'.
   */
  def check_concrete_output(FlightPlan: ISZ[Base_Types.Bits] => B = FlightPlanParam => {T}): Unit = {
    var testFailures: ISZ[ST] = ISZ()

    var FlightPlanValue: ISZ[Base_Types.Bits] = ISZ()
    // TODO: event data port getter should return all of the events/payloads
    //       received on event data ports when queue sizes > 1 support is added
    //       to ART
    if(get_FlightPlan().nonEmpty) FlightPlanValue = FlightPlanValue :+ get_FlightPlan().get
    if(!FlightPlan(FlightPlanValue)) {
      testFailures = testFailures :+ st"'FlightPlan' did not match expected: received ${FlightPlanValue.size} events with the following payloads ${FlightPlanValue}"
    }

    assert(testFailures.isEmpty, st"${(testFailures, "\n")}".render)
  }


  // setter for in EventDataPort
  def put_MissionCommand(value : Base_Types.Bits): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.operational_api.MissionCommand_Id, Base_Types.Bits_Payload(value))
  }

  // getter for out EventDataPort
  def get_FlightPlan(): Option[Base_Types.Bits] = {
    val value: Option[Base_Types.Bits] = get_FlightPlan_payload() match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) => fail(s"Unexpected payload on port FlightPlan.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
      case _ => None[Base_Types.Bits]()
    }
    return value
  }

  // payload getter for out EventDataPort
  def get_FlightPlan_payload(): Option[Base_Types.Bits_Payload] = {
    return ArtNative_Ext.observeOutPortValue(bridge.initialization_api.FlightPlan_Id).asInstanceOf[Option[Base_Types.Bits_Payload]]
  }

}
