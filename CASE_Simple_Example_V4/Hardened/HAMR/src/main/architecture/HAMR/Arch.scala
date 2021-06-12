// #Sireum

package HAMR

import org.sireum._
import art._
import art.PortMode._
import art.DispatchPropertyProtocol._

// This file was auto-generated.  Do not edit

object Arch {
  val SW_seL4_Impl_Instance_AttestationTester_AttestationTester : HAMR.SW.AttestationTester_Impl_AttestationTester_AttestationTester_Bridge = {
    val AttestationRequest = Port[SW.AttestationRequestMsg_Impl] (id = 0, name = "SW_seL4_Impl_Instance_AttestationTester_AttestationTester_AttestationRequest", mode = EventIn)
    val AttestationResponse = Port[SW.AttestationResponseMsg_Impl] (id = 1, name = "SW_seL4_Impl_Instance_AttestationTester_AttestationTester_AttestationResponse", mode = EventOut)

    HAMR.SW.AttestationTester_Impl_AttestationTester_AttestationTester_Bridge(
      id = 0,
      name = "SW_seL4_Impl_Instance_AttestationTester_AttestationTester",
      dispatchProtocol = Sporadic(min = 500),
      dispatchTriggers = None(),

      AttestationRequest = AttestationRequest,
      AttestationResponse = AttestationResponse
    )
  }
  val SW_seL4_Impl_Instance_Radio_RadioDriver_Attestation : HAMR.SW.RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation_Bridge = {
    val AttestationTesterResponse = Port[SW.AttestationResponseMsg_Impl] (id = 2, name = "SW_seL4_Impl_Instance_Radio_RadioDriver_Attestation_AttestationTesterResponse", mode = EventIn)
    val AttestationTesterRequest = Port[SW.AttestationRequestMsg_Impl] (id = 3, name = "SW_seL4_Impl_Instance_Radio_RadioDriver_Attestation_AttestationTesterRequest", mode = EventOut)
    val MissionCommand = Port[SW.RF_Msg_Impl] (id = 4, name = "SW_seL4_Impl_Instance_Radio_RadioDriver_Attestation_MissionCommand", mode = EventOut)
    val AttestationRequest = Port[SW.AttestationRequestMsg_Impl] (id = 5, name = "SW_seL4_Impl_Instance_Radio_RadioDriver_Attestation_AttestationRequest", mode = EventIn)
    val AttestationResponse = Port[SW.AttestationResponseMsg_Impl] (id = 6, name = "SW_seL4_Impl_Instance_Radio_RadioDriver_Attestation_AttestationResponse", mode = EventOut)

    HAMR.SW.RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation_Bridge(
      id = 1,
      name = "SW_seL4_Impl_Instance_Radio_RadioDriver_Attestation",
      dispatchProtocol = Sporadic(min = 500),
      dispatchTriggers = None(),

      AttestationTesterResponse = AttestationTesterResponse,
      AttestationTesterRequest = AttestationTesterRequest,
      MissionCommand = MissionCommand,
      AttestationRequest = AttestationRequest,
      AttestationResponse = AttestationResponse
    )
  }
  val SW_seL4_Impl_Instance_Monitor_Monitor : HAMR.SW.Monitor_Impl_Monitor_Monitor_Bridge = {
    val FlightPlan_in = Port[SW.Mission] (id = 7, name = "SW_seL4_Impl_Instance_Monitor_Monitor_FlightPlan_in", mode = EventIn)
    val FlightPlan_out = Port[SW.Mission] (id = 8, name = "SW_seL4_Impl_Instance_Monitor_Monitor_FlightPlan_out", mode = EventOut)
    val Alert = Port[art.Empty] (id = 9, name = "SW_seL4_Impl_Instance_Monitor_Monitor_Alert", mode = EventOut)

    HAMR.SW.Monitor_Impl_Monitor_Monitor_Bridge(
      id = 2,
      name = "SW_seL4_Impl_Instance_Monitor_Monitor",
      dispatchProtocol = Sporadic(min = 500),
      dispatchTriggers = None(),

      FlightPlan_in = FlightPlan_in,
      FlightPlan_out = FlightPlan_out,
      Alert = Alert
    )
  }
  val SW_seL4_Impl_Instance_FlightController_FlightController : HAMR.SW.FlightController_Impl_FlightController_FlightController_Bridge = {
    val FlightPlan = Port[SW.Mission] (id = 10, name = "SW_seL4_Impl_Instance_FlightController_FlightController_FlightPlan", mode = EventIn)
    val Alert = Port[art.Empty] (id = 11, name = "SW_seL4_Impl_Instance_FlightController_FlightController_Alert", mode = EventIn)

    HAMR.SW.FlightController_Impl_FlightController_FlightController_Bridge(
      id = 3,
      name = "SW_seL4_Impl_Instance_FlightController_FlightController",
      dispatchProtocol = Sporadic(min = 500),
      dispatchTriggers = None(),

      FlightPlan = FlightPlan,
      Alert = Alert
    )
  }
  val SW_seL4_Impl_Instance_AttestationManager_AttestationManager : HAMR.SW.AttestationManager_Impl_AttestationManager_AttestationManager_Bridge = {
    val AttestationRequest = Port[SW.AttestationRequestMsg_Impl] (id = 12, name = "SW_seL4_Impl_Instance_AttestationManager_AttestationManager_AttestationRequest", mode = EventOut)
    val AttestationResponse = Port[SW.AttestationResponseMsg_Impl] (id = 13, name = "SW_seL4_Impl_Instance_AttestationManager_AttestationManager_AttestationResponse", mode = EventIn)
    val TrustedIds = Port[SW.AllowList_Impl] (id = 14, name = "SW_seL4_Impl_Instance_AttestationManager_AttestationManager_TrustedIds", mode = EventOut)

    HAMR.SW.AttestationManager_Impl_AttestationManager_AttestationManager_Bridge(
      id = 4,
      name = "SW_seL4_Impl_Instance_AttestationManager_AttestationManager",
      dispatchProtocol = Sporadic(min = 500),
      dispatchTriggers = None(),

      AttestationRequest = AttestationRequest,
      AttestationResponse = AttestationResponse,
      TrustedIds = TrustedIds
    )
  }
  val SW_seL4_Impl_Instance_Filter_Filter : HAMR.SW.Filter_Impl_Filter_Filter_Bridge = {
    val Input = Port[SW.RF_Msg_Impl] (id = 15, name = "SW_seL4_Impl_Instance_Filter_Filter_Input", mode = EventIn)
    val Output = Port[SW.RF_Msg_Impl] (id = 16, name = "SW_seL4_Impl_Instance_Filter_Filter_Output", mode = EventOut)

    HAMR.SW.Filter_Impl_Filter_Filter_Bridge(
      id = 5,
      name = "SW_seL4_Impl_Instance_Filter_Filter",
      dispatchProtocol = Sporadic(min = 500),
      dispatchTriggers = None(),

      Input = Input,
      Output = Output
    )
  }
  val SW_seL4_Impl_Instance_FlightPlanner_FlightPlanner : HAMR.SW.FlightPlanner_Impl_FlightPlanner_FlightPlanner_Bridge = {
    val MissionCommand = Port[SW.RF_Msg_Impl] (id = 17, name = "SW_seL4_Impl_Instance_FlightPlanner_FlightPlanner_MissionCommand", mode = EventIn)
    val FlightPlan = Port[SW.Mission] (id = 18, name = "SW_seL4_Impl_Instance_FlightPlanner_FlightPlanner_FlightPlan", mode = EventOut)

    HAMR.SW.FlightPlanner_Impl_FlightPlanner_FlightPlanner_Bridge(
      id = 6,
      name = "SW_seL4_Impl_Instance_FlightPlanner_FlightPlanner",
      dispatchProtocol = Sporadic(min = 500),
      dispatchTriggers = None(),

      MissionCommand = MissionCommand,
      FlightPlan = FlightPlan
    )
  }
  val SW_seL4_Impl_Instance_AttestationGate_AttestationGate : HAMR.SW.AttestationGate_Impl_AttestationGate_AttestationGate_Bridge = {
    val MissionCommand_in = Port[SW.RF_Msg_Impl] (id = 19, name = "SW_seL4_Impl_Instance_AttestationGate_AttestationGate_MissionCommand_in", mode = EventIn)
    val MissionCommand_out = Port[SW.RF_Msg_Impl] (id = 20, name = "SW_seL4_Impl_Instance_AttestationGate_AttestationGate_MissionCommand_out", mode = EventOut)
    val TrustedIds = Port[SW.AllowList_Impl] (id = 21, name = "SW_seL4_Impl_Instance_AttestationGate_AttestationGate_TrustedIds", mode = EventIn)

    HAMR.SW.AttestationGate_Impl_AttestationGate_AttestationGate_Bridge(
      id = 7,
      name = "SW_seL4_Impl_Instance_AttestationGate_AttestationGate",
      dispatchProtocol = Sporadic(min = 500),
      dispatchTriggers = None(),

      MissionCommand_in = MissionCommand_in,
      MissionCommand_out = MissionCommand_out,
      TrustedIds = TrustedIds
    )
  }

  val ad : ArchitectureDescription = {

    ArchitectureDescription(
      components = ISZ (SW_seL4_Impl_Instance_AttestationTester_AttestationTester, SW_seL4_Impl_Instance_Radio_RadioDriver_Attestation, SW_seL4_Impl_Instance_Monitor_Monitor, SW_seL4_Impl_Instance_FlightController_FlightController, SW_seL4_Impl_Instance_AttestationManager_AttestationManager, SW_seL4_Impl_Instance_Filter_Filter, SW_seL4_Impl_Instance_FlightPlanner_FlightPlanner, SW_seL4_Impl_Instance_AttestationGate_AttestationGate),

      connections = ISZ (Connection(from = SW_seL4_Impl_Instance_AttestationTester_AttestationTester.AttestationResponse, to = SW_seL4_Impl_Instance_Radio_RadioDriver_Attestation.AttestationTesterResponse),
                         Connection(from = SW_seL4_Impl_Instance_Radio_RadioDriver_Attestation.AttestationTesterRequest, to = SW_seL4_Impl_Instance_AttestationTester_AttestationTester.AttestationRequest),
                         Connection(from = SW_seL4_Impl_Instance_Radio_RadioDriver_Attestation.MissionCommand, to = SW_seL4_Impl_Instance_AttestationGate_AttestationGate.MissionCommand_in),
                         Connection(from = SW_seL4_Impl_Instance_Radio_RadioDriver_Attestation.AttestationResponse, to = SW_seL4_Impl_Instance_AttestationManager_AttestationManager.AttestationResponse),
                         Connection(from = SW_seL4_Impl_Instance_Monitor_Monitor.FlightPlan_out, to = SW_seL4_Impl_Instance_FlightController_FlightController.FlightPlan),
                         Connection(from = SW_seL4_Impl_Instance_Monitor_Monitor.Alert, to = SW_seL4_Impl_Instance_FlightController_FlightController.Alert),
                         Connection(from = SW_seL4_Impl_Instance_AttestationManager_AttestationManager.AttestationRequest, to = SW_seL4_Impl_Instance_Radio_RadioDriver_Attestation.AttestationRequest),
                         Connection(from = SW_seL4_Impl_Instance_AttestationManager_AttestationManager.TrustedIds, to = SW_seL4_Impl_Instance_AttestationGate_AttestationGate.TrustedIds),
                         Connection(from = SW_seL4_Impl_Instance_Filter_Filter.Output, to = SW_seL4_Impl_Instance_FlightPlanner_FlightPlanner.MissionCommand),
                         Connection(from = SW_seL4_Impl_Instance_FlightPlanner_FlightPlanner.FlightPlan, to = SW_seL4_Impl_Instance_Monitor_Monitor.FlightPlan_in),
                         Connection(from = SW_seL4_Impl_Instance_AttestationGate_AttestationGate.MissionCommand_out, to = SW_seL4_Impl_Instance_Filter_Filter.Input))
    )
  }
}