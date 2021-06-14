// #Sireum

package HAMR_Simple_V4

import org.sireum._
import art._
import art.PortMode._
import art.DispatchPropertyProtocol._

// This file was auto-generated.  Do not edit

object Arch {
  val MissionComputer_Impl_Instance_SW_Radio : HAMR_Simple_V4.SW.RadioDriver_Impl_SW_Radio_Bridge = {
    val MissionCommand = Port[Base_Types.Bits] (id = 0, name = "MissionComputer_Impl_Instance_SW_Radio_MissionCommand", mode = EventOut)

    HAMR_Simple_V4.SW.RadioDriver_Impl_SW_Radio_Bridge(
      id = 0,
      name = "MissionComputer_Impl_Instance_SW_Radio",
      dispatchProtocol = Sporadic(min = 1),
      dispatchTriggers = None(),

      MissionCommand = MissionCommand
    )
  }
  val MissionComputer_Impl_Instance_SW_FlightPlanner : HAMR_Simple_V4.SW.FlightPlanner_Impl_SW_FlightPlanner_Bridge = {
    val MissionCommand = Port[Base_Types.Bits] (id = 1, name = "MissionComputer_Impl_Instance_SW_FlightPlanner_MissionCommand", mode = EventIn)
    val FlightPlan = Port[Base_Types.Bits] (id = 2, name = "MissionComputer_Impl_Instance_SW_FlightPlanner_FlightPlan", mode = EventOut)

    HAMR_Simple_V4.SW.FlightPlanner_Impl_SW_FlightPlanner_Bridge(
      id = 1,
      name = "MissionComputer_Impl_Instance_SW_FlightPlanner",
      dispatchProtocol = Sporadic(min = 1),
      dispatchTriggers = None(),

      MissionCommand = MissionCommand,
      FlightPlan = FlightPlan
    )
  }
  val MissionComputer_Impl_Instance_SW_FlightController : HAMR_Simple_V4.SW.FlightController_Impl_SW_FlightController_Bridge = {
    val FlightPlan = Port[Base_Types.Bits] (id = 3, name = "MissionComputer_Impl_Instance_SW_FlightController_FlightPlan", mode = EventIn)

    HAMR_Simple_V4.SW.FlightController_Impl_SW_FlightController_Bridge(
      id = 2,
      name = "MissionComputer_Impl_Instance_SW_FlightController",
      dispatchProtocol = Sporadic(min = 1),
      dispatchTriggers = None(),

      FlightPlan = FlightPlan
    )
  }

  val ad : ArchitectureDescription = {

    ArchitectureDescription(
      components = ISZ (MissionComputer_Impl_Instance_SW_Radio, MissionComputer_Impl_Instance_SW_FlightPlanner, MissionComputer_Impl_Instance_SW_FlightController),

      connections = ISZ (Connection(from = MissionComputer_Impl_Instance_SW_Radio.MissionCommand, to = MissionComputer_Impl_Instance_SW_FlightPlanner.MissionCommand),
                         Connection(from = MissionComputer_Impl_Instance_SW_FlightPlanner.FlightPlan, to = MissionComputer_Impl_Instance_SW_FlightController.FlightPlan))
    )
  }
}