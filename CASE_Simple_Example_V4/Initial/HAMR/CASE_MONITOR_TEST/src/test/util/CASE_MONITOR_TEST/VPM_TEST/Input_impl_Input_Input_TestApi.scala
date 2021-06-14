package CASE_MONITOR_TEST.VPM_TEST

import org.sireum._
import art.{ArtNative_Ext, Empty}
import CASE_MONITOR_TEST._

// This file was auto-generated.  Do not edit
abstract class Input_impl_Input_Input_TestApi extends BridgeTestSuite[Input_impl_Input_Input_Bridge](Arch.CASE_MONITOR_TEST_impl_Instance_Input_Input) {

  /** helper function to check Input_impl_Input_Input's
   * output ports.  Use named arguments to check subsets of the output ports.
   * @param Observed method that will be called with the payloads to be sent
   *        on the outgoing event data port 'Observed'.
   */
  def check_concrete_output(Observed: ISZ[Base_Types.Bits] => B = ObservedParam => {T}): Unit = {
    var testFailures: ISZ[ST] = ISZ()

    var ObservedValue: ISZ[Base_Types.Bits] = ISZ()
    // TODO: event data port getter should return all of the events/payloads
    //       received on event data ports when queue sizes > 1 support is added
    //       to ART
    if(get_Observed().nonEmpty) ObservedValue = ObservedValue :+ get_Observed().get
    if(!Observed(ObservedValue)) {
      testFailures = testFailures :+ st"'Observed' did not match expected: received ${ObservedValue.size} events with the following payloads ${ObservedValue}"
    }

    assert(testFailures.isEmpty, st"${(testFailures, "\n")}".render)
  }


  // getter for out EventDataPort
  def get_Observed(): Option[Base_Types.Bits] = {
    val value: Option[Base_Types.Bits] = get_Observed_payload() match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) => fail(s"Unexpected payload on port Observed.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
      case _ => None[Base_Types.Bits]()
    }
    return value
  }

  // payload getter for out EventDataPort
  def get_Observed_payload(): Option[Base_Types.Bits_Payload] = {
    return ArtNative_Ext.observeOutPortValue(bridge.initialization_api.Observed_Id).asInstanceOf[Option[Base_Types.Bits_Payload]]
  }

}
