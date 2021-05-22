package pfc.PFC

import org.sireum._
import art.{ArtNative_Ext, Empty}
import pfc._

// This file was auto-generated.  Do not edit
abstract class filter_t_filter_filter_TestApi extends BridgeTestSuite[filter_t_filter_filter_Bridge](Arch.PFC_Sys_Impl_Instance_filter_filter) {

  /** helper function to set the values of all input ports.
   * @param from_producer payloads for event data port from_producer.
   *   ART currently supports single element event data queues so
   *   only the last element of from_producer will be used
   */
  def put_concrete_inputs(from_producer : ISZ[Base_Types.Bits]): Unit = {
    for(v <- from_producer){
      put_from_producer(v)
    }
  }


  /** helper function to check filter_t_filter_filter's
   * output ports.  Use named arguments to check subsets of the output ports.
   * @param to_consumer method that will be called with the payloads to be sent
   *        on the outgoing event data port 'to_consumer'.
   */
  def check_concrete_output(to_consumer: ISZ[Base_Types.Bits] => B = to_consumerParam => {T}): Unit = {
    var testFailures: ISZ[ST] = ISZ()

    var to_consumerValue: ISZ[Base_Types.Bits] = ISZ()
    // TODO: event data port getter should return all of the events/payloads
    //       received on event data ports when queue sizes > 1 support is added
    //       to ART
    if(get_to_consumer().nonEmpty) to_consumerValue = to_consumerValue :+ get_to_consumer().get
    if(!to_consumer(to_consumerValue)) {
      testFailures = testFailures :+ st"'to_consumer' did not match expected: received ${to_consumerValue.size} events with the following payloads ${to_consumerValue}"
    }

    assert(testFailures.isEmpty, st"${(testFailures, "\n")}".render)
  }


  // setter for in EventDataPort
  def put_from_producer(value : Base_Types.Bits): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.operational_api.from_producer_Id, Base_Types.Bits_Payload(value))
  }

  // getter for out EventDataPort
  def get_to_consumer(): Option[Base_Types.Bits] = {
    val value: Option[Base_Types.Bits] = get_to_consumer_payload() match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) => fail(s"Unexpected payload on port to_consumer.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
      case _ => None[Base_Types.Bits]()
    }
    return value
  }

  // payload getter for out EventDataPort
  def get_to_consumer_payload(): Option[Base_Types.Bits_Payload] = {
    return ArtNative_Ext.observeOutPortValue(bridge.initialization_api.to_consumer_Id).asInstanceOf[Option[Base_Types.Bits_Payload]]
  }

}
