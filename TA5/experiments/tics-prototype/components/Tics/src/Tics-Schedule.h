// Copyright 2021, Adventium Labs
//
// Temporal Isolation CASE Scheduler (TICS). TICS is a userland scheduler
// running on the seL4 mixed criticality system (MCS) platform. This file
// defines the TICS schedule data structure. An application must supply an
// implentation of the gitTicsSchedule() function to return an instance of a
// Schedule for TICS to run.

#pragma once

#include <stdint.h>
#include <sel4/sel4.h>

// Threads to be scheduled
struct Thread {
    
    // Name of the thread. MUST match the name used interally by the
    // CAmkES tool. For component control threads the pattern is:
    //
    //   COMPONETNAME_0_control
    //
    // The "_0_" looks odd, but its use is hardcoded in the CAmkES tool. If
    // you need other thread names, the safest thing to do is to build your
    // CAmkES project and then look at the instantiated template code in your
    // build directory. The path will be:
    //
    //    BUILDDIR/tics/tcp.template.c
    //
    // Look at the get_tcb_by_name() function. It lists all the thread names.
    char* name;

    // Period notify function to emulate same pattern used for period wait for
    // VM tasks (vmRADIO and VMUXAS) in CASE phase2 tool evaluation 4. Specify
    // NULL if you do not need to send a period notification.  TICS does not
    // require period notifications. Tasks can just use seL4_Yield() to
    // wait for the next period (ie window).
    void (* periodNotifyFn)(int8_t *tickCount);
};

// A window specifies a duraiton of time to run a thread
struct Window {

    // Thread to run. Specifed as an index into Schedule.threads[]. Must be in
    // range [-1..Scuedle.nThreads). Specify -1 for no thread (ie idle).
    int thread;

    // Duration in nano seconds.
    uint64_t dur;
};

// Mode - Static cyclic schedule of windows.
struct Mode {

    // Name of the mode. Purly informational.
    char* name;

    // Number of cycles to run. Must be >= 0. Specify 0 to cycle indefinitly.
    int nCycles;

    // Array of windows to run cyclicly.
    struct Window* windows;

    // Number of Windows
    int nWindows;
};

// Schedule - List of modes
struct Schedule {

    // Arrray of Threads.
    struct Thread* threads;

    // Number of Threads.
    int nThreads;

    // Array of modes.
    struct Mode* modes;

    // Number of Modes.
    int nModes;
};

// Application specific schedule returned by this external function
const struct Schedule* const getTicsSchedule();

