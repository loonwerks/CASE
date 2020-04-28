// #Sireum

package hamr.test_data_port_periodic_domains

import org.sireum._
import hamr._

// the contents of this file will not be overwritten
@record class destination_thread_impl_Impl (val api : destination_thread_impl_Bridge.Api) extends destination_thread_impl {

  override def initialise(): Unit = {
    // example api usage

    api.logInfo("Example info logging")
    api.logDebug("Example debug logging")
    api.logError("Example error logging")

    val apiUsage_read_port: Option[S8] = api.getread_port()
  }

  override def timeTriggered(): Unit = {
    // example override of timeTriggered
  }

  override def activate(): Unit = {
    // example override of activate
  }

  override def deactivate(): Unit = {
    // example override of deactivate
  }

  override def finalise(): Unit = {
    // example override of finalise
  }

  override def recover(): Unit = {
    // example override of recover
  }
}
