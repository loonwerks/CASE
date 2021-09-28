#include <config.h>
#include <object/structures.h>
#include <model/statedata.h>

// this file will not be overwritten and is safe to edit

/************************************************************

   This is a kernel data structure containing an example schedule.
   The length is in seL4 ticks (2 ms).
   This schedule should be generated from the AADL model
   using execution time and data flow latency specifications.

   Pacer runs at highest rate and should always be in domain 1

*/

const int dom0swapTime = 10; 
const int nativeTime = 10;
const int cakemlTime = 10;
const int vmTime = 50;

const dschedule_t ksDomSchedule[] = {
  { .domain = 0, .length = 50 },  // all other seL4 threads, init, 200ms

  { .domain = 1, .length = 5 },  // pacer 10ms.  Should always be in domain 1
  { .domain = 0, .length = dom0swapTime },  // deliver pacer pulses

  { .domain = 2, .length = vmTime }, // RadioDriver_Attestation  
  { .domain = 0, .length = dom0swapTime },  // deliver messages

  { .domain = 3, .length = cakemlTime },  // CASE_AttestationGate  
  { .domain = 0, .length = dom0swapTime },  // deliver messages

  { .domain = 4, .length = nativeTime }, // FlyZonesDatabase  
  { .domain = 0, .length = dom0swapTime },  // deliver messages

  { .domain = 5, .length = cakemlTime },  // CASE_Filter_LST  
  { .domain = 0, .length = dom0swapTime },  // deliver messages

  { .domain = 6, .length = vmTime }, // UxAS  
  { .domain = 0, .length = dom0swapTime },  // deliver messages

  { .domain = 7, .length = cakemlTime }, // CASE_Monitor_Geo 
  { .domain = 0, .length = dom0swapTime },  // deliver messages

  { .domain = 8, .length = nativeTime }, // WaypointPlanManagerService  
  { .domain = 0, .length = dom0swapTime },  // deliver messages

  { .domain = 9, .length = nativeTime },  // UARTDriver  
  { .domain = 0, .length = dom0swapTime },  // deliver messages

  { .domain = 10, .length = nativeTime }, // CASE_Monitor_Req  
};

const word_t ksDomScheduleLength = sizeof(ksDomSchedule) / sizeof(dschedule_t);
