#ifndef SIREUM_GEN_TYPE_H
#define SIREUM_GEN_TYPE_H

#ifdef __cplusplus
extern "C" {
#endif
#include <stackframe.h>

typedef enum {
  THAMR_Simple_V4_Base_Types_Bits_Payload = (int) 0x617C2B70, // HAMR_Simple_V4.Base_Types.Bits_Payload
  THAMR_Simple_V4_SW_FlightController_Impl_Initialization_Api = (int) 0x9CA90527, // HAMR_Simple_V4.SW.FlightController_Impl_Initialization_Api
  THAMR_Simple_V4_SW_FlightController_Impl_Operational_Api = (int) 0xD4F426C6, // HAMR_Simple_V4.SW.FlightController_Impl_Operational_Api
  THAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_FlightController_Bridge = (int) 0xB3A26EAF, // HAMR_Simple_V4.SW.FlightController_Impl_SW_FlightController_FlightController_Bridge
  THAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_FlightController_Bridge_EntryPoints = (int) 0xFABF0FA2, // HAMR_Simple_V4.SW.FlightController_Impl_SW_FlightController_FlightController_Bridge.EntryPoints
  TIS_C4F575 = (int) 0xC4F575CD, // IS[Z, B]
  TIS_948B60 = (int) 0x948B6070, // IS[Z, String]
  TIS_82ABD8 = (int) 0x82ABD805, // IS[Z, Z]
  TIS_7E8796 = (int) 0x7E87969E, // IS[Z, art.Bridge]
  TIS_08117A = (int) 0x08117AAE, // IS[Z, art.UConnection]
  TIS_820232 = (int) 0x82023297, // IS[Z, art.UPort]
  TMS_E444B2 = (int) 0xE444B286, // MS[Z, IS[Z, Z]]
  TMS_83D5EB = (int) 0x83D5EBFF, // MS[Z, Option[art.Bridge]]
  TMS_F55A18 = (int) 0xF55A1861, // MS[Z, Option[art.UPort]]
  TNone_4E54E3 = (int) 0x4E54E3C3, // None[HAMR_Simple_V4.SW.FlightController_Impl_Initialization_Api]
  TNone_2849BF = (int) 0x2849BFAB, // None[HAMR_Simple_V4.SW.FlightController_Impl_Operational_Api]
  TNone_3026C5 = (int) 0x3026C5D4, // None[IS[Z, B]]
  TNone_5C1355 = (int) 0x5C135592, // None[IS[Z, Z]]
  TNone_734370 = (int) 0x73437068, // None[art.Bridge]
  TNone_964667 = (int) 0x9646678F, // None[art.DataContent]
  TNone_ED72E1 = (int) 0xED72E191, // None[art.Empty]
  TNone_39BC5F = (int) 0x39BC5F5F, // None[art.UPort]
  TSome_0FF3DD = (int) 0x0FF3DD3C, // Some[HAMR_Simple_V4.SW.FlightController_Impl_Initialization_Api]
  TSome_FCFE69 = (int) 0xFCFE693E, // Some[HAMR_Simple_V4.SW.FlightController_Impl_Operational_Api]
  TSome_8D03B1 = (int) 0x8D03B113, // Some[IS[Z, B]]
  TSome_482E57 = (int) 0x482E572F, // Some[art.Bridge]
  TSome_D29615 = (int) 0xD29615C0, // Some[art.DataContent]
  TSome_4782C6 = (int) 0x4782C6E2, // Some[art.Empty]
  TSome_3E197E = (int) 0x3E197EB8, // Some[art.UPort]
  TString = (int) 0xB6F8E8F6, // String
  Tart_ArchitectureDescription = (int) 0xAD6322F1, // art.ArchitectureDescription
  Tart_Bridge_Ports = (int) 0x14139493, // art.Bridge.Ports
  Tart_DispatchPropertyProtocol_Periodic = (int) 0x4C652984, // art.DispatchPropertyProtocol.Periodic
  Tart_DispatchPropertyProtocol_Sporadic = (int) 0x48F30CFF, // art.DispatchPropertyProtocol.Sporadic
  Tart_Empty = (int) 0x49C5E24D, // art.Empty
  Tart_Port_45E54D = (int) 0x45E54D5D, // art.Port[IS[Z, B]]
  Tart_Port_9CBF18 = (int) 0x9CBF18B7, // art.Port[art.Empty]
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