#ifndef CONVERSION_H
#define CONVERSION_H

#include <all.h>
#include <sb_PROC_HW_types.h>

void convertTo_bool(uav_project_extern_Base_Types_Boolean_Payload, bool*);
void convertTo_SW__Command_Impl(uav_project_extern_SW_Command_Impl_Payload, SW__Command_Impl*);
void convertTo_int64_t(uav_project_extern_Base_Types_Integer_64_Payload, int64_t*);
void convertTo_sb_SW__Mission_container(uav_project_extern_SW_Mission_Payload, sb_SW__Mission_container*);
void convertTo_sb_SW__MissionWindow_container(uav_project_extern_SW_MissionWindow_Payload, sb_SW__MissionWindow_container*);

void convertTo_uav_project_extern_Base_Types_Boolean_Payload(bool, uav_project_extern_Base_Types_Boolean_Payload);
void convertTo_uav_project_extern_SW_Command_Impl_Payload(SW__Command_Impl, uav_project_extern_SW_Command_Impl_Payload);
void convertTo_uav_project_extern_Base_Types_Integer_64_Payload(int64_t, uav_project_extern_Base_Types_Integer_64_Payload);
void convertTo_uav_project_extern_SW_Mission_Payload(sb_SW__Mission_container, uav_project_extern_SW_Mission_Payload);
void convertTo_uav_project_extern_SW_MissionWindow_Payload(sb_SW__MissionWindow_container, uav_project_extern_SW_MissionWindow_Payload);

#endif