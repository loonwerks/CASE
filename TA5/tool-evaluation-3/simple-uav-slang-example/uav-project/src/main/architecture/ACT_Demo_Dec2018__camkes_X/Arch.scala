// #Sireum

package ACT_Demo_Dec2018__camkes_X

import org.sireum._
import art._
import art.PortMode._
import art.DispatchPropertyProtocol._

// This file was auto-generated.  Do not edit

object Arch {
  val UAV_Impl_Instance_MCMP_RADIO_HW : ACT_Demo_Dec2018__camkes_X.MC.Radio_Impl_Bridge = ACT_Demo_Dec2018__camkes_X.MC.Radio_Impl_Bridge(
    id = 0,
    name = "UAV_Impl_Instance_MCMP_RADIO_HW",
    dispatchProtocol = Periodic(period = 1),

    recv_map_inn = Port[MC.MISSING_TYPE_Impl] (id = 0, name = "UAV_Impl_Instance_MCMP_RADIO_HW_recv_map_inn", mode = EventIn),
    recv_map_out = Port[SW.Command_Impl] (id = 1, name = "UAV_Impl_Instance_MCMP_RADIO_HW_recv_map_out", mode = EventOut),
    send_status_inn = Port[SW.Coordinate_Impl] (id = 2, name = "UAV_Impl_Instance_MCMP_RADIO_HW_send_status_inn", mode = EventIn),
    send_status_out = Port[MC.MISSING_TYPE_Impl] (id = 3, name = "UAV_Impl_Instance_MCMP_RADIO_HW_send_status_out", mode = EventOut)
  )
  val UAV_Impl_Instance_MCMP_UART_HW : ACT_Demo_Dec2018__camkes_X.MC.UART_Impl_Bridge = ACT_Demo_Dec2018__camkes_X.MC.UART_Impl_Bridge(
    id = 1,
    name = "UAV_Impl_Instance_MCMP_UART_HW",
    dispatchProtocol = Periodic(period = 1),

    waypoint_out = Port[MC.MISSING_TYPE_Impl] (id = 4, name = "UAV_Impl_Instance_MCMP_UART_HW_waypoint_out", mode = EventOut),
    position_status_inn = Port[MC.MISSING_TYPE_Impl] (id = 5, name = "UAV_Impl_Instance_MCMP_UART_HW_position_status_inn", mode = EventIn),
    position_status_out = Port[SW.Coordinate_Impl] (id = 6, name = "UAV_Impl_Instance_MCMP_UART_HW_position_status_out", mode = EventOut)
  )
  val UAV_Impl_Instance_MCMP_PROC_SW_RADIO : ACT_Demo_Dec2018__camkes_X.SW.RadioDriver_Impl_Bridge = ACT_Demo_Dec2018__camkes_X.SW.RadioDriver_Impl_Bridge(
    id = 2,
    name = "UAV_Impl_Instance_MCMP_PROC_SW_RADIO",
    dispatchProtocol = Sporadic(min = 1),

    recv_map_out = Port[SW.Command_Impl] (id = 7, name = "UAV_Impl_Instance_MCMP_PROC_SW_RADIO_recv_map_out", mode = EventOut)
  )
  val UAV_Impl_Instance_MCMP_PROC_SW_FPLN : ACT_Demo_Dec2018__camkes_X.SW.FlightPlanner_Impl_Bridge = ACT_Demo_Dec2018__camkes_X.SW.FlightPlanner_Impl_Bridge(
    id = 3,
    name = "UAV_Impl_Instance_MCMP_PROC_SW_FPLN",
    dispatchProtocol = Sporadic(min = 1),

    flight_plan = Port[SW.Mission] (id = 8, name = "UAV_Impl_Instance_MCMP_PROC_SW_FPLN_flight_plan", mode = EventOut),
    mission_rcv = Port[Base_Types.Boolean] (id = 9, name = "UAV_Impl_Instance_MCMP_PROC_SW_FPLN_mission_rcv", mode = EventIn),
    recv_map = Port[SW.Command_Impl] (id = 10, name = "UAV_Impl_Instance_MCMP_PROC_SW_FPLN_recv_map", mode = EventIn)
  )
  val UAV_Impl_Instance_MCMP_PROC_SW_WPM : ACT_Demo_Dec2018__camkes_X.SW.WaypointManager_Impl_Bridge = ACT_Demo_Dec2018__camkes_X.SW.WaypointManager_Impl_Bridge(
    id = 4,
    name = "UAV_Impl_Instance_MCMP_PROC_SW_WPM",
    dispatchProtocol = Sporadic(min = 1),

    flight_plan = Port[SW.Mission] (id = 11, name = "UAV_Impl_Instance_MCMP_PROC_SW_WPM_flight_plan", mode = EventIn),
    mission_rcv = Port[Base_Types.Boolean] (id = 12, name = "UAV_Impl_Instance_MCMP_PROC_SW_WPM_mission_rcv", mode = EventOut),
    mission_window = Port[SW.MissionWindow] (id = 13, name = "UAV_Impl_Instance_MCMP_PROC_SW_WPM_mission_window", mode = EventOut),
    tracking_id = Port[Base_Types.Integer_64] (id = 14, name = "UAV_Impl_Instance_MCMP_PROC_SW_WPM_tracking_id", mode = EventIn)
  )
  val UAV_Impl_Instance_MCMP_PROC_SW_UART : ACT_Demo_Dec2018__camkes_X.SW.UARTDriver_Impl_Bridge = ACT_Demo_Dec2018__camkes_X.SW.UARTDriver_Impl_Bridge(
    id = 5,
    name = "UAV_Impl_Instance_MCMP_PROC_SW_UART",
    dispatchProtocol = Sporadic(min = 1),

    mission_window = Port[SW.MissionWindow] (id = 15, name = "UAV_Impl_Instance_MCMP_PROC_SW_UART_mission_window", mode = EventIn),
    tracking_id = Port[Base_Types.Integer_64] (id = 16, name = "UAV_Impl_Instance_MCMP_PROC_SW_UART_tracking_id", mode = EventOut)
  )

  val ad : ArchitectureDescription = {

    ArchitectureDescription(
      components = MSZ (UAV_Impl_Instance_MCMP_RADIO_HW, UAV_Impl_Instance_MCMP_UART_HW, UAV_Impl_Instance_MCMP_PROC_SW_RADIO, UAV_Impl_Instance_MCMP_PROC_SW_FPLN, UAV_Impl_Instance_MCMP_PROC_SW_WPM, UAV_Impl_Instance_MCMP_PROC_SW_UART),

      connections = ISZ (Connection(from = UAV_Impl_Instance_MCMP_PROC_SW_RADIO.recv_map_out, to = UAV_Impl_Instance_MCMP_PROC_SW_FPLN.recv_map),
                         Connection(from = UAV_Impl_Instance_MCMP_PROC_SW_FPLN.flight_plan, to = UAV_Impl_Instance_MCMP_PROC_SW_WPM.flight_plan),
                         Connection(from = UAV_Impl_Instance_MCMP_PROC_SW_WPM.mission_rcv, to = UAV_Impl_Instance_MCMP_PROC_SW_FPLN.mission_rcv),
                         Connection(from = UAV_Impl_Instance_MCMP_PROC_SW_WPM.mission_window, to = UAV_Impl_Instance_MCMP_PROC_SW_UART.mission_window),
                         Connection(from = UAV_Impl_Instance_MCMP_PROC_SW_UART.tracking_id, to = UAV_Impl_Instance_MCMP_PROC_SW_WPM.tracking_id))
    )
  }
}