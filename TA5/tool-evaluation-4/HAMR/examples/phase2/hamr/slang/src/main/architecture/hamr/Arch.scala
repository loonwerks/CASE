// #Sireum

package hamr

import org.sireum._
import art._
import art.PortMode._
import art.DispatchPropertyProtocol._

// This file was auto-generated.  Do not edit

object Arch {
  val UAV_Impl_Instance_MCMP_PROC_SW_FC_UART_UARTDriver : hamr.Drivers.UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge = {
    val recv_data = Port[Base_Types.Bits] (id = 0, name = "UAV_Impl_Instance_MCMP_PROC_SW_FC_UART_UARTDriver_recv_data", mode = EventIn)
    val MissionCommand = Port[Base_Types.Bits] (id = 1, name = "UAV_Impl_Instance_MCMP_PROC_SW_FC_UART_UARTDriver_MissionCommand", mode = EventIn)
    val send_data = Port[Base_Types.Bits] (id = 2, name = "UAV_Impl_Instance_MCMP_PROC_SW_FC_UART_UARTDriver_send_data", mode = EventOut)
    val AirVehicleState_WPM = Port[Base_Types.Bits] (id = 3, name = "UAV_Impl_Instance_MCMP_PROC_SW_FC_UART_UARTDriver_AirVehicleState_WPM", mode = EventOut)
    val AirVehicleState_UXAS = Port[Base_Types.Bits] (id = 4, name = "UAV_Impl_Instance_MCMP_PROC_SW_FC_UART_UARTDriver_AirVehicleState_UXAS", mode = EventOut)

    hamr.Drivers.UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge(
      id = 0,
      name = "UAV_Impl_Instance_MCMP_PROC_SW_FC_UART_UARTDriver",
      dispatchProtocol = Periodic(period = 500),
      dispatchTriggers = None(),

      recv_data = recv_data,
      MissionCommand = MissionCommand,
      send_data = send_data,
      AirVehicleState_WPM = AirVehicleState_WPM,
      AirVehicleState_UXAS = AirVehicleState_UXAS
    )
  }
  val UAV_Impl_Instance_MCMP_PROC_SW_RADIO_RadioDriver_Attestation : hamr.SW.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge = {
    val recv_data = Port[Base_Types.Bits] (id = 5, name = "UAV_Impl_Instance_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_recv_data", mode = EventIn)
    val send_data = Port[Base_Types.Bits] (id = 6, name = "UAV_Impl_Instance_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_send_data", mode = EventOut)
    val trusted_ids = Port[Base_Types.Bits] (id = 7, name = "UAV_Impl_Instance_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_trusted_ids", mode = EventOut)
    val AutomationRequest = Port[Base_Types.Bits] (id = 8, name = "UAV_Impl_Instance_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_AutomationRequest", mode = EventOut)
    val OperatingRegion = Port[Base_Types.Bits] (id = 9, name = "UAV_Impl_Instance_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_OperatingRegion", mode = EventOut)
    val LineSearchTask = Port[Base_Types.Bits] (id = 10, name = "UAV_Impl_Instance_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_LineSearchTask", mode = EventOut)

    hamr.SW.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge(
      id = 1,
      name = "UAV_Impl_Instance_MCMP_PROC_SW_RADIO_RadioDriver_Attestation",
      dispatchProtocol = Periodic(period = 500),
      dispatchTriggers = None(),

      recv_data = recv_data,
      send_data = send_data,
      trusted_ids = trusted_ids,
      AutomationRequest = AutomationRequest,
      OperatingRegion = OperatingRegion,
      LineSearchTask = LineSearchTask
    )
  }
  val UAV_Impl_Instance_MCMP_PROC_SW_FlyZones_FlyZonesDatabase : hamr.SW.FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_Bridge = {
    val keep_in_zones = Port[Base_Types.Bits] (id = 11, name = "UAV_Impl_Instance_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_keep_in_zones", mode = DataOut)
    val keep_out_zones = Port[Base_Types.Bits] (id = 12, name = "UAV_Impl_Instance_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_keep_out_zones", mode = DataOut)

    hamr.SW.FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_Bridge(
      id = 2,
      name = "UAV_Impl_Instance_MCMP_PROC_SW_FlyZones_FlyZonesDatabase",
      dispatchProtocol = Periodic(period = 500),
      dispatchTriggers = None(),

      keep_in_zones = keep_in_zones,
      keep_out_zones = keep_out_zones
    )
  }
  val UAV_Impl_Instance_MCMP_PROC_SW_UXAS_UxAS : hamr.SW.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge = {
    val AutomationRequest = Port[Base_Types.Bits] (id = 13, name = "UAV_Impl_Instance_MCMP_PROC_SW_UXAS_UxAS_AutomationRequest", mode = EventIn)
    val AirVehicleState = Port[Base_Types.Bits] (id = 14, name = "UAV_Impl_Instance_MCMP_PROC_SW_UXAS_UxAS_AirVehicleState", mode = EventIn)
    val OperatingRegion = Port[Base_Types.Bits] (id = 15, name = "UAV_Impl_Instance_MCMP_PROC_SW_UXAS_UxAS_OperatingRegion", mode = EventIn)
    val LineSearchTask = Port[Base_Types.Bits] (id = 16, name = "UAV_Impl_Instance_MCMP_PROC_SW_UXAS_UxAS_LineSearchTask", mode = EventIn)
    val AutomationResponse_MON_GEO = Port[Base_Types.Bits] (id = 17, name = "UAV_Impl_Instance_MCMP_PROC_SW_UXAS_UxAS_AutomationResponse_MON_GEO", mode = EventOut)
    val AutomationResponse_MON_REQ = Port[Base_Types.Bits] (id = 18, name = "UAV_Impl_Instance_MCMP_PROC_SW_UXAS_UxAS_AutomationResponse_MON_REQ", mode = EventOut)

    hamr.SW.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge(
      id = 3,
      name = "UAV_Impl_Instance_MCMP_PROC_SW_UXAS_UxAS",
      dispatchProtocol = Periodic(period = 500),
      dispatchTriggers = None(),

      AutomationRequest = AutomationRequest,
      AirVehicleState = AirVehicleState,
      OperatingRegion = OperatingRegion,
      LineSearchTask = LineSearchTask,
      AutomationResponse_MON_GEO = AutomationResponse_MON_GEO,
      AutomationResponse_MON_REQ = AutomationResponse_MON_REQ
    )
  }
  val UAV_Impl_Instance_MCMP_PROC_SW_WPM_WaypointPlanManagerService : hamr.SW.WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge = {
    val AutomationResponse = Port[Base_Types.Bits] (id = 19, name = "UAV_Impl_Instance_MCMP_PROC_SW_WPM_WaypointPlanManagerService_AutomationResponse", mode = EventIn)
    val AirVehicleState = Port[Base_Types.Bits] (id = 20, name = "UAV_Impl_Instance_MCMP_PROC_SW_WPM_WaypointPlanManagerService_AirVehicleState", mode = EventIn)
    val MissionCommand = Port[Base_Types.Bits] (id = 21, name = "UAV_Impl_Instance_MCMP_PROC_SW_WPM_WaypointPlanManagerService_MissionCommand", mode = EventOut)
    val ReturnHome = Port[art.Empty] (id = 22, name = "UAV_Impl_Instance_MCMP_PROC_SW_WPM_WaypointPlanManagerService_ReturnHome", mode = EventIn)

    hamr.SW.WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge(
      id = 4,
      name = "UAV_Impl_Instance_MCMP_PROC_SW_WPM_WaypointPlanManagerService",
      dispatchProtocol = Periodic(period = 500),
      dispatchTriggers = None(),

      AutomationResponse = AutomationResponse,
      AirVehicleState = AirVehicleState,
      MissionCommand = MissionCommand,
      ReturnHome = ReturnHome
    )
  }
  val UAV_Impl_Instance_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate : hamr.SW.CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge = {
    val trusted_ids = Port[Base_Types.Bits] (id = 23, name = "UAV_Impl_Instance_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_trusted_ids", mode = EventIn)
    val AutomationRequest_in = Port[Base_Types.Bits] (id = 24, name = "UAV_Impl_Instance_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_AutomationRequest_in", mode = EventIn)
    val AutomationRequest_out_UXAS = Port[Base_Types.Bits] (id = 25, name = "UAV_Impl_Instance_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_AutomationRequest_out_UXAS", mode = EventOut)
    val AutomationRequest_out_MON_REQ = Port[Base_Types.Bits] (id = 26, name = "UAV_Impl_Instance_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_AutomationRequest_out_MON_REQ", mode = EventOut)
    val OperatingRegion_in = Port[Base_Types.Bits] (id = 27, name = "UAV_Impl_Instance_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_OperatingRegion_in", mode = EventIn)
    val OperatingRegion_out = Port[Base_Types.Bits] (id = 28, name = "UAV_Impl_Instance_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_OperatingRegion_out", mode = EventOut)
    val LineSearchTask_in = Port[Base_Types.Bits] (id = 29, name = "UAV_Impl_Instance_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_LineSearchTask_in", mode = EventIn)
    val LineSearchTask_out = Port[Base_Types.Bits] (id = 30, name = "UAV_Impl_Instance_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_LineSearchTask_out", mode = EventOut)

    hamr.SW.CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge(
      id = 5,
      name = "UAV_Impl_Instance_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate",
      dispatchProtocol = Periodic(period = 500),
      dispatchTriggers = None(),

      trusted_ids = trusted_ids,
      AutomationRequest_in = AutomationRequest_in,
      AutomationRequest_out_UXAS = AutomationRequest_out_UXAS,
      AutomationRequest_out_MON_REQ = AutomationRequest_out_MON_REQ,
      OperatingRegion_in = OperatingRegion_in,
      OperatingRegion_out = OperatingRegion_out,
      LineSearchTask_in = LineSearchTask_in,
      LineSearchTask_out = LineSearchTask_out
    )
  }
  val UAV_Impl_Instance_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST : hamr.SW.CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge = {
    val filter_in = Port[Base_Types.Bits] (id = 31, name = "UAV_Impl_Instance_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_filter_in", mode = EventIn)
    val filter_out = Port[Base_Types.Bits] (id = 32, name = "UAV_Impl_Instance_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_filter_out", mode = EventOut)

    hamr.SW.CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge(
      id = 6,
      name = "UAV_Impl_Instance_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST",
      dispatchProtocol = Periodic(period = 500),
      dispatchTriggers = None(),

      filter_in = filter_in,
      filter_out = filter_out
    )
  }
  val UAV_Impl_Instance_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req : hamr.SW.CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge = {
    val observed = Port[Base_Types.Bits] (id = 33, name = "UAV_Impl_Instance_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_observed", mode = EventIn)
    val reference_1 = Port[Base_Types.Bits] (id = 34, name = "UAV_Impl_Instance_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_reference_1", mode = EventIn)

    hamr.SW.CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge(
      id = 7,
      name = "UAV_Impl_Instance_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req",
      dispatchProtocol = Periodic(period = 500),
      dispatchTriggers = None(),

      observed = observed,
      reference_1 = reference_1
    )
  }
  val UAV_Impl_Instance_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo : hamr.SW.CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge = {
    val keep_in_zones = Port[Base_Types.Bits] (id = 35, name = "UAV_Impl_Instance_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_keep_in_zones", mode = DataIn)
    val keep_out_zones = Port[Base_Types.Bits] (id = 36, name = "UAV_Impl_Instance_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_keep_out_zones", mode = DataIn)
    val observed = Port[Base_Types.Bits] (id = 37, name = "UAV_Impl_Instance_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_observed", mode = EventIn)
    val output = Port[Base_Types.Bits] (id = 38, name = "UAV_Impl_Instance_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_output", mode = EventOut)
    val alert = Port[art.Empty] (id = 39, name = "UAV_Impl_Instance_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_alert", mode = EventOut)

    hamr.SW.CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge(
      id = 8,
      name = "UAV_Impl_Instance_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo",
      dispatchProtocol = Periodic(period = 500),
      dispatchTriggers = None(),

      keep_in_zones = keep_in_zones,
      keep_out_zones = keep_out_zones,
      observed = observed,
      output = output,
      alert = alert
    )
  }

  val ad : ArchitectureDescription = {
    TranspilerUtil.touch()

    ArchitectureDescription(
      components = ISZ (UAV_Impl_Instance_MCMP_PROC_SW_FC_UART_UARTDriver, UAV_Impl_Instance_MCMP_PROC_SW_RADIO_RadioDriver_Attestation, UAV_Impl_Instance_MCMP_PROC_SW_FlyZones_FlyZonesDatabase, UAV_Impl_Instance_MCMP_PROC_SW_UXAS_UxAS, UAV_Impl_Instance_MCMP_PROC_SW_WPM_WaypointPlanManagerService, UAV_Impl_Instance_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate, UAV_Impl_Instance_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST, UAV_Impl_Instance_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req, UAV_Impl_Instance_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo),

      connections = ISZ (Connection(from = UAV_Impl_Instance_MCMP_PROC_SW_FC_UART_UARTDriver.AirVehicleState_WPM, to = UAV_Impl_Instance_MCMP_PROC_SW_WPM_WaypointPlanManagerService.AirVehicleState),
                         Connection(from = UAV_Impl_Instance_MCMP_PROC_SW_FC_UART_UARTDriver.AirVehicleState_UXAS, to = UAV_Impl_Instance_MCMP_PROC_SW_UXAS_UxAS.AirVehicleState),
                         Connection(from = UAV_Impl_Instance_MCMP_PROC_SW_RADIO_RadioDriver_Attestation.trusted_ids, to = UAV_Impl_Instance_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate.trusted_ids),
                         Connection(from = UAV_Impl_Instance_MCMP_PROC_SW_RADIO_RadioDriver_Attestation.AutomationRequest, to = UAV_Impl_Instance_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate.AutomationRequest_in),
                         Connection(from = UAV_Impl_Instance_MCMP_PROC_SW_RADIO_RadioDriver_Attestation.OperatingRegion, to = UAV_Impl_Instance_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate.OperatingRegion_in),
                         Connection(from = UAV_Impl_Instance_MCMP_PROC_SW_RADIO_RadioDriver_Attestation.LineSearchTask, to = UAV_Impl_Instance_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate.LineSearchTask_in),
                         Connection(from = UAV_Impl_Instance_MCMP_PROC_SW_FlyZones_FlyZonesDatabase.keep_in_zones, to = UAV_Impl_Instance_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo.keep_in_zones),
                         Connection(from = UAV_Impl_Instance_MCMP_PROC_SW_FlyZones_FlyZonesDatabase.keep_out_zones, to = UAV_Impl_Instance_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo.keep_out_zones),
                         Connection(from = UAV_Impl_Instance_MCMP_PROC_SW_UXAS_UxAS.AutomationResponse_MON_GEO, to = UAV_Impl_Instance_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo.observed),
                         Connection(from = UAV_Impl_Instance_MCMP_PROC_SW_UXAS_UxAS.AutomationResponse_MON_REQ, to = UAV_Impl_Instance_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req.observed),
                         Connection(from = UAV_Impl_Instance_MCMP_PROC_SW_WPM_WaypointPlanManagerService.MissionCommand, to = UAV_Impl_Instance_MCMP_PROC_SW_FC_UART_UARTDriver.MissionCommand),
                         Connection(from = UAV_Impl_Instance_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate.AutomationRequest_out_UXAS, to = UAV_Impl_Instance_MCMP_PROC_SW_UXAS_UxAS.AutomationRequest),
                         Connection(from = UAV_Impl_Instance_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate.AutomationRequest_out_MON_REQ, to = UAV_Impl_Instance_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req.reference_1),
                         Connection(from = UAV_Impl_Instance_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate.OperatingRegion_out, to = UAV_Impl_Instance_MCMP_PROC_SW_UXAS_UxAS.OperatingRegion),
                         Connection(from = UAV_Impl_Instance_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate.LineSearchTask_out, to = UAV_Impl_Instance_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST.filter_in),
                         Connection(from = UAV_Impl_Instance_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST.filter_out, to = UAV_Impl_Instance_MCMP_PROC_SW_UXAS_UxAS.LineSearchTask),
                         Connection(from = UAV_Impl_Instance_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo.output, to = UAV_Impl_Instance_MCMP_PROC_SW_WPM_WaypointPlanManagerService.AutomationResponse),
                         Connection(from = UAV_Impl_Instance_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo.alert, to = UAV_Impl_Instance_MCMP_PROC_SW_WPM_WaypointPlanManagerService.ReturnHome))
    )
  }
}

object TranspilerUtil {
  def touch(): Unit = {
    if(F) {
      TranspilerToucher.touch()

      // add types used in Platform.receive and Platform.receiveAsync
      val mbox2Boolean_Payload: MBox2[Art.PortId, DataContent] = MBox2(0, Base_Types.Boolean_Payload(T))
      val mbox2OptionDataContent: MBox2[Art.PortId, Option[DataContent]] = MBox2(0, None())

      // touch process/thread timing properties
      println(Schedulers.UAV_Impl_Instance_MCMP_PROC_HW_timingProperties)
      println(Schedulers.UAV_Impl_Instance_MCMP_PROC_SW_FC_UART_UARTDriver_timingProperties)
      println(Schedulers.UAV_Impl_Instance_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_timingProperties)
      println(Schedulers.UAV_Impl_Instance_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_timingProperties)
      println(Schedulers.UAV_Impl_Instance_MCMP_PROC_SW_UXAS_UxAS_timingProperties)
      println(Schedulers.UAV_Impl_Instance_MCMP_PROC_SW_WPM_WaypointPlanManagerService_timingProperties)
      println(Schedulers.UAV_Impl_Instance_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_timingProperties)
      println(Schedulers.UAV_Impl_Instance_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_timingProperties)
      println(Schedulers.UAV_Impl_Instance_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_timingProperties)
      println(Schedulers.UAV_Impl_Instance_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_timingProperties)

      // touch each payload/type in case some are only used as a field in a record
      def printDataContent(a: art.DataContent): Unit = { println(s"${a}") }

      printDataContent(Base_Types.Bits_Payload(Base_Types.Bits_example()))
      printDataContent(art.Empty())

      {
        hamr.Drivers.UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge.c_initialization_api.get.logInfo("")
        hamr.Drivers.UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge.c_initialization_api.get.logDebug("")
        hamr.Drivers.UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge.c_initialization_api.get.logError("")
        hamr.Drivers.UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge.c_operational_api.get.logInfo("")
        hamr.Drivers.UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge.c_operational_api.get.logDebug("")
        hamr.Drivers.UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge.c_operational_api.get.logError("")
        val apiUsage_recv_data: Option[Base_Types.Bits] = hamr.Drivers.UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge.c_operational_api.get.get_recv_data()
        val apiUsage_MissionCommand: Option[Base_Types.Bits] = hamr.Drivers.UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge.c_operational_api.get.get_MissionCommand()
        hamr.Drivers.UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge.c_initialization_api.get.put_send_data(Base_Types.Bits_example())
        hamr.Drivers.UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge.c_operational_api.get.put_send_data(Base_Types.Bits_example())
        hamr.Drivers.UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge.c_initialization_api.get.put_AirVehicleState_WPM(Base_Types.Bits_example())
        hamr.Drivers.UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge.c_operational_api.get.put_AirVehicleState_WPM(Base_Types.Bits_example())
        hamr.Drivers.UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge.c_initialization_api.get.put_AirVehicleState_UXAS(Base_Types.Bits_example())
        hamr.Drivers.UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge.c_operational_api.get.put_AirVehicleState_UXAS(Base_Types.Bits_example())
      }
      {
        hamr.SW.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge.c_initialization_api.get.logInfo("")
        hamr.SW.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge.c_initialization_api.get.logDebug("")
        hamr.SW.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge.c_initialization_api.get.logError("")
        hamr.SW.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge.c_operational_api.get.logInfo("")
        hamr.SW.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge.c_operational_api.get.logDebug("")
        hamr.SW.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge.c_operational_api.get.logError("")
        val apiUsage_recv_data: Option[Base_Types.Bits] = hamr.SW.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge.c_operational_api.get.get_recv_data()
        hamr.SW.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge.c_initialization_api.get.put_send_data(Base_Types.Bits_example())
        hamr.SW.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge.c_operational_api.get.put_send_data(Base_Types.Bits_example())
        hamr.SW.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge.c_initialization_api.get.put_trusted_ids(Base_Types.Bits_example())
        hamr.SW.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge.c_operational_api.get.put_trusted_ids(Base_Types.Bits_example())
        hamr.SW.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge.c_initialization_api.get.put_AutomationRequest(Base_Types.Bits_example())
        hamr.SW.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge.c_operational_api.get.put_AutomationRequest(Base_Types.Bits_example())
        hamr.SW.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge.c_initialization_api.get.put_OperatingRegion(Base_Types.Bits_example())
        hamr.SW.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge.c_operational_api.get.put_OperatingRegion(Base_Types.Bits_example())
        hamr.SW.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge.c_initialization_api.get.put_LineSearchTask(Base_Types.Bits_example())
        hamr.SW.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge.c_operational_api.get.put_LineSearchTask(Base_Types.Bits_example())
      }
      {
        hamr.SW.FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_Bridge.c_initialization_api.get.logInfo("")
        hamr.SW.FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_Bridge.c_initialization_api.get.logDebug("")
        hamr.SW.FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_Bridge.c_initialization_api.get.logError("")
        hamr.SW.FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_Bridge.c_operational_api.get.logInfo("")
        hamr.SW.FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_Bridge.c_operational_api.get.logDebug("")
        hamr.SW.FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_Bridge.c_operational_api.get.logError("")
        hamr.SW.FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_Bridge.c_initialization_api.get.put_keep_in_zones(Base_Types.Bits_example())
        hamr.SW.FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_Bridge.c_operational_api.get.put_keep_in_zones(Base_Types.Bits_example())
        hamr.SW.FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_Bridge.c_initialization_api.get.put_keep_out_zones(Base_Types.Bits_example())
        hamr.SW.FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_Bridge.c_operational_api.get.put_keep_out_zones(Base_Types.Bits_example())
      }
      {
        hamr.SW.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge.c_initialization_api.get.logInfo("")
        hamr.SW.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge.c_initialization_api.get.logDebug("")
        hamr.SW.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge.c_initialization_api.get.logError("")
        hamr.SW.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge.c_operational_api.get.logInfo("")
        hamr.SW.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge.c_operational_api.get.logDebug("")
        hamr.SW.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge.c_operational_api.get.logError("")
        val apiUsage_AutomationRequest: Option[Base_Types.Bits] = hamr.SW.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge.c_operational_api.get.get_AutomationRequest()
        val apiUsage_AirVehicleState: Option[Base_Types.Bits] = hamr.SW.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge.c_operational_api.get.get_AirVehicleState()
        val apiUsage_OperatingRegion: Option[Base_Types.Bits] = hamr.SW.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge.c_operational_api.get.get_OperatingRegion()
        val apiUsage_LineSearchTask: Option[Base_Types.Bits] = hamr.SW.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge.c_operational_api.get.get_LineSearchTask()
        hamr.SW.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge.c_initialization_api.get.put_AutomationResponse_MON_GEO(Base_Types.Bits_example())
        hamr.SW.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge.c_operational_api.get.put_AutomationResponse_MON_GEO(Base_Types.Bits_example())
        hamr.SW.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge.c_initialization_api.get.put_AutomationResponse_MON_REQ(Base_Types.Bits_example())
        hamr.SW.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge.c_operational_api.get.put_AutomationResponse_MON_REQ(Base_Types.Bits_example())
      }
      {
        hamr.SW.WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge.c_initialization_api.get.logInfo("")
        hamr.SW.WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge.c_initialization_api.get.logDebug("")
        hamr.SW.WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge.c_initialization_api.get.logError("")
        hamr.SW.WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge.c_operational_api.get.logInfo("")
        hamr.SW.WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge.c_operational_api.get.logDebug("")
        hamr.SW.WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge.c_operational_api.get.logError("")
        val apiUsage_AutomationResponse: Option[Base_Types.Bits] = hamr.SW.WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge.c_operational_api.get.get_AutomationResponse()
        val apiUsage_AirVehicleState: Option[Base_Types.Bits] = hamr.SW.WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge.c_operational_api.get.get_AirVehicleState()
        hamr.SW.WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge.c_initialization_api.get.put_MissionCommand(Base_Types.Bits_example())
        hamr.SW.WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge.c_operational_api.get.put_MissionCommand(Base_Types.Bits_example())
        val apiUsage_ReturnHome: Option[art.Empty] = hamr.SW.WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge.c_operational_api.get.get_ReturnHome()
      }
      {
        hamr.SW.CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge.c_initialization_api.get.logInfo("")
        hamr.SW.CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge.c_initialization_api.get.logDebug("")
        hamr.SW.CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge.c_initialization_api.get.logError("")
        hamr.SW.CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge.c_operational_api.get.logInfo("")
        hamr.SW.CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge.c_operational_api.get.logDebug("")
        hamr.SW.CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge.c_operational_api.get.logError("")
        val apiUsage_trusted_ids: Option[Base_Types.Bits] = hamr.SW.CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge.c_operational_api.get.get_trusted_ids()
        val apiUsage_AutomationRequest_in: Option[Base_Types.Bits] = hamr.SW.CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge.c_operational_api.get.get_AutomationRequest_in()
        hamr.SW.CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge.c_initialization_api.get.put_AutomationRequest_out_UXAS(Base_Types.Bits_example())
        hamr.SW.CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge.c_operational_api.get.put_AutomationRequest_out_UXAS(Base_Types.Bits_example())
        hamr.SW.CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge.c_initialization_api.get.put_AutomationRequest_out_MON_REQ(Base_Types.Bits_example())
        hamr.SW.CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge.c_operational_api.get.put_AutomationRequest_out_MON_REQ(Base_Types.Bits_example())
        val apiUsage_OperatingRegion_in: Option[Base_Types.Bits] = hamr.SW.CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge.c_operational_api.get.get_OperatingRegion_in()
        hamr.SW.CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge.c_initialization_api.get.put_OperatingRegion_out(Base_Types.Bits_example())
        hamr.SW.CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge.c_operational_api.get.put_OperatingRegion_out(Base_Types.Bits_example())
        val apiUsage_LineSearchTask_in: Option[Base_Types.Bits] = hamr.SW.CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge.c_operational_api.get.get_LineSearchTask_in()
        hamr.SW.CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge.c_initialization_api.get.put_LineSearchTask_out(Base_Types.Bits_example())
        hamr.SW.CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge.c_operational_api.get.put_LineSearchTask_out(Base_Types.Bits_example())
      }
      {
        hamr.SW.CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge.c_initialization_api.get.logInfo("")
        hamr.SW.CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge.c_initialization_api.get.logDebug("")
        hamr.SW.CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge.c_initialization_api.get.logError("")
        hamr.SW.CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge.c_operational_api.get.logInfo("")
        hamr.SW.CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge.c_operational_api.get.logDebug("")
        hamr.SW.CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge.c_operational_api.get.logError("")
        val apiUsage_filter_in: Option[Base_Types.Bits] = hamr.SW.CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge.c_operational_api.get.get_filter_in()
        hamr.SW.CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge.c_initialization_api.get.put_filter_out(Base_Types.Bits_example())
        hamr.SW.CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge.c_operational_api.get.put_filter_out(Base_Types.Bits_example())
      }
      {
        hamr.SW.CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge.c_initialization_api.get.logInfo("")
        hamr.SW.CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge.c_initialization_api.get.logDebug("")
        hamr.SW.CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge.c_initialization_api.get.logError("")
        hamr.SW.CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge.c_operational_api.get.logInfo("")
        hamr.SW.CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge.c_operational_api.get.logDebug("")
        hamr.SW.CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge.c_operational_api.get.logError("")
        val apiUsage_observed: Option[Base_Types.Bits] = hamr.SW.CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge.c_operational_api.get.get_observed()
        val apiUsage_reference_1: Option[Base_Types.Bits] = hamr.SW.CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge.c_operational_api.get.get_reference_1()
      }
      {
        hamr.SW.CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge.c_initialization_api.get.logInfo("")
        hamr.SW.CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge.c_initialization_api.get.logDebug("")
        hamr.SW.CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge.c_initialization_api.get.logError("")
        hamr.SW.CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge.c_operational_api.get.logInfo("")
        hamr.SW.CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge.c_operational_api.get.logDebug("")
        hamr.SW.CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge.c_operational_api.get.logError("")
        val apiUsage_keep_in_zones: Option[Base_Types.Bits] = hamr.SW.CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge.c_operational_api.get.get_keep_in_zones()
        val apiUsage_keep_out_zones: Option[Base_Types.Bits] = hamr.SW.CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge.c_operational_api.get.get_keep_out_zones()
        val apiUsage_observed: Option[Base_Types.Bits] = hamr.SW.CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge.c_operational_api.get.get_observed()
        hamr.SW.CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge.c_initialization_api.get.put_output(Base_Types.Bits_example())
        hamr.SW.CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge.c_operational_api.get.put_output(Base_Types.Bits_example())
        hamr.SW.CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge.c_initialization_api.get.put_alert()
        hamr.SW.CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge.c_operational_api.get.put_alert()
      }
    }
  }
}

