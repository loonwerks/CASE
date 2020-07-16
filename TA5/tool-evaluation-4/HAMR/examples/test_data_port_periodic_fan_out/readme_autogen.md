# test_data_port_periodic_fan_out

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
    [src] test_data_port_periodic_source_component_init called
    [dest_B] test_data_port_periodic_destination_component_init called
    [dest_A] test_data_port_periodic_destination_component_init called
    ---------------------------------------
    [src] Sent 0
    [dest_A] value {0}
    [dest_B] value {0}
    ---------------------------------------
    [src] Sent 1
    ---------------------------------------
    [src] Sent 2
    [dest_A] value {2}
    [dest_B] value {2}
    ---------------------------------------
    [src] Sent 3
    ---------------------------------------
    [src] Sent 4
    [dest_A] value {4}
    [dest_B] value {4}
    ---------------------------------------
    [src] Sent 5
    ---------------------------------------
    [src] Sent 6
    [dest_A] value {6}
    [dest_B] value {6}
    ---------------------------------------
    [src] Sent 7
    ---------------------------------------
    [src] Sent 8
    [dest_A] value {8}
    [dest_B] value {8}
    ---------------------------------------
    [src] Sent 9


  ### CAmkES SeL4_Only Expected Output
    Booting all finished, dropped to user space
    [src] test_data_port_periodic_source_component_init called
    [dest_B] test_data_port_periodic_destination_component_init called
    [dest_A] test_data_port_periodic_destination_component_init called
    ---------------------------------------
    [src] Sent 0
    [dest_A] value {0}
    [dest_B] value {0}
    ---------------------------------------
    [src] Sent 1
    ---------------------------------------
    [src] Sent 2
    [dest_A] value {2}
    [dest_B] value {2}
    ---------------------------------------
    [src] Sent 3
    ---------------------------------------
    [src] Sent 4
    [dest_A] value {4}
    [dest_B] value {4}
    ---------------------------------------
    [src] Sent 5
    ---------------------------------------
    [src] Sent 6
    [dest_A] value {6}
    [dest_B] value {6}
    ---------------------------------------
    [src] Sent 7

