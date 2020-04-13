# test_data_port_single_vm

This basic example has the following characteristics:

* A sending component and a receiving component;

* The sending component is implemented as an application running within a Linux VM hosted within its own CAmkES component;

* The receiving component is implemented as an application running within a native CAmkES component;

* The communication mechanism between the sender and receiver is a data port, shared memory construct;

* The sender is sending an integer value every half-second and the reciever is polling for the data (non-blocking);

* The example is based on scenario 3 first developed by Kent Mcleod, which originally used event-data-port communications; Ssee https://github.com/kent-mcleod/camkes/tree/kent/aadl/apps/aadl-eventdata-direct-new/vm.

* This example was first developed to execute directly on the Odroid XU4.

* The example is captured in the AADL model, test_data_port_single_vm.aadl.

MARCH 18, 2020

