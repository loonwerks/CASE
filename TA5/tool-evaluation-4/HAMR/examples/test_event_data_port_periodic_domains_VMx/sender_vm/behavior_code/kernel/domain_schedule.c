// Copyright 2020 Adventium Labs

// This is a kernel data structure.

#include <config.h>
#include <object/structures.h>
#include <model/statedata.h>

// An arbitrary hand generated schedule. The length is in seL4 ticks
// (2 ms default). This schedule should be generated from the AADL model
// using execution time and data flow latency specifications.
//
// Pacer runs at highest rate
//
// This schedule is single-rate, 1Hz, run each thread at 200ms ticks for simplicity.
// Fill space in with domain 0.
//
// Major frame is 1 seconds, since destination has 1 second period
//
const dschedule_t ksDomSchedule[] = { // (1 tick == 2ms)
    { .domain = 0, .length =   100 }, // all other seL4 threads, init, 200ms
    { .domain = 1, .length =     5 }, // pacer
    { .domain = 0, .length =     1 }, // 
    { .domain = 2, .length =   150 }, // vm src
    { .domain = 0, .length =     1 }, // 
    { .domain = 3, .length =   150 }, // vm dst
    { .domain = 0, .length =     1 }, // 
    { .domain = 4, .length =     5 }, // native dst
    { .domain = 0, .length =    87 }, //
};
//                           +
//                           -----
//                             500 * 2 = 1000

const word_t ksDomScheduleLength = sizeof(ksDomSchedule) / sizeof(dschedule_t);
