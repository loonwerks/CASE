// Copyright 2020 Adventium Labs

// This is a kernel data structure. 

#include <config.h>
#include <object/structures.h>
#include <model/statedata.h>

// An arbitrary hand generated schedule. The length is in seL4 ticks
// (2 ms default). This schedule should be generated from the AADL model
// using execution time and data flow latency specifications.
//
// This schedule is single-rate, 1Hz, run each thread within 200ms windows
// This will provide room to slot in other test examples without perturbing
//   this particular example.
// Fill space in with domain 0.
//
//         +
// 2 dest  |     -              -              -              -      
// 1 src   |  -              -              -              -         
// 0 dom0  |-- -- ----------- -- ----------- -- ----------- -- ---------
//         |______________|______________________________________________\time
//           seconds      1              2              3              4 /
//
// Major frame is 1 seconds, since destination has 1 second period
//
const dschedule_t ksDomSchedule[] = { // (1 tick == 2ms)
    { .domain = 0, .length = 100 }, //   all other seL4 threads, init, 200ms
    { .domain = 1, .length =   1 }, //   source        2ms
    { .domain = 0, .length =  99 }, //   domain0     198ms
    { .domain = 2, .length =   1 }, //   destination   2ms
    { .domain = 0, .length = 349 }, //   domain0     198ms + 500ms
                                    // + _________________________
                                    ///  frame      1000ms
};

const word_t ksDomScheduleLength = sizeof(ksDomSchedule) / sizeof(dschedule_t);
