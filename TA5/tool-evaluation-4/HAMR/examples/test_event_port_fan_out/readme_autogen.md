# test_event_port_fan_out

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

## Expected Output : Timeout = 15 seconds

  ### CAmkES SeL4_TB Expected Output
    Booting all finished, dropped to user space
    [src] test_event_port_emitter_component_init called
    [snkQueue5] test_event_port_consumer_component_init called
    [snkQueue2_B] test_event_port_consumer_comp[snkQueue2_A] test_event_port_consumer_component_init called
    [snkDefault] test_event_port_consumer_component_init called
    onent_init called
    ---------------------------------------
    [src] Sent 0 events.
    ---------------------------------------
    [src] Sent 1 events.
    [snkDefault] Received 1 events
    [snkQueue2_A] R[snkQueue2_B] Received 1 events
    [snkQueue5] Received 1 eeceived 1 events
    vents
    ---------------------------------------
    [src] Sent 2 events.
    [snkDefault] Rec[snkQueue2_A] Received 2 events
    [snkQueue2_B] Received 2 events
    [snkQueue5] Received 2 events
    eived 1 events
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


  ### CAmkES SeL4_Only Expected Output
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
    [snkQueue2_A] Received 1 events
    [snkQueue2_B] Received 1 events
    [snkQueue5] Received 1 events
    ---------------------------------------
    [src] Sent 2 events.
    [snk[snkQueue2_A] Received 2 events
    [snkQueue2_B] Received 2 events
    [snkQuDefault] Received 1 events
    eue5] Received 2 events
    ---------------------------------------
    [src] Sent 3 events.
    [snkDefault] Received 1 events
    [snkQue[s[snkQueue5] Received 3 events
    ue2_A] Received 2 events
    nkQueue2_B] Received 2 events
    ---------------------------------------
    [src] Sent 4 events.
    [snkDefault] Received 1 events
    [snkQueue2_A] Received 2 events
    [snkQueue2_B] Received 2 events
    [snkQueue5] Received 4 events

