package pfc.PFC

import org.sireum._
import art.{ArtNative_Ext, Empty}
import pfc._

// This file was auto-generated.  Do not edit
abstract class producer_t_producer_producer_TestApi extends BridgeTestSuite[producer_t_producer_producer_Bridge](Arch.PFC_Sys_Impl_Instance_producer_producer) {

  /** helper function to check producer_t_producer_producer's
   * output ports.  Use named arguments to check subsets of the output ports.
   * @param to_filter method that will be called with the payloads to be sent
   *        on the outgoing event data port 'to_filter'.
   */
  def check_concrete_output(to_filter: ISZ[Base_Types.Bits] => B = to_filterParam => {T}): Unit = {
    var testFailures: ISZ[ST] = ISZ()

    var to_filterValue: ISZ[Base_Types.Bits] = ISZ()
    // TODO: event data port getter should return all of the events/payloads
    //       received on event data ports when queue sizes > 1 support is added
    //       to ART
    if(get_to_filter().nonEmpty) to_filterValue = to_filterValue :+ get_to_filter().get
    if(!to_filter(to_filterValue)) {
      testFailures = testFailures :+ st"'to_filter' did not match expected: received ${to_filterValue.size} events with the following payloads ${to_filterValue}"
    }

    assert(testFailures.isEmpty, st"${(testFailures, "\n")}".render)
  }


  // getter for out EventDataPort
  def get_to_filter(): Option[Base_Types.Bits] = {
    val value: Option[Base_Types.Bits] = get_to_filter_payload() match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) => fail(s"Unexpected payload on port to_filter.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
      case _ => None[Base_Types.Bits]()
    }
    return value
  }

  // payload getter for out EventDataPort
  def get_to_filter_payload(): Option[Base_Types.Bits_Payload] = {
    return ArtNative_Ext.observeOutPortValue(bridge.initialization_api.to_filter_Id).asInstanceOf[Option[Base_Types.Bits_Payload]]
  }

}
