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

     UARTDriver
     ----------

       CASE_Scheduling::Domain : 3
       Thread_Properties::Dispatch_Protocol : Periodic
       Timing_Properties::Compute_Execution_Time : 6 ms
       Timing_Properties::Period : 500 ms

     RadioDriver_Attestation
     -----------------------

       CASE_Scheduling::Domain : 2
       Thread_Properties::Dispatch_Protocol : Periodic
       Timing_Properties::Compute_Execution_Time : 2 ms
       Timing_Properties::Period : 500 ms

     FlyZonesDatabase
     ----------------

       CASE_Scheduling::Domain : 10
       Thread_Properties::Dispatch_Protocol : Periodic
       Timing_Properties::Compute_Execution_Time : 2 ms
       Timing_Properties::Period : 500 ms

     UxAS
     ----

       CASE_Scheduling::Domain : 9
       Thread_Properties::Dispatch_Protocol : Periodic
       Timing_Properties::Compute_Execution_Time : 2 ms
       Timing_Properties::Period : 500 ms

     WaypointPlanManagerService
     --------------------------

       CASE_Scheduling::Domain : 14
       Thread_Properties::Dispatch_Protocol : Periodic
       Timing_Properties::Compute_Execution_Time : 2 ms
       Timing_Properties::Period : 500 ms

     CASE_AttestationGate
     --------------------

       CASE_Scheduling::Domain : 5
       Thread_Properties::Dispatch_Protocol : Periodic
       Timing_Properties::Compute_Execution_Time : 2 ms
       Timing_Properties::Period : 500 ms

     CASE_Filter_LST
     ---------------

       CASE_Scheduling::Domain : 7
       Thread_Properties::Dispatch_Protocol : Periodic
       Timing_Properties::Compute_Execution_Time : 2 ms
       Timing_Properties::Period : 500 ms

     CASE_Monitor_Req
     ----------------

       CASE_Scheduling::Domain : 11
       Thread_Properties::Dispatch_Protocol : Periodic
       Timing_Properties::Compute_Execution_Time : 2 ms
       Timing_Properties::Period : 500 ms

     CASE_Monitor_Geo
     ----------------

       CASE_Scheduling::Domain : 13
       Thread_Properties::Dispatch_Protocol : Periodic
       Timing_Properties::Compute_Execution_Time : 2 ms
       Timing_Properties::Period : 500 ms

 *********************************************************/

const int dom0swapTime = 10; 

const dschedule_t ksDomSchedule[] = {
  { .domain = 0, .length = 100 },  // all other seL4 threads, init, 200ms
  { .domain = 1, .length = 5 },  // pacer 10ms.  Should always be in domain 1
  { .domain = 0, .length = 5 },  // deliver pacer pulses
  
  { .domain = 2, .length = 50 },  // RadioDriver_Attestation  
  
  { .domain = 3, .length = 5 },  // UARTDriver  
  { .domain = 5, .length = 5 },  // CASE_AttestationGate  
  { .domain = 7, .length = 5 },  // CASE_Filter_LST  
  
  { .domain = 9, .length = 50 },  // UxAS  
  
  { .domain = 10, .length = 5 },  // FlyZonesDatabase  
  { .domain = 11, .length = 5 },  // CASE_Monitor_Req  
  { .domain = 14, .length = 5 },  // WaypointPlanManagerService  
  { .domain = 13, .length = 5 },  // CASE_Monitor_Geo 
};

const word_t ksDomScheduleLength = sizeof(ksDomSchedule) / sizeof(dschedule_t);
