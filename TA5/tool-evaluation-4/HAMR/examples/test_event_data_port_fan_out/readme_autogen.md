# test_event_data_port_fan_out

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
    [snk_2_A] received value {1}
    [snk_2_B] received value {1}
    [snk_2_B] 1 events rec[snk_5] received value {1}
    [snk_5] 1 events received
    [snk_default] 1 events received
    [snk_2_A] 1 events received
    eived
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
    [snk_5] received value {3}
    [snk_5] 3 events received
    ---------------------------------------
    [src] Sent 4 events.
    [snk_default] received value {1}
    [snk_default] 1 events received
    [snk_2_A] received value {1}
    [snk_2_A] received value {2}
    [snk_2_A] 2 events received
    [snk_2_B] received value {1}
    [snk_2_B] received [snk_5] received value {1}
    [snk_5] received value {2}
    [snk_5] received value {3}
    [snk_5] received value {4}
    [snk_5] 4 events received
    value {2}
    [snk_2_B] 2 events received


  ### CAmkES SeL4_Only Expected Output
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
    [snk_2_B] 1 events received
    [snk_5] received value {1}
    [snk_5] 1 events received
    ---------------------------------------
    [src] Sent 2 events.
    [snk_d[snk_2_A] received value {1[snk_2_B] received value {1}
    [snk_2_B] received value {2}
    [snk_2_B] 2 events [snk_5] received value {1}
    [snk_5] received value {2}
    [snk_5] 2 events received
    efault] received value {2}
    [snk_default] 1 events received
    }
    [snk_2_A] received value {2}
    [snk_2_A] 2 events received
    received
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

