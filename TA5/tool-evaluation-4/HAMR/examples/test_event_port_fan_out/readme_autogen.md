# test_event_port_fan_out

 Table of Contents
  * [Diagrams](#diagrams)
    * [AADL Arch](#aadl-arch)
    * [SeL4_TB](#sel4_tb)
      * [SeL4_TB CAmkES Arch](#sel4_tb-camkes-arch)
      * [SeL4_TB CAmkES HAMR Arch](#sel4_tb-camkes-hamr-arch)
    * [SeL4_Only](#sel4_only)
      * [SeL4_Only CAmkES Arch](#sel4_only-camkes-arch)
      * [SeL4_Only CAmkES HAMR Arch](#sel4_only-camkes-hamr-arch)
  * [Example Output](#example-output)
    * [SeL4_TB Expected Output: Timeout = 15 seconds](#sel4_tb-expected-output:-timeout-=-15-seconds)
    * [SeL4_Only Expected Output: Timeout = 15 seconds](#sel4_only-expected-output:-timeout-=-15-seconds)

## Diagrams
### AADL Arch
![AADL Arch](diagrams/aadl-arch.png)

### SeL4_TB
#### SeL4_TB CAmkES Arch
![SeL4_TB CAmkES Arch](diagrams/CAmkES-arch-SeL4_TB.svg)

#### SeL4_TB CAmkES HAMR Arch
![SeL4_TB CAmkES HAMR Arch](diagrams/CAmkES-HAMR-arch-SeL4_TB.svg)

### SeL4_Only
#### SeL4_Only CAmkES Arch
![SeL4_Only CAmkES Arch](diagrams/CAmkES-arch-SeL4_Only.svg)

#### SeL4_Only CAmkES HAMR Arch
![SeL4_Only CAmkES HAMR Arch](diagrams/CAmkES-HAMR-arch-SeL4_Only.svg)

## Example Output
*NOTE:* actual output may differ due to issues related to thread interleaving
### SeL4_TB Expected Output: Timeout = 15 seconds

  |HAMR Codegen Configuration| |
  |--|--|
  |Exclude Component Implementation | true |
  |bitWidth | 32 |
  |maxStringSize | 256 |
  |maxArraySize | 1 |


  **How To Run**
  ```
  test_event_port_fan_out/CAmkES_seL4_TB/bin/run-camkes.sh
  ```

  ```
  Booting all finished, dropped to user space
  Undelivered IRQ: 18
  [src] test_event_port_emitter_component_init called
  [snkQueue5] test_event_port_consumer_component_init called
  [snkQueue2_B] test_event_port_consumer_component_init called
  [snkQueue2_A] test_event_port_consumer_component_init called
  [snkDefault] test_event_port_consumer_component_init called
  ---------------------------------------
  [src] Sent 0 events.
  ---------------------------------------
  [src] Sent 1 events.
  [snkDefault][snkQueue2_A] Received 1 events
  [snkQueue2_B] Receive[snkQueue5] Received 1 events
   Received 1 events
  d 1 events
  ---------------------------------------
  [src] Sent 2 events.
  [snkDefault] Received 1 events
  [sn[snkQueue2_B] Received 2 events
  [snkQueue5] Received 2 evekQueue2_A] Received 2 events
  nts
  ---------------------------------------
  [src] Sent 3 events.
  [snkDefault] Received 1 events
  [snkQueue2_A] Received 2 events
  [snkQueue2_B] Received 2 events
  [snkQueue5] Received 3 events

  ```

### SeL4_Only Expected Output: Timeout = 15 seconds

  |HAMR Codegen Configuration| |
  |--|--|
  |Exclude Component Implementation | true |
  |bitWidth | 32 |
  |maxStringSize | 256 |
  |maxArraySize | 1 |


  **How To Run**
  ```
  test_event_port_fan_out/CAmkES_seL4_Only/bin/run-camkes.sh
  ```

  ```
  Booting all finished, dropped to user space
  [src] test_event_port_emitter_component_init called
  [snkQueue5] test_event_port_consumer_component_init called
  [snkQueue2_B] test_event_port_consumer_component_init called
  [snkQueue2_A] test_event_port_consumer_component_init called
  [snkDefault] test_event_port_consumer_component_init called
  ---------------------------------------
  [src] Sent 0 events.
  ---------------------------------------
  [src] Sent 1 events.
  [snkDefault] Received 1 events
  [snkQueue2_B] Received 1 events
  [snkQueue5] Received 1 events
  [snkQueue2_A] Received 1 events
  ---------------------------------------
  [src] Sent 2 events.
  [snkDefault] Received 1 events
  [snkQueue2_A] Received 2 events
  [snkQueue2_B] Received 2 events
  [snkQueue5] Received 2 events
  ---------------------------------------
  [src] Sent 3 events.
  [snkDefault] Received 1 [snkQueue2_A] Received 2 events
  [snkQueue2_B] Received 2 events
  [snkQueue5] Received 3 events
  events
  ---------------------------------------
  [src] Sent 4 events.
  [snkDefault] Received 1 events
  [snkQueue2_A] Received 2 events
  [snkQueu[snkQueue5] Received 4 events
  e2_B] Received 2 events

  ```