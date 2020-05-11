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
//         +
// 3 dest  |        -              -              -              -      
// 2 src   |     -              -              -              -         
// 1 pacer |  -              -              -              -            
// 0 dom0  |-- -- -- -------- -- -- -------- -- -- -------- -- -- ------
//         |______________|______________________________________________\time
//           seconds      1              2              3              4 /
//
// Major frame is 1 seconds, since destination has 1 second period
//
const dschedule_t ksDomSchedule[] = { // (1 tick == 2ms)
//    { .domain = 0, .length = 100 }, // all other seL4 threads, init, 200ms
//    { .domain = 1, .length =   5 }, // pacer        10ms
//    { .domain = 0, .length =  95 }, // domain0     190ms
//    { .domain = 2, .length =   5 }, // source       10ms
//    { .domain = 0, .length =  95 }, // domain0     190ms
//    { .domain = 3, .length =   5 }, // destination  10ms
//    { .domain = 0, .length = 195 }, // domain0     390ms

//    { .domain = 0, .length = 100 }, // all other seL4 threads, init, 200ms
//    { .domain = 1, .length =  10 }, // destination+pacer  20ms
//    { .domain = 0, .length =  90 }, // domain0     180ms
//    { .domain = 1, .length =  10 }, // destination+pacer  20ms
//    { .domain = 0, .length =  90 }, // domain0     180ms
//    { .domain = 1, .length =  10 }, // destination+pacer  20ms
//    { .domain = 0, .length = 190 }, // domain0     380ms

/* Default schedule. */
    { .domain = 0, .length = 1 },
#if CONFIG_NUM_DOMAINS > 1
    { .domain = 1, .length = 1 },
#endif
#if CONFIG_NUM_DOMAINS > 2
    { .domain = 2, .length = 1 },
#endif
#if CONFIG_NUM_DOMAINS > 3
    { .domain = 3, .length = 1 },
#endif
#if CONFIG_NUM_DOMAINS > 4
    { .domain = 4, .length = 1 },
#endif
#if CONFIG_NUM_DOMAINS > 5
    { .domain = 5, .length = 1 },
#endif
#if CONFIG_NUM_DOMAINS > 6
    { .domain = 6, .length = 1 },
#endif
#if CONFIG_NUM_DOMAINS > 7
    { .domain = 7, .length = 1 },
#endif
#if CONFIG_NUM_DOMAINS > 8
    { .domain = 8, .length = 1 },
#endif
#if CONFIG_NUM_DOMAINS > 9
    { .domain = 9, .length = 1 },
#endif
#if CONFIG_NUM_DOMAINS > 10
    { .domain = 10, .length = 1 },
#endif
#if CONFIG_NUM_DOMAINS > 11
    { .domain = 11, .length = 1 },
#endif
#if CONFIG_NUM_DOMAINS > 12
    { .domain = 12, .length = 1 },
#endif
#if CONFIG_NUM_DOMAINS > 13
    { .domain = 13, .length = 1 },
#endif
#if CONFIG_NUM_DOMAINS > 14
    { .domain = 14, .length = 1 },
#endif
#if CONFIG_NUM_DOMAINS > 15
    { .domain = 15, .length = 1 },
#endif
#if CONFIG_NUM_DOMAINS > 16
#error Unsupportd number of domains set
#endif

};

const word_t ksDomScheduleLength = sizeof(ksDomSchedule) / sizeof(dschedule_t);
