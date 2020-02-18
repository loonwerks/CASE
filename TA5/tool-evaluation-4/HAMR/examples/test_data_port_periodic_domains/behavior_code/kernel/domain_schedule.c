// Copyright 2020 Adventium Labs

// This is a kernal data structure. To get your kernal compiled with this
// domain schedule you need to modify the top level settings.cmake file to have
// these lines.  Make sure you replace the existing "set(KernelNumDomains"
// line.
//
// set(KernelDomainSchedule "${repo_dir}/apps/test_data_port_periodic_domains/behavior_code/kernel/domain_schedule.c" CACHE INTERNAL "")
// set(KernelNumDomains 4 CACHE STRING "" FORCE)

#include <config.h>
#include <object/structures.h>
#include <model/statedata.h>

// An arbitrary hand generated schedule. The lenght is in seL4 ticks
// (2 ms default). This schedule shoule be generated from the AADL
// using execution time and data flow latency specifications.
//
// Pacer runs at highest rate
//
// This schedule is single-rate, 1Hz, every thread 200ms for simplicity
//
//         +
// 3 dest  |        |--|  |        |--|
// 2 src   |     |--|     |     |--|      
// 1 pacer |  |--|        |  |--|         ...
// 0 dom0  |--|        |--|--|        |--|
//         |______________|______________________________________________\time
//           seconds      1              2              3              4 /
//
// Major frame is 1 seconds, since destination has 1 second period
//
const dschedule_t ksDomSchedule[] = { // (1 tick == 2ms)
    { .domain = 0, .length = 100 }, // any other seL4 threads, 200ms
    { .domain = 1, .length = 100 }, // pacer 200ms
    { .domain = 2, .length = 100 }, // source
    { .domain = 3, .length = 100 }, // destination
    { .domain = 0, .length = 100 }, // domain0
};

const word_t ksDomSche uleLength = sizeof(ksDomSchedule) / sizeof(dschedule_t);
