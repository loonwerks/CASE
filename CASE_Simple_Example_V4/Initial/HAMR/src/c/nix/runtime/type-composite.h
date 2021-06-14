#ifndef SIREUM_GEN_TYPE_H
#define SIREUM_GEN_TYPE_H

#ifdef __cplusplus
extern "C" {
#endif
#include <stackframe.h>

typedef enum {
  TTuple2_EC3B57 = 0xEC3B577E, // (Z, Z)
  THAMR_Simple_V4_Base_Types_Bits_Payload = 0x617C2B70, // HAMR_Simple_V4.Base_Types.Bits_Payload
  THAMR_Simple_V4_SW_FlightController_Impl_Initialization_Api = 0x9CA90527, // HAMR_Simple_V4.SW.FlightController_Impl_Initialization_Api
  THAMR_Simple_V4_SW_FlightController_Impl_Operational_Api = 0xD4F426C6, // HAMR_Simple_V4.SW.FlightController_Impl_Operational_Api
  THAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge = 0x3BD9CA24, // HAMR_Simple_V4.SW.FlightController_Impl_SW_FlightController_Bridge
  THAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge_EntryPoints = 0x2A56315F, // HAMR_Simple_V4.SW.FlightController_Impl_SW_FlightController_Bridge.EntryPoints
  THAMR_Simple_V4_SW_FlightPlanner_Impl_Initialization_Api = 0x6570316B, // HAMR_Simple_V4.SW.FlightPlanner_Impl_Initialization_Api
  THAMR_Simple_V4_SW_FlightPlanner_Impl_Operational_Api = 0x6BC73C83, // HAMR_Simple_V4.SW.FlightPlanner_Impl_Operational_Api
  THAMR_Simple_V4_SW_FlightPlanner_Impl_SW_FlightPlanner_Bridge = 0x77410002, // HAMR_Simple_V4.SW.FlightPlanner_Impl_SW_FlightPlanner_Bridge
  THAMR_Simple_V4_SW_FlightPlanner_Impl_SW_FlightPlanner_Bridge_EntryPoints = 0x9C53D5A5, // HAMR_Simple_V4.SW.FlightPlanner_Impl_SW_FlightPlanner_Bridge.EntryPoints
  THAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api = 0xBAE94B16, // HAMR_Simple_V4.SW.RadioDriver_Impl_Initialization_Api
  THAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api = 0xFC23E8A5, // HAMR_Simple_V4.SW.RadioDriver_Impl_Operational_Api
  THAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge = 0x288728F1, // HAMR_Simple_V4.SW.RadioDriver_Impl_SW_Radio_Bridge
  THAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge_EntryPoints = 0x4D13727B, // HAMR_Simple_V4.SW.RadioDriver_Impl_SW_Radio_Bridge.EntryPoints
  TIS_AA0F82 = 0xAA0F8237, // IS[Z, (Z, Z)]
  TIS_C4F575 = 0xC4F575CD, // IS[Z, B]
  TIS_948B60 = 0x948B6070, // IS[Z, String]
  TIS_82ABD8 = 0x82ABD805, // IS[Z, Z]
  TIS_7E8796 = 0x7E87969E, // IS[Z, art.Bridge]
  TIS_08117A = 0x08117AAE, // IS[Z, art.UConnection]
  TIS_820232 = 0x82023297, // IS[Z, art.UPort]
  TMBox2_1029D1 = 0x1029D116, // MBox2[Z, Option[art.DataContent]]
  TMBox2_1CBFC4 = 0x1CBFC457, // MBox2[Z, art.DataContent]
  TMS_B5E3E6 = 0xB5E3E695, // MS[Z, IS[Z, (Z, Z)]]
  TMS_E444B2 = 0xE444B286, // MS[Z, IS[Z, Z]]
  TMS_83D5EB = 0x83D5EBFF, // MS[Z, Option[art.Bridge]]
  TMS_2590FE = 0x2590FEE8, // MS[Z, Option[art.DataContent]]
  TMS_F55A18 = 0xF55A1861, // MS[Z, Option[art.UPort]]
  TMS_30A5B4 = 0x30A5B454, // MS[Z, Z]
  TNone_4E54E3 = 0x4E54E3C3, // None[HAMR_Simple_V4.SW.FlightController_Impl_Initialization_Api]
  TNone_2849BF = 0x2849BFAB, // None[HAMR_Simple_V4.SW.FlightController_Impl_Operational_Api]
  TNone_43D596 = 0x43D596F3, // None[HAMR_Simple_V4.SW.FlightPlanner_Impl_Initialization_Api]
  TNone_E951B6 = 0xE951B612, // None[HAMR_Simple_V4.SW.FlightPlanner_Impl_Operational_Api]
  TNone_3F37D3 = 0x3F37D357, // None[HAMR_Simple_V4.SW.RadioDriver_Impl_Initialization_Api]
  TNone_C64652 = 0xC6465295, // None[HAMR_Simple_V4.SW.RadioDriver_Impl_Operational_Api]
  TNone_3026C5 = 0x3026C5D4, // None[IS[Z, B]]
  TNone_5C1355 = 0x5C135592, // None[IS[Z, Z]]
  TNone_76463B = 0x76463B20, // None[Z]
  TNone_734370 = 0x73437068, // None[art.Bridge]
  TNone_964667 = 0x9646678F, // None[art.DataContent]
  TNone_39BC5F = 0x39BC5F5F, // None[art.UPort]
  TSome_0FF3DD = 0x0FF3DD3C, // Some[HAMR_Simple_V4.SW.FlightController_Impl_Initialization_Api]
  TSome_FCFE69 = 0xFCFE693E, // Some[HAMR_Simple_V4.SW.FlightController_Impl_Operational_Api]
  TSome_DAEBD0 = 0xDAEBD0A1, // Some[HAMR_Simple_V4.SW.FlightPlanner_Impl_Initialization_Api]
  TSome_B4F3A8 = 0xB4F3A8B2, // Some[HAMR_Simple_V4.SW.FlightPlanner_Impl_Operational_Api]
  TSome_9E368A = 0x9E368A19, // Some[HAMR_Simple_V4.SW.RadioDriver_Impl_Initialization_Api]
  TSome_DDE9FD = 0xDDE9FD92, // Some[HAMR_Simple_V4.SW.RadioDriver_Impl_Operational_Api]
  TSome_8D03B1 = 0x8D03B113, // Some[IS[Z, B]]
  TSome_488F47 = 0x488F47F1, // Some[Z]
  TSome_482E57 = 0x482E572F, // Some[art.Bridge]
  TSome_D29615 = 0xD29615C0, // Some[art.DataContent]
  TSome_3E197E = 0x3E197EB8, // Some[art.UPort]
  TString = 0xB6F8E8F6, // String
  Tart_ArchitectureDescription = 0xAD6322F1, // art.ArchitectureDescription
  Tart_Bridge_Ports = 0x14139493, // art.Bridge.Ports
  Tart_Connection = 0x17385940, // art.Connection
  Tart_DispatchPropertyProtocol_Periodic = 0x4C652984, // art.DispatchPropertyProtocol.Periodic
  Tart_DispatchPropertyProtocol_Sporadic = 0x48F30CFF, // art.DispatchPropertyProtocol.Sporadic
  Tart_Empty = 0x49C5E24D, // art.Empty
  Tart_EventTriggered = 0x5ED6B44C, // art.EventTriggered
  Tart_Port_45E54D = 0x45E54D5D, // art.Port[IS[Z, B]]
  Tart_TimeTriggered = 0x2D35E63C, // art.TimeTriggered
  Tops_ISZOps_A6D40E = 0xA6D40E79, // ops.ISZOps[Z]
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