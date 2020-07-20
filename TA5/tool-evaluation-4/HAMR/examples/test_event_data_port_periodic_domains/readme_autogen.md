# test_event_data_port_periodic_domains

 Table of Contents
  * [Diagrams](#diagrams)
    * [AADL Arch](#aadl-arch)
    * [SeL4_TB](#sel4_tb)
      * [SeL4_TB CAmkES Arch](#sel4_tb-camkes-arch)
      * [SeL4_TB CAmkES HAMR Arch](#sel4_tb-camkes-hamr-arch)
    * [SeL4_Only](#sel4_only)
      * [SeL4_Only CAmkES Arch](#sel4_only-camkes-arch)
      * [SeL4_Only CAmkES HAMR Arch](#sel4_only-camkes-hamr-arch)
    * [SeL4](#sel4)
      * [SeL4 CAmkES Arch](#sel4-camkes-arch)
      * [SeL4 CAmkES HAMR Arch](#sel4-camkes-hamr-arch)
  * [Example Output](#example-output)
    * [SeL4_TB Expected Output: Timeout = 15 seconds](#sel4_tb-expected-output:-timeout-=-15-seconds)
    * [SeL4_Only Expected Output: Timeout = 15 seconds](#sel4_only-expected-output:-timeout-=-15-seconds)
    * [SeL4 Expected Output: Timeout = 15 seconds](#sel4-expected-output:-timeout-=-15-seconds)

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

### SeL4
#### SeL4 CAmkES Arch
![SeL4 CAmkES Arch](diagrams/CAmkES-arch-SeL4.svg)

#### SeL4 CAmkES HAMR Arch
![SeL4 CAmkES HAMR Arch](diagrams/CAmkES-HAMR-arch-SeL4.svg)

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
  test_event_data_port_periodic_domains/CAmkES_seL4_TB/bin/run-camkes.sh
  ```

  ```
  Booting all finished, dropped to user space
  [src_thread] test_event_data_port_emitter_component_init called
  [dst_thread] test_event_data_port_consumer_component_init called
  ---------------------------------------
  [src_thread] Sent 0
  [dst_thread] value {0}
  ---------------------------------------
  [src_thread] Sent 1
  [dst_thread] value {1}
  ---------------------------------------
  [src_thread] Sent 2
  [dst_thread] value {2}
  ---------------------------------------
  [src_thread] Sent 3
  [dst_thread] value {3}
  ---------------------------------------
  [src_thread] Sent 4
  [dst_thread] value {4}
  ---------------------------------------
  [src_thread] Sent 5
  [dst_thread] value {5}
  ---------------------------------------
  [src_thread] Sent 6
  [dst_thread] value {6}
  ---------------------------------------
  [src_thread] Sent 7
  [dst_thread] value {7}
  ---------------------------------------
  [src_thread] Sent 8
  [dst_thread] value {8}
  ---------------------------------------
  [src_thread] Sent 9
  [dst_thread] value {9}

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
  test_event_data_port_periodic_domains/CAmkES_seL4_Only/bin/run-camkes.sh
  ```

  ```
  Booting all finished, dropped to user space
  [dst_thread] test_event_data_port_consumer_component_init called
  [src_thread] test_event_data_port_emitter_component_init called
  ---------------------------------------
  [src_thread] Sent 0
  [dst_thread] value {0}
  ---------------------------------------
  [src_thread] Sent 1
  [dst_thread] value {1}
  ---------------------------------------
  [src_thread] Sent 2
  [dst_thread] value {2}
  ---------------------------------------
  [src_thread] Sent 3
  [dst_thread] value {3}
  ---------------------------------------
  [src_thread] Sent 4
  [dst_thread] value {4}
  ---------------------------------------
  [src_thread] Sent 5
  [dst_thread] value {5}
  ---------------------------------------
  [src_thread] Sent 6
  [dst_thread] value {6}
  ---------------------------------------
  [src_thread] Sent 7
  [dst_thread] value {7}
  ---------------------------------------
  [src_thread] Sent 8
  [dst_thread] value {8}

  ```

### SeL4 Expected Output: Timeout = 15 seconds

  |HAMR Codegen Configuration| |
  |--|--|
  |Exclude Component Implementation | true |
  |bitWidth | 32 |
  |maxStringSize | 256 |
  |maxArraySize | 1 |


  **How To Run**
  ```
  test_event_data_port_periodic_domains/CAmkES_seL4/bin/transpile-sel4.sh
  test_event_data_port_periodic_domains/CAmkES_seL4/bin/run-camkes.sh
  ```

  ```
  Booting all finished, dropped to user space
  Entering pre-init of consumer_t_impl
  AEntering pre-init of emitter_t_impl
  Art: Registered component: top_impl_Instance_src_process_src_thread (periodic: 1000)
  rt: Registered component: top_impl_Instance_dst_process_dst_thread (periodic: 1000)
  Art: - Registered port: top_impl_Instance_dst_process_dst_thread_read_port (event in)
  top_impl_Instance_dst_process_dst_thread: Example logInfo
  top_impl_Instance_dst_process_dst_thread: Example logDebug
  top_impl_Instance_dst_process_dst_thread: Example logErrorArt: - Registered port: top_impl_Instance_src_process_src_thread_write_port (event out)
  top_impl_Instance_src_process_src_thread: Example logInfo
  top_impl_Instance_src_process_src_thread: Example logDebug
  top_impl_Instance_src_process_src_thread: Example logError
  Leaving pre-init 
  Leaving pre-init of consumer_t_impl
  of emitter_t_impl

  ```