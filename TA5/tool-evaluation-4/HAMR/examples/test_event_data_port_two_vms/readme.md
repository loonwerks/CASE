# test_event_data_port_two_vm

This basic example has the following characteristics:

* A sending component and a receiving component;

* The sending and receiving components are implemented as applications running within separate Linux VMs hosted within its own CAmkES component;

* The communication mechanism between the sender and receiver is an event data port, shared memory construct with associated event channel;

* The sender is sending an integer value every half-second and the reciever waits for the event trigger to read the data;

* The example is based on scenario 4 first developed by Kent Mcleod; See https://github.com/kent-mcleod/camkes/tree/kent/aadl/apps/aadl-eventdata-direct-new/vm.

* This example was first developed to execute directly on the Odroid XU4.

* The example is captured in the AADL model, test_event_data_port_two_vms.aadl.

APRIL 13, 2020

