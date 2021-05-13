// This file will be regenerated, do not edit

#include <sb_FlyZoneDatabase_Impl.h>
#include <FlyZoneDatabase_Impl_SW_FlyZones_FlyZoneDatabase_adapter.h>
#include <string.h>
#include <camkes.h>

seqNum_t sb_FlyZones_seqNum;

bool sb_FlyZones_write(const union_art_DataContent * value) {
  return write_sp_union_art_DataContent(sb_FlyZones, value, &sb_FlyZones_seqNum);
}

// send FlyZones: Out DataPort SW__MapArray
Unit HAMR_SW_FlyZoneDatabase_Impl_SW_FlyZones_FlyZoneDatabase_seL4Nix_FlyZones_Send(
  STACK_FRAME
  art_DataContent d) {
  DeclNewStackFrame(caller, "sb_FlyZoneDatabase_Impl.c", "", "HAMR_SW_FlyZoneDatabase_Impl_SW_FlyZones_FlyZoneDatabase_seL4Nix_FlyZones_Send", 0);

  sb_FlyZones_write(d);
}

void pre_init(void) {
  DeclNewStackFrame(NULL, "sb_FlyZoneDatabase_Impl.c", "", "pre_init", 0);

  printf("Entering pre-init of FlyZoneDatabase_Impl_SW_FlyZones_FlyZoneDatabase\n");

  // initialise data structure for data port FlyZones
  init_sp_union_art_DataContent(sb_FlyZones, &sb_FlyZones_seqNum);

  // initialise slang-embedded components/ports
  HAMR_SW_FlyZoneDatabase_Impl_SW_FlyZones_FlyZoneDatabase_adapter_initialiseArchitecture(SF_LAST);

  // call the component's initialise entrypoint
  HAMR_SW_FlyZoneDatabase_Impl_SW_FlyZones_FlyZoneDatabase_adapter_initialiseEntryPoint(SF_LAST);

  printf("Leaving pre-init of FlyZoneDatabase_Impl_SW_FlyZones_FlyZoneDatabase\n");
}

/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {
  DeclNewStackFrame(NULL, "sb_FlyZoneDatabase_Impl.c", "", "run", 0);

  MUTEXOP(sb_dispatch_sem_wait())
  for(;;) {
    MUTEXOP(sb_dispatch_sem_wait())
    // call the component's compute entrypoint
    HAMR_SW_FlyZoneDatabase_Impl_SW_FlyZones_FlyZoneDatabase_adapter_computeEntryPoint(SF_LAST);
  }
  return 0;
}
