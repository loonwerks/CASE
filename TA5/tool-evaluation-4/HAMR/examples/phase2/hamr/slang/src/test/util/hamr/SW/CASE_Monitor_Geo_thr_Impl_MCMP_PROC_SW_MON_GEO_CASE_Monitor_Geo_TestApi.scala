package hamr.SW

import org.sireum._
import art.{ArtNative_Ext, Empty}
import hamr._

// This file was auto-generated.  Do not edit
abstract class CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_TestApi extends BridgeTestSuite[CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge](Arch.UAV_Impl_Instance_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo) {

  /** helper function to set the values of all input ports.
   * @param keep_in_zones payload for data port keep_in_zones
   * @param keep_out_zones payload for data port keep_out_zones
   * @param observed payloads for event data port observed.
   *   ART currently supports single element event data queues so
   *   only the last element of observed will be used
   */
  def put_concrete_inputs(keep_in_zones : Base_Types.Bits,
                          keep_out_zones : Base_Types.Bits,
                          observed : ISZ[Base_Types.Bits]): Unit = {
    put_keep_in_zones(keep_in_zones)
    put_keep_out_zones(keep_out_zones)
    for(v <- observed){
      put_observed(v)
    }
  }


  /** helper function to check CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo's
   * output ports.  Use named arguments to check subsets of the output ports.
   * @param output method that will be called with the payloads to be sent
   *        on the outgoing event data port 'output'.
   * @param alert method that will be called with the number of events to be sent
   *        on the outgoing event port 'alert'.
   */
  def check_concrete_output(output: ISZ[Base_Types.Bits] => B = outputParam => {T},
                            alert: Z => B = alertParam => {T}): Unit = {
    var testFailures: ISZ[ST] = ISZ()

    var outputValue: ISZ[Base_Types.Bits] = ISZ()
    // TODO: event data port getter should return all of the events/payloads
    //       received on event data ports when queue sizes > 1 support is added
    //       to ART
    if(get_output().nonEmpty) outputValue = outputValue :+ get_output().get
    if(!output(outputValue)) {
      testFailures = testFailures :+ st"'output' did not match expected: received ${outputValue.size} events with the following payloads ${outputValue}"
    }
    // TODO: event port getter should return the number of events in
    //       the output queue when queue sizes > 1 support is added to ART
    val alertValue: Z = if(get_alert().nonEmpty) z"1" else z"0"
    if(!alert(alertValue)) {
      testFailures = testFailures :+ st"'alert' did not match expected: ${alertValue} events were in the outgoing event queue"
    }

    assert(testFailures.isEmpty, st"${(testFailures, "\n")}".render)
  }


  // setter for in DataPort
  def put_keep_in_zones(value : Base_Types.Bits): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.operational_api.keep_in_zones_Id, Base_Types.Bits_Payload(value))
  }

  // setter for in DataPort
  def put_keep_out_zones(value : Base_Types.Bits): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.operational_api.keep_out_zones_Id, Base_Types.Bits_Payload(value))
  }

  // setter for in EventDataPort
  def put_observed(value : Base_Types.Bits): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.operational_api.observed_Id, Base_Types.Bits_Payload(value))
  }

  // getter for out EventDataPort
  def get_output(): Option[Base_Types.Bits] = {
    val value: Option[Base_Types.Bits] = get_output_payload() match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) => fail(s"Unexpected payload on port output.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
      case _ => None[Base_Types.Bits]()
    }
    return value
  }

  // payload getter for out EventDataPort
  def get_output_payload(): Option[Base_Types.Bits_Payload] = {
    return ArtNative_Ext.observeOutPortValue(bridge.initialization_api.output_Id).asInstanceOf[Option[Base_Types.Bits_Payload]]
  }

  // getter for out EventPort
  def get_alert(): Option[art.Empty] = {
    val value: Option[art.Empty] = get_alert_payload() match {
      case Some(Empty()) => Some(Empty())
      case Some(v) => fail(s"Unexpected payload on port alert.  Expecting 'Empty' but received ${v}")
      case _ => None[art.Empty]()
    }
    return value
  }

  // payload getter for out EventPort
  def get_alert_payload(): Option[Empty] = {
    return ArtNative_Ext.observeOutPortValue(bridge.initialization_api.alert_Id).asInstanceOf[Option[Empty]]
  }

}
