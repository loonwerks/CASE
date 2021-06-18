package hamr.SW

import org.sireum._
import art.{ArtNative_Ext, Empty}
import hamr._

// This file was auto-generated.  Do not edit
abstract class CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_TestApi extends BridgeTestSuite[CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge](Arch.UAV_Impl_Instance_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST) {

  /** helper function to set the values of all input ports.
   * @param filter_in payloads for event data port filter_in.
   *   ART currently supports single element event data queues so
   *   only the last element of filter_in will be used
   */
  def put_concrete_inputs(filter_in : ISZ[Base_Types.Bits]): Unit = {
    for(v <- filter_in){
      put_filter_in(v)
    }
  }


  /** helper function to check CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST's
   * output ports.  Use named arguments to check subsets of the output ports.
   * @param filter_out method that will be called with the payloads to be sent
   *        on the outgoing event data port 'filter_out'.
   */
  def check_concrete_output(filter_out: ISZ[Base_Types.Bits] => B = filter_outParam => {T}): Unit = {
    var testFailures: ISZ[ST] = ISZ()

    var filter_outValue: ISZ[Base_Types.Bits] = ISZ()
    // TODO: event data port getter should return all of the events/payloads
    //       received on event data ports when queue sizes > 1 support is added
    //       to ART
    if(get_filter_out().nonEmpty) filter_outValue = filter_outValue :+ get_filter_out().get
    if(!filter_out(filter_outValue)) {
      testFailures = testFailures :+ st"'filter_out' did not match expected: received ${filter_outValue.size} events with the following payloads ${filter_outValue}"
    }

    assert(testFailures.isEmpty, st"${(testFailures, "\n")}".render)
  }


  // setter for in EventDataPort
  def put_filter_in(value : Base_Types.Bits): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.operational_api.filter_in_Id, Base_Types.Bits_Payload(value))
  }

  // getter for out EventDataPort
  def get_filter_out(): Option[Base_Types.Bits] = {
    val value: Option[Base_Types.Bits] = get_filter_out_payload() match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) => fail(s"Unexpected payload on port filter_out.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
      case _ => None[Base_Types.Bits]()
    }
    return value
  }

  // payload getter for out EventDataPort
  def get_filter_out_payload(): Option[Base_Types.Bits_Payload] = {
    return ArtNative_Ext.observeOutPortValue(bridge.initialization_api.filter_out_Id).asInstanceOf[Option[Base_Types.Bits_Payload]]
  }

}
