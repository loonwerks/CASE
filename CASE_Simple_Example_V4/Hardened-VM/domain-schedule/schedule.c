#include <config.h>
#include <object/structures.h>
#include <model/statedata.h>

// this file will not be overwritten and is safe to edit
#define INPUT 2
#define CASE_MONITOR2 3
#define OUTPUT 4

const dschedule_t ksDomSchedule[] = { // 1 tick == 2ms
  { .domain = 0, .length = 80 },  // 160ms  domain 0
  { .domain = 1, .length = 5 },   //  10ms  pacer
  { .domain = 0, .length = 20 },  //  40ms  domain 0
  { .domain = 2, .length = 5 },   //  10ms  Attestation Tester
  { .domain = 0, .length = 20 },  //  40ms  domain 0
  { .domain = 3, .length = 20 },  //  40ms  Radio
  { .domain = 0, .length = 20 },  //  40ms  domain 0
  { .domain = 4, .length = 5 },   //  10ms  Attestation Manager
  { .domain = 0, .length = 20 },  //  40ms  domain 0
  { .domain = 5, .length = 5 },   //  10ms  Attestation Gate
  { .domain = 0, .length = 20 },  //  40ms  domain 0
  { .domain = 6, .length = 5 },   //  10ms  Filter
  { .domain = 0, .length = 20 },  //  40ms  domain 0
  { .domain = 7, .length = 190 }, // 380ms  Flight Planner
  { .domain = 0, .length = 20 },  //  40ms  domain 0
  { .domain = 8, .length = 5 },   //  10ms  Monitor
  { .domain = 0, .length = 20 },  //  40ms  domain 0
  { .domain = 9, .length = 20 }   //  40ms  Flight Controller
  // Total                500 ticks:1000ms
};

const word_t ksDomScheduleLength = sizeof(ksDomSchedule) / sizeof(dschedule_t);
