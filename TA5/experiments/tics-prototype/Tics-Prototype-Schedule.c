// Copyright 2021, Adventium Labs
//
// Example TICS Schedule instance for use with tics-prototyle.camkes.

#include <stddef.h>
#include <stdint.h>
#include <sel4/sel4.h>
#include <Tics-Schedule.h>
#include <platsupport/ltimer.h>
#include <camkes.h>

// The following two functions emulate the same pattern used for period wait
// for VM tasks (vmRADIO and VMUXAS) in CASE phase2 tool evaluation 4.
//
// [2021/10/20:JCC] I do not understand why they used both the queue and the
// notification. As I read the VM app code this it appears the notification is
// mapped to a stream and the queue data is ignored. But maybe there is more
// happening in the VM that I cannot see. Other than a bit of wasted CPU time
// it wont hurt anything. But I suspect this could be simplifed to just use
// one or the other.

void send_period_to_vmTask1(int8_t *data) {
    sb_queue_int8_t_1_enqueue(period_to_vmTask1_queue, data);
    period_to_vmTask1_notification_emit();
}

void send_period_to_vmTask2(int8_t *data) {
    sb_queue_int8_t_1_enqueue(period_to_vmTask2_queue, data);
    period_to_vmTask2_notification_emit();
}


struct Thread threads[] = {
    // name                  periodNotifyFn
    {  "task1_0_control",    NULL                 },
    {  "task2_0_control",    NULL                 },
    {  "vmTask1_0_control",  send_period_to_vmTask1  },
    {  "vmTask2_0_control",  send_period_to_vmTask2  },
};

struct Window initWindows[] = {
    // Thread  Dur (ns)
    {  0,      0.5 * NS_IN_S },
    {  1,      1.0 * NS_IN_S },
    {  2,      0.5 * NS_IN_S },
    {  3,      1.5 * NS_IN_S },
};

struct Window normWindows[] = {
    // Thread  Dur (ns)
    {  0,      0.5 * NS_IN_S },
    {  1,      0.5 * NS_IN_S },
    { -1,      1.0 * NS_IN_S },
    {  0,      0.5 * NS_IN_S },
    {  1,      0.5 * NS_IN_S },
    {  2,      0.5 * NS_IN_S },
    {  3,      0.5 * NS_IN_S },
};

struct Mode modes[] = {
    { .name     = "Init",
      .nCycles  = 2,
      .windows  = initWindows,
      .nWindows = sizeof(initWindows)/sizeof(initWindows[0]),
    },
    { .name     = "Norm",
      .nCycles  = 0, // Run indefinitely
      .windows  = normWindows,
      .nWindows = sizeof(normWindows)/sizeof(normWindows[0]),
    },
};

const struct Schedule schedule = {
    .threads  = threads,
    .nThreads = sizeof(threads)/sizeof(threads[0]),
    .modes  = modes,
    .nModes = sizeof(modes)/sizeof(modes[0]),
};

const struct Schedule* const getTicsSchedule() {
    return &schedule;
}

