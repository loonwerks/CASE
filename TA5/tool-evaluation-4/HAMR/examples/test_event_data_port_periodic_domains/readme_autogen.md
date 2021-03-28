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
    * [SeL4_TB Expected Output: Timeout = 15 seconds](#sel4_tb-expected-output-timeout--15-seconds)
    * [SeL4_Only Expected Output: Timeout = 15 seconds](#sel4_only-expected-output-timeout--15-seconds)
    * [SeL4 Expected Output: Timeout = 15 seconds](#sel4-expected-output-timeout--15-seconds)

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
  | refer to [bin/run-hamr-SeL4_TB.sh](bin/run-hamr-SeL4_TB.sh) |


  **How To Run**
  ```
  ./bin/run-hamr-SeL4_TB.sh
  ./CAmkES_seL4_TB/bin/run-camkes.sh -s
  ```

  ```
  Booting all finished, dropped to user space
  [src_process_src_thread] test_event_data_port_emitter_component_init called
  [dst_process_dst_thread] test_event_data_port_consumer_component_init called
  ---------------------------------------
  [src_process_src_thread] Sent 0
  [dst_process_dst_thread] value {0}
  ---------------------------------------
  [src_process_src_thread] Sent 1
  [dst_process_dst_thread] value {1}
  ---------------------------------------
  [src_process_src_thread] Sent 2
  [dst_process_dst_thread] value {2}
  ---------------------------------------
  [src_process_src_thread] Sent 3
  [dst_process_dst_thread] value {3}
  ---------------------------------------
  [src_process_src_thread] Sent 4
  [dst_process_dst_thread] value {4}
  ---------------------------------------
  [src_process_src_thread] Sent 5
  [dst_process_dst_thread] value {5}
  ---------------------------------------
  [src_process_src_thread] Sent 6
  [dst_process_dst_thread] value {6}
  ---------------------------------------
  [src_process_src_thread] Sent 7
  [dst_process_dst_thread] value {7}
  ---------------------------------------
  [src_process_src_thread] Sent 8
  [dst_process_dst_thread] value {8}

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
  [dst_process_dst_thread] test_event_data_port_consumer_component_init called
  [src_process_src_thread] test_event_data_port_emitter_component_init called
  ---------------------------------------
  [src_process_src_thread] Sent 0
  [dst_process_dst_thread] value {0}
  ---------------------------------------
  [src_process_src_thread] Sent 1
  [dst_process_dst_thread] value {1}
  ---------------------------------------
  [src_process_src_thread] Sent 2
  [dst_process_dst_thread] value {2}
  ---------------------------------------
  [src_process_src_thread] Sent 3
  [dst_process_dst_thread] value {3}
  ---------------------------------------
  [src_process_src_thread] Sent 4
  [dst_process_dst_thread] value {4}
  ---------------------------------------
  [src_process_src_thread] Sent 5
  [dst_process_dst_thread] value {5}
  ---------------------------------------
  [src_process_src_thread] Sent 6
  [dst_process_dst_thread] value {6}
  ---------------------------------------
  [src_process_src_thread] Sent 7
  [dst_process_dst_thread] value {7}

  ```

### SeL4 Expected Output: Timeout = 15 seconds

  |HAMR Codegen Configuration| |
  |--|--|
  | refer to [bin/run-hamr-SeL4.sh](bin/run-hamr-SeL4.sh) |


  **How To Run**
  ```
  ./bin/run-hamr-SeL4.sh
  ./CAmkES_seL4/src/c/CAmkES_seL4/bin/run-camkes.sh -s
  ```

  ```
  Booting all finished, dropped to user space
  Entering pre-init of consumer_t_impl_dst_process_dst_thread
  Entering pre-init of emitter_t_impl_src_process_src_thread
  Art: Registered component: tArt: Registered component: top_impl_Instance_dst_process_dst_thread (periodic: 1000)
  Art: - Registered port: top_impl_Instance_dst_process_dst_thread_read_port (event in)
  top_impl_Instance_dst_process_dst_top_impl_Instance_src_process_src_thread (periodic: 1000)
  Art: - Registered port: top_impl_Instance_src_process_src_thread_write_port (event out)
  top_impl_Instance_src_process_src_thread: Example logInfo
  top_impl_Instance_src_process_src_thread: Example logDebug
  top_impl_Instance_src_process_src_thread: Example logError
  Leaving pre-init of emitter_t_impl_src_process_src_thread
  hread: Example logInfo
  top_impl_Instance_dst_process_dst_thread: Example logDebug
  top_impl_Instance_dst_process_dst_thread: Example logError
  Leaving pre-init of consumer_t_impl_dst_process_dst_thread
  top_impl_Instance_dst_process_dst_thread: Received on read_port: 0

  ```