package base.test_event_data_port_periodic_domains

import org.sireum._
import art.{ArtNative_Ext, Empty}
import base._

// This file was auto-generated.  Do not edit
abstract class producer_t_i_producer_producer_TestApi extends BridgeTestSuite[producer_t_i_producer_producer_Bridge](Arch.top_impl_Instance_producer_producer) {

  /** helper function to check producer_t_i_producer_producer's
   * output ports.  Use named arguments to check subsets of the output ports.
   * @param write_port method that will be called with the payloads to be sent
   *        on the outgoing event data port 'write_port'.
   */
  def check_concrete_output(write_port: ISZ[Base_Types.Bits] => B = write_portParam => {T}): Unit = {
    var testFailures: ISZ[ST] = ISZ()

    var write_portValue: ISZ[Base_Types.Bits] = ISZ()
    // TODO: event data port getter should return all of the events/payloads
    //       received on event data ports when queue sizes > 1 support is added
    //       to ART
    if(get_write_port().nonEmpty) write_portValue = write_portValue :+ get_write_port().get
    if(!write_port(write_portValue)) {
      testFailures = testFailures :+ st"'write_port' did not match expected: received ${write_portValue.size} events with the following payloads ${write_portValue}"
    }

    assert(testFailures.isEmpty, st"${(testFailures, "\n")}".render)
  }


  // getter for out EventDataPort
  def get_write_port(): Option[Base_Types.Bits] = {
    val value: Option[Base_Types.Bits] = get_write_port_payload() match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) => fail(s"Unexpected payload on port write_port.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
      case _ => None[Base_Types.Bits]()
    }
    return value
  }

  // payload getter for out EventDataPort
  def get_write_port_payload(): Option[Base_Types.Bits_Payload] = {
    return ArtNative_Ext.observeOutPortValue(bridge.initialization_api.write_port_Id).asInstanceOf[Option[Base_Types.Bits_Payload]]
  }

}
