#ifndef SIREUM_GEN_TYPE_H
#define SIREUM_GEN_TYPE_H

#ifdef __cplusplus
extern "C" {
#endif
#include <stackframe.h>

typedef enum {
  THAMR_Simple_V4_Base_Types_Bits_Payload = 0x617C2B70, // HAMR_Simple_V4.Base_Types.Bits_Payload
  THAMR_Simple_V4_SW_Monitor_Impl_Initialization_Api = 0x97E22B17, // HAMR_Simple_V4.SW.Monitor_Impl_Initialization_Api
  THAMR_Simple_V4_SW_Monitor_Impl_Operational_Api = 0x462B40D1, // HAMR_Simple_V4.SW.Monitor_Impl_Operational_Api
  THAMR_Simple_V4_SW_Monitor_Impl_SW_Monitor_Monitor_Bridge = 0x09F8AD3B, // HAMR_Simple_V4.SW.Monitor_Impl_SW_Monitor_Monitor_Bridge
  THAMR_Simple_V4_SW_Monitor_Impl_SW_Monitor_Monitor_Bridge_EntryPoints = 0x3569CF87, // HAMR_Simple_V4.SW.Monitor_Impl_SW_Monitor_Monitor_Bridge.EntryPoints
  TIS_C4F575 = 0xC4F575CD, // IS[Z, B]
  TIS_948B60 = 0x948B6070, // IS[Z, String]
  TIS_82ABD8 = 0x82ABD805, // IS[Z, Z]
  TIS_7E8796 = 0x7E87969E, // IS[Z, art.Bridge]
  TIS_08117A = 0x08117AAE, // IS[Z, art.UConnection]
  TIS_820232 = 0x82023297, // IS[Z, art.UPort]
  TMS_E444B2 = 0xE444B286, // MS[Z, IS[Z, Z]]
  TMS_83D5EB = 0x83D5EBFF, // MS[Z, Option[art.Bridge]]
  TMS_F55A18 = 0xF55A1861, // MS[Z, Option[art.UPort]]
  TNone_556BC5 = 0x556BC5A6, // None[HAMR_Simple_V4.SW.Monitor_Impl_Initialization_Api]
  TNone_D81833 = 0xD8183372, // None[HAMR_Simple_V4.SW.Monitor_Impl_Operational_Api]
  TNone_3026C5 = 0x3026C5D4, // None[IS[Z, B]]
  TNone_5C1355 = 0x5C135592, // None[IS[Z, Z]]
  TNone_734370 = 0x73437068, // None[art.Bridge]
  TNone_964667 = 0x9646678F, // None[art.DataContent]
  TNone_39BC5F = 0x39BC5F5F, // None[art.UPort]
  TSome_CF7B75 = 0xCF7B75DA, // Some[HAMR_Simple_V4.SW.Monitor_Impl_Initialization_Api]
  TSome_E0238A = 0xE0238A12, // Some[HAMR_Simple_V4.SW.Monitor_Impl_Operational_Api]
  TSome_8D03B1 = 0x8D03B113, // Some[IS[Z, B]]
  TSome_482E57 = 0x482E572F, // Some[art.Bridge]
  TSome_D29615 = 0xD29615C0, // Some[art.DataContent]
  TSome_3E197E = 0x3E197EB8, // Some[art.UPort]
  TString = 0xB6F8E8F6, // String
  Tart_ArchitectureDescription = 0xAD6322F1, // art.ArchitectureDescription
  Tart_Bridge_Ports = 0x14139493, // art.Bridge.Ports
  Tart_DispatchPropertyProtocol_Periodic = 0x4C652984, // art.DispatchPropertyProtocol.Periodic
  Tart_DispatchPropertyProtocol_Sporadic = 0x48F30CFF, // art.DispatchPropertyProtocol.Sporadic
  Tart_Empty = 0x49C5E24D, // art.Empty
  Tart_Port_45E54D = 0x45E54D5D, // art.Port[IS[Z, B]]
  Tart_Port_9CBF18 = 0x9CBF18B7, // art.Port[art.Empty]
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