#include <config.h>
#include <object/structures.h>
#include <model/statedata.h>

// this file will not be overwritten and is safe to edit

/************************************************************

   This is a kernel data structure containing an example schedule.
   The length is in seL4 ticks (2 ms). 
   This schedule should be generated from the AADL model
   using execution time and data flow latency specifications.

   Pacer runs at highest rate and should always be in domain 1

   Properties from AADL Model
   --------------------------

     Timing_Properties::Clock_Period : 2 ms 
     Timing_Properties::Frame_Period : 1000 ms

     flightPlanner_thread
     --------------------

       CASE_Scheduling::Domain : 3
       Timing_Properties::Compute_Execution_Time : 10 ms
       Timing_Properties::Period : 1000 ms

     flyZoneDatabase_thread
     ----------------------

       CASE_Scheduling::Domain : 4
       Timing_Properties::Compute_Execution_Time : 10 ms
       Timing_Properties::Period : 1000 ms

     mockWaypointManager_thread
     --------------------------

       CASE_Scheduling::Domain : 5
       Timing_Properties::Compute_Execution_Time : 10 ms
       Timing_Properties::Period : 1000 ms

     monitor_thread
     --------------

       CASE_Scheduling::Domain : 2
       Timing_Properties::Compute_Execution_Time : 10 ms
       Timing_Properties::Period : 1000 ms

 *********************************************************/

const dschedule_t ksDomSchedule[] = {
  { .domain = 0, .length = 10 },
  { .domain = 0, .length = 10 },
  { .domain = 2, .length = 10 },
  { .domain = 0, .length = 10 },
  { .domain = 5, .length = 10 },
  { .domain = 0, .length = 10 },
  { .domain = 9, .length = 10 },
  { .domain = 0, .length = 500 } // slow things down a bit
};

const word_t ksDomScheduleLength = sizeof(ksDomSchedule) / sizeof(dschedule_t);
