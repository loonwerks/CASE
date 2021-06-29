#include <types.h>

size_t sizeOf(Type t) {
  TYPE type = t->type;
  switch (type) {
    case THAMR_Simple_V4_Base_Types_Bits_Payload: return sizeof(struct HAMR_Simple_V4_Base_Types_Bits_Payload); // HAMR_Simple_V4.Base_Types.Bits_Payload
    case THAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Initialization_Api: return sizeof(struct HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Initialization_Api); // HAMR_Simple_V4.SW.RadioDriver_Attestation_Impl_Initialization_Api
    case THAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Operational_Api: return sizeof(struct HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Operational_Api); // HAMR_Simple_V4.SW.RadioDriver_Attestation_Impl_Operational_Api
    case THAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge: return sizeof(struct HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge); // HAMR_Simple_V4.SW.RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge
    case THAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_EntryPoints: return sizeof(struct HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_EntryPoints); // HAMR_Simple_V4.SW.RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge.EntryPoints
    case TIS_C4F575: return sizeof(struct IS_C4F575); // IS[Z, B]
    case TIS_948B60: return sizeof(struct IS_948B60); // IS[Z, String]
    case TIS_82ABD8: return sizeof(struct IS_82ABD8); // IS[Z, Z]
    case TIS_7E8796: return sizeof(struct IS_7E8796); // IS[Z, art.Bridge]
    case TIS_08117A: return sizeof(struct IS_08117A); // IS[Z, art.UConnection]
    case TIS_820232: return sizeof(struct IS_820232); // IS[Z, art.UPort]
    case TMS_E444B2: return sizeof(struct MS_E444B2); // MS[Z, IS[Z, Z]]
    case TMS_83D5EB: return sizeof(struct MS_83D5EB); // MS[Z, Option[art.Bridge]]
    case TMS_F55A18: return sizeof(struct MS_F55A18); // MS[Z, Option[art.UPort]]
    case TNone_830D4E: return sizeof(struct None_830D4E); // None[HAMR_Simple_V4.SW.RadioDriver_Attestation_Impl_Initialization_Api]
    case TNone_29B833: return sizeof(struct None_29B833); // None[HAMR_Simple_V4.SW.RadioDriver_Attestation_Impl_Operational_Api]
    case TNone_3026C5: return sizeof(struct None_3026C5); // None[IS[Z, B]]
    case TNone_5C1355: return sizeof(struct None_5C1355); // None[IS[Z, Z]]
    case TNone_734370: return sizeof(struct None_734370); // None[art.Bridge]
    case TNone_964667: return sizeof(struct None_964667); // None[art.DataContent]
    case TNone_39BC5F: return sizeof(struct None_39BC5F); // None[art.UPort]
    case TSome_3030EA: return sizeof(struct Some_3030EA); // Some[HAMR_Simple_V4.SW.RadioDriver_Attestation_Impl_Initialization_Api]
    case TSome_E10DBF: return sizeof(struct Some_E10DBF); // Some[HAMR_Simple_V4.SW.RadioDriver_Attestation_Impl_Operational_Api]
    case TSome_8D03B1: return sizeof(struct Some_8D03B1); // Some[IS[Z, B]]
    case TSome_482E57: return sizeof(struct Some_482E57); // Some[art.Bridge]
    case TSome_D29615: return sizeof(struct Some_D29615); // Some[art.DataContent]
    case TSome_3E197E: return sizeof(struct Some_3E197E); // Some[art.UPort]
    case TString: return sizeof(struct String); // String
    case Tart_ArchitectureDescription: return sizeof(struct art_ArchitectureDescription); // art.ArchitectureDescription
    case Tart_Bridge_Ports: return sizeof(struct art_Bridge_Ports); // art.Bridge.Ports
    case Tart_DispatchPropertyProtocol_Periodic: return sizeof(struct art_DispatchPropertyProtocol_Periodic); // art.DispatchPropertyProtocol.Periodic
    case Tart_DispatchPropertyProtocol_Sporadic: return sizeof(struct art_DispatchPropertyProtocol_Sporadic); // art.DispatchPropertyProtocol.Sporadic
    case Tart_Empty: return sizeof(struct art_Empty); // art.Empty
    case Tart_Port_45E54D: return sizeof(struct art_Port_45E54D); // art.Port[IS[Z, B]]
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
    "HAMR_Simple_V4.Base_Types.Bits_Payload",
    "HAMR_Simple_V4.SW.RadioDriver_Attestation_Impl_Initialization_Api",
    "HAMR_Simple_V4.SW.RadioDriver_Attestation_Impl_Operational_Api",
    "HAMR_Simple_V4.SW.RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge",
    "HAMR_Simple_V4.SW.RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge.EntryPoints",
    "IS[Z, B]",
    "IS[Z, String]",
    "IS[Z, Z]",
    "IS[Z, art.Bridge]",
    "IS[Z, art.UConnection]",
    "IS[Z, art.UPort]",
    "MS[Z, IS[Z, Z]]",
    "MS[Z, Option[art.Bridge]]",
    "MS[Z, Option[art.UPort]]",
    "None[HAMR_Simple_V4.SW.RadioDriver_Attestation_Impl_Initialization_Api]",
    "None[HAMR_Simple_V4.SW.RadioDriver_Attestation_Impl_Operational_Api]",
    "None[IS[Z, B]]",
    "None[IS[Z, Z]]",
    "None[art.Bridge]",
    "None[art.DataContent]",
    "None[art.UPort]",
    "Some[HAMR_Simple_V4.SW.RadioDriver_Attestation_Impl_Initialization_Api]",
    "Some[HAMR_Simple_V4.SW.RadioDriver_Attestation_Impl_Operational_Api]",
    "Some[IS[Z, B]]",
    "Some[art.Bridge]",
    "Some[art.DataContent]",
    "Some[art.UPort]",
    "String",
    "art.ArchitectureDescription",
    "art.Bridge.Ports",
    "art.DispatchPropertyProtocol.Periodic",
    "art.DispatchPropertyProtocol.Sporadic",
    "art.Empty",
    "art.Port[IS[Z, B]]"
  };
  return strings[((Type) type)->type];
}