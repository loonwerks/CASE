// Copyright 2019 Adventium Labs

// This is a kernal data structure. To get your kernal compiled with this
// domain schedule you need to modify the top level settings.cmake file to have
// these lines.  Make sure you replace the existing "set(KernelNumDomains"
// line.
//
// set(KernelDomainSchedule "${repo_dir}/apps/Simple_UAV_Example_domains/domain_schedule.c" CACHE INTERNAL "")
// set(KernelNumDomains 5 CACHE STRING "" FORCE) 

#include <config.h>
#include <object/structures.h>
#include <model/statedata.h>

// An arbitrary hand generated schedule. The lenght is in seL4 ticks. This
// schedule shoule be generated from the AADL using execution time and data
// flow latency specifications.
// An arbitrary hand generated schedule. The lenght is in seL4 ticks. This
// schedule shoule be generated from the AADL using execution time and data
// flow latency specifications.
// TODO: It sure would be nice to have a "startup" schedule...
// TODO: ms -> tick conversion here or in generator?
const dschedule_t ksDomSchedule[] = {
    { .domain = 0, .length = 100 }, // any other seL4 threads
    { .domain = 1, .length = 50 },  // RADIO  25ms (1 tick ~= 2ms)
    { .domain = 2, .length = 100 }, // FPLN   50ms
    { .domain = 3, .length = 150 }, // WPM    75ms
    { .domain = 4, .length = 80 },  // UART   40ms
    { .domain = 5, .length = 20 },  // pacer  10ms
};

const word_t ksDomScheduleLength = sizeof(ksDomSchedule) / sizeof(dschedule_t);
