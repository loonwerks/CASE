#include <types.h>

size_t sizeOf(Type t);

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
    "(Z, art.DataContent)",
    "IS[Z, (Z, Z)]",
    "IS[Z, String]",
    "IS[Z, Z]",
    "IS[Z, art.UConnection]",
    "IS[Z, art.UPort]",
    "IS[Z, uav_project_extern.SW.Coordinate_Impl]",
    "MNone[art.Bridge]",
    "MS[Z, IS[Z, (Z, Z)]]",
    "MS[Z, IS[Z, Z]]",
    "MS[Z, MOption[art.Bridge]]",
    "MS[Z, Option[art.DataContent]]",
    "MS[Z, Option[art.UPort]]",
    "MS[Z, Z]",
    "MS[Z, art.Bridge]",
    "MSome[art.Bridge]",
    "None[(Z, art.DataContent)]",
    "None[Z]",
    "None[art.DataContent]",
    "None[art.UPort]",
    "None[uav_project_extern.SW.Mission]",
    "Some[(Z, art.DataContent)]",
    "Some[Z]",
    "Some[art.DataContent]",
    "Some[art.UPort]",
    "Some[uav_project_extern.SW.Mission]",
    "String",
    "art.ArchitectureDescription",
    "art.Bridge.Ports",
    "art.Connection[B]",
    "art.Connection[S64]",
    "art.Connection[uav_project_extern.SW.Command_Impl]",
    "art.Connection[uav_project_extern.SW.MissionWindow]",
    "art.Connection[uav_project_extern.SW.Mission]",
    "art.DispatchPropertyProtocol.Periodic",
    "art.DispatchPropertyProtocol.Sporadic",
    "art.Empty",
    "art.EventTriggered",
    "art.Port[B]",
    "art.Port[S64]",
    "art.Port[uav_project_extern.SW.Command_Impl]",
    "art.Port[uav_project_extern.SW.MissionWindow]",
    "art.Port[uav_project_extern.SW.Mission]",
    "art.TimeTriggered",
    "uav_project_extern.Base_Types.Boolean_Payload",
    "uav_project_extern.Base_Types.Integer_64_Payload",
    "uav_project_extern.SW.Command_Impl",
    "uav_project_extern.SW.Command_Impl_Payload",
    "uav_project_extern.SW.Coordinate_Impl",
    "uav_project_extern.SW.FlightPlanner_Impl_Bridge",
    "uav_project_extern.SW.FlightPlanner_Impl_Bridge.Api",
    "uav_project_extern.SW.FlightPlanner_Impl_Bridge.EntryPoints",
    "uav_project_extern.SW.FlightPlanner_Impl_Impl",
    "uav_project_extern.SW.Map",
    "uav_project_extern.SW.Mission",
    "uav_project_extern.SW.MissionWindow",
    "uav_project_extern.SW.MissionWindow_Payload",
    "uav_project_extern.SW.Mission_Payload",
    "uav_project_extern.SW.RadioDriver_Impl_Bridge",
    "uav_project_extern.SW.RadioDriver_Impl_Bridge.Api",
    "uav_project_extern.SW.RadioDriver_Impl_Bridge.EntryPoints",
    "uav_project_extern.SW.RadioDriver_Impl_Impl",
    "uav_project_extern.SW.UARTDriver_Impl_Bridge",
    "uav_project_extern.SW.UARTDriver_Impl_Bridge.Api",
    "uav_project_extern.SW.UARTDriver_Impl_Bridge.EntryPoints",
    "uav_project_extern.SW.UARTDriver_Impl_Impl",
    "uav_project_extern.SW.WaypointManager_Impl_Bridge",
    "uav_project_extern.SW.WaypointManager_Impl_Bridge.Api",
    "uav_project_extern.SW.WaypointManager_Impl_Bridge.EntryPoints",
    "uav_project_extern.SW.WaypointManager_Impl_Impl"
  };
  return strings[((Type) type)->type];
}