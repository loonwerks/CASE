// #Sireum

package both_vm.test_event_data_port_periodic_domains

import org.sireum._
import both_vm._

// This file will not be overwritten so is safe to edit
object consumer_t_impl_dst_process_dst_thread {

  def initialise(api: consumer_t_impl_Initialization_Api): Unit = {
    // example api usage

    api.logInfo("Example info logging")
    api.logDebug("Example debug logging")
    api.logError("Example error logging")

  }

  def timeTriggered(api: consumer_t_impl_Operational_Api): Unit = {
    // example api usage

    val apiUsage_read_port: Option[Base_Types.Integer_8] = api.get_read_port()
    api.logInfo(s"Received on read_port: ${apiUsage_read_port}")
  }

  def activate(api: consumer_t_impl_Operational_Api): Unit = { }

  def deactivate(api: consumer_t_impl_Operational_Api): Unit = { }

  def finalise(api: consumer_t_impl_Operational_Api): Unit = { }

  def recover(api: consumer_t_impl_Operational_Api): Unit = { }
}
