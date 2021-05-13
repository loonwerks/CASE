package HAMR.SW

import org.sireum._
import art.{ArtNative_Ext, Empty}
import HAMR._

// This file was auto-generated.  Do not edit
abstract class GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor_TestApi extends BridgeTestSuite[GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor_Bridge](Arch.MissionComputer_Impl_Instance_SW_GeofenceMonitor_GeofenceMonitor) {

  /** helper function to set the values of all input ports.
   * @param FlyZones payload for data port FlyZones
   * @param FlightPlan_In payloads for event data port FlightPlan_In.
   *   ART currently supports single element event data queues so
   *   only the last element of FlightPlan_In will be used
   */
  def put_concrete_inputs(FlyZones : SW.MapArray,
                          FlightPlan_In : ISZ[SW.Mission]): Unit = {
    put_FlyZones(FlyZones)
    for(v <- FlightPlan_In){
      put_FlightPlan_In(v)
    }
  }


  /** helper function to check GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor's
   * output ports.  Use named arguments to check subsets of the output ports.
   * @param FlightPlan_Out method that will be called with the payloads to be sent
   *        on the outgoing event data port 'FlightPlan_Out'.
   * @param Alert method that will be called with the number of events to be sent
   *        on the outgoing event port 'Alert'.
   */
  def check_concrete_output(FlightPlan_Out: ISZ[SW.Mission] => B = FlightPlan_OutParam => {T},
                            Alert: Z => B = AlertParam => {T}): Unit = {
    var testFailures: ISZ[ST] = ISZ()

    var FlightPlan_OutValue: ISZ[SW.Mission] = ISZ()
    // TODO: event data port getter should return all of the events/payloads
    //       received on event data ports when queue sizes > 1 support is added
    //       to ART
    if(get_FlightPlan_Out().nonEmpty) FlightPlan_OutValue = FlightPlan_OutValue :+ get_FlightPlan_Out().get
    if(!FlightPlan_Out(FlightPlan_OutValue)) {
      testFailures = testFailures :+ st"'FlightPlan_Out' did not match expected: received ${FlightPlan_OutValue.size} events with the following payloads ${FlightPlan_OutValue}"
    }
    // TODO: event port getter should return the number of events in
    //       the output queue when queue sizes > 1 support is added to ART
    val AlertValue: Z = if(get_Alert().nonEmpty) z"1" else z"0"
    if(!Alert(AlertValue)) {
      testFailures = testFailures :+ st"'Alert' did not match expected: ${AlertValue} events were in the outgoing event queue"
    }

    assert(testFailures.isEmpty, st"${(testFailures, "\n")}".render)
  }


  // setter for in DataPort
  def put_FlyZones(value : SW.MapArray): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.operational_api.FlyZones_Id, SW.MapArray_Payload(value))
  }

  // setter for in EventDataPort
  def put_FlightPlan_In(value : SW.Mission): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.operational_api.FlightPlan_In_Id, SW.Mission_Payload(value))
  }

  // getter for out EventDataPort
  def get_FlightPlan_Out(): Option[SW.Mission] = {
    val value: Option[SW.Mission] = get_FlightPlan_Out_payload() match {
      case Some(SW.Mission_Payload(v)) => Some(v)
      case Some(v) => fail(s"Unexpected payload on port FlightPlan_Out.  Expecting 'SW.Mission_Payload' but received ${v}")
      case _ => None[SW.Mission]()
    }
    return value
  }

  // payload getter for out EventDataPort
  def get_FlightPlan_Out_payload(): Option[SW.Mission_Payload] = {
    return ArtNative_Ext.observeOutPortValue(bridge.initialization_api.FlightPlan_Out_Id).asInstanceOf[Option[SW.Mission_Payload]]
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
