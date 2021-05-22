// #Sireum

package attestation_gate.RadioDriver

import org.sireum._
import attestation_gate._

// This file will not be overwritten so is safe to edit
object RadioDriver_thr_Impl_radio_RadioDriver {

  def initialise(api: RadioDriver_thr_Impl_Initialization_Api): Unit = {
    // example api usage

    api.logInfo("Example info logging")
    api.logDebug("Example debug logging")
    api.logError("Example error logging")

    api.settrusted_ids_out(Base_Types.Bits_empty())
    api.sendautomation_request_out(Base_Types.Bits_empty())
    api.sendoperating_region_out(Base_Types.Bits_empty())
    api.sendline_search_task_out(Base_Types.Bits_empty())
  }

  def timeTriggered(api: RadioDriver_thr_Impl_Operational_Api): Unit = {
    // example api usage

    api.settrusted_ids_out(Base_Types.Bits_empty())
    api.sendautomation_request_out(Base_Types.Bits_empty())
    api.sendoperating_region_out(Base_Types.Bits_empty())
    api.sendline_search_task_out(Base_Types.Bits_empty())
  }

  def activate(api: RadioDriver_thr_Impl_Operational_Api): Unit = { }

  def deactivate(api: RadioDriver_thr_Impl_Operational_Api): Unit = { }

  def finalise(api: RadioDriver_thr_Impl_Operational_Api): Unit = { }

  def recover(api: RadioDriver_thr_Impl_Operational_Api): Unit = { }
}
