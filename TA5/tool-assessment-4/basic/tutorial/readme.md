# tutorial

 Table of Contents
<!--table-of-contents_start-->
* [AADL Architecture](#aadl-architecture)
* [Linux](#linux)
  * [HAMR Configuration: Linux](#hamr-configuration-linux)
  * [Behavior Code: Linux](#behavior-code-linux)
  * [How to Build/Run: Linux](#how-to-buildrun-linux)
* [SeL4](#sel4)
  * [HAMR Configuration: SeL4](#hamr-configuration-sel4)
  * [Behavior Code: SeL4](#behavior-code-sel4)
  * [How to Build/Run: SeL4](#how-to-buildrun-sel4)
  * [Example Output: SeL4](#example-output-sel4)
  * [CAmkES Architecture: SeL4](#camkes-architecture-sel4)
  * [HAMR CAmkES Architecture: SeL4](#hamr-camkes-architecture-sel4)
* [Background](#background)
  * [Threading](#threading)
  * [Port-based Communication](#port-based-communication)
    * [AADL Semantics](#aadl-semantics)
    * [Underlying Representation in seL4](#underlying-representation-in-sel4)
* [Structure of Generated Code](#structure-of-generated-code)
  * [Compile and Execute Scripts](#compile-and-execute-scripts)
  * [Overview of Auto-generated Application Code Templates and Port-Communication APIs](#overview-of-auto-generated-application-code-templates-and-port-communication-apis)
<!--table-of-contents_end-->

This example supports the tutorial video **TODO: Insert Link** provided for this tool assessment.  The example is a minor adaptation of the Event Data Port example provided in the Basic examples folder.

This ReadMe file provides a text-based walkthrough of the example to complement the tutorial video (the walk-through is presented after the artifact overview below).



## AADL Architecture
<!--aadl-architecture_start-->
![AADL Arch](aadl/diagrams/aadl-arch.png)
|System: [top_impl_Instance](aadl/test_event_data_port_periodic_domains.aadl#L76) Properties|
|--|
|Domain Scheduling|
|Wire Protocol|

|[producer](aadl/test_event_data_port_periodic_domains.aadl#L6) Properties|
|--|
|Native|
|Periodic: 1000 ms|
|Domain: 2|


|[consumer](aadl/test_event_data_port_periodic_domains.aadl#L34) Properties|
|--|
|Native|
|Periodic: 1000 ms|
|Domain: 3|


**Schedule:** [domain_schedule.c](aadl/domain_schedule.c)
<!--aadl-architecture_end-->


## Linux
<!--Linux_start--><!--Linux_end-->

### HAMR Configuration: Linux
<!--hamr-configuration-linux_start-->
refer to [aadl/bin/run-hamr-Linux.sh](aadl/bin/run-hamr-Linux.sh)
<details>
<summary>Click for an example showing how HAMR's plugin dialog box relates to the CLI options</summary>
<!-- due to security issues, you may need to have the parent folder (ie. '../') open in your
     editor (e.g. vscode) in order to see the following image -->

![dialog_cli](../../doc/dialog_cli.jpg)

The CLI options ``verbose`` and ``run-transpiler`` are set via ``Verbose output`` and ``Run Transpiler``
options respectively that are located in __Preferences >> OSATE >> Sireum HAMR >> Code Generation__.
The last two CLI options are set by the HAMR plugin.
</details>
<!--hamr-configuration-linux_end-->


### Behavior Code: Linux
<!--behavior-code-linux_start-->
  * [producer](hamr/c/ext-c/producer_t_i_producer_producer/producer_t_i_producer_producer.c)

  * [consumer](hamr/c/ext-c/consumer_t_i_consumer_consumer/consumer_t_i_consumer_consumer.c)
<!--behavior-code-linux_end-->


### How to Build/Run: Linux
<!--how-to-buildrun-linux_start-->
```
./aadl/bin/run-hamr-Linux.sh
./hamr/c/bin/compile-linux.sh
./hamr/c/bin/run-linux.sh
./hamr/c/bin/stop.sh
```
<!--how-to-buildrun-linux_end-->


## SeL4
<!--SeL4_start--><!--SeL4_end-->

### HAMR Configuration: SeL4
<!--hamr-configuration-sel4_start-->
refer to [aadl/bin/run-hamr-SeL4.sh](aadl/bin/run-hamr-SeL4.sh)
<details>
<summary>Click for an example showing how HAMR's plugin dialog box relates to the CLI options</summary>
<!-- due to security issues, you may need to have the parent folder (ie. '../') open in your
     editor (e.g. vscode) in order to see the following image -->

![dialog_cli](../../doc/dialog_cli.jpg)

The CLI options ``verbose`` and ``run-transpiler`` are set via ``Verbose output`` and ``Run Transpiler``
options respectively that are located in __Preferences >> OSATE >> Sireum HAMR >> Code Generation__.
The last two CLI options are set by the HAMR plugin.
</details>
<!--hamr-configuration-sel4_end-->


### Behavior Code: SeL4
<!--behavior-code-sel4_start-->
  * [producer](hamr/c/ext-c/producer_t_i_producer_producer/producer_t_i_producer_producer.c)

  * [consumer](hamr/c/ext-c/consumer_t_i_consumer_consumer/consumer_t_i_consumer_consumer.c)
<!--behavior-code-sel4_end-->


### How to Build/Run: SeL4
<!--how-to-buildrun-sel4_start-->
```
./aadl/bin/run-hamr-SeL4.sh
./hamr/camkes/bin/run-camkes.sh -s
```
<!--how-to-buildrun-sel4_end-->


### Example Output: SeL4
<!--example-output-sel4_start-->
Timeout = 18 seconds
```
Booting all finished, dropped to user space
Entering pre-init of consumer_t_i_consumer_consumer
Entering pre-init of producer_t_i_producer_producer
Art: Registered component: top_impl_Instance_consumer_consumer (periodic: 1000)
Art: - Registered port: top_impl_Instance_consumer_consumer_read_port (event in)
Leaving pre-init of consumer_t_i_consumer_consumer
Art: Registered component: top_impl_Instance_producer_producer (periodic: 1000)
Art: - Registered port: top_impl_Instance_producer_producer_write_port (event out)
Leaving pre-init of producer_t_i_producer_producer
Sent 0
[ 00 00 00 00 ]

Received 0
top_impl_Instance_consumer_consumer: Received 32 bits on port read_port: [ 00 00 00 00 ]

Sent 1
[ 00 00 00 01 ]

Received 1
top_impl_Instance_consumer_consumer: Received 32 bits on port read_port: [ 00 00 00 01 ]

Sent 2
[ 00 00 00 02 ]

Received 2
top_impl_Instance_consumer_consumer: Received 32 bits on port read_port: [ 00 00 00 02 ]

Sent 3
[ 00 00 00 03 ]

Received 3
top_impl_Instance_consumer_consumer: Received 32 bits on port read_port: [ 00 00 00 03 ]

Sent 4
[ 00 00 00 04 ]

Received 4
top_impl_Instance_consumer_consumer: Received 32 bits on port read_port: [ 00 00 00 04 ]

Sent 5
[ 00 00 00 05 ]

Received 5
top_impl_Instance_consumer_consumer: Received 32 bits on port read_port: [ 00 00 00 05 ]

Sent 6
[ 00 00 00 06 ]

Received 6
top_impl_Instance_consumer_consumer: Received 32 bits on port read_port: [ 00 00 00 06 ]

Sent 7
[ 00 00 00 07 ]


```
<!--example-output-sel4_end-->


### CAmkES Architecture: SeL4
<!--camkes-architecture-sel4_start-->
![CAmkES Architecture: SeL4](aadl/diagrams/CAmkES-arch-SeL4.svg)
<!--camkes-architecture-sel4_end-->


### HAMR CAmkES Architecture: SeL4
<!--hamr-camkes-architecture-sel4_start-->
![HAMR CAmkES Architecture: SeL4](aadl/diagrams/CAmkES-HAMR-arch-SeL4.svg)
<!--hamr-camkes-architecture-sel4_end-->

# Tutorial Walk-Through

## Background

This example illustrates the AADL threading and port communication patterns that are most commonly used in the Collins Phase II and Phase III models:

* AADL periodic thread components -- time-triggered threads, executed according to a static schedule
* AADL event data port communication -- one-way, buffered, asynchronous communication between threads (with port buffers of size 1).

### Threading 

The static scheduling of periodic components used in this and other examples provided in this Tool Assessment closely aligns with the ARINC 653 tasking approach used in existing Collins systems supported by the CASE TA6 team. For a build of a HAMR-generated system for seL4, the implementation employs a static cyclic scheduler. Each
component is assigned a domain (or temporal partition) in the AADL model, and typically a domain is assigned a single component (domain zero is reserved for seL4 infrastructure
and must be invoked regularly to maintain operational flow). The user-written schedule consists of a series of ordered (non-overlapping) time slots of a specific length and domain. Time slot lengths are expressed as a number of ticks (by default a tick is 2 milliseconds). The user defines the component schedule in the *domain_schedule.c* file. 

For seL4 targets, the static cyclic scheduler maintains temporal isolation
between the components, assuming the domain schedule has been correctly engineered.
It is the responsibility of the system designer to define a schedule, and the usual goal is to define a schedule in which the components *execute to completion within their assigned slots*.  A component execution that exceeds the length of a time slot will resume from where it left off when its next assigned time slot is invoked. However, utilizing this behavior is not recommended since it will often lead to incoming messages being lost.  The threading paradigm emphasized by the AADL standard supports a *Receive-Input/Compute/Send-Output* structure, and once a thread begins the *Compute* actions, new input cannot be processed until the task has finished the *Compute* and *Send-Output* phases and is dispatched again.  For Linux targets, the components follow the 
same default *Receive-Input/Compute/Send-Output* structure, but scheduling is supported by a round-robin periodic scheduler executed by the Linux operating system.  Note: upcoming releases of HAMR will support a simplistic static scheduling approach for Linux to align with the seL4 approach -- Linux cannot enforce temporal separation as achieved by the seL4 domain scheduler, so the Linux static scheduling will be primarily a prototyping aid used before transitioning to seL4 deployments.

For more motivation and information about the AADL threading approach, including the *Receive-Input/Compute/Send-Output* emphasis, see the chapter on **TODO: AADL concepts** in the HAMR documentation.

### Port-based Communication

#### AADL Semantics

* uses AADL event data port communications between components.  
* one way, asynochrous
* buffered
* Note that HAMR currently only supports queue sizes of 1.
* During each compute cycle, 
* During each compute cycle, thread can send 0 or 1 messages out each output port

#### Underlying Representation in seL4

In HAMR code generation for seL4, the underlying representation of the communication
channel between the sending and receiving port is a shared memory construct
for which the sending component has write-only permissions and the receiving component 
has read-only permissions. The data in the
shared memory is queued, and each write operation is accompanied with an event signal
that is forwarded to the receiving component, indicating that a new communication has
been sent. If a write operation is invoked when the queue is full, then the oldest data entry
is overwritten. The data transferred via the port communication 
has a designated data type (e.g., integer, real, boolean, array, struct).
Both write and read operations are non-blocking.

## Structure of Generated Code

HAMR examples use the following convention for directory structure.  The diagram below expands the folders most relevant for programming HAMR applications on seL4 and Linux platforms.
```
aadl/                            // aadl models
hamr/                            // target directories for HAMR code generation
├── c/                           // C artifacts
    ├── bin/                     // Build and Execution scripts
    ├── etc/ 
    ├── etc_seL4/adapters 
    └── c-ext/                   // platform-independent C application code
        ├── <component C1 application code folder>/
        |    ├── <component C1>.c   // thread entry points
        |    ├── <component C1>.h
        |    ├── <component C1>_api.c 
        |    └── <component C1>_api.h  // api's for port communication & logging
        ├── ...
        ├── <component Cn application code folder>/
        | 
        ├── ext.c
        └── ext.h 
├── camkes/                      // seL4 artifacts
    ├── kernel/ 
    |    └── domain_schedule.c   // static schedule specification
    └── ...
└── slang/
```

Consult the tutorial video for the steps needed to generate code from AADL models for seL4 and Linux.

The developer codes the system by

* filling in the templates for the thread entry points in each `<component Cx>.c` files.  The most important is the *compute entry point* represented by the `time-triggered` function.
* utilizing the port communication api's in the `<component Cx>_api.h` files to `get` values from input ports and `put` values on output ports.
* specifying the static schedule for seL4 in `camkes/kernel/domain_schedule.c`.

### Compile and Execute Scripts

The developer compiles and executes the system using the platform-specific scripts in the `c/bin` folder. `stop.sh` is used to gracefully halt the system.

```
compile-cygwin.sh
compile-linux.sh
compile-macOS.sh
run-cygwin.sh
run-linux.sh
run-macOS.sh
stop.sh
```

### Overview of Auto-generated Application Code Templates and Port-Communication APIs


**TODO: Jason: Explain stack frame stuff**

```c
// File: producer_t_i_producer_producer.c (auto-generated template)

#include <producer_t_i_producer_producer_api.h>
#include <producer_t_i_producer_producer.h>
#include <ext.h>

// This file will not be overwritten so is safe to edit

//----------------------------------------------
// I n i t i a l i z e    E n t r y  p o i n t
//
//  Called once by AADL run-time scheduling infrastructure during
//  the initialization phase of the system.
//----------------------------------------------

Unit base_test_event_data_port_periodic_domains_producer_t_i_producer_producer_initialise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "producer_t_i_producer_producer.c", "", "base_test_event_data_port_periodic_domains_producer_t_i_producer_producer_initialise_", 0);

  // examples of api setter and logging usage

  uint8_t t0[numBytes_S32];
  byte_array_default(SF t0, numBits_S32, numBytes_S32);
  api_put_write_port__base_test_event_data_port_periodic_domains_producer_t_i_producer_producer(SF numBits_S32, t0);

  api_logInfo__base_test_event_data_port_periodic_domains_producer_t_i_producer_producer(SF string("Example logInfo"));

  api_logDebug__base_test_event_data_port_periodic_domains_producer_t_i_producer_producer(SF string("Example logDebug"));

  api_logError__base_test_event_data_port_periodic_domains_producer_t_i_producer_producer(SF string("Example logError"));
}

//----------------------------------------------
// I n i t i a l i z e    E n t r y  p o i n t
//
//  Called once by AADL run-time scheduling infrastructure during
//  the initialization phase of the system.
//----------------------------------------------

Unit base_test_event_data_port_periodic_domains_producer_t_i_producer_producer_finalise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "producer_t_i_producer_producer.c", "", "base_test_event_data_port_periodic_domains_producer_t_i_producer_producer_finalise_", 0);
}

//----------------------------------------------
// C o m p u t e     E n t r y  p o i n t
//
//  The "main" function of the thread.
//  Called by AADL run-time scheduling infrastructure 
//  at the beginning of each period of the thread.
//  Or for seL4, more precisely, at the point(s) in time indicated
//  by the user-provided static domain schedule
//----------------------------------------------

Unit base_test_event_data_port_periodic_domains_producer_t_i_producer_producer_timeTriggered_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "producer_t_i_producer_producer.c", "", "base_test_event_data_port_periodic_domains_producer_t_i_producer_producer_timeTriggered_", 0);

}
```


```c
// File: producer_t_i_producer_producer_api.h

#ifndef PRODUCER_T_I_PRODUCER_PRODUCER_API_H
#define PRODUCER_T_I_PRODUCER_PRODUCER_API_H

#include <all.h>

// This file was auto-generated.  Do not edit

void api_put_write_port__base_test_event_data_port_periodic_domains_producer_t_i_producer_producer(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray);

void api_logInfo__base_test_event_data_port_periodic_domains_producer_t_i_producer_producer(
  STACK_FRAME
  String str);

void api_logDebug__base_test_event_data_port_periodic_domains_producer_t_i_producer_producer(
  STACK_FRAME
  String str);

void api_logError__base_test_event_data_port_periodic_domains_producer_t_i_producer_producer(
  STACK_FRAME
  String str);

#endif
```

```c
// File: consumer_t_i_consumer_consumer_api.h

#ifndef CONSUMER_T_I_CONSUMER_CONSUMER_API_H
#define CONSUMER_T_I_CONSUMER_CONSUMER_API_H

#include <all.h>

// This file was auto-generated.  Do not edit

bool api_get_read_port__base_test_event_data_port_periodic_domains_consumer_t_i_consumer_consumer(
  STACK_FRAME
  size_t *numBits,
  uint8_t *byteArray);

void api_logInfo__base_test_event_data_port_periodic_domains_consumer_t_i_consumer_consumer(
  STACK_FRAME
  String str);

void api_logDebug__base_test_event_data_port_periodic_domains_consumer_t_i_consumer_consumer(
  STACK_FRAME
  String str);

void api_logError__base_test_event_data_port_periodic_domains_consumer_t_i_consumer_consumer(
  STACK_FRAME
  String str);

#endif
```

```c
// File: producer_t_i_producer_producer.c (completed application code)
#include <producer_t_i_producer_producer_api.h>
#include <producer_t_i_producer_producer.h>
#include <ext.h>

// This file will not be overwritten so is safe to edit

int32_t sent;
Unit base_test_event_data_port_periodic_domains_producer_t_i_producer_producer_initialise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "producer_t_i_producer_producer.c", "", "base_test_event_data_port_periodic_domains_producer_t_i_producer_producer_initialise_", 0);
  sent = 0;
}

Unit base_test_event_data_port_periodic_domains_producer_t_i_producer_producer_finalise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "producer_t_i_producer_producer.c", "", "base_test_event_data_port_periodic_domains_producer_t_i_producer_producer_finalise_", 0);
}

Unit base_test_event_data_port_periodic_domains_producer_t_i_producer_producer_timeTriggered_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "producer_t_i_producer_producer.c", "", "base_test_event_data_port_periodic_domains_producer_t_i_producer_producer_timeTriggered_", 0);

  uint8_t t0[numBytes_S32];
  t0[0] = (sent >> 24) & 0xFF;
  t0[1] = (sent >> 16) & 0xFF;
  t0[2] = (sent >> 8) & 0xFF;
  t0[3] = sent & 0xFF;

  printf("Sent %i\n", sent);
  hex_dump(t0, 4);
  printf("\n");

  sent++;

  api_put_write_port__base_test_event_data_port_periodic_domains_producer_t_i_producer_producer(SF numBits_S32, t0);

}
```

```c
// File: consumer_t_i_consumer_consumer.c (completed application code)
#include <consumer_t_i_consumer_consumer_api.h>
#include <consumer_t_i_consumer_consumer.h>
#include <ext.h>

// This file will not be overwritten so is safe to edit

Unit base_test_event_data_port_periodic_domains_consumer_t_i_consumer_consumer_initialise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "consumer_t_i_consumer_consumer.c", "", "base_test_event_data_port_periodic_domains_consumer_t_i_consumer_consumer_initialise_", 0);
}

Unit base_test_event_data_port_periodic_domains_consumer_t_i_consumer_consumer_finalise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "consumer_t_i_consumer_consumer.c", "", "base_test_event_data_port_periodic_domains_consumer_t_i_consumer_consumer_finalise_", 0);
}

Unit base_test_event_data_port_periodic_domains_consumer_t_i_consumer_consumer_timeTriggered_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "consumer_t_i_consumer_consumer.c", "", "base_test_event_data_port_periodic_domains_consumer_t_i_consumer_consumer_timeTriggered_", 0);

  uint8_t t0[numBytes_S32];
  size_t t0_numBits;
  if(api_get_read_port__base_test_event_data_port_periodic_domains_consumer_t_i_consumer_consumer(SF &t0_numBits, t0)) {
    // sanity check
    sfAssert(SF (Z) t0_numBits == numBits_S32, "numBits received does not match expected");

    int32_t value = t0[0] << 24 | t0[1] << 16 | t0[2] << 8 | t0[3];
    printf("Received %i\n", value);

    DeclNewString(read_port_str);
    String__append(SF (String) &read_port_str, string("Received "));
    Z_string_(SF (String) &read_port_str, t0_numBits);
    String__append(SF (String) &read_port_str, string(" bits on port read_port: [ "));
    byte_array_string(SF (String) &read_port_str, t0, numBytes_S32);
    String__append(SF (String) &read_port_str, string("]\n"));

    api_logInfo__base_test_event_data_port_periodic_domains_consumer_t_i_consumer_consumer(SF (String) &read_port_str);
  }
}
```

```c
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
    { .domain = 0, .length = 100 }, // all other seL4 threads, init, 200ms
    { .domain = 2, .length =   5 }, // source       10ms
    { .domain = 0, .length =  95 }, // domain0     190ms
    { .domain = 3, .length =   5 }, // destination  10ms
    { .domain = 0, .length = 295 }, // domain0     590ms
                                    // +
                                    // -----------------
                                    //            1000ms 
};

const word_t ksDomScheduleLength = sizeof(ksDomSchedule) / sizeof(dschedule_t);
```

