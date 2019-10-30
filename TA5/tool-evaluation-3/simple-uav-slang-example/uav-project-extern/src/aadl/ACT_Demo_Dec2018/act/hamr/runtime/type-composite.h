#ifndef SIREUM_GEN_TYPE_H
#define SIREUM_GEN_TYPE_H

#include <memory.h>
#include <stackframe.h>

typedef enum {
  TTuple2_EC3B57 = 0xEC3B577E, // (Z, Z)
  TTuple2_D0E3BB = 0xD0E3BBDB, // (Z, art.DataContent)
  TIS_AA0F82 = 0xAA0F8237, // IS[Z, (Z, Z)]
  TIS_948B60 = 0x948B6070, // IS[Z, String]
  TIS_82ABD8 = 0x82ABD805, // IS[Z, Z]
  TIS_08117A = 0x08117AAE, // IS[Z, art.UConnection]
  TIS_820232 = 0x82023297, // IS[Z, art.UPort]
  TIS_83A978 = 0x83A9787C, // IS[Z, uav_project_extern.SW.Coordinate_Impl]
  TMNone_2A2E1D = 0x2A2E1D40, // MNone[art.Bridge]
  TMS_B5E3E6 = 0xB5E3E695, // MS[Z, IS[Z, (Z, Z)]]
  TMS_E444B2 = 0xE444B286, // MS[Z, IS[Z, Z]]
  TMS_94FFA9 = 0x94FFA926, // MS[Z, MOption[art.Bridge]]
  TMS_2590FE = 0x2590FEE8, // MS[Z, Option[art.DataContent]]
  TMS_F55A18 = 0xF55A1861, // MS[Z, Option[art.UPort]]
  TMS_30A5B4 = 0x30A5B454, // MS[Z, Z]
  TMS_852149 = 0x85214977, // MS[Z, art.Bridge]
  TMSome_D3D128 = 0xD3D1282F, // MSome[art.Bridge]
  TNone_93AA2B = 0x93AA2B92, // None[(Z, art.DataContent)]
  TNone_76463B = 0x76463B20, // None[Z]
  TNone_964667 = 0x9646678F, // None[art.DataContent]
  TNone_39BC5F = 0x39BC5F5F, // None[art.UPort]
  TNone_AABCDB = 0xAABCDBE9, // None[uav_project_extern.SW.Mission]
  TSome_E9D1E5 = 0xE9D1E505, // Some[(Z, art.DataContent)]
  TSome_488F47 = 0x488F47F1, // Some[Z]
  TSome_D29615 = 0xD29615C0, // Some[art.DataContent]
  TSome_3E197E = 0x3E197EB8, // Some[art.UPort]
  TSome_C19C7E = 0xC19C7EAF, // Some[uav_project_extern.SW.Mission]
  TString = 0xB6F8E8F6, // String
  Tart_ArchitectureDescription = 0xAD6322F1, // art.ArchitectureDescription
  Tart_Bridge_Ports = 0x14139493, // art.Bridge.Ports
  Tart_Connection_F3A765 = 0xF3A76592, // art.Connection[B]
  Tart_Connection_A6262C = 0xA6262C53, // art.Connection[S64]
  Tart_Connection_210187 = 0x210187D6, // art.Connection[uav_project_extern.SW.Command_Impl]
  Tart_Connection_B6057D = 0xB6057D7B, // art.Connection[uav_project_extern.SW.MissionWindow]
  Tart_Connection_C6DC10 = 0xC6DC102D, // art.Connection[uav_project_extern.SW.Mission]
  Tart_DispatchPropertyProtocol_Periodic = 0x4C652984, // art.DispatchPropertyProtocol.Periodic
  Tart_DispatchPropertyProtocol_Sporadic = 0x48F30CFF, // art.DispatchPropertyProtocol.Sporadic
  Tart_Empty = 0x49C5E24D, // art.Empty
  Tart_EventTriggered = 0x5ED6B44C, // art.EventTriggered
  Tart_Port_C0524D = 0xC0524D76, // art.Port[B]
  Tart_Port_CBF210 = 0xCBF210E1, // art.Port[S64]
  Tart_Port_311EA2 = 0x311EA2A9, // art.Port[uav_project_extern.SW.Command_Impl]
  Tart_Port_65F60A = 0x65F60AA4, // art.Port[uav_project_extern.SW.MissionWindow]
  Tart_Port_97EF76 = 0x97EF764F, // art.Port[uav_project_extern.SW.Mission]
  Tart_TimeTriggered = 0x2D35E63C, // art.TimeTriggered
  Tuav_project_extern_Base_Types_Boolean_Payload = 0xB03DEE22, // uav_project_extern.Base_Types.Boolean_Payload
  Tuav_project_extern_Base_Types_Integer_64_Payload = 0xC7203D93, // uav_project_extern.Base_Types.Integer_64_Payload
  Tuav_project_extern_SW_Command_Impl = 0x70D54BCA, // uav_project_extern.SW.Command_Impl
  Tuav_project_extern_SW_Command_Impl_Payload = 0xA199E168, // uav_project_extern.SW.Command_Impl_Payload
  Tuav_project_extern_SW_Coordinate_Impl = 0x9CF7E0D3, // uav_project_extern.SW.Coordinate_Impl
  Tuav_project_extern_SW_FlightPlanner_Impl_Bridge = 0xCD25B4BD, // uav_project_extern.SW.FlightPlanner_Impl_Bridge
  Tuav_project_extern_SW_FlightPlanner_Impl_Bridge_Api = 0x78831B31, // uav_project_extern.SW.FlightPlanner_Impl_Bridge.Api
  Tuav_project_extern_SW_FlightPlanner_Impl_Bridge_EntryPoints = 0x9AE55CF3, // uav_project_extern.SW.FlightPlanner_Impl_Bridge.EntryPoints
  Tuav_project_extern_SW_FlightPlanner_Impl_Impl = 0x39BA8E87, // uav_project_extern.SW.FlightPlanner_Impl_Impl
  Tuav_project_extern_SW_Map = 0xC1700D20, // uav_project_extern.SW.Map
  Tuav_project_extern_SW_Mission = 0x9D41AE92, // uav_project_extern.SW.Mission
  Tuav_project_extern_SW_MissionWindow = 0x8C7F59CB, // uav_project_extern.SW.MissionWindow
  Tuav_project_extern_SW_MissionWindow_Payload = 0x68095F35, // uav_project_extern.SW.MissionWindow_Payload
  Tuav_project_extern_SW_Mission_Payload = 0x2870086B, // uav_project_extern.SW.Mission_Payload
  Tuav_project_extern_SW_RadioDriver_Impl_Bridge = 0x8DABA9BB, // uav_project_extern.SW.RadioDriver_Impl_Bridge
  Tuav_project_extern_SW_RadioDriver_Impl_Bridge_Api = 0x664C3B4C, // uav_project_extern.SW.RadioDriver_Impl_Bridge.Api
  Tuav_project_extern_SW_RadioDriver_Impl_Bridge_EntryPoints = 0x1BAB7603, // uav_project_extern.SW.RadioDriver_Impl_Bridge.EntryPoints
  Tuav_project_extern_SW_RadioDriver_Impl_Impl = 0x89D711CE, // uav_project_extern.SW.RadioDriver_Impl_Impl
  Tuav_project_extern_SW_UARTDriver_Impl_Bridge = 0x2F9F09C0, // uav_project_extern.SW.UARTDriver_Impl_Bridge
  Tuav_project_extern_SW_UARTDriver_Impl_Bridge_Api = 0x6AEC4086, // uav_project_extern.SW.UARTDriver_Impl_Bridge.Api
  Tuav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints = 0xE9E81895, // uav_project_extern.SW.UARTDriver_Impl_Bridge.EntryPoints
  Tuav_project_extern_SW_UARTDriver_Impl_Impl = 0xD39E996D, // uav_project_extern.SW.UARTDriver_Impl_Impl
  Tuav_project_extern_SW_WaypointManager_Impl_Bridge = 0x87FDFAB5, // uav_project_extern.SW.WaypointManager_Impl_Bridge
  Tuav_project_extern_SW_WaypointManager_Impl_Bridge_Api = 0x371D6B83, // uav_project_extern.SW.WaypointManager_Impl_Bridge.Api
  Tuav_project_extern_SW_WaypointManager_Impl_Bridge_EntryPoints = 0x99A3BAAB, // uav_project_extern.SW.WaypointManager_Impl_Bridge.EntryPoints
  Tuav_project_extern_SW_WaypointManager_Impl_Impl = 0xC38B49D3, // uav_project_extern.SW.WaypointManager_Impl_Impl
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

#endif