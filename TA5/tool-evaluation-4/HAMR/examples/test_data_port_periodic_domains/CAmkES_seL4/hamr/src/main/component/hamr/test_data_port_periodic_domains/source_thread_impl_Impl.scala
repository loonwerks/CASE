// #Sireum

package hamr.test_data_port_periodic_domains

import org.sireum._
import hamr._

// the contents of this file will not be overwritten
@record class source_thread_impl_Impl (val api : source_thread_impl_Bridge.Api) extends source_thread_impl {

  override def initialise(): Unit = {
    // example api usage

    api.logInfo("Example info logging")
    api.logDebug("Example debug logging")
    api.logError("Example error logging")

    api.setwrite_port(Base_Types.Integer_8_empty())
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
