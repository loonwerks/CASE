// #Sireum

package HAMR.SW

import org.sireum._
import HAMR._

// This file will not be overwritten so is safe to edit
object Monitor_Impl_Monitor_Monitor {

  def initialise(api: Monitor_Impl_Initialization_Api): Unit = { }

  def handle_FlightPlan_in(api: Monitor_Impl_Operational_Api, value : SW.Mission): Unit = { }

  def activate(api: Monitor_Impl_Operational_Api): Unit = { }

  def deactivate(api: Monitor_Impl_Operational_Api): Unit = { }

  def finalise(api: Monitor_Impl_Operational_Api): Unit = { }

  def recover(api: Monitor_Impl_Operational_Api): Unit = { }
}
