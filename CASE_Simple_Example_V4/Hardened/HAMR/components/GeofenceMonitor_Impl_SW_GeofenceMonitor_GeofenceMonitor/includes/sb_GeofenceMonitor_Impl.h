// This file will be regenerated, do not edit

#ifndef SB_GEOFENCEMONITOR_IMPL_H
#define SB_GEOFENCEMONITOR_IMPL_H

#include <sb_types.h>

bool sb_FlyZones_read(union_art_DataContent * value);

bool sb_FlightPlan_In_dequeue(union_art_DataContent *);

bool sb_FlightPlan_Out_enqueue(const union_art_DataContent *);

bool sb_Alert_enqueue(void);

#endif // SB_GEOFENCEMONITOR_IMPL_H
