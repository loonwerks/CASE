package test_data_port_periodic_domains.test_data_port_periodic_domains

import org.sireum._
import art.{ArtNative_Ext, Empty}
import test_data_port_periodic_domains._

// This file was auto-generated.  Do not edit
abstract class source_thread_impl_source_process_component_source_thread_component_TestApi extends BridgeTestSuite[source_thread_impl_source_process_component_source_thread_component_Bridge](Arch.top_impl_Instance_source_process_component_source_thread_component) {

  /** helper function to check source_thread_impl_source_process_component_source_thread_component's
   * output ports.  Use named arguments to check subsets of the output ports.
   * @param write_port method that will be called with the value of the outgoing data
   *        port 'write_port'.
   */
  def check_concrete_output(write_port: Base_Types.Integer_8 => B = write_portParam => {T}): Unit = {
    var testFailures: ISZ[ST] = ISZ()

    val write_portValue: Base_Types.Integer_8 = get_write_port().get
    if(!write_port(write_portValue)) {
      testFailures = testFailures :+ st"'write_port' did not match expected: value of the outgoing data port is ${write_portValue}"
    }

    assert(testFailures.isEmpty, st"${(testFailures, "\n")}".render)
  }


  // getter for out DataPort
  def get_write_port(): Option[Base_Types.Integer_8] = {
    val value: Option[Base_Types.Integer_8] = get_write_port_payload() match {
      case Some(Base_Types.Integer_8_Payload(v)) => Some(v)
      case Some(v) => fail(s"Unexpected payload on port write_port.  Expecting 'Base_Types.Integer_8_Payload' but received ${v}")
      case _ => None[Base_Types.Integer_8]()
    }
    return value
  }

  // payload getter for out DataPort
  def get_write_port_payload(): Option[Base_Types.Integer_8_Payload] = {
    return ArtNative_Ext.observeOutPortValue(bridge.initialization_api.write_port_Id).asInstanceOf[Option[Base_Types.Integer_8_Payload]]
  }

}
