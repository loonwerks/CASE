#include <types.h>

size_t sizeOf(Type t) {
  TYPE type = t->type;
  switch (type) {
    case TTuple2_EC3B57: return sizeof(struct Tuple2_EC3B57); // (Z, Z)
    case THAMR_Simple_V4_Base_Types_Bits_Payload: return sizeof(struct HAMR_Simple_V4_Base_Types_Bits_Payload); // HAMR_Simple_V4.Base_Types.Bits_Payload
    case THAMR_Simple_V4_SW_FlightController_Impl_Initialization_Api: return sizeof(struct HAMR_Simple_V4_SW_FlightController_Impl_Initialization_Api); // HAMR_Simple_V4.SW.FlightController_Impl_Initialization_Api
    case THAMR_Simple_V4_SW_FlightController_Impl_Operational_Api: return sizeof(struct HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api); // HAMR_Simple_V4.SW.FlightController_Impl_Operational_Api
    case THAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge: return sizeof(struct HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge); // HAMR_Simple_V4.SW.FlightController_Impl_SW_FlightController_Bridge
    case THAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge_EntryPoints: return sizeof(struct HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge_EntryPoints); // HAMR_Simple_V4.SW.FlightController_Impl_SW_FlightController_Bridge.EntryPoints
    case THAMR_Simple_V4_SW_FlightPlanner_Impl_Initialization_Api: return sizeof(struct HAMR_Simple_V4_SW_FlightPlanner_Impl_Initialization_Api); // HAMR_Simple_V4.SW.FlightPlanner_Impl_Initialization_Api
    case THAMR_Simple_V4_SW_FlightPlanner_Impl_Operational_Api: return sizeof(struct HAMR_Simple_V4_SW_FlightPlanner_Impl_Operational_Api); // HAMR_Simple_V4.SW.FlightPlanner_Impl_Operational_Api
    case THAMR_Simple_V4_SW_FlightPlanner_Impl_SW_FlightPlanner_Bridge: return sizeof(struct HAMR_Simple_V4_SW_FlightPlanner_Impl_SW_FlightPlanner_Bridge); // HAMR_Simple_V4.SW.FlightPlanner_Impl_SW_FlightPlanner_Bridge
    case THAMR_Simple_V4_SW_FlightPlanner_Impl_SW_FlightPlanner_Bridge_EntryPoints: return sizeof(struct HAMR_Simple_V4_SW_FlightPlanner_Impl_SW_FlightPlanner_Bridge_EntryPoints); // HAMR_Simple_V4.SW.FlightPlanner_Impl_SW_FlightPlanner_Bridge.EntryPoints
    case THAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api: return sizeof(struct HAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api); // HAMR_Simple_V4.SW.RadioDriver_Impl_Initialization_Api
    case THAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api: return sizeof(struct HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api); // HAMR_Simple_V4.SW.RadioDriver_Impl_Operational_Api
    case THAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge: return sizeof(struct HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge); // HAMR_Simple_V4.SW.RadioDriver_Impl_SW_Radio_Bridge
    case THAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge_EntryPoints: return sizeof(struct HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge_EntryPoints); // HAMR_Simple_V4.SW.RadioDriver_Impl_SW_Radio_Bridge.EntryPoints
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
    case TMS_30A5B4: return sizeof(struct MS_30A5B4); // MS[Z, Z]
    case TNone_4E54E3: return sizeof(struct None_4E54E3); // None[HAMR_Simple_V4.SW.FlightController_Impl_Initialization_Api]
    case TNone_2849BF: return sizeof(struct None_2849BF); // None[HAMR_Simple_V4.SW.FlightController_Impl_Operational_Api]
    case TNone_43D596: return sizeof(struct None_43D596); // None[HAMR_Simple_V4.SW.FlightPlanner_Impl_Initialization_Api]
    case TNone_E951B6: return sizeof(struct None_E951B6); // None[HAMR_Simple_V4.SW.FlightPlanner_Impl_Operational_Api]
    case TNone_3F37D3: return sizeof(struct None_3F37D3); // None[HAMR_Simple_V4.SW.RadioDriver_Impl_Initialization_Api]
    case TNone_C64652: return sizeof(struct None_C64652); // None[HAMR_Simple_V4.SW.RadioDriver_Impl_Operational_Api]
    case TNone_3026C5: return sizeof(struct None_3026C5); // None[IS[Z, B]]
    case TNone_5C1355: return sizeof(struct None_5C1355); // None[IS[Z, Z]]
    case TNone_76463B: return sizeof(struct None_76463B); // None[Z]
    case TNone_734370: return sizeof(struct None_734370); // None[art.Bridge]
    case TNone_964667: return sizeof(struct None_964667); // None[art.DataContent]
    case TNone_39BC5F: return sizeof(struct None_39BC5F); // None[art.UPort]
    case TSome_0FF3DD: return sizeof(struct Some_0FF3DD); // Some[HAMR_Simple_V4.SW.FlightController_Impl_Initialization_Api]
    case TSome_FCFE69: return sizeof(struct Some_FCFE69); // Some[HAMR_Simple_V4.SW.FlightController_Impl_Operational_Api]
    case TSome_DAEBD0: return sizeof(struct Some_DAEBD0); // Some[HAMR_Simple_V4.SW.FlightPlanner_Impl_Initialization_Api]
    case TSome_B4F3A8: return sizeof(struct Some_B4F3A8); // Some[HAMR_Simple_V4.SW.FlightPlanner_Impl_Operational_Api]
    case TSome_9E368A: return sizeof(struct Some_9E368A); // Some[HAMR_Simple_V4.SW.RadioDriver_Impl_Initialization_Api]
    case TSome_DDE9FD: return sizeof(struct Some_DDE9FD); // Some[HAMR_Simple_V4.SW.RadioDriver_Impl_Operational_Api]
    case TSome_8D03B1: return sizeof(struct Some_8D03B1); // Some[IS[Z, B]]
    case TSome_488F47: return sizeof(struct Some_488F47); // Some[Z]
    case TSome_482E57: return sizeof(struct Some_482E57); // Some[art.Bridge]
    case TSome_D29615: return sizeof(struct Some_D29615); // Some[art.DataContent]
    case TSome_3E197E: return sizeof(struct Some_3E197E); // Some[art.UPort]
    case TString: return sizeof(struct String); // String
    case Tart_ArchitectureDescription: return sizeof(struct art_ArchitectureDescription); // art.ArchitectureDescription
    case Tart_Bridge_Ports: return sizeof(struct art_Bridge_Ports); // art.Bridge.Ports
    case Tart_Connection: return sizeof(struct art_Connection); // art.Connection
    case Tart_DispatchPropertyProtocol_Periodic: return sizeof(struct art_DispatchPropertyProtocol_Periodic); // art.DispatchPropertyProtocol.Periodic
    case Tart_DispatchPropertyProtocol_Sporadic: return sizeof(struct art_DispatchPropertyProtocol_Sporadic); // art.DispatchPropertyProtocol.Sporadic
    case Tart_Empty: return sizeof(struct art_Empty); // art.Empty
    case Tart_EventTriggered: return sizeof(struct art_EventTriggered); // art.EventTriggered
    case Tart_Port_45E54D: return sizeof(struct art_Port_45E54D); // art.Port[IS[Z, B]]
    case Tart_TimeTriggered: return sizeof(struct art_TimeTriggered); // art.TimeTriggered
    case Tops_ISZOps_A6D40E: return sizeof(struct ops_ISZOps_A6D40E); // ops.ISZOps[Z]
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
    "HAMR_Simple_V4.Base_Types.Bits_Payload",
    "HAMR_Simple_V4.SW.FlightController_Impl_Initialization_Api",
    "HAMR_Simple_V4.SW.FlightController_Impl_Operational_Api",
    "HAMR_Simple_V4.SW.FlightController_Impl_SW_FlightController_Bridge",
    "HAMR_Simple_V4.SW.FlightController_Impl_SW_FlightController_Bridge.EntryPoints",
    "HAMR_Simple_V4.SW.FlightPlanner_Impl_Initialization_Api",
    "HAMR_Simple_V4.SW.FlightPlanner_Impl_Operational_Api",
    "HAMR_Simple_V4.SW.FlightPlanner_Impl_SW_FlightPlanner_Bridge",
    "HAMR_Simple_V4.SW.FlightPlanner_Impl_SW_FlightPlanner_Bridge.EntryPoints",
    "HAMR_Simple_V4.SW.RadioDriver_Impl_Initialization_Api",
    "HAMR_Simple_V4.SW.RadioDriver_Impl_Operational_Api",
    "HAMR_Simple_V4.SW.RadioDriver_Impl_SW_Radio_Bridge",
    "HAMR_Simple_V4.SW.RadioDriver_Impl_SW_Radio_Bridge.EntryPoints",
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
    "MS[Z, Z]",
    "None[HAMR_Simple_V4.SW.FlightController_Impl_Initialization_Api]",
    "None[HAMR_Simple_V4.SW.FlightController_Impl_Operational_Api]",
    "None[HAMR_Simple_V4.SW.FlightPlanner_Impl_Initialization_Api]",
    "None[HAMR_Simple_V4.SW.FlightPlanner_Impl_Operational_Api]",
    "None[HAMR_Simple_V4.SW.RadioDriver_Impl_Initialization_Api]",
    "None[HAMR_Simple_V4.SW.RadioDriver_Impl_Operational_Api]",
    "None[IS[Z, B]]",
    "None[IS[Z, Z]]",
    "None[Z]",
    "None[art.Bridge]",
    "None[art.DataContent]",
    "None[art.UPort]",
    "Some[HAMR_Simple_V4.SW.FlightController_Impl_Initialization_Api]",
    "Some[HAMR_Simple_V4.SW.FlightController_Impl_Operational_Api]",
    "Some[HAMR_Simple_V4.SW.FlightPlanner_Impl_Initialization_Api]",
    "Some[HAMR_Simple_V4.SW.FlightPlanner_Impl_Operational_Api]",
    "Some[HAMR_Simple_V4.SW.RadioDriver_Impl_Initialization_Api]",
    "Some[HAMR_Simple_V4.SW.RadioDriver_Impl_Operational_Api]",
    "Some[IS[Z, B]]",
    "Some[Z]",
    "Some[art.Bridge]",
    "Some[art.DataContent]",
    "Some[art.UPort]",
    "String",
    "art.ArchitectureDescription",
    "art.Bridge.Ports",
    "art.Connection",
    "art.DispatchPropertyProtocol.Periodic",
    "art.DispatchPropertyProtocol.Sporadic",
    "art.Empty",
    "art.EventTriggered",
    "art.Port[IS[Z, B]]",
    "art.TimeTriggered",
    "ops.ISZOps[Z]"
  };
  return strings[((Type) type)->type];
}