package HAMR.SW

import org.sireum._
import art.{ArtNative_Ext, Empty}
import HAMR._

// This file was auto-generated.  Do not edit
abstract class WaypointManager_Impl_SW_WaypointManager_WaypointManager_TestApi extends BridgeTestSuite[WaypointManager_Impl_SW_WaypointManager_WaypointManager_Bridge](Arch.MissionComputer_Impl_Instance_SW_WaypointManager_WaypointManager) {

  /** helper function to set the values of all input ports.
   * @param FlightPlan payloads for event data port FlightPlan.
   *   ART currently supports single element event data queues so
   *   only the last element of FlightPlan will be used
   * @param Status payloads for event data port Status.
   *   ART currently supports single element event data queues so
   *   only the last element of Status will be used
   * @param ReturnHome the number of events to place in the ReturnHome event port queue.
   *   ART currently supports single element event queues so at most
   *   one event will be placed in the queue.
   */
  def put_concrete_inputs(FlightPlan : ISZ[SW.Mission],
                          Status : ISZ[SW.Coordinate_Impl],
                          ReturnHome : Z): Unit = {
    for(v <- FlightPlan){
      put_FlightPlan(v)
    }
    for(v <- Status){
      put_Status(v)
    }
    for(i <- 0 until ReturnHome) {
      put_ReturnHome()
    }
  }


  /** helper function to check WaypointManager_Impl_SW_WaypointManager_WaypointManager's
   * output ports.  Use named arguments to check subsets of the output ports.
   * @param MissionWindow method that will be called with the payloads to be sent
   *        on the outgoing event data port 'MissionWindow'.
   */
  def check_concrete_output(MissionWindow: ISZ[SW.MissionWindow] => B = MissionWindowParam => {T}): Unit = {
    var testFailures: ISZ[ST] = ISZ()

    var MissionWindowValue: ISZ[SW.MissionWindow] = ISZ()
    // TODO: event data port getter should return all of the events/payloads
    //       received on event data ports when queue sizes > 1 support is added
    //       to ART
    if(get_MissionWindow().nonEmpty) MissionWindowValue = MissionWindowValue :+ get_MissionWindow().get
    if(!MissionWindow(MissionWindowValue)) {
      testFailures = testFailures :+ st"'MissionWindow' did not match expected: received ${MissionWindowValue.size} events with the following payloads ${MissionWindowValue}"
    }

    assert(testFailures.isEmpty, st"${(testFailures, "\n")}".render)
  }


  // setter for in EventDataPort
  def put_FlightPlan(value : SW.Mission): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.operational_api.FlightPlan_Id, SW.Mission_Payload(value))
  }

  // setter for in EventDataPort
  def put_Status(value : SW.Coordinate_Impl): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.operational_api.Status_Id, SW.Coordinate_Impl_Payload(value))
  }

  // setter for in EventPort
  def put_ReturnHome(): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.operational_api.ReturnHome_Id, Empty())
  }

  // getter for out EventDataPort
  def get_MissionWindow(): Option[SW.MissionWindow] = {
    val value: Option[SW.MissionWindow] = get_MissionWindow_payload() match {
      case Some(SW.MissionWindow_Payload(v)) => Some(v)
      case Some(v) => fail(s"Unexpected payload on port MissionWindow.  Expecting 'SW.MissionWindow_Payload' but received ${v}")
      case _ => None[SW.MissionWindow]()
    }
    return value
  }

  // payload getter for out EventDataPort
  def get_MissionWindow_payload(): Option[SW.MissionWindow_Payload] = {
    return ArtNative_Ext.observeOutPortValue(bridge.initialization_api.MissionWindow_Id).asInstanceOf[Option[SW.MissionWindow_Payload]]
  }

}
