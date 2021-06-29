#include <config.h>
#include <object/structures.h>
#include <model/statedata.h>

// this file will not be overwritten and is safe to edit
#define INPUT 2
#define CASE_MONITOR2 3
#define OUTPUT 4

const dschedule_t ksDomSchedule[] = {
  { .domain = 0, .length = 300 },
  { .domain = 2, .length = 400 },
  { .domain = 0, .length = 40 },
  { .domain = 3, .length = 400 },
  { .domain = 0, .length = 40 },
  { .domain = 4, .length = 400 },
  { .domain = 0, .length = 40 },
  { .domain = 5, .length = 400 },
  { .domain = 0, .length = 40 },
  { .domain = 6, .length = 400 },
  { .domain = 0, .length = 40 },
  { .domain = 7, .length = 400 },
  { .domain = 0, .length = 40 },
  { .domain = 8, .length = 400 },
  { .domain = 0, .length = 40 },
  { .domain = 9, .length = 400 }
};

const word_t ksDomScheduleLength = sizeof(ksDomSchedule) / sizeof(dschedule_t);
