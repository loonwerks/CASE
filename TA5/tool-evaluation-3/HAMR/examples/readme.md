# Examples

These examples illustrate the HAMR translations of various AADL port connections
to CAmkES

- [test_event_data_port](test_event_data_port) : project containing *event data port* connections
- [test_event_port](test_event_port) : project containing *event port* connections
- [test_data_port](test_data_port) : project containing *data port* connections
- [test_data_port_periodic](test_data_port_periodic) : project containing *periodic* threads with *data port* connections
- [simple_uav](simple_uav) : Simplified CASE Phase 1 UAV example model with *event data port* connections

Each project includes the following resources:

- AADL model
- HAMR code generated using the *Trusted Build* style port/connection translations 
  (contained in the *CAmkES_seL4_TB* directory)
- HAMR code generated using the new *System Build* style port/connection translations 
  (contained in the *CAmkES_seL4_Only* directory)
- A *readme.md* file documenting the generated code along with instructions on how to 
  run HAMR on the AADL model.
