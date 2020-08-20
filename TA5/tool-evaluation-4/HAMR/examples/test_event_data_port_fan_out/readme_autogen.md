# test_event_data_port_fan_out

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
    * [SeL4_TB Expected Output: Timeout = 15 seconds](#sel4_tb-expected-output-timeout--15-seconds)
    * [SeL4_Only Expected Output: Timeout = 15 seconds](#sel4_only-expected-output-timeout--15-seconds)

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
  | package-name | test_event_data_port_fan_out |
  | exclude-component-impl | true |
  | bit-width | 32 |
  | max-string-size | 256 |
  | max-array-size | 1 |


  **How To Run**
  ```
  test_event_data_port_fan_out/CAmkES_seL4_TB/bin/run-camkes.sh -s
  ```

  ```
  Booting all finished, dropped to user space
  [src] test_event_data_port_emitter_component_init called
  [snk_default] test_event_data_port_consumer_component_init called
  [snk_5] test_event_data_port_consumer_component_init called
  [snk_2_B] test_event_data_port_consumer_component_init called
  [snk_2_A] test_event_data_port_consumer_component_init called
  ---------------------------------------
  [src] Sent 0 events.
  ---------------------------------------
  [src] Sent 1 events.
  [snk_default] received value {1}
  [snk_default] 1 events received
  [snk_2_B] received value {1}
  [snk_5] received value {1}
  [snk_5] 1 events received
  [snk_2_A] received value {1}
  [snk_2_A] 1 events received
  [snk_2_B] 1 events received
  ---------------------------------------
  [src] Sent 2 events.
  [snk_default] received value {1}
  [snk_default] 1 events received
  [snk_2_A] received value {1}
  [snk_2_A] received value {2}
  [snk_2_A] 2 events received
  [snk_2_B] received value {1}
  [snk_2_B] received value {2}
  [snk_2_B] 2 events received
  [snk_5] received value {1}
  [snk_5] received value {2}
  [snk_5] 2 events received
  ---------------------------------------
  [src] Sent 3 events.
  [snk_2_A] received value {1}
  [snk_2_A] received value {2}
  [snk_2_A] 2 events received
  [snk_2_B] received value {1}
  [snk_2_B] received value {2}
  [snk_2_B] 2 events received
  [snk_5] received value {1}
  [snk_5] received value {2}
  [snk[snk_default] received value {1}
  [snk_default] 1 events received
  _5] received value {3}
  [snk_5] 3 events received
  ---------------------------------------
  [src] Sent 4 events.
  [snk_default] received value {1}
  [snk_default] 1 events received
  [snk_2_A][snk_2_B] received value {1}
  [snk_2_B] received value {2}
  [snk_2_B] 2 events received
  [snk_5] received value {1}
  [snk_5] received value {2}
  [snk_5] received value {3}
  [snk_5] received value {4}
  [snk_5] 4 events received
   received value {1}
  [snk_2_A] received value {2}
  [snk_2_A] 2 events received

  ```

### SeL4_Only Expected Output: Timeout = 15 seconds

  |HAMR Codegen Configuration| |
  |--|--|
  | package-name | test_event_data_port_fan_out |
  | exclude-component-impl | true |
  | bit-width | 32 |
  | max-string-size | 256 |
  | max-array-size | 1 |


  **How To Run**
  ```
  test_event_data_port_fan_out/CAmkES_seL4_Only/bin/run-camkes.sh -s
  ```

  ```
  Booting all finished, dropped to user space
  [src] test_event_data_port_emitter_component_init called
  [snk_default] test_event_data_port_consumer_component_init called
  [snk_5] test_event_data_port_consumer_component_init called
  [snk_2_B] test_event_data_port_consumer_component_init called
  [snk_2_A] test_event_data_port_consumer_component_init called
  ---------------------------------------
  [src] Sent 0 events.
  ---------------------------------------
  [src] Sent 1 events.
  [snk_default] received value {1}
  [snk_default] 1 events received
  [snk_2_A] received value {1}
  [snk_2_A] 1 events received
  [snk_2_B] received value {1}
  [snk_2_B] 1 events receive[snk_5] received value {1}
  [snk_5] 1 events received
  d
  ---------------------------------------
  [src] Sent 2 events.
  [snk_default] received value {2}
  [snk[snk_2_A] received value {1}
  [snk_2_A] received value {2}
  [snk_2_A] 2 events received
  [snk_2_B] received value {1}
  [snk_2_B] received value {2}
  [snk_2_B] 2 events received
  [snk_5_default] 1 events received
  ] received value {1}
  [snk_5] received value {2}
  [snk_5] 2 events received
  ---------------------------------------
  [src] Sent 3 events.
  [snk_default] received value {3}
  [snk_default] 1 events received
  [snk_2_A] received value {2}
  [snk_2_A] received value {3}
  [snk_2_A] 2 events received
  [snk_2_B] received value {2}
  [snk_2_B] received value {3}
  [snk_2_B] 2 events received
  [snk_5] received value {1}
  [snk_5] received value {2}
  [snk_5] received value {3}
  [snk_5] 3 events received
  ---------------------------------------
  [src] Sent 4 events.
  [snk_default] received value {4}
  [snk_default] 1 events received
  [snk_2_A] received value {3}
  [snk_2_A] received value {4}
  [snk_2_A] 2 events received
  [snk_2_B] received value {3}
  [snk_2_B] received value {4}
  [snk_2_B] 2 events received
  [snk_5] received value {1}
  [snk_5] received value {2}
  [snk_5] received value {3}
  [snk_5] received value {4}
  [snk_5] 4 events received

  ```