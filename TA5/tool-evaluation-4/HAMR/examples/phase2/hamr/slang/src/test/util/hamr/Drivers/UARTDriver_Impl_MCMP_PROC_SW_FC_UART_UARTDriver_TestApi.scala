package hamr.Drivers

import org.sireum._
import art.{ArtNative_Ext, Empty}
import hamr._

// This file was auto-generated.  Do not edit
abstract class UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_TestApi extends BridgeTestSuite[UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge](Arch.UAV_Impl_Instance_MCMP_PROC_SW_FC_UART_UARTDriver) {

  /** helper function to set the values of all input ports.
   * @param recv_data payloads for event data port recv_data.
   *   ART currently supports single element event data queues so
   *   only the last element of recv_data will be used
   * @param MissionCommand payloads for event data port MissionCommand.
   *   ART currently supports single element event data queues so
   *   only the last element of MissionCommand will be used
   */
  def put_concrete_inputs(recv_data : ISZ[Base_Types.Bits],
                          MissionCommand : ISZ[Base_Types.Bits]): Unit = {
    for(v <- recv_data){
      put_recv_data(v)
    }
    for(v <- MissionCommand){
      put_MissionCommand(v)
    }
  }


  /** helper function to check UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver's
   * output ports.  Use named arguments to check subsets of the output ports.
   * @param send_data method that will be called with the payloads to be sent
   *        on the outgoing event data port 'send_data'.
   * @param AirVehicleState_WPM method that will be called with the payloads to be sent
   *        on the outgoing event data port 'AirVehicleState_WPM'.
   * @param AirVehicleState_UXAS method that will be called with the payloads to be sent
   *        on the outgoing event data port 'AirVehicleState_UXAS'.
   */
  def check_concrete_output(send_data: ISZ[Base_Types.Bits] => B = send_dataParam => {T},
                            AirVehicleState_WPM: ISZ[Base_Types.Bits] => B = AirVehicleState_WPMParam => {T},
                            AirVehicleState_UXAS: ISZ[Base_Types.Bits] => B = AirVehicleState_UXASParam => {T}): Unit = {
    var testFailures: ISZ[ST] = ISZ()

    var send_dataValue: ISZ[Base_Types.Bits] = ISZ()
    // TODO: event data port getter should return all of the events/payloads
    //       received on event data ports when queue sizes > 1 support is added
    //       to ART
    if(get_send_data().nonEmpty) send_dataValue = send_dataValue :+ get_send_data().get
    if(!send_data(send_dataValue)) {
      testFailures = testFailures :+ st"'send_data' did not match expected: received ${send_dataValue.size} events with the following payloads ${send_dataValue}"
    }
    var AirVehicleState_WPMValue: ISZ[Base_Types.Bits] = ISZ()
    // TODO: event data port getter should return all of the events/payloads
    //       received on event data ports when queue sizes > 1 support is added
    //       to ART
    if(get_AirVehicleState_WPM().nonEmpty) AirVehicleState_WPMValue = AirVehicleState_WPMValue :+ get_AirVehicleState_WPM().get
    if(!AirVehicleState_WPM(AirVehicleState_WPMValue)) {
      testFailures = testFailures :+ st"'AirVehicleState_WPM' did not match expected: received ${AirVehicleState_WPMValue.size} events with the following payloads ${AirVehicleState_WPMValue}"
    }
    var AirVehicleState_UXASValue: ISZ[Base_Types.Bits] = ISZ()
    // TODO: event data port getter should return all of the events/payloads
    //       received on event data ports when queue sizes > 1 support is added
    //       to ART
    if(get_AirVehicleState_UXAS().nonEmpty) AirVehicleState_UXASValue = AirVehicleState_UXASValue :+ get_AirVehicleState_UXAS().get
    if(!AirVehicleState_UXAS(AirVehicleState_UXASValue)) {
      testFailures = testFailures :+ st"'AirVehicleState_UXAS' did not match expected: received ${AirVehicleState_UXASValue.size} events with the following payloads ${AirVehicleState_UXASValue}"
    }

    assert(testFailures.isEmpty, st"${(testFailures, "\n")}".render)
  }


  // setter for in EventDataPort
  def put_recv_data(value : Base_Types.Bits): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.operational_api.recv_data_Id, Base_Types.Bits_Payload(value))
  }

  // setter for in EventDataPort
  def put_MissionCommand(value : Base_Types.Bits): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.operational_api.MissionCommand_Id, Base_Types.Bits_Payload(value))
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
  def get_AirVehicleState_WPM(): Option[Base_Types.Bits] = {
    val value: Option[Base_Types.Bits] = get_AirVehicleState_WPM_payload() match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) => fail(s"Unexpected payload on port AirVehicleState_WPM.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
      case _ => None[Base_Types.Bits]()
    }
    return value
  }

  // payload getter for out EventDataPort
  def get_AirVehicleState_WPM_payload(): Option[Base_Types.Bits_Payload] = {
    return ArtNative_Ext.observeOutPortValue(bridge.initialization_api.AirVehicleState_WPM_Id).asInstanceOf[Option[Base_Types.Bits_Payload]]
  }

  // getter for out EventDataPort
  def get_AirVehicleState_UXAS(): Option[Base_Types.Bits] = {
    val value: Option[Base_Types.Bits] = get_AirVehicleState_UXAS_payload() match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) => fail(s"Unexpected payload on port AirVehicleState_UXAS.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
      case _ => None[Base_Types.Bits]()
    }
    return value
  }

  // payload getter for out EventDataPort
  def get_AirVehicleState_UXAS_payload(): Option[Base_Types.Bits_Payload] = {
    return ArtNative_Ext.observeOutPortValue(bridge.initialization_api.AirVehicleState_UXAS_Id).asInstanceOf[Option[Base_Types.Bits_Payload]]
  }

}
