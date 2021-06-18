#ifndef SIREUM_GEN_TYPE_H
#define SIREUM_GEN_TYPE_H

#ifdef __cplusplus
extern "C" {
#endif
#include <stackframe.h>

typedef enum {
  TTuple2_EC3B57 = (int) 0xEC3B577E, // (Z, Z)
  TIS_AA0F82 = (int) 0xAA0F8237, // IS[Z, (Z, Z)]
  TIS_C4F575 = (int) 0xC4F575CD, // IS[Z, B]
  TIS_948B60 = (int) 0x948B6070, // IS[Z, String]
  TIS_82ABD8 = (int) 0x82ABD805, // IS[Z, Z]
  TIS_7E8796 = (int) 0x7E87969E, // IS[Z, art.Bridge]
  TIS_08117A = (int) 0x08117AAE, // IS[Z, art.UConnection]
  TIS_820232 = (int) 0x82023297, // IS[Z, art.UPort]
  TMBox2_1029D1 = (int) 0x1029D116, // MBox2[Z, Option[art.DataContent]]
  TMBox2_1CBFC4 = (int) 0x1CBFC457, // MBox2[Z, art.DataContent]
  TMS_B5E3E6 = (int) 0xB5E3E695, // MS[Z, IS[Z, (Z, Z)]]
  TMS_E444B2 = (int) 0xE444B286, // MS[Z, IS[Z, Z]]
  TMS_83D5EB = (int) 0x83D5EBFF, // MS[Z, Option[art.Bridge]]
  TMS_2590FE = (int) 0x2590FEE8, // MS[Z, Option[art.DataContent]]
  TMS_F55A18 = (int) 0xF55A1861, // MS[Z, Option[art.UPort]]
  TNone_3026C5 = (int) 0x3026C5D4, // None[IS[Z, B]]
  TNone_5C1355 = (int) 0x5C135592, // None[IS[Z, Z]]
  TNone_76463B = (int) 0x76463B20, // None[Z]
  TNone_734370 = (int) 0x73437068, // None[art.Bridge]
  TNone_964667 = (int) 0x9646678F, // None[art.DataContent]
  TNone_ED72E1 = (int) 0xED72E191, // None[art.Empty]
  TNone_39BC5F = (int) 0x39BC5F5F, // None[art.UPort]
  TNone_E7D454 = (int) 0xE7D45460, // None[hamr.Drivers.UARTDriver_Impl_Initialization_Api]
  TNone_A929A3 = (int) 0xA929A3AF, // None[hamr.Drivers.UARTDriver_Impl_Operational_Api]
  TNone_78A1D4 = (int) 0x78A1D477, // None[hamr.SW.CASE_AttestationGate_thr_Impl_Initialization_Api]
  TNone_579C8E = (int) 0x579C8E1A, // None[hamr.SW.CASE_AttestationGate_thr_Impl_Operational_Api]
  TNone_D64418 = (int) 0xD644188E, // None[hamr.SW.CASE_Filter_LST_thr_Impl_Initialization_Api]
  TNone_392677 = (int) 0x39267787, // None[hamr.SW.CASE_Filter_LST_thr_Impl_Operational_Api]
  TNone_4BF8A4 = (int) 0x4BF8A4A0, // None[hamr.SW.CASE_Monitor_Geo_thr_Impl_Initialization_Api]
  TNone_60EB73 = (int) 0x60EB73F0, // None[hamr.SW.CASE_Monitor_Geo_thr_Impl_Operational_Api]
  TNone_C554A3 = (int) 0xC554A330, // None[hamr.SW.CASE_Monitor_Req_thr_Impl_Initialization_Api]
  TNone_77A6BF = (int) 0x77A6BF2E, // None[hamr.SW.CASE_Monitor_Req_thr_Impl_Operational_Api]
  TNone_7290DE = (int) 0x7290DE82, // None[hamr.SW.FlyZonesDatabase_thr_Impl_Initialization_Api]
  TNone_45110B = (int) 0x45110BDE, // None[hamr.SW.FlyZonesDatabase_thr_Impl_Operational_Api]
  TNone_3A40F5 = (int) 0x3A40F5D9, // None[hamr.SW.RadioDriver_Attestation_thr_Impl_Initialization_Api]
  TNone_69DE14 = (int) 0x69DE1420, // None[hamr.SW.RadioDriver_Attestation_thr_Impl_Operational_Api]
  TNone_306A73 = (int) 0x306A7368, // None[hamr.SW.UxAS_thr_Impl_Initialization_Api]
  TNone_5189C1 = (int) 0x5189C190, // None[hamr.SW.UxAS_thr_Impl_Operational_Api]
  TNone_844F3C = (int) 0x844F3C45, // None[hamr.SW.WaypointPlanManagerService_thr_Impl_Initialization_Api]
  TNone_FE10D0 = (int) 0xFE10D070, // None[hamr.SW.WaypointPlanManagerService_thr_Impl_Operational_Api]
  TSome_8D03B1 = (int) 0x8D03B113, // Some[IS[Z, B]]
  TSome_488F47 = (int) 0x488F47F1, // Some[Z]
  TSome_482E57 = (int) 0x482E572F, // Some[art.Bridge]
  TSome_D29615 = (int) 0xD29615C0, // Some[art.DataContent]
  TSome_4782C6 = (int) 0x4782C6E2, // Some[art.Empty]
  TSome_3E197E = (int) 0x3E197EB8, // Some[art.UPort]
  TSome_BAA603 = (int) 0xBAA6032B, // Some[hamr.Drivers.UARTDriver_Impl_Initialization_Api]
  TSome_74DA67 = (int) 0x74DA6744, // Some[hamr.Drivers.UARTDriver_Impl_Operational_Api]
  TSome_D48312 = (int) 0xD4831289, // Some[hamr.SW.CASE_AttestationGate_thr_Impl_Initialization_Api]
  TSome_F82A4D = (int) 0xF82A4D83, // Some[hamr.SW.CASE_AttestationGate_thr_Impl_Operational_Api]
  TSome_CA0A4D = (int) 0xCA0A4D7C, // Some[hamr.SW.CASE_Filter_LST_thr_Impl_Initialization_Api]
  TSome_481DA5 = (int) 0x481DA53B, // Some[hamr.SW.CASE_Filter_LST_thr_Impl_Operational_Api]
  TSome_993707 = (int) 0x993707A0, // Some[hamr.SW.CASE_Monitor_Geo_thr_Impl_Initialization_Api]
  TSome_08A5F4 = (int) 0x08A5F4CC, // Some[hamr.SW.CASE_Monitor_Geo_thr_Impl_Operational_Api]
  TSome_967389 = (int) 0x96738954, // Some[hamr.SW.CASE_Monitor_Req_thr_Impl_Initialization_Api]
  TSome_6322F0 = (int) 0x6322F03A, // Some[hamr.SW.CASE_Monitor_Req_thr_Impl_Operational_Api]
  TSome_30503C = (int) 0x30503CB7, // Some[hamr.SW.FlyZonesDatabase_thr_Impl_Initialization_Api]
  TSome_018CE9 = (int) 0x018CE90E, // Some[hamr.SW.FlyZonesDatabase_thr_Impl_Operational_Api]
  TSome_FCAC0B = (int) 0xFCAC0B49, // Some[hamr.SW.RadioDriver_Attestation_thr_Impl_Initialization_Api]
  TSome_181FDB = (int) 0x181FDBA0, // Some[hamr.SW.RadioDriver_Attestation_thr_Impl_Operational_Api]
  TSome_5BDE4D = (int) 0x5BDE4D1A, // Some[hamr.SW.UxAS_thr_Impl_Initialization_Api]
  TSome_7F8DC4 = (int) 0x7F8DC44D, // Some[hamr.SW.UxAS_thr_Impl_Operational_Api]
  TSome_65C258 = (int) 0x65C25825, // Some[hamr.SW.WaypointPlanManagerService_thr_Impl_Initialization_Api]
  TSome_003142 = (int) 0x00314258, // Some[hamr.SW.WaypointPlanManagerService_thr_Impl_Operational_Api]
  TString = (int) 0xB6F8E8F6, // String
  Tart_ArchitectureDescription = (int) 0xAD6322F1, // art.ArchitectureDescription
  Tart_Bridge_Ports = (int) 0x14139493, // art.Bridge.Ports
  Tart_Connection = (int) 0x17385940, // art.Connection
  Tart_DispatchPropertyProtocol_Periodic = (int) 0x4C652984, // art.DispatchPropertyProtocol.Periodic
  Tart_DispatchPropertyProtocol_Sporadic = (int) 0x48F30CFF, // art.DispatchPropertyProtocol.Sporadic
  Tart_Empty = (int) 0x49C5E24D, // art.Empty
  Tart_Port_45E54D = (int) 0x45E54D5D, // art.Port[IS[Z, B]]
  Tart_Port_9CBF18 = (int) 0x9CBF18B7, // art.Port[art.Empty]
  Thamr_Base_Types_Bits_Payload = (int) 0x80921565, // hamr.Base_Types.Bits_Payload
  Thamr_Drivers_UARTDriver_Impl_Initialization_Api = (int) 0xE849C5E8, // hamr.Drivers.UARTDriver_Impl_Initialization_Api
  Thamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge = (int) 0x02AD8FCB, // hamr.Drivers.UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge
  Thamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_EntryPoints = (int) 0x11D1B2C4, // hamr.Drivers.UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge.EntryPoints
  Thamr_Drivers_UARTDriver_Impl_Operational_Api = (int) 0x26D1B08E, // hamr.Drivers.UARTDriver_Impl_Operational_Api
  Thamr_SW_CASE_AttestationGate_thr_Impl_Initialization_Api = (int) 0xAAA784A4, // hamr.SW.CASE_AttestationGate_thr_Impl_Initialization_Api
  Thamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge = (int) 0x08A944EE, // hamr.SW.CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge
  Thamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_EntryPoints = (int) 0xF7791FC2, // hamr.SW.CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge.EntryPoints
  Thamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api = (int) 0x3D5A20D8, // hamr.SW.CASE_AttestationGate_thr_Impl_Operational_Api
  Thamr_SW_CASE_Filter_LST_thr_Impl_Initialization_Api = (int) 0x59AF9A6D, // hamr.SW.CASE_Filter_LST_thr_Impl_Initialization_Api
  Thamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge = (int) 0x801E53C6, // hamr.SW.CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge
  Thamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge_EntryPoints = (int) 0xA5E06DD5, // hamr.SW.CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge.EntryPoints
  Thamr_SW_CASE_Filter_LST_thr_Impl_Operational_Api = (int) 0xE5E75D02, // hamr.SW.CASE_Filter_LST_thr_Impl_Operational_Api
  Thamr_SW_CASE_Monitor_Geo_thr_Impl_Initialization_Api = (int) 0x57E45373, // hamr.SW.CASE_Monitor_Geo_thr_Impl_Initialization_Api
  Thamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge = (int) 0x54643802, // hamr.SW.CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge
  Thamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge_EntryPoints = (int) 0x1BB0A288, // hamr.SW.CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge.EntryPoints
  Thamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api = (int) 0xD92EE2D9, // hamr.SW.CASE_Monitor_Geo_thr_Impl_Operational_Api
  Thamr_SW_CASE_Monitor_Req_thr_Impl_Initialization_Api = (int) 0x3B41F450, // hamr.SW.CASE_Monitor_Req_thr_Impl_Initialization_Api
  Thamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge = (int) 0x17A1B884, // hamr.SW.CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge
  Thamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge_EntryPoints = (int) 0xA6210C0E, // hamr.SW.CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge.EntryPoints
  Thamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api = (int) 0x3B9EB523, // hamr.SW.CASE_Monitor_Req_thr_Impl_Operational_Api
  Thamr_SW_FlyZonesDatabase_thr_Impl_Initialization_Api = (int) 0xF4256C17, // hamr.SW.FlyZonesDatabase_thr_Impl_Initialization_Api
  Thamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_Bridge = (int) 0x106B80E9, // hamr.SW.FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_Bridge
  Thamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_Bridge_EntryPoints = (int) 0x15C754D0, // hamr.SW.FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_Bridge.EntryPoints
  Thamr_SW_FlyZonesDatabase_thr_Impl_Operational_Api = (int) 0x75AE0605, // hamr.SW.FlyZonesDatabase_thr_Impl_Operational_Api
  Thamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api = (int) 0xB264F706, // hamr.SW.RadioDriver_Attestation_thr_Impl_Initialization_Api
  Thamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge = (int) 0x6AED66AD, // hamr.SW.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge
  Thamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_EntryPoints = (int) 0x590450F0, // hamr.SW.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge.EntryPoints
  Thamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api = (int) 0xA2E323BF, // hamr.SW.RadioDriver_Attestation_thr_Impl_Operational_Api
  Thamr_SW_UxAS_thr_Impl_Initialization_Api = (int) 0xD693175F, // hamr.SW.UxAS_thr_Impl_Initialization_Api
  Thamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge = (int) 0xA4D1FB89, // hamr.SW.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge
  Thamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge_EntryPoints = (int) 0x99F20897, // hamr.SW.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge.EntryPoints
  Thamr_SW_UxAS_thr_Impl_Operational_Api = (int) 0xD1817E4F, // hamr.SW.UxAS_thr_Impl_Operational_Api
  Thamr_SW_WaypointPlanManagerService_thr_Impl_Initialization_Api = (int) 0x533A6D57, // hamr.SW.WaypointPlanManagerService_thr_Impl_Initialization_Api
  Thamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge = (int) 0x36514FAE, // hamr.SW.WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge
  Thamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge_EntryPoints = (int) 0xC7072281, // hamr.SW.WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge.EntryPoints
  Thamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api = (int) 0xBF53AA57, // hamr.SW.WaypointPlanManagerService_thr_Impl_Operational_Api
} TYPE;

char *TYPE_string_(void *type);

typedef struct Type *Type;
struct Type {
  TYPE type;
};

#define MaxString 256

typedef struct String *String;
struct String {
  TYPE type;
  Z size;
  C value[];
};

struct StaticString {
  TYPE type;
  Z size;
  C value[MaxString + 1];
};

#define string(v) ((String) &((struct { TYPE type; Z size; C value[sizeof(v)]; }) { TString, Z_C(sizeof (v) - 1), v }))
#define DeclNewString(x) struct StaticString x = { .type = TString }

#ifdef __cplusplus
}
#endif

#endif