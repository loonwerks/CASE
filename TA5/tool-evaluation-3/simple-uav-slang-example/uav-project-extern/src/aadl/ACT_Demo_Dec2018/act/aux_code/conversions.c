#include <conversions.h>

void convertTo_bool(uav_project_extern_Base_Types_Boolean_Payload src, bool* dest){
  *dest = src->value;
}

void convertTo_SW__Command_Impl(uav_project_extern_SW_Command_Impl_Payload src, SW__Command_Impl* dest){
  struct IS_83A978 is = src->value.Map.value;

  for(int i = 0; i < 4; i++) {
    SW__Coordinate_Impl c0 = {is.value[i].lat, is.value[i].longitude, is.value[i].alt};
    memcpy(&(dest->Map[i]), &c0, sizeof(struct SW__Coordinate_Impl));
  }

  dest->Pattern = (SW__FlightPattern) src->value.Pattern;
  dest->HMAC = (bool) src->value.HMAC;
}

void convertTo_int64_t(uav_project_extern_Base_Types_Integer_64_Payload src, int64_t* dest){
  *dest = src->value;
}

void convertTo_sb_SW__Mission_container(uav_project_extern_SW_Mission_Payload src, sb_SW__Mission_container* dest){
  struct IS_83A978 coords = src->value.value;

  for(int i = 0; i < 10; i++) {
    SW__Coordinate_Impl c0 = {coords.value[i].lat, coords.value[i].longitude, coords.value[i].alt};
    memcpy(&(dest->f[i]), &c0, sizeof(SW__Coordinate_Impl));
  }
}

void convertTo_sb_SW__MissionWindow_container(uav_project_extern_SW_MissionWindow_Payload src, sb_SW__MissionWindow_container* dest){
  struct IS_83A978 coords = src->value.value;

  for(int i = 0; i < 4; i++) {
    SW__Coordinate_Impl c0 = {coords.value[i].lat, coords.value[i].longitude, coords.value[i].alt};
    memcpy(&(dest->f[i]), &c0, sizeof(struct SW__Coordinate_Impl));
  }
}


void convertTo_uav_project_extern_Base_Types_Boolean_Payload(bool src, uav_project_extern_Base_Types_Boolean_Payload dest){
  uav_project_extern_Base_Types_Boolean_Payload_apply(SF dest, src);
}

void convertTo_uav_project_extern_SW_Command_Impl_Payload(SW__Command_Impl src, uav_project_extern_SW_Command_Impl_Payload dest){
  DeclNewIS_83A978(is);
  is.size = (int8_t) 4;

  for(int i = 0; i < 4; i++){
    DeclNewuav_project_extern_SW_Coordinate_Impl(c0);
    uav_project_extern_SW_Coordinate_Impl_apply(SF &c0, src.Map[i].lat, src.Map[i].longitude, src.Map[i].alt);
    Type_assign(&is.value[i], &c0, sizeof(struct uav_project_extern_SW_Coordinate_Impl));
  }

  DeclNewuav_project_extern_SW_Map(sw_map);
  uav_project_extern_SW_Map_apply(SF &sw_map, &is);

  uav_project_extern_SW_FlightPattern pattern = src.Pattern;

  bool HMAC = src.HMAC;

  DeclNewuav_project_extern_SW_Command_Impl(slang_command);
  uav_project_extern_SW_Command_Impl_apply(SF &slang_command, &sw_map, pattern, HMAC);

  uav_project_extern_SW_Command_Impl_Payload_apply(SF
    (uav_project_extern_SW_Command_Impl_Payload) dest,
    (uav_project_extern_SW_Command_Impl) &slang_command);
}

void convertTo_uav_project_extern_Base_Types_Integer_64_Payload(int64_t src, uav_project_extern_Base_Types_Integer_64_Payload dest){
  uav_project_extern_Base_Types_Integer_64_Payload_apply(SF dest, src);
}

void convertTo_uav_project_extern_SW_Mission_Payload(sb_SW__Mission_container src, uav_project_extern_SW_Mission_Payload dest){
  DeclNewIS_83A978(is);
  is.size = (int8_t) 10;

  for(int i = 0; i < 10; i++) {
    DeclNewuav_project_extern_SW_Coordinate_Impl(c0);
    uav_project_extern_SW_Coordinate_Impl_apply(SF &c0, src.f[i].lat, src.f[i].longitude, src.f[i].alt);
    Type_assign(&is.value[i], &c0, sizeof(struct uav_project_extern_SW_Coordinate_Impl));
  }

  DeclNewuav_project_extern_SW_Mission(slang_mission);
  uav_project_extern_SW_Mission_apply(SF &slang_mission, &is);

  uav_project_extern_SW_Mission_Payload_apply(SF dest, &slang_mission);
}

void convertTo_uav_project_extern_SW_MissionWindow_Payload(sb_SW__MissionWindow_container src, uav_project_extern_SW_MissionWindow_Payload dest){
  DeclNewIS_83A978(is);
  is.size = (int8_t) 4;

  for(int i = 0; i < 4; i++) {
    DeclNewuav_project_extern_SW_Coordinate_Impl(c0);
    uav_project_extern_SW_Coordinate_Impl_apply(SF &c0, src.f[i].lat, src.f[i].longitude, src.f[i].alt);
    Type_assign(&is.value[i], &c0, sizeof(struct uav_project_extern_SW_Coordinate_Impl));
  }

  DeclNewuav_project_extern_SW_MissionWindow(slang_mission_window);
  uav_project_extern_SW_MissionWindow_apply(SF &slang_mission_window, (IS_83A978) (&is));

  uav_project_extern_SW_MissionWindow_Payload_apply(SF dest, &slang_mission_window);
}