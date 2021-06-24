// #Sireum

package HAMR_Simple_V4

import org.sireum._
import art._
import art.PortMode._
import art.DispatchPropertyProtocol._

// This file was auto-generated.  Do not edit

object Arch {
  val MissionComputer_Impl_Instance_SW_FlightPlanner_FlightPlanner : HAMR_Simple_V4.SW.FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge = {
    val MissionCommand = Port[Base_Types.Bits] (id = 0, name = "MissionComputer_Impl_Instance_SW_FlightPlanner_FlightPlanner_MissionCommand", mode = EventIn)
    val FlightPlan = Port[Base_Types.Bits] (id = 1, name = "MissionComputer_Impl_Instance_SW_FlightPlanner_FlightPlanner_FlightPlan", mode = EventOut)

    HAMR_Simple_V4.SW.FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge(
      id = 0,
      name = "MissionComputer_Impl_Instance_SW_FlightPlanner_FlightPlanner",
      dispatchProtocol = Periodic(period = 500),
      dispatchTriggers = None(),

      MissionCommand = MissionCommand,
      FlightPlan = FlightPlan
    )
  }
  val MissionComputer_Impl_Instance_SW_Radio_RadioDriver : HAMR_Simple_V4.SW.RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge = {
    val MissionCommand = Port[Base_Types.Bits] (id = 2, name = "MissionComputer_Impl_Instance_SW_Radio_RadioDriver_MissionCommand", mode = EventOut)
    val AttestationRequest = Port[Base_Types.Bits] (id = 3, name = "MissionComputer_Impl_Instance_SW_Radio_RadioDriver_AttestationRequest", mode = EventIn)
    val AttestationResponse = Port[Base_Types.Bits] (id = 4, name = "MissionComputer_Impl_Instance_SW_Radio_RadioDriver_AttestationResponse", mode = EventOut)
    val AttestationTesterResponse = Port[Base_Types.Bits] (id = 5, name = "MissionComputer_Impl_Instance_SW_Radio_RadioDriver_AttestationTesterResponse", mode = EventIn)
    val AttestationTesterRequest = Port[Base_Types.Bits] (id = 6, name = "MissionComputer_Impl_Instance_SW_Radio_RadioDriver_AttestationTesterRequest", mode = EventOut)

    HAMR_Simple_V4.SW.RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge(
      id = 1,
      name = "MissionComputer_Impl_Instance_SW_Radio_RadioDriver",
      dispatchProtocol = Periodic(period = 500),
      dispatchTriggers = None(),

      MissionCommand = MissionCommand,
      AttestationRequest = AttestationRequest,
      AttestationResponse = AttestationResponse,
      AttestationTesterResponse = AttestationTesterResponse,
      AttestationTesterRequest = AttestationTesterRequest
    )
  }
  val MissionComputer_Impl_Instance_SW_FlightController_FlightController : HAMR_Simple_V4.SW.FlightController_Impl_SW_FlightController_FlightController_Bridge = {
    val FlightPlan = Port[Base_Types.Bits] (id = 7, name = "MissionComputer_Impl_Instance_SW_FlightController_FlightController_FlightPlan", mode = EventIn)
    val Alert = Port[art.Empty] (id = 8, name = "MissionComputer_Impl_Instance_SW_FlightController_FlightController_Alert", mode = EventIn)

    HAMR_Simple_V4.SW.FlightController_Impl_SW_FlightController_FlightController_Bridge(
      id = 2,
      name = "MissionComputer_Impl_Instance_SW_FlightController_FlightController",
      dispatchProtocol = Periodic(period = 500),
      dispatchTriggers = None(),

      FlightPlan = FlightPlan,
      Alert = Alert
    )
  }
  val MissionComputer_Impl_Instance_SW_AttestationManager_AttestationManager : HAMR_Simple_V4.SW.AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge = {
    val AttestationRequest = Port[Base_Types.Bits] (id = 9, name = "MissionComputer_Impl_Instance_SW_AttestationManager_AttestationManager_AttestationRequest", mode = EventOut)
    val AttestationResponse = Port[Base_Types.Bits] (id = 10, name = "MissionComputer_Impl_Instance_SW_AttestationManager_AttestationManager_AttestationResponse", mode = EventIn)
    val TrustedIds = Port[Base_Types.Bits] (id = 11, name = "MissionComputer_Impl_Instance_SW_AttestationManager_AttestationManager_TrustedIds", mode = EventOut)

    HAMR_Simple_V4.SW.AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge(
      id = 3,
      name = "MissionComputer_Impl_Instance_SW_AttestationManager_AttestationManager",
      dispatchProtocol = Periodic(period = 500),
      dispatchTriggers = None(),

      AttestationRequest = AttestationRequest,
      AttestationResponse = AttestationResponse,
      TrustedIds = TrustedIds
    )
  }
  val MissionComputer_Impl_Instance_SW_AttestationGate_AttestationGate : HAMR_Simple_V4.SW.AttestationGate_Impl_SW_AttestationGate_AttestationGate_Bridge = {
    val MissionCommand_in = Port[Base_Types.Bits] (id = 12, name = "MissionComputer_Impl_Instance_SW_AttestationGate_AttestationGate_MissionCommand_in", mode = EventIn)
    val MissionCommand_out = Port[Base_Types.Bits] (id = 13, name = "MissionComputer_Impl_Instance_SW_AttestationGate_AttestationGate_MissionCommand_out", mode = EventOut)
    val TrustedIds = Port[Base_Types.Bits] (id = 14, name = "MissionComputer_Impl_Instance_SW_AttestationGate_AttestationGate_TrustedIds", mode = EventIn)

    HAMR_Simple_V4.SW.AttestationGate_Impl_SW_AttestationGate_AttestationGate_Bridge(
      id = 4,
      name = "MissionComputer_Impl_Instance_SW_AttestationGate_AttestationGate",
      dispatchProtocol = Periodic(period = 500),
      dispatchTriggers = None(),

      MissionCommand_in = MissionCommand_in,
      MissionCommand_out = MissionCommand_out,
      TrustedIds = TrustedIds
    )
  }
  val MissionComputer_Impl_Instance_SW_Filter_Filter : HAMR_Simple_V4.SW.Filter_Impl_SW_Filter_Filter_Bridge = {
    val Input = Port[Base_Types.Bits] (id = 15, name = "MissionComputer_Impl_Instance_SW_Filter_Filter_Input", mode = EventIn)
    val Output = Port[Base_Types.Bits] (id = 16, name = "MissionComputer_Impl_Instance_SW_Filter_Filter_Output", mode = EventOut)

    HAMR_Simple_V4.SW.Filter_Impl_SW_Filter_Filter_Bridge(
      id = 5,
      name = "MissionComputer_Impl_Instance_SW_Filter_Filter",
      dispatchProtocol = Periodic(period = 500),
      dispatchTriggers = None(),

      Input = Input,
      Output = Output
    )
  }
  val MissionComputer_Impl_Instance_SW_Monitor_Monitor : HAMR_Simple_V4.SW.Monitor_Impl_SW_Monitor_Monitor_Bridge = {
    val FlightPlan_in = Port[Base_Types.Bits] (id = 17, name = "MissionComputer_Impl_Instance_SW_Monitor_Monitor_FlightPlan_in", mode = EventIn)
    val FlightPlan_out = Port[Base_Types.Bits] (id = 18, name = "MissionComputer_Impl_Instance_SW_Monitor_Monitor_FlightPlan_out", mode = EventOut)
    val Alert = Port[art.Empty] (id = 19, name = "MissionComputer_Impl_Instance_SW_Monitor_Monitor_Alert", mode = EventOut)

    HAMR_Simple_V4.SW.Monitor_Impl_SW_Monitor_Monitor_Bridge(
      id = 6,
      name = "MissionComputer_Impl_Instance_SW_Monitor_Monitor",
      dispatchProtocol = Periodic(period = 500),
      dispatchTriggers = None(),

      FlightPlan_in = FlightPlan_in,
      FlightPlan_out = FlightPlan_out,
      Alert = Alert
    )
  }
  val MissionComputer_Impl_Instance_SW_AttestationTester_AttestationTester : HAMR_Simple_V4.SW.AttestationTester_Impl_SW_AttestationTester_AttestationTester_Bridge = {
    val AttestationRequest = Port[Base_Types.Bits] (id = 20, name = "MissionComputer_Impl_Instance_SW_AttestationTester_AttestationTester_AttestationRequest", mode = EventIn)
    val AttestationResponse = Port[Base_Types.Bits] (id = 21, name = "MissionComputer_Impl_Instance_SW_AttestationTester_AttestationTester_AttestationResponse", mode = EventOut)

    HAMR_Simple_V4.SW.AttestationTester_Impl_SW_AttestationTester_AttestationTester_Bridge(
      id = 7,
      name = "MissionComputer_Impl_Instance_SW_AttestationTester_AttestationTester",
      dispatchProtocol = Periodic(period = 500),
      dispatchTriggers = None(),

      AttestationRequest = AttestationRequest,
      AttestationResponse = AttestationResponse
    )
  }

  val ad : ArchitectureDescription = {

    ArchitectureDescription(
      components = ISZ (MissionComputer_Impl_Instance_SW_FlightPlanner_FlightPlanner, MissionComputer_Impl_Instance_SW_Radio_RadioDriver, MissionComputer_Impl_Instance_SW_FlightController_FlightController, MissionComputer_Impl_Instance_SW_AttestationManager_AttestationManager, MissionComputer_Impl_Instance_SW_AttestationGate_AttestationGate, MissionComputer_Impl_Instance_SW_Filter_Filter, MissionComputer_Impl_Instance_SW_Monitor_Monitor, MissionComputer_Impl_Instance_SW_AttestationTester_AttestationTester),

      connections = ISZ (Connection(from = MissionComputer_Impl_Instance_SW_FlightPlanner_FlightPlanner.FlightPlan, to = MissionComputer_Impl_Instance_SW_Monitor_Monitor.FlightPlan_in),
                         Connection(from = MissionComputer_Impl_Instance_SW_Radio_RadioDriver.MissionCommand, to = MissionComputer_Impl_Instance_SW_AttestationGate_AttestationGate.MissionCommand_in),
                         Connection(from = MissionComputer_Impl_Instance_SW_Radio_RadioDriver.AttestationResponse, to = MissionComputer_Impl_Instance_SW_AttestationManager_AttestationManager.AttestationResponse),
                         Connection(from = MissionComputer_Impl_Instance_SW_Radio_RadioDriver.AttestationTesterRequest, to = MissionComputer_Impl_Instance_SW_AttestationTester_AttestationTester.AttestationRequest),
                         Connection(from = MissionComputer_Impl_Instance_SW_AttestationManager_AttestationManager.AttestationRequest, to = MissionComputer_Impl_Instance_SW_Radio_RadioDriver.AttestationRequest),
                         Connection(from = MissionComputer_Impl_Instance_SW_AttestationManager_AttestationManager.TrustedIds, to = MissionComputer_Impl_Instance_SW_AttestationGate_AttestationGate.TrustedIds),
                         Connection(from = MissionComputer_Impl_Instance_SW_AttestationGate_AttestationGate.MissionCommand_out, to = MissionComputer_Impl_Instance_SW_Filter_Filter.Input),
                         Connection(from = MissionComputer_Impl_Instance_SW_Filter_Filter.Output, to = MissionComputer_Impl_Instance_SW_FlightPlanner_FlightPlanner.MissionCommand),
                         Connection(from = MissionComputer_Impl_Instance_SW_Monitor_Monitor.FlightPlan_out, to = MissionComputer_Impl_Instance_SW_FlightController_FlightController.FlightPlan),
                         Connection(from = MissionComputer_Impl_Instance_SW_Monitor_Monitor.Alert, to = MissionComputer_Impl_Instance_SW_FlightController_FlightController.Alert),
                         Connection(from = MissionComputer_Impl_Instance_SW_AttestationTester_AttestationTester.AttestationResponse, to = MissionComputer_Impl_Instance_SW_Radio_RadioDriver.AttestationTesterResponse))
    )
  }
}