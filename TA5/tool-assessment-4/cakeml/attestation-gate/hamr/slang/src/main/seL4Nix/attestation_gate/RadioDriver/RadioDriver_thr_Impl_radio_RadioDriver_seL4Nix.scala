// #Sireum

// This file was auto-generated.  Do not edit

package attestation_gate.RadioDriver

import org.sireum._
import art._

@ext object RadioDriver_thr_Impl_radio_RadioDriver_seL4Nix {
  // send payload 'd' to components connected to seL4's trusted_ids_out port
  def trusted_ids_out_Send(d: DataContent): Unit = $

  // send payload 'd' to components connected to seL4's automation_request_out port
  def automation_request_out_Send(d: DataContent): Unit = $

  // send payload 'd' to components connected to seL4's operating_region_out port
  def operating_region_out_Send(d: DataContent): Unit = $

  // send payload 'd' to components connected to seL4's line_search_task_out port
  def line_search_task_out_Send(d: DataContent): Unit = $
}
