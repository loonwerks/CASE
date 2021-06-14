#include <Output_impl_Output_Output_api.h>
#include <Output_impl_Output_Output.h>
#include <ext.h>

#define MAX_SIZE numBytes_CASE_MONITOR2_TEST_ADSB_Types_MonitorReport_impl

unsigned bigEndian_2_littleEndian_3_byte(unsigned i) {
  uint8_t *ptr = (uint8_t *)(&i);
  uint8_t tmp = *(ptr + 2);
  *(ptr + 2) = *ptr;
  *ptr = tmp;
  return i;
}

void dump_raw(uint8_t report[]) {
  int i = 0;
  while (i < MAX_SIZE) {
    printf("%02x", report[i++]);
  }
  printf("\n");
}

void dump_monitor_report(uint8_t report[]) {
  int i = 0;
  printf("messageID : %u\n", report[i++]);
  printf("monitorID : %u\n", report[i++]);
  i += 2; // two-bytes "spare"
  printf("SuspectTraffic : ([index |-> Address, ParticipantAddress]) \n");
  unsigned target_identity = *((unsigned *)(report + i));
  int index = 0; 
  while (i < MAX_SIZE) {
    if (target_identity != 0) {
      uint8_t address = (target_identity & 0x0F);
      uint32_t participantAddress = 
        bigEndian_2_littleEndian_3_byte(target_identity >> 8);
      printf("\t[%d |-> %u, 0%o]\n", index, address, participantAddress); 
    }
    i += 4;
    index += 1;
    target_identity = *((unsigned *)(report + i));
  }
}

Unit CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Output_Output_initialise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Output_impl_Output_Output.c", "", "CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Output_Output_initialise_", 0);

  // examples of api setter and logging usage

  // api_logInfo__CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Output_Output(SF string("Example logInfo"));

  // api_logDebug__CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Output_Output(SF string("Example logDebug"));

  // api_logError__CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Output_Output(SF string("Example logError"));
}

Unit CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Output_Output_finalise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Output_impl_Output_Output.c", "", "CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Output_Output_finalise_", 0);
}

Unit CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Output_Output_timeTriggered_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Output_impl_Output_Output.c", "", "CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Output_Output_timeTriggered_", 0);

  // examples of api getter usage

  uint8_t t0[numBytes_CASE_MONITOR2_TEST_ADSB_Types_MonitorReport_impl];
  size_t t0_numBits;
  if(api_get_Suspect_Traffic_Out__CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Output_Output(SF &t0_numBits, t0)) {
    // sanity check
    sfAssert(SF (Z) t0_numBits == numBits_CASE_MONITOR2_TEST_ADSB_Types_MonitorReport_impl, "numBits received does not match expected");
    // dump_raw(t0);
    dump_monitor_report(t0);
    printf("\n");
    // DeclNewString(Suspect_Traffic_Out_str);
    // String__append(SF (String) &Suspect_Traffic_Out_str, string("Received on Suspect_Traffic_Out: "));
    // byte_array_string(SF (String) &Suspect_Traffic_Out_str, t0, numBytes_CASE_MONITOR2_TEST_ADSB_Types_MonitorReport_impl);
    // api_logInfo__CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Output_Output(SF (String) &Suspect_Traffic_Out_str);
  }
}
