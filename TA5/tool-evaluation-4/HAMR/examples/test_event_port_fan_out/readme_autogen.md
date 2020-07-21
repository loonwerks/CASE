# test_event_port_fan_out

 Table of Contents
  * [Diagrams](#diagrams)
    * [AADL Arch](#aadl-arch)
    * [SeL4_TB](#sel4tb)
      * [SeL4_TB CAmkES Arch](#sel4tb-camkes-arch)
      * [SeL4_TB CAmkES HAMR Arch](#sel4tb-camkes-hamr-arch)
    * [SeL4_Only](#sel4only)
      * [SeL4_Only CAmkES Arch](#sel4only-camkes-arch)
      * [SeL4_Only CAmkES HAMR Arch](#sel4only-camkes-hamr-arch)
  * [Example Output](#example-output)
    * [SeL4_TB Expected Output: Timeout = 15 seconds](#sel4tb-expected-output-timeout--15-seconds)
    * [SeL4_Only Expected Output: Timeout = 15 seconds](#sel4only-expected-output-timeout--15-seconds)

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
  | package-name | test_event_port_fan_out |
  | exclude-component-impl | true |
  | bit-width | 32 |
  | max-string-size | 256 |
  | max-array-size | 1 |


  **How To Run**
  ```
  test_event_port_fan_out/CAmkES_seL4_TB/bin/run-camkes.sh -s
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
  [snkDef[snkQueue2_A] Received 1 events
  [snkQueue2_B] Received 1 events
  [snkQueue5] Received 1 events
  ault] Received 1 events
  ---------------------------------------
  [src] Sent 2 events.
  [snkDefault] Received 1 events
  [snkQueue2_A] Received 2 events
  [snkQueue2_B] Received 2 events
  [snkQueue5] Received 2 events
  ---------------------------------------
  [src] Sent 3 events.
  [snkDefault] Received 1 events
  [snkQueue2_A] Received 2 events
  [snkQueue2_B] Received 2 events
  [snkQueue5] Received 3 events
  ---------------------------------------
  [src] Sent 4 events.
  [snkDefault] Received 1 events
  [snkQueue2_A] Received 2 events
  [snkQueue2_B] Received 2 events
  [snkQueue5] Received 4 events

  ```

### SeL4_Only Expected Output: Timeout = 15 seconds

  |HAMR Codegen Configuration| |
  |--|--|
  | package-name | test_event_port_fan_out |
  | exclude-component-impl | true |
  | bit-width | 32 |
  | max-string-size | 256 |
  | max-array-size | 1 |


  **How To Run**
  ```
  test_event_port_fan_out/CAmkES_seL4_Only/bin/run-camkes.sh -s
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
  [snkDefault] Rec[snkQueue2_A] Received 1 events
  [snkQueue2_B] Received 1 events
  [snkQueue5] Received 1 events
  eived 1 events
  ---------------------------------------
  [src] Sent 2 events.
  [snkDefault] Received 1 events
  [snkQueue2_A] Received 2 events
  [snkQueue2_B] Received 2 events
  [snkQueue5] Received 2 events
  ---------------------------------------
  [src] Sent 3 events.
  [snkDefault] Received 1 events
  [snkQueue2_A] Received 2 events
  [snkQueue2_B] Received 2 events
  [snkQueue5] Received 3 events
  ---------------------------------------
  [src] Sent 4 events.
  [snkDefault] Received 1 events
  [snkQueue2_A] Received 2 events
  [snkQueue2_B] Received 2 events
  [snkQueue5] Received 4 events
  ---------------------------------------
  [src] Sent 5 events.
  [snkDefault] Received 1 events
  [snkQueue2_A] Received 2 events
  [snkQueue2_B] Received 2 events
  [snkQueue5] Received 5 events

  ```