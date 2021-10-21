// Copyright 2021, Adventium Labs
//
// Temporal Isolation CASE Scheduler (TICS). TICS is a userland scheduler
// running on the seL4 mixed criticality system (MCS) platform. It runs threads
// in a statc cyclic schedule with fixed duration windows. This file contains
// the implementation of the TICS as a CAmkES component.

// Override log level for this file. Comment to get application default.
#define ZF_LOG_LEVEL ZF_LOG_VERBOSE

#include <utils/zf_log.h>
#include <sel4utils/sel4_zf_logif.h>

#include <camkes.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>

#include <sel4/sel4.h>
#include <sel4runtime.h>
#include <sel4utils/mcs_api.h>

#include <tcb.template.h>

#include <Tics-Schedule.h>

// Dynamic thread data
struct ThreadInfo {
    // Cooresponding thread.
    struct Thread* thread;
    // Tick counter to emulate same pattern used for period wait for VM tasks
    // (vmRADIO and VMUXAS) in CASE phase2 tool evaluation 4.
    int8_t tickCount;
    // Thread's TCB capability. Cashed to avoid calling get_tcb_by_name() repeatedly.
    seL4_CPtr tcb;
    // Thread's Sched Context capability. Cashed to avoid calling get_sc_by_name() repeatedly.
    seL4_CPtr sc;
};

struct ThreadInfo* initThreadInfos(const struct Schedule* const sched) {
    // Allocate global cach of ThreadsInfos
    struct ThreadInfo* const threadInfos
        = (struct ThreadInfo*) malloc(sched->nThreads * sizeof(struct ThreadInfo));

    // Initialize threadInfos
    struct Thread* thread = sched->threads;
    for (int t = 0; t < sched->nThreads; t++, thread++) {

        const char* const name = thread->name;

        threadInfos[t].thread = thread;

        threadInfos[t].tickCount = 0;

        seL4_CPtr tcb = get_tcb_by_name(name);
        ZF_LOGF_IF(!tcb, "Failed to get TCB by name: %s", name);
        threadInfos[t].tcb = tcb;

        seL4_CPtr sc = get_sc_by_name(name);
        ZF_LOGF_IF(!sc, "Failed to get SC by name: %s", name);
        threadInfos[t].sc = sc;

    }
    
    return threadInfos;
}

// Check that mode is valid. Fatal error if not valid.
void checkMode(const struct Schedule* const sched, const struct Mode* const mode) {
    struct Window* window = mode->windows;
    for (int w = 0; w < mode->nWindows; w++, window++) {
        // Check for legal thread ref in range [-1..N_TASK)
        int wThread = window->thread;
        if ( !(-1 <= wThread && wThread < sched->nThreads) ) {
            ZF_LOGF("Bad thread reference. mode=%s window=%d thread=%d", mode->name, w, wThread);
        }
        // Check for legal duration
        if ( !(0 < window->dur) ) {
            ZF_LOGF("Window duration must be > 0. mode=%s window=%d dur=%d", mode->name, w, window->dur);
        }
    }
    // Check for legal nCycles
    if ( !(0 <= mode->nCycles) ) {
        ZF_LOGF("Mode nCycles must be >= 0. mode=%s nCycles=%d", mode->name, mode->nCycles);
    }            
}

// Check that schedule is valid. Fatal error if not valid.
void checkSchedule(const struct Schedule* const sched) {
    struct Mode* mode = sched->modes;
    for (int m = 0; m < sched->nModes; m++, mode++) {
        checkMode(sched, mode);
        // All but last mode must have 0 < nCycles 
        if ( (m < sched->nModes - 1) && !(0 < mode->nCycles) ) {
            ZF_LOGF("Only last mode can have nCycles=0. mode=%s nCycles=%d", mode->name, mode->nCycles);
        }
    }
}

// Unbind a schedule context (SC) from a thread.
void unbindThreadSc(const struct ThreadInfo* const threadInfo) {
    int error = seL4_SchedContext_Unbind(threadInfo->sc);
    ZF_LOGF_IF(error, "Failed to unbind sched context for thread: %s", threadInfo->thread->name);
}

// Unbind schedule contexts (SC) for all threads.
void unbindAllThreadSc(const struct Schedule* const sched, const struct ThreadInfo* const threadInfos) {
    const struct ThreadInfo* threadInfo = threadInfos;
    for (int t = 0; t < sched->nThreads; t++, threadInfo++) {
        unbindThreadSc(threadInfo);
    }
}

// Run a mode's window schedule. Returns when specified number of cylcle has
// been completed. Runs indefinitly when mode nCycles is zero.
void runMode(const struct Schedule* const sched,
             const struct Mode* const mode,
             struct ThreadInfo* const threadInfos
             ) {
    const char* const schedName = mode->name;
    const struct Window* const winSched = mode->windows;
    const int nWin = mode->nWindows;
    const int nCycles = mode->nCycles;
    struct Thread* const threads = sched->threads;

    UNUSED int error = 0;

    // TODO: OK to do this per mode?
    const seL4_CPtr notification = timeout_notification();

    if (nCycles > 0) {
        ZF_LOGD(">>>>>>>>>>>>>>>>>>>>>>> Running %s schedule for %d cycles.", schedName, nCycles);
    } else {
        ZF_LOGD(">>>>>>>>>>>>>>>>>>>>>>> Running %s schedule indefinitly.", schedName);
    }

    int cycle = 0;
    // running is the index of the currently running thread (< 0 for idle)
    int running= -1;
    uint64_t runningDur = 0;
    for (int i = 0; ; i = (i+1) % nWin) {

        // Suspend currently running thread 
        if ( running >= 0) {
            unbindThreadSc(&threadInfos[running]);
        }

        // Do this check AFTER we have suspended currently running thread
        if (nCycles > 0 && cycle >= nCycles) {
            break;
        }

        // Start window thread running
        running = winSched[i].thread;
        runningDur = winSched[i].dur;
        if ( running >= 0) {
            // [2021/09/14:JCC] Just need budget larger than any window and
            // period larger enough that MCS won't replenish before we take
            // action. Thus we get the behaviour we want for yeild. We bind
            // and unbind the sched context on a static schedule.
            //
            // TODO: Probably only need one sched context with this approach
            // instead of one per thread.
            error = api_sched_ctrl_configure(sched_control, threadInfos[running].sc,
                                             runningDur, 2*runningDur, 0, 0);
            ZF_LOGF_IFERR(error, "Failed to configure scheduling context.");
                
            error = seL4_SchedContext_Bind(threadInfos[running].sc, threadInfos[running].tcb);
            ZF_LOGF_IFERR(error, "Failed to bind sched context");

            // Call thread emit function if specified.
            if (NULL != threads[running].periodNotifyFn) {
                // Increment counter to emulate same pattern used for
                // period wait for VM tasks (vmRADIO and VMUXAS) in CASE
                // phase2 tool evaluation 4.
                threadInfos[running].tickCount++;
                threads[running].periodNotifyFn(&threadInfos[running].tickCount);
            }

        } else {
            ZF_LOGD("Idle.");
        }
            
        // Get the window start time
        const uint64_t startTime = timeout_time();

        uint64_t endTime = startTime;

        // Wait for window duration. Must loop because we we can get woken up
        // for reaosons other than timer expiration.
        while ( (endTime-startTime) < runningDur) {

            const uint64_t remWinTime =  runningDur - (endTime-startTime);

            // Set timer to expire when window finished
            // TODO: Is there an issue if remWinTime is very tiny?
            timeout_oneshot_relative(0, remWinTime);

            // Wait for timer to expire, effectivly yeilding to the window thread
            seL4_Word badge;
            seL4_Wait(notification, &badge);

            // Get the window end time
            endTime = timeout_time();

        }

        ZF_LOGD("%s schedule window finished.  Cycle: %d  Win: %d  Duration: %"PRIu64"  ActualDuration: %"PRIu64"",
                schedName, cycle, i, runningDur, (endTime-startTime));

        if (i + 1 == nWin ) {
            // New cycle
            cycle++;
        }
    }

    // TODO: What does this really do? Ok to do at end of each mode?
    timeout_stop(0);

    ZF_LOGD("<<<<<<<<<<<<<<<<<<<<<<< Exiting %s schedule.", schedName);

    // TODO: Provide mechanism for above loop to exit when nCycles <= 0? Wait for all threads to exit?
}

// Run the schedule. If the last mode specifies an indefinite number
// of cycles will run indefinitly. 
void runSchedule(const struct Schedule* const sched) {
    checkSchedule(sched);

    struct ThreadInfo* const threadInfos = initThreadInfos(sched);

    // Don't let threads run till we schedule them
    unbindAllThreadSc(sched, threadInfos);

    struct Mode* mode = sched->modes;
    for (int m = 0; m < sched->nModes; m++, mode++) {
        runMode(sched, mode, threadInfos);
    }
}

// CAmkES Tics Component entry point.
int run(void) {
    
    if (ZF_LOG_OUTPUT_DEBUG) {
        seL4_DebugDumpScheduler();
    }

    const struct Schedule* const sched = getTicsSchedule();
    runSchedule(sched);

    if (ZF_LOG_OUTPUT_DEBUG) {
        seL4_DebugDumpScheduler();
    }

    ZF_LOGD("Scheduler Finished.");
    return 0;
}
