# CASE Tool Assessment #4

This page summarizes the deliverables for Tool Assessment #4 from the
Collins Aerospace TA5 team.  TA5 deliverable scope includes (a) the
HAMR code generation framework for generating system infrastructure
code from AADL system models and (b) tool support for developing
system application code that integrates with the generated
infrastructure code to form a completed system.  In expected workflow
for Collins CASE tools, system developers will use CASE TA1 and TA2
tools to develop system models in AADL, generate cyber-assurance
requirements, and transform models to obtain a model of
cyber-resilient.  Then, the TA5 tools reported on here are used to
develop an executable system.  While these steps may be interleaved in
various ways to support iterative development and incorporation of
legacy code, the instructions for this tool assessment will focus on a
simple progression of "build and transform models, generate
infrastructure code and seL4 configurations, code and test application
code".   

The TA5 deliverables focus on system deployments on the seL4 platform,
but some support is also provided for deployments on Linux to support
prototyping and debugging.  seL4 deployments are illustrated using the
Qemu ARM emulator.

The deliverables include the following types of content.

- Tool installation instructions

- Tool documentation and tutorials

- Examples that illustrate HAMR code generation and application code development

The following progression is recommended for working through the
deliverables: (a) make sure that appropriate tools are installed,
(b) go through the provided video walkthrough and written tutorial
for the simple producer/consumer example for AADL event data ports,
(c) consult the other examples to understand additional supported
features and more realistic system builds, and (d) experiment with
building your system (perhaps starting making simple modifications of
the provided examples).


## Producer-Consumer Illustrating AADL Port Kinds

- [Data Ports](basic/test_data_port_periodic_domains)

- [Event Data Ports](basic/test_event_data_port_periodic_domains)

- [Event Ports](basic/test_event_port_periodic_domains)

## Bit-Codec 

- [Producer-Filter-Consumer](bit-codec/producer-filter-consumer)


## Virtual Machine 

- [Data Ports](vm/test_data_port_periodic_domains_VM)

- [Event Data Ports](vm/test_event_data_port_periodic_domains_VM)

## CakeML 

_Just need to adapt/clean-up our attestation gate micro-example_

[Attestation Gate](cakeml/attestation-gate)

## Phase 1

_Get this from Isaac?_

## Phase 2

_Still need to resolve the VM+CakeML issue, and potentially determine how the "seamless" intgration of SPLAT + HAMR will work_

The work-in-progress version is [here](https://github.com/ku-sldg/CASETeam/tree/master/examples/ksu-proprietary/Phase-2-UAV-Experimental-Platform-June-step6-hamr)
