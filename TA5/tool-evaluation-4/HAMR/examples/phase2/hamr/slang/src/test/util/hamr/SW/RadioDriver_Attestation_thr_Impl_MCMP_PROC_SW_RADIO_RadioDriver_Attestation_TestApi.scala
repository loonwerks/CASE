package hamr.SW

import org.sireum._
import art.{ArtNative_Ext, Empty}
import hamr._

// This file was auto-generated.  Do not edit
abstract class RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_TestApi extends BridgeTestSuite[RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge](Arch.UAV_Impl_Instance_MCMP_PROC_SW_RADIO_RadioDriver_Attestation) {

  /** helper function to set the values of all input ports.
   * @param recv_data payloads for event data port recv_data.
   *   ART currently supports single element event data queues so
   *   only the last element of recv_data will be used
   */
  def put_concrete_inputs(recv_data : ISZ[Base_Types.Bits]): Unit = {
    for(v <- recv_data){
      put_recv_data(v)
    }
  }


  /** helper function to check RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation's
   * output ports.  Use named arguments to check subsets of the output ports.
   * @param send_data method that will be called with the payloads to be sent
   *        on the outgoing event data port 'send_data'.
   * @param trusted_ids method that will be called with the payloads to be sent
   *        on the outgoing event data port 'trusted_ids'.
   * @param AutomationRequest method that will be called with the payloads to be sent
   *        on the outgoing event data port 'AutomationRequest'.
   * @param OperatingRegion method that will be called with the payloads to be sent
   *        on the outgoing event data port 'OperatingRegion'.
   * @param LineSearchTask method that will be called with the payloads to be sent
   *        on the outgoing event data port 'LineSearchTask'.
   */
  def check_concrete_output(send_data: ISZ[Base_Types.Bits] => B = send_dataParam => {T},
                            trusted_ids: ISZ[Base_Types.Bits] => B = trusted_idsParam => {T},
                            AutomationRequest: ISZ[Base_Types.Bits] => B = AutomationRequestParam => {T},
                            OperatingRegion: ISZ[Base_Types.Bits] => B = OperatingRegionParam => {T},
                            LineSearchTask: ISZ[Base_Types.Bits] => B = LineSearchTaskParam => {T}): Unit = {
    var testFailures: ISZ[ST] = ISZ()

    var send_dataValue: ISZ[Base_Types.Bits] = ISZ()
    // TODO: event data port getter should return all of the events/payloads
    //       received on event data ports when queue sizes > 1 support is added
    //       to ART
    if(get_send_data().nonEmpty) send_dataValue = send_dataValue :+ get_send_data().get
    if(!send_data(send_dataValue)) {
      testFailures = testFailures :+ st"'send_data' did not match expected: received ${send_dataValue.size} events with the following payloads ${send_dataValue}"
    }
    var trusted_idsValue: ISZ[Base_Types.Bits] = ISZ()
    // TODO: event data port getter should return all of the events/payloads
    //       received on event data ports when queue sizes > 1 support is added
    //       to ART
    if(get_trusted_ids().nonEmpty) trusted_idsValue = trusted_idsValue :+ get_trusted_ids().get
    if(!trusted_ids(trusted_idsValue)) {
      testFailures = testFailures :+ st"'trusted_ids' did not match expected: received ${trusted_idsValue.size} events with the following payloads ${trusted_idsValue}"
    }
    var AutomationRequestValue: ISZ[Base_Types.Bits] = ISZ()
    // TODO: event data port getter should return all of the events/payloads
    //       received on event data ports when queue sizes > 1 support is added
    //       to ART
    if(get_AutomationRequest().nonEmpty) AutomationRequestValue = AutomationRequestValue :+ get_AutomationRequest().get
    if(!AutomationRequest(AutomationRequestValue)) {
      testFailures = testFailures :+ st"'AutomationRequest' did not match expected: received ${AutomationRequestValue.size} events with the following payloads ${AutomationRequestValue}"
    }
    var OperatingRegionValue: ISZ[Base_Types.Bits] = ISZ()
    // TODO: event data port getter should return all of the events/payloads
    //       received on event data ports when queue sizes > 1 support is added
    //       to ART
    if(get_OperatingRegion().nonEmpty) OperatingRegionValue = OperatingRegionValue :+ get_OperatingRegion().get
    if(!OperatingRegion(OperatingRegionValue)) {
      testFailures = testFailures :+ st"'OperatingRegion' did not match expected: received ${OperatingRegionValue.size} events with the following payloads ${OperatingRegionValue}"
    }
    var LineSearchTaskValue: ISZ[Base_Types.Bits] = ISZ()
    // TODO: event data port getter should return all of the events/payloads
    //       received on event data ports when queue sizes > 1 support is added
    //       to ART
    if(get_LineSearchTask().nonEmpty) LineSearchTaskValue = LineSearchTaskValue :+ get_LineSearchTask().get
    if(!LineSearchTask(LineSearchTaskValue)) {
      testFailures = testFailures :+ st"'LineSearchTask' did not match expected: received ${LineSearchTaskValue.size} events with the following payloads ${LineSearchTaskValue}"
    }

    assert(testFailures.isEmpty, st"${(testFailures, "\n")}".render)
  }


  // setter for in EventDataPort
  def put_recv_data(value : Base_Types.Bits): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.operational_api.recv_data_Id, Base_Types.Bits_Payload(value))
  }

  // getter for out EventDataPort
  def get_send_data(): Option[Base_Types.Bits] = {
    val value: Option[Base_Types.Bits] = get_send_data_payload() match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) => fail(s"Unexpected payload on port send_data.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
      case _ => None[Base_Types.Bits]()
    }
    return value
  }

  // payload getter for out EventDataPort
  def get_send_data_payload(): Option[Base_Types.Bits_Payload] = {
    return ArtNative_Ext.observeOutPortValue(bridge.initialization_api.send_data_Id).asInstanceOf[Option[Base_Types.Bits_Payload]]
  }

  // getter for out EventDataPort
  def get_trusted_ids(): Option[Base_Types.Bits] = {
    val value: Option[Base_Types.Bits] = get_trusted_ids_payload() match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) => fail(s"Unexpected payload on port trusted_ids.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
      case _ => None[Base_Types.Bits]()
    }
    return value
  }

  // payload getter for out EventDataPort
  def get_trusted_ids_payload(): Option[Base_Types.Bits_Payload] = {
    return ArtNative_Ext.observeOutPortValue(bridge.initialization_api.trusted_ids_Id).asInstanceOf[Option[Base_Types.Bits_Payload]]
  }

  // getter for out EventDataPort
  def get_AutomationRequest(): Option[Base_Types.Bits] = {
    val value: Option[Base_Types.Bits] = get_AutomationRequest_payload() match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) => fail(s"Unexpected payload on port AutomationRequest.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
      case _ => None[Base_Types.Bits]()
    }
    return value
  }

  // payload getter for out EventDataPort
  def get_AutomationRequest_payload(): Option[Base_Types.Bits_Payload] = {
    return ArtNative_Ext.observeOutPortValue(bridge.initialization_api.AutomationRequest_Id).asInstanceOf[Option[Base_Types.Bits_Payload]]
  }

  // getter for out EventDataPort
  def get_OperatingRegion(): Option[Base_Types.Bits] = {
    val value: Option[Base_Types.Bits] = get_OperatingRegion_payload() match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) => fail(s"Unexpected payload on port OperatingRegion.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
      case _ => None[Base_Types.Bits]()
    }
    return value
  }

  // payload getter for out EventDataPort
  def get_OperatingRegion_payload(): Option[Base_Types.Bits_Payload] = {
    return ArtNative_Ext.observeOutPortValue(bridge.initialization_api.OperatingRegion_Id).asInstanceOf[Option[Base_Types.Bits_Payload]]
  }

  // getter for out EventDataPort
  def get_LineSearchTask(): Option[Base_Types.Bits] = {
    val value: Option[Base_Types.Bits] = get_LineSearchTask_payload() match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) => fail(s"Unexpected payload on port LineSearchTask.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
      case _ => None[Base_Types.Bits]()
    }
    return value
  }

  // payload getter for out EventDataPort
  def get_LineSearchTask_payload(): Option[Base_Types.Bits_Payload] = {
    return ArtNative_Ext.observeOutPortValue(bridge.initialization_api.LineSearchTask_Id).asInstanceOf[Option[Base_Types.Bits_Payload]]
  }

}
