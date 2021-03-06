# test_data_port_periodic_fan_out

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
  | refer to [bin/run-hamr-SeL4_TB.sh](bin/run-hamr-SeL4_TB.sh) |


  **How To Run**
  ```
  ./bin/run-hamr-SeL4_TB.sh
  ./CAmkES_seL4_TB/bin/run-camkes.sh -s
  ```

  ```
  Booting all finished, dropped to user space
  [test_data_port_periodic_src] test_data_port_periodic_source_component_init called
  [test_data_port_periodic_dest_B] test_data_port_periodic_destination_component_init called
  [test_data_port_periodic_dest_A] test_data_port_periodic_destination_component_init called
  ---------------------------------------
  [test_data_port_periodic_src] Sent 0
  [test_data_port_periodic_dest_A] value {0}
  [test_data_port_periodic_dest_B] value {0}
  ---------------------------------------
  [test_data_port_periodic_src] Sent 1
  ---------------------------------------
  [test_data_port_periodic_src] Sent 2
  [test_data_port_periodic_dest_A] value {2}
  [test_data_port_periodic_dest_B] value {2}
  ---------------------------------------
  [test_data_port_periodic_src] Sent 3
  ---------------------------------------
  [test_data_port_periodic_src] Sent 4
  [test_data_port_periodic_dest_A] value {4}
  [test_data_port_periodic_dest_B] value {4}
  ---------------------------------------
  [test_data_port_periodic_src] Sent 5
  ---------------------------------------
  [test_data_port_periodic_src] Sent 6
  [test_data_port_periodic_dest_A] value {6}
  [test_data_port_periodic_dest_B] value {6}
  ---------------------------------------
  [test_data_port_periodic_src] Sent 7
  ---------------------------------------
  [test_data_port_periodic_src] Sent 8
  [test_data_port_periodic_dest_A] value {8}
  [test_data_port_periodic_dest_B] value {8}
  ---------------------------------------
  [test_data_port_periodic_src] Sent 9

  ```

### SeL4_Only Expected Output: Timeout = 15 seconds

  |HAMR Codegen Configuration| |
  |--|--|
  | refer to [bin/run-hamr-SeL4_Only.sh](bin/run-hamr-SeL4_Only.sh) |


  **How To Run**
  ```
  ./bin/run-hamr-SeL4_Only.sh
  ./CAmkES_seL4_Only/bin/run-camkes.sh -s
  ```

  ```
  Booting all finished, dropped to user space
  [test_data_port_periodic_src] test_data_port_periodic_source_component_init called
  [test_data_port_periodic_dest_B] test_data_port_periodic_destination_component_init called
  [test_data_port_periodic_dest_A] test_data_port_periodic_destination_component_init called
  ---------------------------------------
  [test_data_port_periodic_src] Sent 0
  [test_data_port_periodic_dest_A] value {0}
  [test_data_port_periodic_dest_B] value {0}
  ---------------------------------------
  [test_data_port_periodic_src] Sent 1
  ---------------------------------------
  [test_data_port_periodic_src] Sent 2
  [test_data_port_periodic_dest_A] value {2}
  [test_data_port_periodic_dest_B] value {2}
  ---------------------------------------
  [test_data_port_periodic_src] Sent 3
  ---------------------------------------
  [test_data_port_periodic_src] Sent 4
  [test_data_port_periodic_dest_A] value {4}
  [test_data_port_periodic_dest_B] value {4}
  ---------------------------------------
  [test_data_port_periodic_src] Sent 5
  ---------------------------------------
  [test_data_port_periodic_src] Sent 6
  [test_data_port_periodic_dest_A] value {6}
  [test_data_port_periodic_dest_B] value {6}

  ```