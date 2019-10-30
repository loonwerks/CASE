// #Sireum

package uav_project_extern

import org.sireum._
import art._
import art.PortMode._
import art.DispatchPropertyProtocol._

// This file was auto-generated.  Do not edit

object Arch {
  val UAV_Impl_Instance_MCMP_PROC_SW_RADIO : uav_project_extern.SW.RadioDriver_Impl_Bridge = uav_project_extern.SW.RadioDriver_Impl_Bridge(
    id = 0,
    name = "UAV_Impl_Instance_MCMP_PROC_SW_RADIO",
    dispatchProtocol = Sporadic(min = 1),

    recv_map_out = Port[SW.Command_Impl] (id = 0, name = "UAV_Impl_Instance_MCMP_PROC_SW_RADIO_recv_map_out", mode = EventOut)
  )
  val UAV_Impl_Instance_MCMP_PROC_SW_FPLN : uav_project_extern.SW.FlightPlanner_Impl_Bridge = uav_project_extern.SW.FlightPlanner_Impl_Bridge(
    id = 1,
    name = "UAV_Impl_Instance_MCMP_PROC_SW_FPLN",
    dispatchProtocol = Sporadic(min = 1),

    mission_rcv = Port[Base_Types.Boolean] (id = 1, name = "UAV_Impl_Instance_MCMP_PROC_SW_FPLN_mission_rcv", mode = EventIn),
    recv_map = Port[SW.Command_Impl] (id = 2, name = "UAV_Impl_Instance_MCMP_PROC_SW_FPLN_recv_map", mode = EventIn),
    flight_plan = Port[SW.Mission] (id = 3, name = "UAV_Impl_Instance_MCMP_PROC_SW_FPLN_flight_plan", mode = EventOut)
  )
  val UAV_Impl_Instance_MCMP_PROC_SW_WPM : uav_project_extern.SW.WaypointManager_Impl_Bridge = uav_project_extern.SW.WaypointManager_Impl_Bridge(
    id = 2,
    name = "UAV_Impl_Instance_MCMP_PROC_SW_WPM",
    dispatchProtocol = Sporadic(min = 1),

    flight_plan = Port[SW.Mission] (id = 4, name = "UAV_Impl_Instance_MCMP_PROC_SW_WPM_flight_plan", mode = EventIn),
    tracking_id = Port[Base_Types.Integer_64] (id = 5, name = "UAV_Impl_Instance_MCMP_PROC_SW_WPM_tracking_id", mode = EventIn),
    mission_rcv = Port[Base_Types.Boolean] (id = 6, name = "UAV_Impl_Instance_MCMP_PROC_SW_WPM_mission_rcv", mode = EventOut),
    mission_window = Port[SW.MissionWindow] (id = 7, name = "UAV_Impl_Instance_MCMP_PROC_SW_WPM_mission_window", mode = EventOut)
  )
  val UAV_Impl_Instance_MCMP_PROC_SW_UART : uav_project_extern.SW.UARTDriver_Impl_Bridge = uav_project_extern.SW.UARTDriver_Impl_Bridge(
    id = 3,
    name = "UAV_Impl_Instance_MCMP_PROC_SW_UART",
    dispatchProtocol = Sporadic(min = 1),

    mission_window = Port[SW.MissionWindow] (id = 8, name = "UAV_Impl_Instance_MCMP_PROC_SW_UART_mission_window", mode = EventIn),
    tracking_id = Port[Base_Types.Integer_64] (id = 9, name = "UAV_Impl_Instance_MCMP_PROC_SW_UART_tracking_id", mode = EventOut)
  )

  val ad : ArchitectureDescription = {

    ArchitectureDescription(
      components = MSZ (UAV_Impl_Instance_MCMP_PROC_SW_RADIO, UAV_Impl_Instance_MCMP_PROC_SW_FPLN, UAV_Impl_Instance_MCMP_PROC_SW_WPM, UAV_Impl_Instance_MCMP_PROC_SW_UART),

      connections = ISZ (Connection(from = UAV_Impl_Instance_MCMP_PROC_SW_RADIO.recv_map_out, to = UAV_Impl_Instance_MCMP_PROC_SW_FPLN.recv_map),
                         Connection(from = UAV_Impl_Instance_MCMP_PROC_SW_FPLN.flight_plan, to = UAV_Impl_Instance_MCMP_PROC_SW_WPM.flight_plan),
                         Connection(from = UAV_Impl_Instance_MCMP_PROC_SW_WPM.mission_rcv, to = UAV_Impl_Instance_MCMP_PROC_SW_FPLN.mission_rcv),
                         Connection(from = UAV_Impl_Instance_MCMP_PROC_SW_WPM.mission_window, to = UAV_Impl_Instance_MCMP_PROC_SW_UART.mission_window),
                         Connection(from = UAV_Impl_Instance_MCMP_PROC_SW_UART.tracking_id, to = UAV_Impl_Instance_MCMP_PROC_SW_WPM.tracking_id))
    )
  }
}