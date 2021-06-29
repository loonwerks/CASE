#include <types.h>

size_t sizeOf(Type t) {
  TYPE type = t->type;
  switch (type) {
    case TTuple2_EC3B57: return sizeof(struct Tuple2_EC3B57); // (Z, Z)
    case TIS_AA0F82: return sizeof(struct IS_AA0F82); // IS[Z, (Z, Z)]
    case TIS_C4F575: return sizeof(struct IS_C4F575); // IS[Z, B]
    case TIS_948B60: return sizeof(struct IS_948B60); // IS[Z, String]
    case TIS_82ABD8: return sizeof(struct IS_82ABD8); // IS[Z, Z]
    case TIS_7E8796: return sizeof(struct IS_7E8796); // IS[Z, art.Bridge]
    case TIS_08117A: return sizeof(struct IS_08117A); // IS[Z, art.UConnection]
    case TIS_820232: return sizeof(struct IS_820232); // IS[Z, art.UPort]
    case TMBox2_1029D1: return sizeof(struct MBox2_1029D1); // MBox2[Z, Option[art.DataContent]]
    case TMBox2_1CBFC4: return sizeof(struct MBox2_1CBFC4); // MBox2[Z, art.DataContent]
    case TMS_B5E3E6: return sizeof(struct MS_B5E3E6); // MS[Z, IS[Z, (Z, Z)]]
    case TMS_E444B2: return sizeof(struct MS_E444B2); // MS[Z, IS[Z, Z]]
    case TMS_83D5EB: return sizeof(struct MS_83D5EB); // MS[Z, Option[art.Bridge]]
    case TMS_2590FE: return sizeof(struct MS_2590FE); // MS[Z, Option[art.DataContent]]
    case TMS_F55A18: return sizeof(struct MS_F55A18); // MS[Z, Option[art.UPort]]
    case TNone_3026C5: return sizeof(struct None_3026C5); // None[IS[Z, B]]
    case TNone_5C1355: return sizeof(struct None_5C1355); // None[IS[Z, Z]]
    case TNone_76463B: return sizeof(struct None_76463B); // None[Z]
    case TNone_734370: return sizeof(struct None_734370); // None[art.Bridge]
    case TNone_964667: return sizeof(struct None_964667); // None[art.DataContent]
    case TNone_ED72E1: return sizeof(struct None_ED72E1); // None[art.Empty]
    case TNone_39BC5F: return sizeof(struct None_39BC5F); // None[art.UPort]
    case TNone_E7D454: return sizeof(struct None_E7D454); // None[hamr.Drivers.UARTDriver_Impl_Initialization_Api]
    case TNone_A929A3: return sizeof(struct None_A929A3); // None[hamr.Drivers.UARTDriver_Impl_Operational_Api]
    case TNone_78A1D4: return sizeof(struct None_78A1D4); // None[hamr.SW.CASE_AttestationGate_thr_Impl_Initialization_Api]
    case TNone_579C8E: return sizeof(struct None_579C8E); // None[hamr.SW.CASE_AttestationGate_thr_Impl_Operational_Api]
    case TNone_D64418: return sizeof(struct None_D64418); // None[hamr.SW.CASE_Filter_LST_thr_Impl_Initialization_Api]
    case TNone_392677: return sizeof(struct None_392677); // None[hamr.SW.CASE_Filter_LST_thr_Impl_Operational_Api]
    case TNone_4BF8A4: return sizeof(struct None_4BF8A4); // None[hamr.SW.CASE_Monitor_Geo_thr_Impl_Initialization_Api]
    case TNone_60EB73: return sizeof(struct None_60EB73); // None[hamr.SW.CASE_Monitor_Geo_thr_Impl_Operational_Api]
    case TNone_C554A3: return sizeof(struct None_C554A3); // None[hamr.SW.CASE_Monitor_Req_thr_Impl_Initialization_Api]
    case TNone_77A6BF: return sizeof(struct None_77A6BF); // None[hamr.SW.CASE_Monitor_Req_thr_Impl_Operational_Api]
    case TNone_7290DE: return sizeof(struct None_7290DE); // None[hamr.SW.FlyZonesDatabase_thr_Impl_Initialization_Api]
    case TNone_45110B: return sizeof(struct None_45110B); // None[hamr.SW.FlyZonesDatabase_thr_Impl_Operational_Api]
    case TNone_3A40F5: return sizeof(struct None_3A40F5); // None[hamr.SW.RadioDriver_Attestation_thr_Impl_Initialization_Api]
    case TNone_69DE14: return sizeof(struct None_69DE14); // None[hamr.SW.RadioDriver_Attestation_thr_Impl_Operational_Api]
    case TNone_306A73: return sizeof(struct None_306A73); // None[hamr.SW.UxAS_thr_Impl_Initialization_Api]
    case TNone_5189C1: return sizeof(struct None_5189C1); // None[hamr.SW.UxAS_thr_Impl_Operational_Api]
    case TNone_844F3C: return sizeof(struct None_844F3C); // None[hamr.SW.WaypointPlanManagerService_thr_Impl_Initialization_Api]
    case TNone_FE10D0: return sizeof(struct None_FE10D0); // None[hamr.SW.WaypointPlanManagerService_thr_Impl_Operational_Api]
    case TSome_8D03B1: return sizeof(struct Some_8D03B1); // Some[IS[Z, B]]
    case TSome_488F47: return sizeof(struct Some_488F47); // Some[Z]
    case TSome_482E57: return sizeof(struct Some_482E57); // Some[art.Bridge]
    case TSome_D29615: return sizeof(struct Some_D29615); // Some[art.DataContent]
    case TSome_4782C6: return sizeof(struct Some_4782C6); // Some[art.Empty]
    case TSome_3E197E: return sizeof(struct Some_3E197E); // Some[art.UPort]
    case TSome_BAA603: return sizeof(struct Some_BAA603); // Some[hamr.Drivers.UARTDriver_Impl_Initialization_Api]
    case TSome_74DA67: return sizeof(struct Some_74DA67); // Some[hamr.Drivers.UARTDriver_Impl_Operational_Api]
    case TSome_D48312: return sizeof(struct Some_D48312); // Some[hamr.SW.CASE_AttestationGate_thr_Impl_Initialization_Api]
    case TSome_F82A4D: return sizeof(struct Some_F82A4D); // Some[hamr.SW.CASE_AttestationGate_thr_Impl_Operational_Api]
    case TSome_CA0A4D: return sizeof(struct Some_CA0A4D); // Some[hamr.SW.CASE_Filter_LST_thr_Impl_Initialization_Api]
    case TSome_481DA5: return sizeof(struct Some_481DA5); // Some[hamr.SW.CASE_Filter_LST_thr_Impl_Operational_Api]
    case TSome_993707: return sizeof(struct Some_993707); // Some[hamr.SW.CASE_Monitor_Geo_thr_Impl_Initialization_Api]
    case TSome_08A5F4: return sizeof(struct Some_08A5F4); // Some[hamr.SW.CASE_Monitor_Geo_thr_Impl_Operational_Api]
    case TSome_967389: return sizeof(struct Some_967389); // Some[hamr.SW.CASE_Monitor_Req_thr_Impl_Initialization_Api]
    case TSome_6322F0: return sizeof(struct Some_6322F0); // Some[hamr.SW.CASE_Monitor_Req_thr_Impl_Operational_Api]
    case TSome_30503C: return sizeof(struct Some_30503C); // Some[hamr.SW.FlyZonesDatabase_thr_Impl_Initialization_Api]
    case TSome_018CE9: return sizeof(struct Some_018CE9); // Some[hamr.SW.FlyZonesDatabase_thr_Impl_Operational_Api]
    case TSome_FCAC0B: return sizeof(struct Some_FCAC0B); // Some[hamr.SW.RadioDriver_Attestation_thr_Impl_Initialization_Api]
    case TSome_181FDB: return sizeof(struct Some_181FDB); // Some[hamr.SW.RadioDriver_Attestation_thr_Impl_Operational_Api]
    case TSome_5BDE4D: return sizeof(struct Some_5BDE4D); // Some[hamr.SW.UxAS_thr_Impl_Initialization_Api]
    case TSome_7F8DC4: return sizeof(struct Some_7F8DC4); // Some[hamr.SW.UxAS_thr_Impl_Operational_Api]
    case TSome_65C258: return sizeof(struct Some_65C258); // Some[hamr.SW.WaypointPlanManagerService_thr_Impl_Initialization_Api]
    case TSome_003142: return sizeof(struct Some_003142); // Some[hamr.SW.WaypointPlanManagerService_thr_Impl_Operational_Api]
    case TString: return sizeof(struct String); // String
    case Tart_ArchitectureDescription: return sizeof(struct art_ArchitectureDescription); // art.ArchitectureDescription
    case Tart_Bridge_Ports: return sizeof(struct art_Bridge_Ports); // art.Bridge.Ports
    case Tart_Connection: return sizeof(struct art_Connection); // art.Connection
    case Tart_DispatchPropertyProtocol_Periodic: return sizeof(struct art_DispatchPropertyProtocol_Periodic); // art.DispatchPropertyProtocol.Periodic
    case Tart_DispatchPropertyProtocol_Sporadic: return sizeof(struct art_DispatchPropertyProtocol_Sporadic); // art.DispatchPropertyProtocol.Sporadic
    case Tart_Empty: return sizeof(struct art_Empty); // art.Empty
    case Tart_Port_45E54D: return sizeof(struct art_Port_45E54D); // art.Port[IS[Z, B]]
    case Tart_Port_9CBF18: return sizeof(struct art_Port_9CBF18); // art.Port[art.Empty]
    case Thamr_Base_Types_Bits_Payload: return sizeof(struct hamr_Base_Types_Bits_Payload); // hamr.Base_Types.Bits_Payload
    case Thamr_Drivers_UARTDriver_Impl_Initialization_Api: return sizeof(struct hamr_Drivers_UARTDriver_Impl_Initialization_Api); // hamr.Drivers.UARTDriver_Impl_Initialization_Api
    case Thamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge: return sizeof(struct hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge); // hamr.Drivers.UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge
    case Thamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_EntryPoints: return sizeof(struct hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_EntryPoints); // hamr.Drivers.UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge.EntryPoints
    case Thamr_Drivers_UARTDriver_Impl_Operational_Api: return sizeof(struct hamr_Drivers_UARTDriver_Impl_Operational_Api); // hamr.Drivers.UARTDriver_Impl_Operational_Api
    case Thamr_SW_CASE_AttestationGate_thr_Impl_Initialization_Api: return sizeof(struct hamr_SW_CASE_AttestationGate_thr_Impl_Initialization_Api); // hamr.SW.CASE_AttestationGate_thr_Impl_Initialization_Api
    case Thamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge: return sizeof(struct hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge); // hamr.SW.CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge
    case Thamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_EntryPoints: return sizeof(struct hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_EntryPoints); // hamr.SW.CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge.EntryPoints
    case Thamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api: return sizeof(struct hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api); // hamr.SW.CASE_AttestationGate_thr_Impl_Operational_Api
    case Thamr_SW_CASE_Filter_LST_thr_Impl_Initialization_Api: return sizeof(struct hamr_SW_CASE_Filter_LST_thr_Impl_Initialization_Api); // hamr.SW.CASE_Filter_LST_thr_Impl_Initialization_Api
    case Thamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge: return sizeof(struct hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge); // hamr.SW.CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge
    case Thamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge_EntryPoints: return sizeof(struct hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge_EntryPoints); // hamr.SW.CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge.EntryPoints
    case Thamr_SW_CASE_Filter_LST_thr_Impl_Operational_Api: return sizeof(struct hamr_SW_CASE_Filter_LST_thr_Impl_Operational_Api); // hamr.SW.CASE_Filter_LST_thr_Impl_Operational_Api
    case Thamr_SW_CASE_Monitor_Geo_thr_Impl_Initialization_Api: return sizeof(struct hamr_SW_CASE_Monitor_Geo_thr_Impl_Initialization_Api); // hamr.SW.CASE_Monitor_Geo_thr_Impl_Initialization_Api
    case Thamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge: return sizeof(struct hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge); // hamr.SW.CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge
    case Thamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge_EntryPoints: return sizeof(struct hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge_EntryPoints); // hamr.SW.CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge.EntryPoints
    case Thamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api: return sizeof(struct hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api); // hamr.SW.CASE_Monitor_Geo_thr_Impl_Operational_Api
    case Thamr_SW_CASE_Monitor_Req_thr_Impl_Initialization_Api: return sizeof(struct hamr_SW_CASE_Monitor_Req_thr_Impl_Initialization_Api); // hamr.SW.CASE_Monitor_Req_thr_Impl_Initialization_Api
    case Thamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge: return sizeof(struct hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge); // hamr.SW.CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge
    case Thamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge_EntryPoints: return sizeof(struct hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge_EntryPoints); // hamr.SW.CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge.EntryPoints
    case Thamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api: return sizeof(struct hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api); // hamr.SW.CASE_Monitor_Req_thr_Impl_Operational_Api
    case Thamr_SW_FlyZonesDatabase_thr_Impl_Initialization_Api: return sizeof(struct hamr_SW_FlyZonesDatabase_thr_Impl_Initialization_Api); // hamr.SW.FlyZonesDatabase_thr_Impl_Initialization_Api
    case Thamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_Bridge: return sizeof(struct hamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_Bridge); // hamr.SW.FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_Bridge
    case Thamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_Bridge_EntryPoints: return sizeof(struct hamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_Bridge_EntryPoints); // hamr.SW.FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_Bridge.EntryPoints
    case Thamr_SW_FlyZonesDatabase_thr_Impl_Operational_Api: return sizeof(struct hamr_SW_FlyZonesDatabase_thr_Impl_Operational_Api); // hamr.SW.FlyZonesDatabase_thr_Impl_Operational_Api
    case Thamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api: return sizeof(struct hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api); // hamr.SW.RadioDriver_Attestation_thr_Impl_Initialization_Api
    case Thamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge: return sizeof(struct hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge); // hamr.SW.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge
    case Thamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_EntryPoints: return sizeof(struct hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_EntryPoints); // hamr.SW.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge.EntryPoints
    case Thamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api: return sizeof(struct hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api); // hamr.SW.RadioDriver_Attestation_thr_Impl_Operational_Api
    case Thamr_SW_UxAS_thr_Impl_Initialization_Api: return sizeof(struct hamr_SW_UxAS_thr_Impl_Initialization_Api); // hamr.SW.UxAS_thr_Impl_Initialization_Api
    case Thamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge: return sizeof(struct hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge); // hamr.SW.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge
    case Thamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge_EntryPoints: return sizeof(struct hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge_EntryPoints); // hamr.SW.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge.EntryPoints
    case Thamr_SW_UxAS_thr_Impl_Operational_Api: return sizeof(struct hamr_SW_UxAS_thr_Impl_Operational_Api); // hamr.SW.UxAS_thr_Impl_Operational_Api
    case Thamr_SW_WaypointPlanManagerService_thr_Impl_Initialization_Api: return sizeof(struct hamr_SW_WaypointPlanManagerService_thr_Impl_Initialization_Api); // hamr.SW.WaypointPlanManagerService_thr_Impl_Initialization_Api
    case Thamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge: return sizeof(struct hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge); // hamr.SW.WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge
    case Thamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge_EntryPoints: return sizeof(struct hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge_EntryPoints); // hamr.SW.WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge.EntryPoints
    case Thamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api: return sizeof(struct hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api); // hamr.SW.WaypointPlanManagerService_thr_Impl_Operational_Api
    default: fprintf(stderr, "%s: %d\n", "Unexpected TYPE: ", type); exit(1);
  }
}

void Type_assign(void *dest, void *src, size_t destSize) {
  Type srcType = (Type) src;
  if (srcType->type == TString) {
    String_assign((String) dest, (String) src);
    return;
  }
  size_t srcSize = sizeOf(srcType);
  memcpy(dest, src, srcSize);
  memset(((char *) dest) + srcSize, 0, destSize - srcSize);
}

char *TYPE_string_(void *type) {
  static char *strings[] = {
    "(Z, Z)",
    "IS[Z, (Z, Z)]",
    "IS[Z, B]",
    "IS[Z, String]",
    "IS[Z, Z]",
    "IS[Z, art.Bridge]",
    "IS[Z, art.UConnection]",
    "IS[Z, art.UPort]",
    "MBox2[Z, Option[art.DataContent]]",
    "MBox2[Z, art.DataContent]",
    "MS[Z, IS[Z, (Z, Z)]]",
    "MS[Z, IS[Z, Z]]",
    "MS[Z, Option[art.Bridge]]",
    "MS[Z, Option[art.DataContent]]",
    "MS[Z, Option[art.UPort]]",
    "None[IS[Z, B]]",
    "None[IS[Z, Z]]",
    "None[Z]",
    "None[art.Bridge]",
    "None[art.DataContent]",
    "None[art.Empty]",
    "None[art.UPort]",
    "None[hamr.Drivers.UARTDriver_Impl_Initialization_Api]",
    "None[hamr.Drivers.UARTDriver_Impl_Operational_Api]",
    "None[hamr.SW.CASE_AttestationGate_thr_Impl_Initialization_Api]",
    "None[hamr.SW.CASE_AttestationGate_thr_Impl_Operational_Api]",
    "None[hamr.SW.CASE_Filter_LST_thr_Impl_Initialization_Api]",
    "None[hamr.SW.CASE_Filter_LST_thr_Impl_Operational_Api]",
    "None[hamr.SW.CASE_Monitor_Geo_thr_Impl_Initialization_Api]",
    "None[hamr.SW.CASE_Monitor_Geo_thr_Impl_Operational_Api]",
    "None[hamr.SW.CASE_Monitor_Req_thr_Impl_Initialization_Api]",
    "None[hamr.SW.CASE_Monitor_Req_thr_Impl_Operational_Api]",
    "None[hamr.SW.FlyZonesDatabase_thr_Impl_Initialization_Api]",
    "None[hamr.SW.FlyZonesDatabase_thr_Impl_Operational_Api]",
    "None[hamr.SW.RadioDriver_Attestation_thr_Impl_Initialization_Api]",
    "None[hamr.SW.RadioDriver_Attestation_thr_Impl_Operational_Api]",
    "None[hamr.SW.UxAS_thr_Impl_Initialization_Api]",
    "None[hamr.SW.UxAS_thr_Impl_Operational_Api]",
    "None[hamr.SW.WaypointPlanManagerService_thr_Impl_Initialization_Api]",
    "None[hamr.SW.WaypointPlanManagerService_thr_Impl_Operational_Api]",
    "Some[IS[Z, B]]",
    "Some[Z]",
    "Some[art.Bridge]",
    "Some[art.DataContent]",
    "Some[art.Empty]",
    "Some[art.UPort]",
    "Some[hamr.Drivers.UARTDriver_Impl_Initialization_Api]",
    "Some[hamr.Drivers.UARTDriver_Impl_Operational_Api]",
    "Some[hamr.SW.CASE_AttestationGate_thr_Impl_Initialization_Api]",
    "Some[hamr.SW.CASE_AttestationGate_thr_Impl_Operational_Api]",
    "Some[hamr.SW.CASE_Filter_LST_thr_Impl_Initialization_Api]",
    "Some[hamr.SW.CASE_Filter_LST_thr_Impl_Operational_Api]",
    "Some[hamr.SW.CASE_Monitor_Geo_thr_Impl_Initialization_Api]",
    "Some[hamr.SW.CASE_Monitor_Geo_thr_Impl_Operational_Api]",
    "Some[hamr.SW.CASE_Monitor_Req_thr_Impl_Initialization_Api]",
    "Some[hamr.SW.CASE_Monitor_Req_thr_Impl_Operational_Api]",
    "Some[hamr.SW.FlyZonesDatabase_thr_Impl_Initialization_Api]",
    "Some[hamr.SW.FlyZonesDatabase_thr_Impl_Operational_Api]",
    "Some[hamr.SW.RadioDriver_Attestation_thr_Impl_Initialization_Api]",
    "Some[hamr.SW.RadioDriver_Attestation_thr_Impl_Operational_Api]",
    "Some[hamr.SW.UxAS_thr_Impl_Initialization_Api]",
    "Some[hamr.SW.UxAS_thr_Impl_Operational_Api]",
    "Some[hamr.SW.WaypointPlanManagerService_thr_Impl_Initialization_Api]",
    "Some[hamr.SW.WaypointPlanManagerService_thr_Impl_Operational_Api]",
    "String",
    "art.ArchitectureDescription",
    "art.Bridge.Ports",
    "art.Connection",
    "art.DispatchPropertyProtocol.Periodic",
    "art.DispatchPropertyProtocol.Sporadic",
    "art.Empty",
    "art.Port[IS[Z, B]]",
    "art.Port[art.Empty]",
    "hamr.Base_Types.Bits_Payload",
    "hamr.Drivers.UARTDriver_Impl_Initialization_Api",
    "hamr.Drivers.UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge",
    "hamr.Drivers.UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge.EntryPoints",
    "hamr.Drivers.UARTDriver_Impl_Operational_Api",
    "hamr.SW.CASE_AttestationGate_thr_Impl_Initialization_Api",
    "hamr.SW.CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge",
    "hamr.SW.CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge.EntryPoints",
    "hamr.SW.CASE_AttestationGate_thr_Impl_Operational_Api",
    "hamr.SW.CASE_Filter_LST_thr_Impl_Initialization_Api",
    "hamr.SW.CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge",
    "hamr.SW.CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge.EntryPoints",
    "hamr.SW.CASE_Filter_LST_thr_Impl_Operational_Api",
    "hamr.SW.CASE_Monitor_Geo_thr_Impl_Initialization_Api",
    "hamr.SW.CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge",
    "hamr.SW.CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge.EntryPoints",
    "hamr.SW.CASE_Monitor_Geo_thr_Impl_Operational_Api",
    "hamr.SW.CASE_Monitor_Req_thr_Impl_Initialization_Api",
    "hamr.SW.CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge",
    "hamr.SW.CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge.EntryPoints",
    "hamr.SW.CASE_Monitor_Req_thr_Impl_Operational_Api",
    "hamr.SW.FlyZonesDatabase_thr_Impl_Initialization_Api",
    "hamr.SW.FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_Bridge",
    "hamr.SW.FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_Bridge.EntryPoints",
    "hamr.SW.FlyZonesDatabase_thr_Impl_Operational_Api",
    "hamr.SW.RadioDriver_Attestation_thr_Impl_Initialization_Api",
    "hamr.SW.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge",
    "hamr.SW.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge.EntryPoints",
    "hamr.SW.RadioDriver_Attestation_thr_Impl_Operational_Api",
    "hamr.SW.UxAS_thr_Impl_Initialization_Api",
    "hamr.SW.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge",
    "hamr.SW.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge.EntryPoints",
    "hamr.SW.UxAS_thr_Impl_Operational_Api",
    "hamr.SW.WaypointPlanManagerService_thr_Impl_Initialization_Api",
    "hamr.SW.WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge",
    "hamr.SW.WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge.EntryPoints",
    "hamr.SW.WaypointPlanManagerService_thr_Impl_Operational_Api"
  };
  return strings[((Type) type)->type];
}