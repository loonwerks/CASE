#include <config.h>
#include <object/structures.h>
#include <model/statedata.h>

// this file will not be overwritten and is safe to edit
#define INPUT 2
#define CASE_MONITOR2 3
#define OUTPUT 4

const dschedule_t ksDomSchedule[] = { // 1 tick == 2ms
  { .domain = 0, .length = 200 },
  { .domain = 1, .length = 60  },   // Pacer
  { .domain = 0, .length = 40  },
  { .domain = 2, .length = 100 },   //  Attestation Tester
  { .domain = 0, .length = 40  },
  { .domain = 3, .length = 100 },   //  Radio
  { .domain = 0, .length = 40  },
  { .domain = 4, .length = 100 },   // Attestation Manager
  { .domain = 0, .length = 40  },
  { .domain = 5, .length = 100 },   // Attestation Gate
  { .domain = 0, .length = 40  },
  { .domain = 6, .length = 100 },   // Filter
  { .domain = 0, .length = 40  },
  { .domain = 7, .length = 500 },   // Flight Planner
  { .domain = 0, .length = 40  },
  { .domain = 8, .length = 100 },   // Monitor
  { .domain = 0, .length = 40  },
  { .domain = 9, .length = 100 }    //  Flight Controller
  // Total                1380 ticks:2760ms
};

const word_t ksDomScheduleLength = sizeof(ksDomSchedule) / sizeof(dschedule_t);
