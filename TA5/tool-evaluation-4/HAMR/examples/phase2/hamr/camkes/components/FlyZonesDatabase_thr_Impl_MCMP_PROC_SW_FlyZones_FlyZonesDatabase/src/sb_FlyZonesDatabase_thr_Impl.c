// This file will be regenerated, do not edit

#include <sb_FlyZonesDatabase_thr_Impl.h>
#include <FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_adapter.h>
#include <string.h>
#include <camkes.h>

seqNum_t sb_keep_out_zones_seqNum;

seqNum_t sb_keep_in_zones_seqNum;

bool sb_keep_in_zones_write(const union_art_DataContent * value) {
  return write_sp_union_art_DataContent(sb_keep_in_zones, value, &sb_keep_in_zones_seqNum);
}

bool sb_keep_out_zones_write(const union_art_DataContent * value) {
  return write_sp_union_art_DataContent(sb_keep_out_zones, value, &sb_keep_out_zones_seqNum);
}

// send keep_in_zones: Out DataPort CMASI__Polygon_i
Unit hamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_seL4Nix_keep_in_zones_Send(
  STACK_FRAME
  art_DataContent d) {
  DeclNewStackFrame(caller, "sb_FlyZonesDatabase_thr_Impl.c", "", "hamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_seL4Nix_keep_in_zones_Send", 0);

  sb_keep_in_zones_write(d);
}

// send keep_out_zones: Out DataPort CMASI__Polygon_i
Unit hamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_seL4Nix_keep_out_zones_Send(
  STACK_FRAME
  art_DataContent d) {
  DeclNewStackFrame(caller, "sb_FlyZonesDatabase_thr_Impl.c", "", "hamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_seL4Nix_keep_out_zones_Send", 0);

  sb_keep_out_zones_write(d);
}

void pre_init(void) {
  DeclNewStackFrame(NULL, "sb_FlyZonesDatabase_thr_Impl.c", "", "pre_init", 0);

  printf("Entering pre-init of FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase\n");

  // initialise data structure for data port keep_in_zones
  init_sp_union_art_DataContent(sb_keep_in_zones, &sb_keep_in_zones_seqNum);

  // initialise data structure for data port keep_out_zones
  init_sp_union_art_DataContent(sb_keep_out_zones, &sb_keep_out_zones_seqNum);

  // initialise slang-embedded components/ports
  hamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_adapter_initialiseArchitecture(SF_LAST);

  // call the component's initialise entrypoint
  hamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_adapter_initialiseEntryPoint(SF_LAST);

  printf("Leaving pre-init of FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase\n");
}

/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {
  DeclNewStackFrame(NULL, "sb_FlyZonesDatabase_thr_Impl.c", "", "run", 0);

  sb_pacer_notification_wait();
  for(;;) {
    sb_pacer_notification_wait();
    // call the component's compute entrypoint
    hamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_adapter_computeEntryPoint(SF_LAST);
  }
  return 0;
}
