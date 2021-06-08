package attestation_gate.CASE_AttestationGate

import org.sireum._
import art.{ArtNative_Ext, Empty}
import attestation_gate._

// This file was auto-generated.  Do not edit
abstract class CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_TestApi extends BridgeTestSuite[CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_Bridge](Arch.top_Impl_Instance_am_gate_CASE_AttestationGate) {

  /** helper function to set the values of all input ports.
   * @param trusted_ids payload for data port trusted_ids
   * @param AutomationRequest_in payloads for event data port AutomationRequest_in.
   *   ART currently supports single element event data queues so
   *   only the last element of AutomationRequest_in will be used
   * @param OperatingRegion_in payloads for event data port OperatingRegion_in.
   *   ART currently supports single element event data queues so
   *   only the last element of OperatingRegion_in will be used
   * @param LineSearchTask_in payloads for event data port LineSearchTask_in.
   *   ART currently supports single element event data queues so
   *   only the last element of LineSearchTask_in will be used
   */
  def put_concrete_inputs(trusted_ids : Base_Types.Bits,
                          AutomationRequest_in : ISZ[Base_Types.Bits],
                          OperatingRegion_in : ISZ[Base_Types.Bits],
                          LineSearchTask_in : ISZ[Base_Types.Bits]): Unit = {
    put_trusted_ids(trusted_ids)
    for(v <- AutomationRequest_in){
      put_AutomationRequest_in(v)
    }
    for(v <- OperatingRegion_in){
      put_OperatingRegion_in(v)
    }
    for(v <- LineSearchTask_in){
      put_LineSearchTask_in(v)
    }
  }


  /** helper function to check CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate's
   * output ports.  Use named arguments to check subsets of the output ports.
   * @param AutomationRequest_out method that will be called with the payloads to be sent
   *        on the outgoing event data port 'AutomationRequest_out'.
   * @param OperatingRegion_out method that will be called with the payloads to be sent
   *        on the outgoing event data port 'OperatingRegion_out'.
   * @param LineSearchTask_out method that will be called with the payloads to be sent
   *        on the outgoing event data port 'LineSearchTask_out'.
   */
  def check_concrete_output(AutomationRequest_out: ISZ[Base_Types.Bits] => B = AutomationRequest_outParam => {T},
                            OperatingRegion_out: ISZ[Base_Types.Bits] => B = OperatingRegion_outParam => {T},
                            LineSearchTask_out: ISZ[Base_Types.Bits] => B = LineSearchTask_outParam => {T}): Unit = {
    var testFailures: ISZ[ST] = ISZ()

    var AutomationRequest_outValue: ISZ[Base_Types.Bits] = ISZ()
    // TODO: event data port getter should return all of the events/payloads
    //       received on event data ports when queue sizes > 1 support is added
    //       to ART
    if(get_AutomationRequest_out().nonEmpty) AutomationRequest_outValue = AutomationRequest_outValue :+ get_AutomationRequest_out().get
    if(!AutomationRequest_out(AutomationRequest_outValue)) {
      testFailures = testFailures :+ st"'AutomationRequest_out' did not match expected: received ${AutomationRequest_outValue.size} events with the following payloads ${AutomationRequest_outValue}"
    }
    var OperatingRegion_outValue: ISZ[Base_Types.Bits] = ISZ()
    // TODO: event data port getter should return all of the events/payloads
    //       received on event data ports when queue sizes > 1 support is added
    //       to ART
    if(get_OperatingRegion_out().nonEmpty) OperatingRegion_outValue = OperatingRegion_outValue :+ get_OperatingRegion_out().get
    if(!OperatingRegion_out(OperatingRegion_outValue)) {
      testFailures = testFailures :+ st"'OperatingRegion_out' did not match expected: received ${OperatingRegion_outValue.size} events with the following payloads ${OperatingRegion_outValue}"
    }
    var LineSearchTask_outValue: ISZ[Base_Types.Bits] = ISZ()
    // TODO: event data port getter should return all of the events/payloads
    //       received on event data ports when queue sizes > 1 support is added
    //       to ART
    if(get_LineSearchTask_out().nonEmpty) LineSearchTask_outValue = LineSearchTask_outValue :+ get_LineSearchTask_out().get
    if(!LineSearchTask_out(LineSearchTask_outValue)) {
      testFailures = testFailures :+ st"'LineSearchTask_out' did not match expected: received ${LineSearchTask_outValue.size} events with the following payloads ${LineSearchTask_outValue}"
    }

    assert(testFailures.isEmpty, st"${(testFailures, "\n")}".render)
  }


  // setter for in DataPort
  def put_trusted_ids(value : Base_Types.Bits): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.operational_api.trusted_ids_Id, Base_Types.Bits_Payload(value))
  }

  // setter for in EventDataPort
  def put_AutomationRequest_in(value : Base_Types.Bits): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.operational_api.AutomationRequest_in_Id, Base_Types.Bits_Payload(value))
  }

  // setter for in EventDataPort
  def put_OperatingRegion_in(value : Base_Types.Bits): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.operational_api.OperatingRegion_in_Id, Base_Types.Bits_Payload(value))
  }

  // setter for in EventDataPort
  def put_LineSearchTask_in(value : Base_Types.Bits): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.operational_api.LineSearchTask_in_Id, Base_Types.Bits_Payload(value))
  }

  // getter for out EventDataPort
  def get_AutomationRequest_out(): Option[Base_Types.Bits] = {
    val value: Option[Base_Types.Bits] = get_AutomationRequest_out_payload() match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) => fail(s"Unexpected payload on port AutomationRequest_out.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
      case _ => None[Base_Types.Bits]()
    }
    return value
  }

  // payload getter for out EventDataPort
  def get_AutomationRequest_out_payload(): Option[Base_Types.Bits_Payload] = {
    return ArtNative_Ext.observeOutPortValue(bridge.initialization_api.AutomationRequest_out_Id).asInstanceOf[Option[Base_Types.Bits_Payload]]
  }

  // getter for out EventDataPort
  def get_OperatingRegion_out(): Option[Base_Types.Bits] = {
    val value: Option[Base_Types.Bits] = get_OperatingRegion_out_payload() match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) => fail(s"Unexpected payload on port OperatingRegion_out.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
      case _ => None[Base_Types.Bits]()
    }
    return value
  }

  // payload getter for out EventDataPort
  def get_OperatingRegion_out_payload(): Option[Base_Types.Bits_Payload] = {
    return ArtNative_Ext.observeOutPortValue(bridge.initialization_api.OperatingRegion_out_Id).asInstanceOf[Option[Base_Types.Bits_Payload]]
  }

  // getter for out EventDataPort
  def get_LineSearchTask_out(): Option[Base_Types.Bits] = {
    val value: Option[Base_Types.Bits] = get_LineSearchTask_out_payload() match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) => fail(s"Unexpected payload on port LineSearchTask_out.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
      case _ => None[Base_Types.Bits]()
    }
    return value
  }

  // payload getter for out EventDataPort
  def get_LineSearchTask_out_payload(): Option[Base_Types.Bits_Payload] = {
    return ArtNative_Ext.observeOutPortValue(bridge.initialization_api.LineSearchTask_out_Id).asInstanceOf[Option[Base_Types.Bits_Payload]]
  }

}
