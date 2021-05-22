// Copyright 2020 Adventium Labs

// This is a kernel data structure. 

#include <config.h>
#include <object/structures.h>
#include <model/statedata.h>

// Manually generated schedule for
//
// CASE Phase-2-UAV-Experimental-Platform-Transformed/UAV 
//

// The length is in seL4 ticks (2 ms default). This schedule should be
// generated based on data captured in the AADL model

// Leave time between threads (allocate it to domain 0) in case we
// discover additional threads are necessary or that more processor
// time is needed for some of the threads.

// The following is the domain id, duration, and name of process (which is
// what is shown on the figure, so hopefully easier to visualize)

// Time increases going down (e.g., 0ms at top, 499ms at end of last thread)

// Note that UXAS is actually a thread group, ToDo: Determine how to specify time
// for HAMR to use for thread group

const dschedule_t ksDomSchedule[] = { // (1 tick == 2ms)
//4Hz				
//high rate FC_UART so tiny buffer doesn't overflow
//				
//		framelength (ms)	250	
//		framerate (Hz)	4	
//		Domain 0 duration per frame (ms)	56	
//		Domain 0 rate	112	
//		Domain 0 duration per second (ms)	224	
//		UXAS duration per frame (ms)	80	
//		UXAS duration per second (ms)	320	
//				
  { .domain =  0, .length =	1}, // (2	ms) Domain 0
  { .domain =  1, .length =	1}, // (2	ms) Pacer
  { .domain =  0, .length =	1}, // (2	ms) Domain 0
  { .domain =  2, .length =	4}, // (8	ms) RADIO: process RadioDriver_Attestation.Impl;
  { .domain =  0, .length =	1}, // (2	ms) Domain 0
  { .domain =  2, .length =	4}, // (8	ms) RADIO: process RadioDriver_Attestation.Impl;
  { .domain =  0, .length =	1}, // (2	ms) Domain 0
  { .domain =  2, .length =	4}, // (8	ms) RADIO: process RadioDriver_Attestation.Impl;
  { .domain =  0, .length =	1}, // (2	ms) Domain 0
  { .domain =  2, .length =	4}, // (8	ms) RADIO: process RadioDriver_Attestation.Impl;
  { .domain =  0, .length =	1}, // (2	ms) Domain 0
  { .domain =  2, .length =	4}, // (8	ms) RADIO: process RadioDriver_Attestation.Impl;
  { .domain =  0, .length =	1}, // (2	ms) Domain 0
  { .domain =  2, .length =	4}, // (8	ms) RADIO: process RadioDriver_Attestation.Impl;
  { .domain =  0, .length =	1}, // (2	ms) Domain 0
  { .domain =  2, .length =	4}, // (8	ms) RADIO: process RadioDriver_Attestation.Impl;
  { .domain =  0, .length =	1}, // (2	ms) Domain 0
  { .domain =  2, .length =	4}, // (8	ms) RADIO: process RadioDriver_Attestation.Impl;
  { .domain =  0, .length =	1}, // (2	ms) Domain 0
  { .domain =  2, .length =	4}, // (8	ms) RADIO: process RadioDriver_Attestation.Impl;
  { .domain =  0, .length =	1}, // (2	ms) Domain 0
  { .domain =  2, .length =	4}, // (8	ms) RADIO: process RadioDriver_Attestation.Impl;
  { .domain =  0, .length =	1}, // (2	ms) Domain 0
  { .domain =  5, .length =	2}, // (4	ms) AM_Gate: process CASE_AttestationGate.Impl;
  { .domain =  0, .length =	1}, // (2	ms) Domain 0
  { .domain =  7, .length =	2}, // (4	ms) FLT_LST: process CASE_Filter_LST.Impl;
  { .domain =  0, .length =	1}, // (2	ms) Domain 0
  { .domain =  9, .length =	4}, // (8	ms) UXAS: process UxAS.Impl;
  { .domain =  0, .length =	1}, // (2	ms) Domain 0
  { .domain =  9, .length =	4}, // (8	ms) UXAS: process UxAS.Impl;
  { .domain =  0, .length =	1}, // (2	ms) Domain 0
  { .domain =  9, .length =	4}, // (8	ms) UXAS: process UxAS.Impl;
  { .domain =  0, .length =	1}, // (2	ms) Domain 0
  { .domain =  9, .length =	4}, // (8	ms) UXAS: process UxAS.Impl;
  { .domain =  0, .length =	1}, // (2	ms) Domain 0
  { .domain =  9, .length =	4}, // (8	ms) UXAS: process UxAS.Impl;
  { .domain =  0, .length =	1}, // (2	ms) Domain 0
  { .domain =  9, .length =	4}, // (8	ms) UXAS: process UxAS.Impl;
  { .domain =  0, .length =	1}, // (2	ms) Domain 0
  { .domain =  9, .length =	4}, // (8	ms) UXAS: process UxAS.Impl;
  { .domain =  0, .length =	1}, // (2	ms) Domain 0
  { .domain =  9, .length =	4}, // (8	ms) UXAS: process UxAS.Impl;
  { .domain =  0, .length =	1}, // (2	ms) Domain 0
  { .domain =  9, .length =	4}, // (8	ms) UXAS: process UxAS.Impl;
  { .domain =  0, .length =	1}, // (2	ms) Domain 0
  { .domain =  9, .length =	4}, // (8	ms) UXAS: process UxAS.Impl;
  { .domain =  0, .length =	1}, // (2	ms) Domain 0
  { .domain = 10, .length =	1}, // (2	ms) FlyZones: process FlyZonesDatabase.Impl;
  { .domain =  0, .length =	1}, // (2	ms) Domain 0
  { .domain = 11, .length =	2}, // (4	ms) MON_REQ: process CASE_Monitor_Req.Impl;
  { .domain =  0, .length =	1}, // (2	ms) Domain 0
  { .domain = 13, .length =	2}, // (4	ms) MON_GEO: process CASE_Monitor_Geo.Impl;
  { .domain =  0, .length =	1}, // (2	ms) Domain 0
  { .domain = 14, .length =	4}, // (8	ms) WPM: process WaypointPlanManagerService.Impl;
  { .domain =  0, .length =	1}, // (2	ms) Domain 0
  { .domain = 14, .length =	3}, // (6	ms) WPM: process WaypointPlanManagerService.Impl;



//4Hz				
//higher rate, to test if higher-rate VM/Dom0 switching is better
//				- this does not have UART running at high rate, so buffer can overrun.
// 
// { .domain =  0, .length =5}, // (10	ms) Domain 0
// { .domain =  1, .length =1}, // (2	ms) Pacer
// { .domain =  0, .length =2}, // (4	ms) Domain 0
// { .domain =  2, .length =40}, // (80	ms) RADIO: process RadioDriver_Attestation.Impl;
// { .domain =  0, .length =2}, // (4	ms) Domain 0
// { .domain =  3, .length =2}, // (4	ms) FC_UART: process UARTDriver.Impl;
// { .domain =  0, .length =2}, // (4	ms) Domain 0
// { .domain =  5, .length =2}, // (4	ms) AM_Gate: process CASE_AttestationGate.Impl;
// { .domain =  0, .length =2}, // (4	ms) Domain 0
// { .domain =  7, .length =2}, // (4	ms) FLT_LST: process CASE_Filter_LST.Impl;
// { .domain =  0, .length =2}, // (4	ms) Domain 0
// { .domain =  9, .length =40}, // (80	ms) UXAS: process UxAS.Impl;
// { .domain =  0, .length =2}, // (4	ms) Domain 0
// { .domain = 10, .length =2}, // (4	ms) FlyZones: process FlyZonesDatabase.Impl;
// { .domain =  0, .length =2}, // (4	ms) Domain 0
// { .domain = 11, .length =2}, // (4	ms) MON_REQ: process CASE_Monitor_Req.Impl;
// { .domain =  0, .length =2}, // (4	ms) Domain 0
// { .domain = 13, .length =2}, // (4	ms) MON_GEO: process CASE_Monitor_Geo.Impl;
// { .domain =  0, .length =2}, // (4	ms) Domain 0
// { .domain = 14, .length =9}, // (18	ms) WPM: process WaypointPlanManagerService.Impl;
// 
//				
//		framelength (ms)	250	
//		framerate (Hz)	4	
//		Domain 0 duration per frame (ms)	46	
//		Domain 0 duration per second (ms)	184	
//		VM duration per frame (ms)	80	
//		VM duration per second (ms)	320	
//				
//				
//2Hz				
//"Lower rate, give larger chunks of time to VM			
//				
//"    { .domain =  0, .length =10}, // (20	ms) Domain 0
//"    { .domain =  1, .length =1}, // (2	ms) Pacer
//"    { .domain =  0, .length =2}, // (4	ms) Domain 0
//"    { .domain =  2, .length =100}, // (200	ms) RADIO: process RadioDriver_Attestation.Impl;
//"    { .domain =  0, .length =2}, // (4	ms) Domain 0
//"    { .domain =  3, .length =2}, // (4	ms) FC_UART: process UARTDriver.Impl;
//"    { .domain =  0, .length =2}, // (4	ms) Domain 0
//"    { .domain =  5, .length =2}, // (4	ms) AM_Gate: process CASE_AttestationGate.Impl;
//"    { .domain =  0, .length =2}, // (4	ms) Domain 0
//"    { .domain =  7, .length =2}, // (4	ms) FLT_LST: process CASE_Filter_LST.Impl;
//"    { .domain =  0, .length =2}, // (4	ms) Domain 0
//"    { .domain =  9, .length =100}, // (200	ms) UXAS: process UxAS.Impl;
//"    { .domain =  0, .length =2}, // (4	ms) Domain 0
//"    { .domain = 10, .length =2}, // (4	ms) FlyZones: process FlyZonesDatabase.Impl;
//"    { .domain =  0, .length =2}, // (4	ms) Domain 0
//"    { .domain = 11, .length =2}, // (4	ms) MON_REQ: process CASE_Monitor_Req.Impl;
//"    { .domain =  0, .length =2}, // (4	ms) Domain 0
//"    { .domain = 13, .length =2}, // (4	ms) MON_GEO: process CASE_Monitor_Geo.Impl;
//"    { .domain =  0, .length =2}, // (4	ms) Domain 0
//"    { .domain = 14, .length =9}, // (18	ms) WPM: process WaypointPlanManagerService.Impl;
//				
//		framelength (ms)	500	
//		framerate (Hz)	2	
//		Domain 0 duration per frame (ms)	56	
//		Domain 0 duration per second (ms)	112	
//		VM duration per frame (ms)	200	
//		VM duration per second (ms)	400	
//				
//2Hz				
//"Lower rate, give larger chunks of time to Dom0			
//				
//"    { .domain =  0, .length =14}, // (28	ms) Domain 0
//"    { .domain =  1, .length =1}, // (2	ms) Pacer
//"    { .domain =  0, .length =6}, // (12	ms) Domain 0
//"    { .domain =  2, .length =80}, // (160	ms) RADIO: process RadioDriver_Attestation.Impl;
//"    { .domain =  0, .length =6}, // (12	ms) Domain 0
//"    { .domain =  3, .length =2}, // (4	ms) FC_UART: process UARTDriver.Impl;
//"    { .domain =  0, .length =6}, // (12	ms) Domain 0
//"    { .domain =  5, .length =2}, // (4	ms) AM_Gate: process CASE_AttestationGate.Impl;
//"    { .domain =  0, .length =6}, // (12	ms) Domain 0
//"    { .domain =  7, .length =2}, // (4	ms) FLT_LST: process CASE_Filter_LST.Impl;
//"    { .domain =  0, .length =6}, // (12	ms) Domain 0
//"    { .domain =  9, .length =80}, // (160	ms) UXAS: process UxAS.Impl;
//"    { .domain =  0, .length =6}, // (12	ms) Domain 0
//"    { .domain = 10, .length =2}, // (4	ms) FlyZones: process FlyZonesDatabase.Impl;
//"    { .domain =  0, .length =6}, // (12	ms) Domain 0
//"    { .domain = 11, .length =2}, // (4	ms) MON_REQ: process CASE_Monitor_Req.Impl;
//"    { .domain =  0, .length =6}, // (12	ms) Domain 0
//"    { .domain = 13, .length =2}, // (4	ms) MON_GEO: process CASE_Monitor_Geo.Impl;
//"    { .domain =  0, .length =6}, // (12	ms) Domain 0
//"    { .domain = 14, .length =9}, // (18	ms) WPM: process WaypointPlanManagerService.Impl;
//				
//		framelength (ms)	500	
//		framerate (Hz)	2	
//		Domain 0 duration per frame (ms)	136	
//		Domain 0 duration per second (ms)	272	
//		VM duration per frame (ms)	160	
//		VM duration per second (ms)	320	


};

const word_t ksDomScheduleLength = sizeof(ksDomSchedule) / sizeof(dschedule_t);
