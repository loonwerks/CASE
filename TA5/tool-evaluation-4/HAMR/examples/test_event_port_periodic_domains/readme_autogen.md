# test_event_port_periodic_domains

## Diagrams

### AADL Arch
  ![aadl](diagrams/aadl-arch.png)

### CAmkES HAMR SeL4_TB Arch
  ![SeL4_TB](diagrams/CAmkES-HAMR-arch-SeL4_TB.svg)

### CAmkES SeL4_TB Arch
  ![SeL4_TB](diagrams/CAmkES-arch-SeL4_TB.svg)

### CAmkES HAMR SeL4_Only Arch
  ![SeL4_Only](diagrams/CAmkES-HAMR-arch-SeL4_Only.svg)

### CAmkES SeL4_Only Arch
  ![SeL4_Only](diagrams/CAmkES-arch-SeL4_Only.svg)

### CAmkES HAMR SeL4 Arch
  ![SeL4](diagrams/CAmkES-HAMR-arch-SeL4.svg)

### CAmkES SeL4 Arch
  ![SeL4](diagrams/CAmkES-arch-SeL4.svg)

## Expected Output : Timeout = 15 seconds

  ### CAmkES SeL4_TB Expected Output
    Booting all finished, dropped to user space
    [src_thread] test_event_port_emitter_component_init called
    [dst_thread] test_event_port_consumer_component_init called
    ---------------------------------------
    [src_thread] Sent event.
    [dst_thread] Callback fired.  Received 1 events this dispatch, 1 total
    ---------------------------------------
    [src_thread] Sent event.
    [dst_thread] Callback fired.  Received 1 events this dispatch, 2 total
    ---------------------------------------
    [src_thread] Sent event.
    [dst_thread] Callback fired.  Received 1 events this dispatch, 3 total
    ---------------------------------------
    [src_thread] Sent event.
    [dst_thread] Callback fired.  Received 1 events this dispatch, 4 total
    ---------------------------------------
    [src_thread] Sent event.
    [dst_thread] Callback fired.  Received 1 events this dispatch, 5 total
    ---------------------------------------
    [src_thread] Sent event.
    [dst_thread] Callback fired.  Received 1 events this dispatch, 6 total
    ---------------------------------------
    [src_thread] Sent event.
    [dst_thread] Callback fired.  Received 1 events this dispatch, 7 total
    ---------------------------------------
    [src_thread] Sent event.
    [dst_thread] Callback fired.  Received 1 events this dispatch, 8 total
    ---------------------------------------
    [src_thread] Sent event.
    [dst_thread] Callback fired.  Received 1 events this dispatch, 9 total
    ---------------------------------------
    [src_thread] Sent event.
    [dst_thread] Callback fired.  Received 1 events this dispatch, 10 total


  ### CAmkES SeL4_Only Expected Output
    Booting all finished, dropped to user space
    [dst_thread] test_event_port_consumer_component_init called
    [src_thread] test_event_port_emitter_component_init called
    [dst_thread] Callback fired.  Received 0 events this dispatch, 0 total
    ---------------------------------------
    [src_thread] Sent event.
    [dst_thread] Callback fired.  Received 1 events this dispatch, 1 total
    ---------------------------------------
    [src_thread] Sent event.
    [dst_thread] Callback fired.  Received 1 events this dispatch, 2 total
    ---------------------------------------
    [src_thread] Sent event.
    [dst_thread] Callback fired.  Received 1 events this dispatch, 3 total
    ---------------------------------------
    [src_thread] Sent event.
    [dst_thread] Callback fired.  Received 1 events this dispatch, 4 total
    ---------------------------------------
    [src_thread] Sent event.
    [dst_thread] Callback fired.  Received 1 events this dispatch, 5 total
    ---------------------------------------
    [src_thread] Sent event.
    [dst_thread] Callback fired.  Received 1 events this dispatch, 6 total
    ---------------------------------------
    [src_thread] Sent event.
    [dst_thread] Callback fired.  Received 1 events this dispatch, 7 total
    ---------------------------------------
    [src_thread] Sent event.
    [dst_thread] Callback fired.  Received 1 events this dispatch, 8 total
    ---------------------------------------
    [src_thread] Sent event.


  ### CAmkES SeL4 Expected Output
    Booting all finished, dropped to user space
    Entering pre-init of consumer_t_impl
    Art: Registered component: toEntering pre-init of emitter_t_impl
    Art: Registered component: top_impl_Instance_src_process_src_thread (periodic: 1000)
    p_impl_Instance_dst_process_dst_thread (periodic: 1000)
    Art: - Registered port: top_impl_Instance_dst_process_dst_thread_consume (event in)
    top_impl_Instance_dst_process_dst_thread: Example logInfo
    top_impl_Instance_dst_process_dst_thread: Example logDebug
    Art: - Registered port: top_impl_Instance_src_process_src_thread_emit (event out)
    top_impl_Instance_src_process_src_thread: Example logInfo
    top_impl_Instance_src_process_src_thread: Example logDebug
    top_impl_top_impl_Instance_dst_process_dst_thread: Example logError
    Leaving pre-init of consumer_t_impl
    Instance_src_process_src_thread: Example logError
    Leaving pre-init of emitter_t_impl

