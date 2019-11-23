# AADL Event Ports

![arch](diagrams/arch.png)

This example illustrates how AADL event ports are represented using seL4 
artifacts. AADL event ports (and associated connections between ports) are
used to model one-way queued signaling between components. Intuitively, a 
component with an AADL out event port can send a signal/notification out 
of the port; a component with an AADL in event port can retrieve the signals 
from the queue associated with the port (each incoming event port has a 
distinct queue/buffer).  AADL event port communication behaves exactly 
as event data port communication, except the events sent between 
components have no user data payloads in the case of event ports.  As 
specified by AADL semantics, arrival of an event on an in event port 
can be set to trigger a dispatch of the consuming thread. Therefore, AADL 
threads that have in event ports are typically event-triggered (declared 
with a SPORADIC AADL dispatch mode and dispatched upon arrival of information 
on an AADL event or event data port). With a SPORADIC dispatch mode, a 
minimum separation time between event arrivals is also specified.  Messages 
arriving before the minimum interval expires are dropped (providing some 
protection from denial of service situations where incoming messages may 
flood a component).  A typical computation pattern is that when a thread is 
dispatched via event arrival, it may make calls from the user code to read 
the current values of data ports (optional) and then take some appropriate
action. The user code action of sending an event is always non-blocking; if
a receiving component’s event queue is full, a message is dropped according
to a policy specified as a property in the model in the input port (e.g., drop 
newest event, drop oldest event, etc.)  AADL properties can be attached to
ports/connections to indicate latency bounds on propagation of events from 
out event ports to connected in ports (scheduling of threads/communication 
necessary to achieve these bounds is outside the scope of CASE).  A variety 
of AADL properties can be used to state priorities regarding which input 
event ports within a component trigger the dispatching of the thread.

Components can have any number of out event ports and in event ports.  This example 
represents a simple producer-consumer pattern, with a single out event port on the 
producer and a single in event port on the consumer.   Specifically, the model 
contains two AADL threads `src` and `snk` that are instances of 
[emitter.impl](testevent.aadl#L15-L16)
and 
[consumer.impl](testevent.aadl#L29-L30)
respectively. The AADL port connection 
[conn1](testevent.aadl#L46)
connects `src`'s outgoing 
[e](testevent.aadl#L7)
event port to `snk`'s incoming 
[s](testevent.aadl#L20)
event port.


## HAMR Code Generation for seL4 [CASE Phase 1 - Trusted Build Version]

*HAMR generated code is contained in the [CAmkES](CAmkES) directory*

HAMR transforms each AADL thread into separate CAmkES 
components.  The top-level CAmkES topology for the translated example 
can be found in 
[testevent.camkes](CAmkES/testevent.camkes). For example, the AADL `src` thread is translated 
to 
[emitter_impl.camkes](CAmkES/components/emitter_impl/emitter_impl.camkes), 
and the AADL `dest` thread is translated to 
[consumer_impl.camkes](CAmkES/components/consumer_impl/consumer_impl.camkes)
.  The *seL4Notification* connection
[conn1](CAmkES/testevent.camkes#L10) allows the `src` component to signal/notify
`dest` that an event has been sent, which will result in `dest` being dispatched.

HAMR also generates “glue code” on both the 
producer side 
[sb_emitter_impl.c](CAmkES/components/emitter_impl/src/sb_emitter_impl.c)
and consumer side 
[sb_consumer_impl.c](CAmkES/components/consumer_impl/src/sb_consumer_impl.c)
to isolate the application code of both components from some of the 
details of interacting with lower-level CAmkES/seL4 APIs.


## HAMR Code Generation for seL4 [CASE Phase 2]

(Documentation and examples are forth-coming. Quick notes: The new version
of the translation removes the monitor component and has the queue between
the producer and consumer communicate through a shared memory region where
seL4 memory protections are used to ensure that the producer can only write
and the consumer can only read.  The new version is also more closely 
aligned with the semantics and APIs described in the AADL standard.)
