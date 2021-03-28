// #Sireum

package test_data_port_periodic_domains.test_data_port_periodic_domains

import org.sireum._
import test_data_port_periodic_domains._

// This file will not be overwritten so is safe to edit
object source_thread_impl_source_process_component_source_thread_component {

  def initialise(api: source_thread_impl_Initialization_Api): Unit = {
    // example api usage

    api.logInfo("Example info logging")
    api.logDebug("Example debug logging")
    api.logError("Example error logging")

    api.put_write_port(Base_Types.Integer_8_example())
  }

  def timeTriggered(api: source_thread_impl_Operational_Api): Unit = {
    // example api usage


  }

  def activate(api: source_thread_impl_Operational_Api): Unit = { }

  def deactivate(api: source_thread_impl_Operational_Api): Unit = { }

  def finalise(api: source_thread_impl_Operational_Api): Unit = { }

  def recover(api: source_thread_impl_Operational_Api): Unit = { }
}
