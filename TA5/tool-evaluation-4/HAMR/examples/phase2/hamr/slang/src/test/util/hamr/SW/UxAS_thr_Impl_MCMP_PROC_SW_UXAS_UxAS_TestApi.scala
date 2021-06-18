package hamr.SW

import org.sireum._
import art.{ArtNative_Ext, Empty}
import hamr._

// This file was auto-generated.  Do not edit
abstract class UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_TestApi extends BridgeTestSuite[UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge](Arch.UAV_Impl_Instance_MCMP_PROC_SW_UXAS_UxAS) {

  /** helper function to set the values of all input ports.
   * @param AutomationRequest payloads for event data port AutomationRequest.
   *   ART currently supports single element event data queues so
   *   only the last element of AutomationRequest will be used
   * @param AirVehicleState payloads for event data port AirVehicleState.
   *   ART currently supports single element event data queues so
   *   only the last element of AirVehicleState will be used
   * @param OperatingRegion payloads for event data port OperatingRegion.
   *   ART currently supports single element event data queues so
   *   only the last element of OperatingRegion will be used
   * @param LineSearchTask payloads for event data port LineSearchTask.
   *   ART currently supports single element event data queues so
   *   only the last element of LineSearchTask will be used
   */
  def put_concrete_inputs(AutomationRequest : ISZ[Base_Types.Bits],
                          AirVehicleState : ISZ[Base_Types.Bits],
                          OperatingRegion : ISZ[Base_Types.Bits],
                          LineSearchTask : ISZ[Base_Types.Bits]): Unit = {
    for(v <- AutomationRequest){
      put_AutomationRequest(v)
    }
    for(v <- AirVehicleState){
      put_AirVehicleState(v)
    }
    for(v <- OperatingRegion){
      put_OperatingRegion(v)
    }
    for(v <- LineSearchTask){
      put_LineSearchTask(v)
    }
  }


  /** helper function to check UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS's
   * output ports.  Use named arguments to check subsets of the output ports.
   * @param AutomationResponse_MON_GEO method that will be called with the payloads to be sent
   *        on the outgoing event data port 'AutomationResponse_MON_GEO'.
   * @param AutomationResponse_MON_REQ method that will be called with the payloads to be sent
   *        on the outgoing event data port 'AutomationResponse_MON_REQ'.
   */
  def check_concrete_output(AutomationResponse_MON_GEO: ISZ[Base_Types.Bits] => B = AutomationResponse_MON_GEOParam => {T},
                            AutomationResponse_MON_REQ: ISZ[Base_Types.Bits] => B = AutomationResponse_MON_REQParam => {T}): Unit = {
    var testFailures: ISZ[ST] = ISZ()

    var AutomationResponse_MON_GEOValue: ISZ[Base_Types.Bits] = ISZ()
    // TODO: event data port getter should return all of the events/payloads
    //       received on event data ports when queue sizes > 1 support is added
    //       to ART
    if(get_AutomationResponse_MON_GEO().nonEmpty) AutomationResponse_MON_GEOValue = AutomationResponse_MON_GEOValue :+ get_AutomationResponse_MON_GEO().get
    if(!AutomationResponse_MON_GEO(AutomationResponse_MON_GEOValue)) {
      testFailures = testFailures :+ st"'AutomationResponse_MON_GEO' did not match expected: received ${AutomationResponse_MON_GEOValue.size} events with the following payloads ${AutomationResponse_MON_GEOValue}"
    }
    var AutomationResponse_MON_REQValue: ISZ[Base_Types.Bits] = ISZ()
    // TODO: event data port getter should return all of the events/payloads
    //       received on event data ports when queue sizes > 1 support is added
    //       to ART
    if(get_AutomationResponse_MON_REQ().nonEmpty) AutomationResponse_MON_REQValue = AutomationResponse_MON_REQValue :+ get_AutomationResponse_MON_REQ().get
    if(!AutomationResponse_MON_REQ(AutomationResponse_MON_REQValue)) {
      testFailures = testFailures :+ st"'AutomationResponse_MON_REQ' did not match expected: received ${AutomationResponse_MON_REQValue.size} events with the following payloads ${AutomationResponse_MON_REQValue}"
    }

    assert(testFailures.isEmpty, st"${(testFailures, "\n")}".render)
  }


  // setter for in EventDataPort
  def put_AutomationRequest(value : Base_Types.Bits): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.operational_api.AutomationRequest_Id, Base_Types.Bits_Payload(value))
  }

  // setter for in EventDataPort
  def put_AirVehicleState(value : Base_Types.Bits): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.operational_api.AirVehicleState_Id, Base_Types.Bits_Payload(value))
  }

  // setter for in EventDataPort
  def put_OperatingRegion(value : Base_Types.Bits): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.operational_api.OperatingRegion_Id, Base_Types.Bits_Payload(value))
  }

  // setter for in EventDataPort
  def put_LineSearchTask(value : Base_Types.Bits): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.operational_api.LineSearchTask_Id, Base_Types.Bits_Payload(value))
  }

  // getter for out EventDataPort
  def get_AutomationResponse_MON_GEO(): Option[Base_Types.Bits] = {
    val value: Option[Base_Types.Bits] = get_AutomationResponse_MON_GEO_payload() match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) => fail(s"Unexpected payload on port AutomationResponse_MON_GEO.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
      case _ => None[Base_Types.Bits]()
    }
    return value
  }

  // payload getter for out EventDataPort
  def get_AutomationResponse_MON_GEO_payload(): Option[Base_Types.Bits_Payload] = {
    return ArtNative_Ext.observeOutPortValue(bridge.initialization_api.AutomationResponse_MON_GEO_Id).asInstanceOf[Option[Base_Types.Bits_Payload]]
  }

  // getter for out EventDataPort
  def get_AutomationResponse_MON_REQ(): Option[Base_Types.Bits] = {
    val value: Option[Base_Types.Bits] = get_AutomationResponse_MON_REQ_payload() match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) => fail(s"Unexpected payload on port AutomationResponse_MON_REQ.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
      case _ => None[Base_Types.Bits]()
    }
    return value
  }

  // payload getter for out EventDataPort
  def get_AutomationResponse_MON_REQ_payload(): Option[Base_Types.Bits_Payload] = {
    return ArtNative_Ext.observeOutPortValue(bridge.initialization_api.AutomationResponse_MON_REQ_Id).asInstanceOf[Option[Base_Types.Bits_Payload]]
  }

}
