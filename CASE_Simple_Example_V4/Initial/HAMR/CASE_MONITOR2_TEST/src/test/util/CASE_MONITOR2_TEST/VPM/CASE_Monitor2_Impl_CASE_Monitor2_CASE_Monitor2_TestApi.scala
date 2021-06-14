package CASE_MONITOR2_TEST.VPM

import org.sireum._
import art.{ArtNative_Ext, Empty}
import CASE_MONITOR2_TEST._

// This file was auto-generated.  Do not edit
abstract class CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_TestApi extends BridgeTestSuite[CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge](Arch.CASE_MONITOR2_TEST_impl_Instance_CASE_Monitor2_CASE_Monitor2) {

  /** helper function to set the values of all input ports.
   * @param Observed payloads for event data port Observed.
   *   ART currently supports single element event data queues so
   *   only the last element of Observed will be used
   */
  def put_concrete_inputs(Observed : ISZ[Base_Types.Bits]): Unit = {
    for(v <- Observed){
      put_Observed(v)
    }
  }


  /** helper function to check CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2's
   * output ports.  Use named arguments to check subsets of the output ports.
   * @param Suspect_Traffic_Out method that will be called with the payloads to be sent
   *        on the outgoing event data port 'Suspect_Traffic_Out'.
   */
  def check_concrete_output(Suspect_Traffic_Out: ISZ[Base_Types.Bits] => B = Suspect_Traffic_OutParam => {T}): Unit = {
    var testFailures: ISZ[ST] = ISZ()

    var Suspect_Traffic_OutValue: ISZ[Base_Types.Bits] = ISZ()
    // TODO: event data port getter should return all of the events/payloads
    //       received on event data ports when queue sizes > 1 support is added
    //       to ART
    if(get_Suspect_Traffic_Out().nonEmpty) Suspect_Traffic_OutValue = Suspect_Traffic_OutValue :+ get_Suspect_Traffic_Out().get
    if(!Suspect_Traffic_Out(Suspect_Traffic_OutValue)) {
      testFailures = testFailures :+ st"'Suspect_Traffic_Out' did not match expected: received ${Suspect_Traffic_OutValue.size} events with the following payloads ${Suspect_Traffic_OutValue}"
    }

    assert(testFailures.isEmpty, st"${(testFailures, "\n")}".render)
  }


  // setter for in EventDataPort
  def put_Observed(value : Base_Types.Bits): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.operational_api.Observed_Id, Base_Types.Bits_Payload(value))
  }

  // getter for out EventDataPort
  def get_Suspect_Traffic_Out(): Option[Base_Types.Bits] = {
    val value: Option[Base_Types.Bits] = get_Suspect_Traffic_Out_payload() match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) => fail(s"Unexpected payload on port Suspect_Traffic_Out.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
      case _ => None[Base_Types.Bits]()
    }
    return value
  }

  // payload getter for out EventDataPort
  def get_Suspect_Traffic_Out_payload(): Option[Base_Types.Bits_Payload] = {
    return ArtNative_Ext.observeOutPortValue(bridge.initialization_api.Suspect_Traffic_Out_Id).asInstanceOf[Option[Base_Types.Bits_Payload]]
  }

}
