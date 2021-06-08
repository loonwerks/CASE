package attestation_gate.RadioDriver

import org.sireum._
import art.{ArtNative_Ext, Empty}
import attestation_gate._

// This file was auto-generated.  Do not edit
abstract class RadioDriver_thr_Impl_radio_RadioDriver_TestApi extends BridgeTestSuite[RadioDriver_thr_Impl_radio_RadioDriver_Bridge](Arch.top_Impl_Instance_radio_RadioDriver) {

  /** helper function to check RadioDriver_thr_Impl_radio_RadioDriver's
   * output ports.  Use named arguments to check subsets of the output ports.
   * @param trusted_ids_out method that will be called with the value of the outgoing data
   *        port 'trusted_ids_out'.
   * @param automation_request_out method that will be called with the payloads to be sent
   *        on the outgoing event data port 'automation_request_out'.
   * @param operating_region_out method that will be called with the payloads to be sent
   *        on the outgoing event data port 'operating_region_out'.
   * @param line_search_task_out method that will be called with the payloads to be sent
   *        on the outgoing event data port 'line_search_task_out'.
   */
  def check_concrete_output(trusted_ids_out: Base_Types.Bits => B = trusted_ids_outParam => {T},
                            automation_request_out: ISZ[Base_Types.Bits] => B = automation_request_outParam => {T},
                            operating_region_out: ISZ[Base_Types.Bits] => B = operating_region_outParam => {T},
                            line_search_task_out: ISZ[Base_Types.Bits] => B = line_search_task_outParam => {T}): Unit = {
    var testFailures: ISZ[ST] = ISZ()

    val trusted_ids_outValue: Base_Types.Bits = get_trusted_ids_out().get
    if(!trusted_ids_out(trusted_ids_outValue)) {
      testFailures = testFailures :+ st"'trusted_ids_out' did not match expected: value of the outgoing data port is ${trusted_ids_outValue}"
    }
    var automation_request_outValue: ISZ[Base_Types.Bits] = ISZ()
    // TODO: event data port getter should return all of the events/payloads
    //       received on event data ports when queue sizes > 1 support is added
    //       to ART
    if(get_automation_request_out().nonEmpty) automation_request_outValue = automation_request_outValue :+ get_automation_request_out().get
    if(!automation_request_out(automation_request_outValue)) {
      testFailures = testFailures :+ st"'automation_request_out' did not match expected: received ${automation_request_outValue.size} events with the following payloads ${automation_request_outValue}"
    }
    var operating_region_outValue: ISZ[Base_Types.Bits] = ISZ()
    // TODO: event data port getter should return all of the events/payloads
    //       received on event data ports when queue sizes > 1 support is added
    //       to ART
    if(get_operating_region_out().nonEmpty) operating_region_outValue = operating_region_outValue :+ get_operating_region_out().get
    if(!operating_region_out(operating_region_outValue)) {
      testFailures = testFailures :+ st"'operating_region_out' did not match expected: received ${operating_region_outValue.size} events with the following payloads ${operating_region_outValue}"
    }
    var line_search_task_outValue: ISZ[Base_Types.Bits] = ISZ()
    // TODO: event data port getter should return all of the events/payloads
    //       received on event data ports when queue sizes > 1 support is added
    //       to ART
    if(get_line_search_task_out().nonEmpty) line_search_task_outValue = line_search_task_outValue :+ get_line_search_task_out().get
    if(!line_search_task_out(line_search_task_outValue)) {
      testFailures = testFailures :+ st"'line_search_task_out' did not match expected: received ${line_search_task_outValue.size} events with the following payloads ${line_search_task_outValue}"
    }

    assert(testFailures.isEmpty, st"${(testFailures, "\n")}".render)
  }


  // getter for out DataPort
  def get_trusted_ids_out(): Option[Base_Types.Bits] = {
    val value: Option[Base_Types.Bits] = get_trusted_ids_out_payload() match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) => fail(s"Unexpected payload on port trusted_ids_out.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
      case _ => None[Base_Types.Bits]()
    }
    return value
  }

  // payload getter for out DataPort
  def get_trusted_ids_out_payload(): Option[Base_Types.Bits_Payload] = {
    return ArtNative_Ext.observeOutPortValue(bridge.initialization_api.trusted_ids_out_Id).asInstanceOf[Option[Base_Types.Bits_Payload]]
  }

  // getter for out EventDataPort
  def get_automation_request_out(): Option[Base_Types.Bits] = {
    val value: Option[Base_Types.Bits] = get_automation_request_out_payload() match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) => fail(s"Unexpected payload on port automation_request_out.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
      case _ => None[Base_Types.Bits]()
    }
    return value
  }

  // payload getter for out EventDataPort
  def get_automation_request_out_payload(): Option[Base_Types.Bits_Payload] = {
    return ArtNative_Ext.observeOutPortValue(bridge.initialization_api.automation_request_out_Id).asInstanceOf[Option[Base_Types.Bits_Payload]]
  }

  // getter for out EventDataPort
  def get_operating_region_out(): Option[Base_Types.Bits] = {
    val value: Option[Base_Types.Bits] = get_operating_region_out_payload() match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) => fail(s"Unexpected payload on port operating_region_out.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
      case _ => None[Base_Types.Bits]()
    }
    return value
  }

  // payload getter for out EventDataPort
  def get_operating_region_out_payload(): Option[Base_Types.Bits_Payload] = {
    return ArtNative_Ext.observeOutPortValue(bridge.initialization_api.operating_region_out_Id).asInstanceOf[Option[Base_Types.Bits_Payload]]
  }

  // getter for out EventDataPort
  def get_line_search_task_out(): Option[Base_Types.Bits] = {
    val value: Option[Base_Types.Bits] = get_line_search_task_out_payload() match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) => fail(s"Unexpected payload on port line_search_task_out.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
      case _ => None[Base_Types.Bits]()
    }
    return value
  }

  // payload getter for out EventDataPort
  def get_line_search_task_out_payload(): Option[Base_Types.Bits_Payload] = {
    return ArtNative_Ext.observeOutPortValue(bridge.initialization_api.line_search_task_out_Id).asInstanceOf[Option[Base_Types.Bits_Payload]]
  }

}
