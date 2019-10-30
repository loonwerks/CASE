#ifndef SIREUM_GEN_TYPE_H
#define SIREUM_GEN_TYPE_H

#include <memory.h>
#include <ztype.h>
#include <stackframe.h>

typedef enum {
  TTuple2_EC3B57 = 0, // (Z, Z)
  TTuple2_D0E3BB = 1, // (Z, art.DataContent)
  TACT_Demo_Dec2018__camkes_X_Base_Types_Boolean = 2, // ACT_Demo_Dec2018__camkes_X.Base_Types.Boolean
  TACT_Demo_Dec2018__camkes_X_Base_Types_Boolean_Payload = 3, // ACT_Demo_Dec2018__camkes_X.Base_Types.Boolean_Payload
  TACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64 = 4, // ACT_Demo_Dec2018__camkes_X.Base_Types.Integer_64
  TACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64_Payload = 5, // ACT_Demo_Dec2018__camkes_X.Base_Types.Integer_64_Payload
  TACT_Demo_Dec2018__camkes_X_MC_MISSING_TYPE_Impl = 6, // ACT_Demo_Dec2018__camkes_X.MC.MISSING_TYPE_Impl
  TACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge = 7, // ACT_Demo_Dec2018__camkes_X.MC.Radio_Impl_Bridge
  TACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_Api = 8, // ACT_Demo_Dec2018__camkes_X.MC.Radio_Impl_Bridge.Api
  TACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_EntryPoints = 9, // ACT_Demo_Dec2018__camkes_X.MC.Radio_Impl_Bridge.EntryPoints
  TACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Impl = 10, // ACT_Demo_Dec2018__camkes_X.MC.Radio_Impl_Impl
  TACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Bridge = 11, // ACT_Demo_Dec2018__camkes_X.MC.UART_Impl_Bridge
  TACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Bridge_Api = 12, // ACT_Demo_Dec2018__camkes_X.MC.UART_Impl_Bridge.Api
  TACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Bridge_EntryPoints = 13, // ACT_Demo_Dec2018__camkes_X.MC.UART_Impl_Bridge.EntryPoints
  TACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Impl = 14, // ACT_Demo_Dec2018__camkes_X.MC.UART_Impl_Impl
  TACT_Demo_Dec2018__camkes_X_SW_Command_Impl = 15, // ACT_Demo_Dec2018__camkes_X.SW.Command_Impl
  TACT_Demo_Dec2018__camkes_X_SW_Command_Impl_Payload = 16, // ACT_Demo_Dec2018__camkes_X.SW.Command_Impl_Payload
  TACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl = 17, // ACT_Demo_Dec2018__camkes_X.SW.Coordinate_Impl
  TACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Bridge = 18, // ACT_Demo_Dec2018__camkes_X.SW.FlightPlanner_Impl_Bridge
  TACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Bridge_Api = 19, // ACT_Demo_Dec2018__camkes_X.SW.FlightPlanner_Impl_Bridge.Api
  TACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Bridge_EntryPoints = 20, // ACT_Demo_Dec2018__camkes_X.SW.FlightPlanner_Impl_Bridge.EntryPoints
  TACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Impl = 21, // ACT_Demo_Dec2018__camkes_X.SW.FlightPlanner_Impl_Impl
  TACT_Demo_Dec2018__camkes_X_SW_Mission = 22, // ACT_Demo_Dec2018__camkes_X.SW.Mission
  TACT_Demo_Dec2018__camkes_X_SW_MissionWindow = 23, // ACT_Demo_Dec2018__camkes_X.SW.MissionWindow
  TACT_Demo_Dec2018__camkes_X_SW_MissionWindow_Payload = 24, // ACT_Demo_Dec2018__camkes_X.SW.MissionWindow_Payload
  TACT_Demo_Dec2018__camkes_X_SW_Mission_Payload = 25, // ACT_Demo_Dec2018__camkes_X.SW.Mission_Payload
  TACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge = 26, // ACT_Demo_Dec2018__camkes_X.SW.RadioDriver_Impl_Bridge
  TACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_Api = 27, // ACT_Demo_Dec2018__camkes_X.SW.RadioDriver_Impl_Bridge.Api
  TACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_EntryPoints = 28, // ACT_Demo_Dec2018__camkes_X.SW.RadioDriver_Impl_Bridge.EntryPoints
  TACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Impl = 29, // ACT_Demo_Dec2018__camkes_X.SW.RadioDriver_Impl_Impl
  TACT_Demo_Dec2018__camkes_X_SW_SW__Map = 30, // ACT_Demo_Dec2018__camkes_X.SW.SW__Map
  TACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge = 31, // ACT_Demo_Dec2018__camkes_X.SW.UARTDriver_Impl_Bridge
  TACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_Api = 32, // ACT_Demo_Dec2018__camkes_X.SW.UARTDriver_Impl_Bridge.Api
  TACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_EntryPoints = 33, // ACT_Demo_Dec2018__camkes_X.SW.UARTDriver_Impl_Bridge.EntryPoints
  TACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Impl = 34, // ACT_Demo_Dec2018__camkes_X.SW.UARTDriver_Impl_Impl
  TACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge = 35, // ACT_Demo_Dec2018__camkes_X.SW.WaypointManager_Impl_Bridge
  TACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_Api = 36, // ACT_Demo_Dec2018__camkes_X.SW.WaypointManager_Impl_Bridge.Api
  TACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_EntryPoints = 37, // ACT_Demo_Dec2018__camkes_X.SW.WaypointManager_Impl_Bridge.EntryPoints
  TACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Impl = 38, // ACT_Demo_Dec2018__camkes_X.SW.WaypointManager_Impl_Impl
  TIS_AA0F82 = 39, // IS[Z, (Z, Z)]
  TIS_5D0BE7 = 40, // IS[Z, ACT_Demo_Dec2018__camkes_X.SW.Coordinate_Impl]
  TIS_948B60 = 41, // IS[Z, String]
  TIS_82ABD8 = 42, // IS[Z, Z]
  TIS_08117A = 43, // IS[Z, art.UConnection]
  TIS_820232 = 44, // IS[Z, art.UPort]
  TMNone_2A2E1D = 45, // MNone[art.Bridge]
  TMS_B5E3E6 = 46, // MS[Z, IS[Z, (Z, Z)]]
  TMS_E444B2 = 47, // MS[Z, IS[Z, Z]]
  TMS_94FFA9 = 48, // MS[Z, MOption[art.Bridge]]
  TMS_2590FE = 49, // MS[Z, Option[art.DataContent]]
  TMS_F55A18 = 50, // MS[Z, Option[art.UPort]]
  TMS_30A5B4 = 51, // MS[Z, Z]
  TMS_852149 = 52, // MS[Z, art.Bridge]
  TMSome_D3D128 = 53, // MSome[art.Bridge]
  TNone_93AA2B = 54, // None[(Z, art.DataContent)]
  TNone_0CCA05 = 55, // None[ACT_Demo_Dec2018__camkes_X.SW.Mission]
  TNone_76463B = 56, // None[Z]
  TNone_964667 = 57, // None[art.DataContent]
  TNone_39BC5F = 58, // None[art.UPort]
  TSome_E9D1E5 = 59, // Some[(Z, art.DataContent)]
  TSome_3B09D7 = 60, // Some[ACT_Demo_Dec2018__camkes_X.SW.Mission]
  TSome_488F47 = 61, // Some[Z]
  TSome_D29615 = 62, // Some[art.DataContent]
  TSome_3E197E = 63, // Some[art.UPort]
  Tart_ArchitectureDescription = 64, // art.ArchitectureDescription
  Tart_Bridge_Ports = 65, // art.Bridge.Ports
  Tart_Connection_A24F1E = 66, // art.Connection[ACT_Demo_Dec2018__camkes_X.Base_Types.Boolean]
  Tart_Connection_CAF041 = 67, // art.Connection[ACT_Demo_Dec2018__camkes_X.Base_Types.Integer_64]
  Tart_Connection_2D82C4 = 68, // art.Connection[ACT_Demo_Dec2018__camkes_X.SW.Command_Impl]
  Tart_Connection_112F4D = 69, // art.Connection[ACT_Demo_Dec2018__camkes_X.SW.MissionWindow]
  Tart_Connection_E82682 = 70, // art.Connection[ACT_Demo_Dec2018__camkes_X.SW.Mission]
  Tart_DispatchPropertyProtocol_Periodic = 71, // art.DispatchPropertyProtocol.Periodic
  Tart_DispatchPropertyProtocol_Sporadic = 72, // art.DispatchPropertyProtocol.Sporadic
  Tart_Empty = 73, // art.Empty
  Tart_EventTriggered = 74, // art.EventTriggered
  Tart_Port_9D6F5D = 75, // art.Port[ACT_Demo_Dec2018__camkes_X.Base_Types.Boolean]
  Tart_Port_446859 = 76, // art.Port[ACT_Demo_Dec2018__camkes_X.Base_Types.Integer_64]
  Tart_Port_2C63FD = 77, // art.Port[ACT_Demo_Dec2018__camkes_X.MC.MISSING_TYPE_Impl]
  Tart_Port_695448 = 78, // art.Port[ACT_Demo_Dec2018__camkes_X.SW.Command_Impl]
  Tart_Port_FD6239 = 79, // art.Port[ACT_Demo_Dec2018__camkes_X.SW.Coordinate_Impl]
  Tart_Port_2D3735 = 80, // art.Port[ACT_Demo_Dec2018__camkes_X.SW.MissionWindow]
  Tart_Port_D7D05E = 81, // art.Port[ACT_Demo_Dec2018__camkes_X.SW.Mission]
  Tart_TimeTriggered = 82, // art.TimeTriggered
  TString = 83, // org.sireum.String
} TYPE;

char *TYPE_string(void *type);

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

static inline B String__eq(String this, String other) {
  Z thisSize = this->size;
  if (thisSize != other->size) return F;
  return memcmp(this->value, other->value, (size_t) thisSize) == 0;
}

static inline B String__ne(String this, String other) {
  return !String__eq(this, other);
}

#endif