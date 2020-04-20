**Table of Contents**

- [Simple UAV](#simple-uav)
  * [HAMR Code Generation for seL4 [CASE Phase 1 - Trusted Build Version]](#hamr-code-generation-for-sel4-case-phase-1---trusted-build-version)
  * [HAMR Code Generation for seL4 [CASE Phase 2]](#hamr-code-generation-for-sel4-case-phase-2)
  * [Outline of Argument for Correctness of Translation, Preservation of Information Flow, and Cyber-Resiliency](#outline-of-argument-for-correctness-of-translation-preservation-of-information-flow-and-cyber-resiliency)
- [Running HAMR](#running-hamr)

# Simple UAV

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

Components can have any number of out event data ports and in event data ports.  This 
example represents the mission computer component, `MCMP`, of a simple UAV 
surveillance system in which all communication is handled by event data ports. A 
ground station transmits a surveillance region and flight pattern 
to a UAV via a radio component, `RADIO`.  The Flight Planner, `FPLN` on board 
the mission computer takes the surveillance region and flight pattern input and 
generates the flight mission, which is a list of waypoints the UAV must 
follow. The Waypoint Manager, `WPM` passes the current window of waypoints to 
the UAV Flight Controller via a UART, `UART`.


## HAMR Code Generation for seL4 [CASE Phase 1 - Trusted Build Version]

*HAMR generated code is contained in the [CAmkES_seL4_TB](CAmkES_seL4_TB) directory*

HAMR transforms each AADL thread into separate CAmkES 
components.  The top-level CAmkES topology for the translated example 
can be found in 
[PROC_SW.camkes](CAmkES_seL4_TB/PROC_SW.camkes). For example, the AADL 
`RADIO` thread is an instance of
[RadioDriver.Impl](SW.aadl#L83-L84) and is translated to 
[RadioDriver_Impl.camkes](CAmkES_seL4_TB/components/RadioDriver_Impl/RadioDriver_Impl.camkes), 
the `FPLN` thread is an instance of 
[FlightPlanner.Impl](SW.aadl#L102-L103)
and is translated to 
[FlightPlanner_Impl.camkes](CAmkES_seL4_TB/components/FlightPlanner_Impl/FlightPlanner_Impl.camkes),
the `WPM` thread is an instance of 
[WaypointManager.Impl](SW.aadl#L121-L122)
and is translated to 
[WaypointManager_Impl.camkes](CAmkES_seL4_TB/components/WaypointManager_Impl/WaypointManager_Impl.camkes),
and the `UART` thread is an instance of 
[UARTDriver.Impl](SW.aadl#L136-L137)
and is translated to
[UARTDriver_Impl.camkes](CAmkES_seL4_TB/components/UARTDriver_Impl/UARTDriver_Impl.camkes).  

Intermediary CAmkES components called monitors are introduced to facilitate the 
queued communication over the event data ports. Each connection is handled
by a separate monitor.  For example, the monitor 
[sb_UART_mission_window_Monitor.camkes](CAmkES_seL4_TB/components/sb_Monitors/sb_UART_mission_window_Monitor/sb_UART_mission_window_Monitor.camkes)
is generated for the 
[c6](SW.aadl#L152)
connection between the 
`mission_window` ports of the waypoint manager and UART.  The 
event queue is stored in the monitor and enqueue/dequeue APIs
are provided by the interface specification
[sb_Monitor_SW__MissionWindow_1.idl4](CAmkES_seL4_TB/interfaces/sb_Monitor_SW__MissionWindow_1.idl4).
Both components are connected to the 
monitor via *sel4RPCCall* connections (
[conn10](CAmkES_seL4_TB/PROC_SW.camkes#L33) 
and 
[conn11](CAmkES_seL4_TB/PROC_SW.camkes#L34) 
in the CAmkES assembly). The *seL4Notification* connection 
[conn12](CAmkES_seL4_TB/PROC_SW.camkes#L35) allows the monitor to notify the UART
that an event has arrived, which causes the component to be dispatched.

HAMR also generates “glue code” for each component
to isolate the application code of the components from some of the 
details of interacting with lower-level CAmkES/seL4 APIs;
[sb_RadioDriver_Impl.c](CAmkES_seL4_TB/components/RadioDriver_Impl/src/sb_RadioDriver_Impl.c)
for the `RADIO` component,
[sb_FlightPlanner_Impl.c](CAmkES_seL4_TB/components/FlightPlanner_Impl/src/sb_FlightPlanner_Impl.c)
for the `FPLN` component,
[sb_WaypointManager_Impl.c](CAmkES_seL4_TB/components/WaypointManager_Impl/src/sb_WaypointManager_Impl.c)
for the `WPM` component,
and
[sb_UARTDriver_Impl.c](CAmkES_seL4_TB/components/UARTDriver_Impl/src/sb_UARTDriver_Impl.c)
for the `UART`.

## HAMR Code Generation for seL4 [CASE Phase 2]

*HAMR generated code is contained in the [CAmkES_seL4_Only](CAmkES_seL4_Only) directory*

HAMR transforms each AADL thread into separate CAmkES 
components.  The top-level CAmkES topology for the translated example 
can be found in 
[PROC_SW.camkes](CAmkES_seL4_Only/PROC_SW.camkes). For example, the AADL 
`RADIO` thread is an instance of
[RadioDriver.Impl](SW.aadl#L83-L84) and is translated to 
[RadioDriver_Impl.camkes](CAmkES_seL4_Only/components/RadioDriver_Impl/RadioDriver_Impl.camkes), 
the `FPLN` thread is an instance of 
[FlightPlanner.Impl](SW.aadl#L102-L103)
and is translated to 
[FlightPlanner_Impl.camkes](CAmkES_seL4_Only/components/FlightPlanner_Impl/FlightPlanner_Impl.camkes),
the `WPM` thread is an instance of 
[WaypointManager.Impl](SW.aadl#L121-L122)
and is translated to 
[WaypointManager_Impl.camkes](CAmkES_seL4_Only/components/WaypointManager_Impl/WaypointManager_Impl.camkes),
and the `UART` thread is an instance of 
[UARTDriver.Impl](SW.aadl#L136-L137)
and is translated to
[UARTDriver_Impl.camkes](CAmkES_seL4_Only/components/UARTDriver_Impl/UARTDriver_Impl.camkes).  

The new translation for event data port connections uses a modified
version of the *Trusted Build* style monitor components in which the 
enqueue and dequeue interfaces have been split into separate procedures.  This
ensures that a sender can only write to the queue and a receiver can only
read from the queue.  For example,
[sb_Monitor_SW__MissionWindow_1_Sender.idl4](CAmkES_seL4_Only/interfaces/sb_Monitor_SW__MissionWindow_1_Sender.idl4)
provides the enqueue interface used by the monitor's
[mon_send](CAmkES_seL4_Only/components/sb_Monitors/sb_UART_mission_window_Monitor/sb_UART_mission_window_Monitor.camkes#L7),
and
[sb_Monitor_SW__MissionWindow_1_Receiver.idl4](CAmkES_seL4_Only/interfaces/sb_Monitor_SW__MissionWindow_1_Receiver.idl4)
provides the dequeue interface used by the monitor's
[mon_receive](CAmkES_seL4_Only/components/sb_Monitors/sb_UART_mission_window_Monitor/sb_UART_mission_window_Monitor.camkes#L6),
for the 
[c6](SW.aadl#L152)
connection between the 
`mission_window` ports of the waypoint manager and UART.  


HAMR also generates “glue code” for each component
to isolate the application code of the components from some of the 
details of interacting with lower-level CAmkES/seL4 APIs;
[sb_RadioDriver_Impl.c](CAmkES_seL4_Only/components/RadioDriver_Impl/src/sb_RadioDriver_Impl.c)
for the `RADIO` component,
[sb_FlightPlanner_Impl.c](CAmkES_seL4_Only/components/FlightPlanner_Impl/src/sb_FlightPlanner_Impl.c)
for the `FPLN` component,
[sb_WaypointManager_Impl.c](CAmkES_seL4_Only/components/WaypointManager_Impl/src/sb_WaypointManager_Impl.c)
for the `WPM` component,
and
[sb_UARTDriver_Impl.c](CAmkES_seL4_Only/components/UARTDriver_Impl/src/sb_UARTDriver_Impl.c)
for the `UART`.


(Note: A newer version of the translation removes the monitor component and 
has the queue between the producer and consumer communicate through a shared
memory region where seL4 memory protections are used to ensure that the
producer can only write and the consumer can only read. The new version is 
also more closely aligned with the semantics and APIs described in the AADL standard.)

## Outline of Argument for Correctness of Translation, Preservation of Information Flow, and Cyber-Resiliency

(Documentation is forth-coming)

# Running HAMR

1. Install [FM-IDE](https://github.com/loonwerks/formal-methods-workbench/releases)

2. Import this project into FM-IDE (by pointing to the directory containing [.project](.project))

3. Switch to the AADL perspective (from the menu bar select *Window >> Perspective >> Open Perspective >> AADL*)

4. Open [UAV.aadl](UAV.aadl) and in the Outline view select the system implementation *UAV.Impl*

5. Run *Resolint* (from the menu bar select *Analyses >> Resolint*).  It should report no errors were found with the model.

6. With *UAV.Impl* still selected in the outline view, click the *HAMR* icon in the toolbar

7. For *Platform*, select *seL4_TB* to generate CAmkES code using *Trusted Build* style port/connection translations, or *seL4_Only* to generate CAmkES code using *System Build* style port/connection translations.

8. Select an output directory where the generated CAmkES code will be written to.  The *Aux Code Directory for CAmkES* should be left blank.

9. Click *Run*

![example configuration](diagrams/hamr_options.png)
