// #Sireum

// This file was auto-generated.  Do not edit

package hamr.SW

import org.sireum._
import art._

@ext object CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_seL4Nix {
  // returns T if seL4's keep_in_zones port is empty, F otherwise 
  def keep_in_zones_IsEmpty(): B = $

  // returns result of dequeuing seL4's keep_in_zones port 
  def keep_in_zones_Receive(): Option[DataContent] = $

  // returns T if seL4's keep_out_zones port is empty, F otherwise 
  def keep_out_zones_IsEmpty(): B = $

  // returns result of dequeuing seL4's keep_out_zones port 
  def keep_out_zones_Receive(): Option[DataContent] = $

  // returns T if seL4's observed port is empty, F otherwise 
  def observed_IsEmpty(): B = $

  // returns result of dequeuing seL4's observed port 
  def observed_Receive(): Option[DataContent] = $

  // send payload 'd' to components connected to seL4's output port
  def output_Send(d: DataContent): Unit = $

  // send payload 'd' to components connected to seL4's alert port
  def alert_Send(d: DataContent): Unit = $
}
