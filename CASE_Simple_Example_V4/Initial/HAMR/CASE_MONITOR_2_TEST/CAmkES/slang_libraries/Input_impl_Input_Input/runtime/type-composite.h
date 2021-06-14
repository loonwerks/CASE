#ifndef SIREUM_GEN_TYPE_H
#define SIREUM_GEN_TYPE_H

#ifdef __cplusplus
extern "C" {
#endif
#include <stackframe.h>

typedef enum {
  TCASE_MONITOR_2_TEST_Base_Types_Bits_Payload = 0x44FCFEB9, // CASE_MONITOR_2_TEST.Base_Types.Bits_Payload
  TCASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Initialization_Api = 0x9700CBD6, // CASE_MONITOR_2_TEST.VPM_TEST.Input_impl_Initialization_Api
  TCASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge = 0x432841EB, // CASE_MONITOR_2_TEST.VPM_TEST.Input_impl_Input_Input_Bridge
  TCASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_EntryPoints = 0x37BB4E55, // CASE_MONITOR_2_TEST.VPM_TEST.Input_impl_Input_Input_Bridge.EntryPoints
  TCASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Operational_Api = 0xAAF0AC7D, // CASE_MONITOR_2_TEST.VPM_TEST.Input_impl_Operational_Api
  TIS_C4F575 = 0xC4F575CD, // IS[Z, B]
  TIS_948B60 = 0x948B6070, // IS[Z, String]
  TIS_82ABD8 = 0x82ABD805, // IS[Z, Z]
  TIS_7E8796 = 0x7E87969E, // IS[Z, art.Bridge]
  TIS_08117A = 0x08117AAE, // IS[Z, art.UConnection]
  TIS_820232 = 0x82023297, // IS[Z, art.UPort]
  TMS_E444B2 = 0xE444B286, // MS[Z, IS[Z, Z]]
  TMS_83D5EB = 0x83D5EBFF, // MS[Z, Option[art.Bridge]]
  TMS_F55A18 = 0xF55A1861, // MS[Z, Option[art.UPort]]
  TNone_9BC69E = 0x9BC69E1B, // None[CASE_MONITOR_2_TEST.VPM_TEST.Input_impl_Initialization_Api]
  TNone_05FEAD = 0x05FEADC2, // None[CASE_MONITOR_2_TEST.VPM_TEST.Input_impl_Operational_Api]
  TNone_5C1355 = 0x5C135592, // None[IS[Z, Z]]
  TNone_734370 = 0x73437068, // None[art.Bridge]
  TNone_964667 = 0x9646678F, // None[art.DataContent]
  TNone_39BC5F = 0x39BC5F5F, // None[art.UPort]
  TSome_C9A1C9 = 0xC9A1C9F8, // Some[CASE_MONITOR_2_TEST.VPM_TEST.Input_impl_Initialization_Api]
  TSome_2EBF4C = 0x2EBF4C65, // Some[CASE_MONITOR_2_TEST.VPM_TEST.Input_impl_Operational_Api]
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