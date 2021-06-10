#include <FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_api.h>
#include <FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase.h>
#include <ext.h>

// This file will not be overwritten so is safe to edit

// https://github.com/loonwerks/case-ta6-platform-assessment-camkes-apps/blob/master/apps/case-uav-step6/components/GeofenceMonitor/src/geofence_monitor_ffi.c#L55
uint8_t isaacKeepInZone[] = {0x40, 0x46, 0xA6, 0x73, 0x7F, 0x91, 0x58, 0x22, 
                             0xC0, 0x5E, 0x40, 0xF1, 0x55, 0xC9, 0x5C, 0x81, 
                             0x44, 0x7A, 0x00, 0x00, 
                             0x00, 0x00, 0x00, 0x01,
                             0x40, 0x46, 0xAC, 0x33, 0x4C, 0x34, 0xCA, 0x58, 
                             0xC0, 0x5E, 0x3A, 0x66, 0xB8, 0x6D, 0xFA, 0x7D, 
                             0x44, 0x7A, 0x00, 0x00, 
                             0x00, 0x00, 0x00, 0x01};
// [@,F,�,s,,�,X,",�,^,@,�,U,�,\,�,D,z, , , , , ,,@,F,�,3,L,4,�,X,�,^,:,f,�,m,�,},D,z, , , , , ,,]
static size_t numBitsisaacKeepInZone = (int) sizeof(isaacKeepInZone) * 8;

// https://github.com/loonwerks/case-ta6-platform-assessment-camkes-apps/blob/master/apps/case-uav-step6/components/GeofenceMonitor/src/geofence_monitor_ffi.c#L71
uint8_t isaacKeepOutZone[] = {0x40, 0x46, 0xAA, 0xA1, 0xB1, 0xAD, 0xC6, 0xD5, 
                              0xC0, 0x5E, 0x3C, 0x09, 0xC2, 0xEB, 0xA6, 0x0C, 
                              0x44, 0x7A, 0x00, 0x00, 
                              0x00, 0x00, 0x00, 0x01,
                              0x40, 0x46, 0xAA, 0xFA, 0x00, 0x85, 0xEC, 0xB9, 
                              0xC0, 0x5E, 0x3B, 0xCA, 0xF3, 0x58, 0x81, 0xEB, 
                              0x44, 0x7A, 0x00, 0x00, 
                              0x00, 0x00, 0x00, 0x01};
// [@,F,�,�,�,�,�,�,�,^,<,	,�,�,,D,z, , , , , ,,@,F,�,�, ,�,�,�,^,;,�,�,X,�,�,D,z, , , , , ,,]
                              
static size_t numBitsisaacKeepOutZone = (int) sizeof(isaacKeepOutZone) * 8;

Unit hamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_initialise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase.c", "", "hamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_initialise_", 0);
/*
  // examples of api setter and logging usage
  uint8_t t0[numBytes_hamr_CMASI_Polygon_i];
  byte_array_default(SF t0, numBits_hamr_CMASI_Polygon_i, numBytes_hamr_CMASI_Polygon_i);
  api_put_keep_in_zones__hamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase(SF numBits_hamr_CMASI_Polygon_i, t0);
  uint8_t t1[numBytes_hamr_CMASI_Polygon_i];
  byte_array_default(SF t1, numBits_hamr_CMASI_Polygon_i, numBytes_hamr_CMASI_Polygon_i);
  api_put_keep_out_zones__hamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase(SF numBits_hamr_CMASI_Polygon_i, t1);
  api_logInfo__hamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase(SF string("Example logInfo"));
  api_logDebug__hamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase(SF string("Example logDebug"));
  api_logError__hamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase(SF string("Example logError"));
  */
}

Unit hamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_finalise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase.c", "", "hamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_finalise_", 0);
}

Unit hamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_timeTriggered_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase.c", "", "hamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_timeTriggered_", 0);

  api_put_keep_in_zones__hamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase(SF
    numBitsisaacKeepInZone, isaacKeepInZone);
  
  api_put_keep_out_zones__hamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase(SF
    numBitsisaacKeepOutZone, isaacKeepOutZone);
  
}
