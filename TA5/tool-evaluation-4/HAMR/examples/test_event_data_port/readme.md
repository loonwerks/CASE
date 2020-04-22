**Table of Contents**

- [AADL Event Data Ports](#aadl-event-data-ports)
  * [HAMR Code Generation for seL4 [CASE Phase 1 - Trusted Build Version]](#hamr-code-generation-for-sel4-case-phase-1---trusted-build-version)
  * [HAMR Code Generation for seL4 [CASE Phase 2]](#hamr-code-generation-for-sel4-case-phase-2)
  * [Outline of Argument for Correctness of Translation, Preservation of Information Flow, and Cyber-Resiliency](#outline-of-argument-for-correctness-of-translation-preservation-of-information-flow-and-cyber-resiliency)
- [Running HAMR](#running-hamr)

# AADL Event Data Ports

![arch](diagrams/arch.png)

This example illustrates how AADL event data ports are represented using seL4 
artifacts. AADL event data ports (and associated connections between ports) are 
used to model one-way queued message passing between components. Intuitively, a
component with an AADL out event data port can send a message out of the port; 
a component with an AADL in event data port can retrieve messages from the queue 
associated with the port (each incoming event data port has a distinct 
queue/buffer). As specified by AADL semantics, arrival of an event on an in 
event data port can be set to trigger a dispatch of the consuming thread. Therefore, 
AADL threads that have in event data ports are typically event-triggered (declared 
with a SPORADIC AADL dispatch mode and dispatched upon arrival of information on an 
AADL event or event data port).  With a SPORADIC dispatch mode, a minimum separation 
time between event arrivals is also specified.  Messages arriving before the minimum 
interval expires are dropped (providing some protection from denial of service 
situations where incoming messages may flood a component).   A typical computation 
pattern is that when a thread is dispatched via event arrival, it will process the 
payload from the incoming message and also make calls from the user code to read 
the current values of data ports. The user code action of sending a message out 
an event data port is always non-blocking; if a receiving component’s message queue 
is full, a message is dropped according to a policy specified as a property in the 
model on the input port (e.g., drop newest message, drop oldest message, etc.)  AADL 
properties can be attached to ports/connections to indicate latency bounds 
on propagation of messages from out event data ports to connected in ports 
(scheduling of threads/communication necessary to achieve these bounds is outside 
the scope of CASE).  A variety of AADL properties can be used to state priorities 
regarding which input event data ports within a component trigger the dispatching 
of the thread. 

Components can have any number of out event data ports and in event data ports.  This example 
represents a simple producer-consumer pattern, with a single out event data port on the 
producer and a single in event data port on the consumer.   Specifically, the model 
contains two AADL threads `src` and `dest` that are instances of 
[emitter_t.impl](test_event_data_port.aadl#L16-L17)
and 
[consumer_t.impl](test_event_data_port.aadl#L30-L31)
respectively. The AADL port connection 
[conn1](test_event_data_port.aadl#L47)
connects `src`'s outgoing 
[enq](test_event_data_port.aadl#L8)
data port to `dest`'s incoming 
[deq](test_event_data_port.aadl#L21)
data port.

## HAMR Code Generation for seL4 [CASE Phase 1 - Trusted Build Version]

*HAMR generated code is contained in the [CAmkES_seL4_TB](CAmkES_seL4_TB) directory*

HAMR transforms each AADL thread into separate CAmkES 
components.  The top-level CAmkES topology for the translated example 
can be found in 
[test_event_data_port.camkes](CAmkES_seL4_TB/test_event_data_port.camkes). For example,
the AADL `src` thread is translated to 
[emitter_t_impl.camkes](CAmkES_seL4_TB/components/emitter_t_impl/emitter_t_impl.camkes), 
and the AADL `dest` thread is translated to 
[consumer_t_impl.camkes](CAmkES_seL4_TB/components/consumer_t_impl/consumer_t_impl.camkes)
.  An intermediary CAmkES component called a monitor, 
[sb_dest_deq_Monitor.camkes](CAmkES_seL4_TB/components/sb_Monitors/sb_dest_deq_Monitor/sb_dest_deq_Monitor.camkes), 
is introduced to handle the queued communcation 
over `conn1`. Both producer and consumer components are connected to the 
monitor via *sel4RPCCall* connections (
[conn1](CAmkES_seL4_TB/test_event_data_port.camkes#L12) 
and 
[conn2](CAmkES_seL4_TB/test_event_data_port.camkes#L13) 
in the CAmkES assembly). The *seL4Notification* connection 
[conn3](CAmkES_seL4_TB/test_event_data_port.camkes#L14) allows the monitor to notify the consumer
that an event has arrived, which will cause the component to be dispatched.

HAMR also generates “glue code” on both the 
producer side 
[sb_emitter_t_impl.c](CAmkES_seL4_TB/components/emitter_t_impl/src/sb_emitter_t_impl.c)
and consumer side 
[sb_consumer_t_impl.c](CAmkES_seL4_TB/components/consumer_t_impl/src/sb_consumer_t_impl.c)
to isolate the application code of both components from some of the 
details of interacting with lower-level CAmkES/seL4 APIs.


## HAMR Code Generation for seL4 [CASE Phase 2]

*HAMR generated code is contained in the [CAmkES_seL4_Only](CAmkES_seL4_Only) directory*

HAMR transforms each AADL thread into separate CAmkES 
components.  The top-level CAmkES topology for the translated example 
can be found in 
[test_event_data_port.camkes](CAmkES_seL4_Only/test_event_data_port.camkes). For example, 
the AADL `src` thread is translated to 
[emitter_t_impl.camkes](CAmkES_seL4_Only/components/emitter_t_impl/emitter_t_impl.camkes), 
and the AADL `dest` thread is translated to 
[consumer_t_impl.camkes](CAmkES_seL4_Only/components/consumer_t_impl/consumer_t_impl.camkes)
. 

The new translation for event data port connections uses a modified version 
of the *Trusted Build* style monitor components (see previous section) in which the enqueue and dequeue
interfaces have been split into separate procedures. This ensures that a sender 
can only write to the queue and a receiver can only read from the queue. For example,
[sb_Monitor_int8_t_1_Sender.idl4](CAmkES_seL4_Only/interfaces/sb_Monitor_int8_t_1_Sender.idl4)
provides the enqueue interface used by the monitor's
[mon_send](CAmkES_seL4_Only/components/sb_Monitors/sb_dest_deq_Monitor/sb_dest_deq_Monitor.camkes#L7),
and 
[sb_Monitor_int8_t_1_Receiver.idl4](CAmkES_seL4_Only/interfaces/sb_Monitor_int8_t_1_Receiver.idl4)
provides the dequeue interface used by the monitor's 
[mon_receive](CAmkES_seL4_Only/components/sb_Monitors/sb_dest_deq_Monitor/sb_dest_deq_Monitor.camkes#L6).

(Documentation and examples are forth-coming. Quick notes: The new version of
the translation removes the monitor component and has the queue between the 
producer and consumer communicate through a shared memory region where seL4 
memory protections are used to ensure that the producer can only write and 
the consumer can only read.  The new version is also more closely aligned 
with the semantics and APIs described in the AADL standard.)

(Note: A newer version of the translation removes the monitor component and has
the queue between the producer and consumer communicate through a shared memory 
region where seL4 memory protections are used to ensure that the producer can 
only write and the consumer can only read. The new version is also more closely 
aligned with the semantics and APIs described in the AADL standard.)

## Outline of Argument for Correctness of Translation, Preservation of Information Flow, and Cyber-Resiliency
(Documentation is forth-coming)

# Running HAMR

1. Install [FM-IDE](https://github.com/loonwerks/formal-methods-workbench/releases)

2. Import this project into FM-IDE (by pointing to the directory containing [.project](.project))

3. Switch to the AADL perspective (from the menu bar select *Window >> Perspective >> Open Perspective >> AADL*)

4. Open [test_event_data_port.aadl](test_event_data_port.aadl) and in the Outline view select the system implementation *top.impl*

5. Run *Resolint* (from the menu bar select *Analyses >> Resolint*).  It should report no errors were found with the model.

6. With *top.impl* still selected in the outline view, click the *HAMR* icon in the toolbar

7. For *Platform*, select *seL4_TB* to generate CAmkES code using *Trusted Build* style port/connection translations, or *seL4_Only* to generate CAmkES code using *System Build* style port/connection translations.

8. Select an output directory where the generated CAmkES code will be written to.  The *Aux Code Directory for CAmkES* should be left blank.

9. Click *Run*

![example configuration](diagrams/hamr_options.png)
