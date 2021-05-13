package HAMR.SW

import org.sireum._
import art.{ArtNative_Ext, Empty}
import HAMR._

// This file was auto-generated.  Do not edit
abstract class UARTDriver_Impl_SW_UART_UARTDriver_TestApi extends BridgeTestSuite[UARTDriver_Impl_SW_UART_UARTDriver_Bridge](Arch.MissionComputer_Impl_Instance_SW_UART_UARTDriver) {

  /** helper function to set the values of all input ports.
   * @param MissionWindow payloads for event data port MissionWindow.
   *   ART currently supports single element event data queues so
   *   only the last element of MissionWindow will be used
   */
  def put_concrete_inputs(MissionWindow : ISZ[SW.MissionWindow]): Unit = {
    for(v <- MissionWindow){
      put_MissionWindow(v)
    }
  }


  /** helper function to check UARTDriver_Impl_SW_UART_UARTDriver's
   * output ports.  Use named arguments to check subsets of the output ports.
   * @param Status method that will be called with the payloads to be sent
   *        on the outgoing event data port 'Status'.
   */
  def check_concrete_output(Status: ISZ[SW.Coordinate_Impl] => B = StatusParam => {T}): Unit = {
    var testFailures: ISZ[ST] = ISZ()

    var StatusValue: ISZ[SW.Coordinate_Impl] = ISZ()
    // TODO: event data port getter should return all of the events/payloads
    //       received on event data ports when queue sizes > 1 support is added
    //       to ART
    if(get_Status().nonEmpty) StatusValue = StatusValue :+ get_Status().get
    if(!Status(StatusValue)) {
      testFailures = testFailures :+ st"'Status' did not match expected: received ${StatusValue.size} events with the following payloads ${StatusValue}"
    }

    assert(testFailures.isEmpty, st"${(testFailures, "\n")}".render)
  }


  // setter for in EventDataPort
  def put_MissionWindow(value : SW.MissionWindow): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.operational_api.MissionWindow_Id, SW.MissionWindow_Payload(value))
  }

  // getter for out EventDataPort
  def get_Status(): Option[SW.Coordinate_Impl] = {
    val value: Option[SW.Coordinate_Impl] = get_Status_payload() match {
      case Some(SW.Coordinate_Impl_Payload(v)) => Some(v)
      case Some(v) => fail(s"Unexpected payload on port Status.  Expecting 'SW.Coordinate_Impl_Payload' but received ${v}")
      case _ => None[SW.Coordinate_Impl]()
    }
    return value
  }

  // payload getter for out EventDataPort
  def get_Status_payload(): Option[SW.Coordinate_Impl_Payload] = {
    return ArtNative_Ext.observeOutPortValue(bridge.initialization_api.Status_Id).asInstanceOf[Option[SW.Coordinate_Impl_Payload]]
  }

}
