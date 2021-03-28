// #Sireum

package test_data_port_periodic_domains.test_data_port_periodic_domains

import org.sireum._
import test_data_port_periodic_domains._

// This file will not be overwritten so is safe to edit
object destination_thread_impl_destination_process_component_destination_thread_component {

  def initialise(api: destination_thread_impl_Initialization_Api): Unit = {
    // example api usage

    api.logInfo("Example info logging")
    api.logDebug("Example debug logging")
    api.logError("Example error logging")

  }

  def timeTriggered(api: destination_thread_impl_Operational_Api): Unit = {
    // example api usage

    val apiUsage_read_port: Option[Base_Types.Integer_8] = api.get_read_port()
    api.logInfo(s"Received on read_port: ${apiUsage_read_port}")
  }

  def activate(api: destination_thread_impl_Operational_Api): Unit = { }

  def deactivate(api: destination_thread_impl_Operational_Api): Unit = { }

  def finalise(api: destination_thread_impl_Operational_Api): Unit = { }

  def recover(api: destination_thread_impl_Operational_Api): Unit = { }
}
