// #Sireum

package HAMR

import org.sireum._
import art._
import art.PortMode._
import art.DispatchPropertyProtocol._

// This file was auto-generated.  Do not edit

object Arch {
  val MissionComputer_Impl_Instance_SW_FlyZones_FlyZoneDatabase : HAMR.SW.FlyZoneDatabase_Impl_SW_FlyZones_FlyZoneDatabase_Bridge = {
    val FlyZones = Port[SW.MapArray] (id = 0, name = "MissionComputer_Impl_Instance_SW_FlyZones_FlyZoneDatabase_FlyZones", mode = DataOut)

    HAMR.SW.FlyZoneDatabase_Impl_SW_FlyZones_FlyZoneDatabase_Bridge(
      id = 0,
      name = "MissionComputer_Impl_Instance_SW_FlyZones_FlyZoneDatabase",
      dispatchProtocol = Sporadic(min = 1),
      dispatchTriggers = None(),

      FlyZones = FlyZones
    )
  }
  val MissionComputer_Impl_Instance_SW_Radio_RadioDriver_Attestation : HAMR.SW.RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_Bridge = {
    val MissionCommand = Port[SW.RF_Msg_Impl] (id = 1, name = "MissionComputer_Impl_Instance_SW_Radio_RadioDriver_Attestation_MissionCommand", mode = EventOut)
    val AttestationRequest = Port[CASE_Model_Transformations.CASE_AttestationRequestMsg_Impl] (id = 2, name = "MissionComputer_Impl_Instance_SW_Radio_RadioDriver_Attestation_AttestationRequest", mode = EventIn)
    val AttestationResponse = Port[CASE_Model_Transformations.CASE_AttestationResponseMsg_Impl] (id = 3, name = "MissionComputer_Impl_Instance_SW_Radio_RadioDriver_Attestation_AttestationResponse", mode = EventOut)
    val Alert = Port[art.Empty] (id = 4, name = "MissionComputer_Impl_Instance_SW_Radio_RadioDriver_Attestation_Alert", mode = EventIn)

    HAMR.SW.RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_Bridge(
      id = 1,
      name = "MissionComputer_Impl_Instance_SW_Radio_RadioDriver_Attestation",
      dispatchProtocol = Sporadic(min = 1),
      dispatchTriggers = None(),

      MissionCommand = MissionCommand,
      AttestationRequest = AttestationRequest,
      AttestationResponse = AttestationResponse,
      Alert = Alert
    )
  }
  val MissionComputer_Impl_Instance_SW_UART_UARTDriver : HAMR.SW.UARTDriver_Impl_SW_UART_UARTDriver_Bridge = {
    val Status = Port[SW.Coordinate_Impl] (id = 5, name = "MissionComputer_Impl_Instance_SW_UART_UARTDriver_Status", mode = EventOut)
    val MissionWindow = Port[SW.MissionWindow] (id = 6, name = "MissionComputer_Impl_Instance_SW_UART_UARTDriver_MissionWindow", mode = EventIn)

    HAMR.SW.UARTDriver_Impl_SW_UART_UARTDriver_Bridge(
      id = 2,
      name = "MissionComputer_Impl_Instance_SW_UART_UARTDriver",
      dispatchProtocol = Sporadic(min = 1),
      dispatchTriggers = None(),

      Status = Status,
      MissionWindow = MissionWindow
    )
  }
  val MissionComputer_Impl_Instance_SW_AttestationGate_CASE_AttestationGate : HAMR.SW.CASE_AttestationGate_Impl_SW_AttestationGate_CASE_AttestationGate_Bridge = {
    val MissionCommand_in = Port[SW.RF_Msg_Impl] (id = 7, name = "MissionComputer_Impl_Instance_SW_AttestationGate_CASE_AttestationGate_MissionCommand_in", mode = EventIn)
    val MissionCommand_out = Port[SW.RF_Msg_Impl] (id = 8, name = "MissionComputer_Impl_Instance_SW_AttestationGate_CASE_AttestationGate_MissionCommand_out", mode = EventOut)
    val TrustedIds = Port[SW.Address_Impl] (id = 9, name = "MissionComputer_Impl_Instance_SW_AttestationGate_CASE_AttestationGate_TrustedIds", mode = EventIn)

    HAMR.SW.CASE_AttestationGate_Impl_SW_AttestationGate_CASE_AttestationGate_Bridge(
      id = 3,
      name = "MissionComputer_Impl_Instance_SW_AttestationGate_CASE_AttestationGate",
      dispatchProtocol = Sporadic(min = 1),
      dispatchTriggers = None(),

      MissionCommand_in = MissionCommand_in,
      MissionCommand_out = MissionCommand_out,
      TrustedIds = TrustedIds
    )
  }
  val MissionComputer_Impl_Instance_SW_Filter_CASE_Filter : HAMR.SW.CASE_Filter_Impl_SW_Filter_CASE_Filter_Bridge = {
    val Input = Port[SW.RF_Msg_Impl] (id = 10, name = "MissionComputer_Impl_Instance_SW_Filter_CASE_Filter_Input", mode = EventIn)
    val Output = Port[SW.RF_Msg_Impl] (id = 11, name = "MissionComputer_Impl_Instance_SW_Filter_CASE_Filter_Output", mode = EventOut)

    HAMR.SW.CASE_Filter_Impl_SW_Filter_CASE_Filter_Bridge(
      id = 4,
      name = "MissionComputer_Impl_Instance_SW_Filter_CASE_Filter",
      dispatchProtocol = Sporadic(min = 1),
      dispatchTriggers = None(),

      Input = Input,
      Output = Output
    )
  }
  val MissionComputer_Impl_Instance_SW_WaypointManager_WaypointManager : HAMR.SW.WaypointManager_Impl_SW_WaypointManager_WaypointManager_Bridge = {
    val FlightPlan = Port[SW.Mission] (id = 12, name = "MissionComputer_Impl_Instance_SW_WaypointManager_WaypointManager_FlightPlan", mode = EventIn)
    val MissionWindow = Port[SW.MissionWindow] (id = 13, name = "MissionComputer_Impl_Instance_SW_WaypointManager_WaypointManager_MissionWindow", mode = EventOut)
    val Status = Port[SW.Coordinate_Impl] (id = 14, name = "MissionComputer_Impl_Instance_SW_WaypointManager_WaypointManager_Status", mode = EventIn)
    val ReturnHome = Port[art.Empty] (id = 15, name = "MissionComputer_Impl_Instance_SW_WaypointManager_WaypointManager_ReturnHome", mode = EventIn)

    HAMR.SW.WaypointManager_Impl_SW_WaypointManager_WaypointManager_Bridge(
      id = 5,
      name = "MissionComputer_Impl_Instance_SW_WaypointManager_WaypointManager",
      dispatchProtocol = Sporadic(min = 1),
      dispatchTriggers = None(),

      FlightPlan = FlightPlan,
      MissionWindow = MissionWindow,
      Status = Status,
      ReturnHome = ReturnHome
    )
  }
  val MissionComputer_Impl_Instance_SW_AttestationManager_CASE_AttestationManager : HAMR.SW.CASE_AttestationManager_Impl_SW_AttestationManager_CASE_AttestationManager_Bridge = {
    val AttestationRequest = Port[CASE_Model_Transformations.CASE_AttestationRequestMsg_Impl] (id = 16, name = "MissionComputer_Impl_Instance_SW_AttestationManager_CASE_AttestationManager_AttestationRequest", mode = EventOut)
    val AttestationResponse = Port[CASE_Model_Transformations.CASE_AttestationResponseMsg_Impl] (id = 17, name = "MissionComputer_Impl_Instance_SW_AttestationManager_CASE_AttestationManager_AttestationResponse", mode = EventIn)
    val TrustedIds = Port[SW.Address_Impl] (id = 18, name = "MissionComputer_Impl_Instance_SW_AttestationManager_CASE_AttestationManager_TrustedIds", mode = EventOut)

    HAMR.SW.CASE_AttestationManager_Impl_SW_AttestationManager_CASE_AttestationManager_Bridge(
      id = 6,
      name = "MissionComputer_Impl_Instance_SW_AttestationManager_CASE_AttestationManager",
      dispatchProtocol = Sporadic(min = 1),
      dispatchTriggers = None(),

      AttestationRequest = AttestationRequest,
      AttestationResponse = AttestationResponse,
      TrustedIds = TrustedIds
    )
  }
  val MissionComputer_Impl_Instance_SW_GeofenceMonitor_GeofenceMonitor : HAMR.SW.GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor_Bridge = {
    val FlyZones = Port[SW.MapArray] (id = 19, name = "MissionComputer_Impl_Instance_SW_GeofenceMonitor_GeofenceMonitor_FlyZones", mode = DataIn)
    val FlightPlan_In = Port[SW.Mission] (id = 20, name = "MissionComputer_Impl_Instance_SW_GeofenceMonitor_GeofenceMonitor_FlightPlan_In", mode = EventIn)
    val FlightPlan_Out = Port[SW.Mission] (id = 21, name = "MissionComputer_Impl_Instance_SW_GeofenceMonitor_GeofenceMonitor_FlightPlan_Out", mode = EventOut)
    val Alert = Port[art.Empty] (id = 22, name = "MissionComputer_Impl_Instance_SW_GeofenceMonitor_GeofenceMonitor_Alert", mode = EventOut)

    HAMR.SW.GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor_Bridge(
      id = 7,
      name = "MissionComputer_Impl_Instance_SW_GeofenceMonitor_GeofenceMonitor",
      dispatchProtocol = Sporadic(min = 1),
      dispatchTriggers = None(),

      FlyZones = FlyZones,
      FlightPlan_In = FlightPlan_In,
      FlightPlan_Out = FlightPlan_Out,
      Alert = Alert
    )
  }
  val MissionComputer_Impl_Instance_SW_ResponseMonitor_ResponseMonitor : HAMR.SW.ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor_Bridge = {
    val FlightPlan = Port[SW.Mission] (id = 23, name = "MissionComputer_Impl_Instance_SW_ResponseMonitor_ResponseMonitor_FlightPlan", mode = EventIn)
    val MissionCommand = Port[SW.RF_Msg_Impl] (id = 24, name = "MissionComputer_Impl_Instance_SW_ResponseMonitor_ResponseMonitor_MissionCommand", mode = EventIn)
    val Alert = Port[art.Empty] (id = 25, name = "MissionComputer_Impl_Instance_SW_ResponseMonitor_ResponseMonitor_Alert", mode = EventOut)

    HAMR.SW.ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor_Bridge(
      id = 8,
      name = "MissionComputer_Impl_Instance_SW_ResponseMonitor_ResponseMonitor",
      dispatchProtocol = Sporadic(min = 1),
      dispatchTriggers = None(),

      FlightPlan = FlightPlan,
      MissionCommand = MissionCommand,
      Alert = Alert
    )
  }
  val MissionComputer_Impl_Instance_SW_FlightPlanner_FlightPlanner : HAMR.SW.FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge = {
    val FlightPlan = Port[SW.Mission] (id = 26, name = "MissionComputer_Impl_Instance_SW_FlightPlanner_FlightPlanner_FlightPlan", mode = EventOut)
    val MissionCommand = Port[SW.RF_Msg_Impl] (id = 27, name = "MissionComputer_Impl_Instance_SW_FlightPlanner_FlightPlanner_MissionCommand", mode = EventIn)

    HAMR.SW.FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge(
      id = 9,
      name = "MissionComputer_Impl_Instance_SW_FlightPlanner_FlightPlanner",
      dispatchProtocol = Sporadic(min = 1),
      dispatchTriggers = None(),

      FlightPlan = FlightPlan,
      MissionCommand = MissionCommand
    )
  }

  val ad : ArchitectureDescription = {

    ArchitectureDescription(
      components = MSZ (MissionComputer_Impl_Instance_SW_FlyZones_FlyZoneDatabase, MissionComputer_Impl_Instance_SW_Radio_RadioDriver_Attestation, MissionComputer_Impl_Instance_SW_UART_UARTDriver, MissionComputer_Impl_Instance_SW_AttestationGate_CASE_AttestationGate, MissionComputer_Impl_Instance_SW_Filter_CASE_Filter, MissionComputer_Impl_Instance_SW_WaypointManager_WaypointManager, MissionComputer_Impl_Instance_SW_AttestationManager_CASE_AttestationManager, MissionComputer_Impl_Instance_SW_GeofenceMonitor_GeofenceMonitor, MissionComputer_Impl_Instance_SW_ResponseMonitor_ResponseMonitor, MissionComputer_Impl_Instance_SW_FlightPlanner_FlightPlanner),

      connections = ISZ (Connection(from = MissionComputer_Impl_Instance_SW_FlyZones_FlyZoneDatabase.FlyZones, to = MissionComputer_Impl_Instance_SW_GeofenceMonitor_GeofenceMonitor.FlyZones),
                         Connection(from = MissionComputer_Impl_Instance_SW_Radio_RadioDriver_Attestation.MissionCommand, to = MissionComputer_Impl_Instance_SW_AttestationGate_CASE_AttestationGate.MissionCommand_in),
                         Connection(from = MissionComputer_Impl_Instance_SW_Radio_RadioDriver_Attestation.AttestationResponse, to = MissionComputer_Impl_Instance_SW_AttestationManager_CASE_AttestationManager.AttestationResponse),
                         Connection(from = MissionComputer_Impl_Instance_SW_UART_UARTDriver.Status, to = MissionComputer_Impl_Instance_SW_WaypointManager_WaypointManager.Status),
                         Connection(from = MissionComputer_Impl_Instance_SW_AttestationGate_CASE_AttestationGate.MissionCommand_out, to = MissionComputer_Impl_Instance_SW_Filter_CASE_Filter.Input),
                         Connection(from = MissionComputer_Impl_Instance_SW_AttestationGate_CASE_AttestationGate.MissionCommand_out, to = MissionComputer_Impl_Instance_SW_ResponseMonitor_ResponseMonitor.MissionCommand),
                         Connection(from = MissionComputer_Impl_Instance_SW_Filter_CASE_Filter.Output, to = MissionComputer_Impl_Instance_SW_FlightPlanner_FlightPlanner.MissionCommand),
                         Connection(from = MissionComputer_Impl_Instance_SW_WaypointManager_WaypointManager.MissionWindow, to = MissionComputer_Impl_Instance_SW_UART_UARTDriver.MissionWindow),
                         Connection(from = MissionComputer_Impl_Instance_SW_AttestationManager_CASE_AttestationManager.AttestationRequest, to = MissionComputer_Impl_Instance_SW_Radio_RadioDriver_Attestation.AttestationRequest),
                         Connection(from = MissionComputer_Impl_Instance_SW_AttestationManager_CASE_AttestationManager.TrustedIds, to = MissionComputer_Impl_Instance_SW_AttestationGate_CASE_AttestationGate.TrustedIds),
                         Connection(from = MissionComputer_Impl_Instance_SW_GeofenceMonitor_GeofenceMonitor.FlightPlan_Out, to = MissionComputer_Impl_Instance_SW_WaypointManager_WaypointManager.FlightPlan),
                         Connection(from = MissionComputer_Impl_Instance_SW_GeofenceMonitor_GeofenceMonitor.Alert, to = MissionComputer_Impl_Instance_SW_WaypointManager_WaypointManager.ReturnHome),
                         Connection(from = MissionComputer_Impl_Instance_SW_ResponseMonitor_ResponseMonitor.Alert, to = MissionComputer_Impl_Instance_SW_Radio_RadioDriver_Attestation.Alert),
                         Connection(from = MissionComputer_Impl_Instance_SW_FlightPlanner_FlightPlanner.FlightPlan, to = MissionComputer_Impl_Instance_SW_ResponseMonitor_ResponseMonitor.FlightPlan),
                         Connection(from = MissionComputer_Impl_Instance_SW_FlightPlanner_FlightPlanner.FlightPlan, to = MissionComputer_Impl_Instance_SW_GeofenceMonitor_GeofenceMonitor.FlightPlan_In))
    )
  }
}