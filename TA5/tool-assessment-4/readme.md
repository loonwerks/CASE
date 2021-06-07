# CASE Tool Assessment #4

This page summarizes the deliverables for Tool Assessment #4 from the
Collins Aerospace TA5 team.  TA5 deliverable scope includes (a) the
HAMR code generation framework for generating system infrastructure
code from AADL system models and (b) tool support for developing
system application code that integrates with the generated
infrastructure code to form a completed system.  

In expected workflow
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
building your own system (perhaps starting by making simple modifications of
the provided examples).

## Tool Installation

The installation instructions for the Collins FMIDE (a customization of the AADL OSATE editor to include CASE plug-ins) can be found [here](https://github.com/loonwerks/CASE/tree/master/TA5/case-env).  The tools can be installed by (a) automatically provisioning a Linux VM using VirtualBox and Vagrant, or (b) creating a dedicated Linux installation.   We recommend the Vagrant VM method (method (a)) to help ensure uniformity across installations.

A C development environment that supports CMake files is needed.  The JetBrains CLion IDE can be used, as suggested in the *Post Setup* steps.  The basic delivered examples (Producer/Consumer, Bit-Codec, Virtual Machine) can be completed using C development alone.  However, when CASE Splat tools, Attestation, and Phase I and II examples are used, CakeML will also needed to be set up as described in *Post Setup*.

## Background

AADL can be used to support a variety of processing and communication styles.  The CASE tools support a restricted subset of AADL that is aligned with platform infrastructure used in the Collins product groups participating in CASE TA6.  The following help developers stay within the supported AADL subset.

- The CASE AADL style guidelines (**insert link**) summarize the CASE-supported AADL subset as well as CASE-specific AADL properties that are used to configure and direct CASE tools.

- The CASE Resolint tool (**insert link to documentation**??) (essentially, a rule-based linter for AADL models) is used to check that models conform to the supported AADL subset.

Developers should follow the CASE style guidelines when building models, and Resolint should be run before HAMR code generation is performed.  There may be additional model restrictions that not enforced by Resolint that are indicated by warnings/errors during HAMR code generation.

In CASE Phase II and III, Collins systems are focusing on using *periodic* AADL threads and *event data* ports.  This allows HAMR supported systems to align with ARINC 653 style real-time tasking and communication used in Collins product groups.   Thus, the deliverable documentation will focus on this type of tasking/communication.


## Tutorial Example

This tutorial will illustrate:

- how to invoke the HAMR code generation framework to generate infrastructure code from AADL models (as one would do after Collins CASE TA2 system models and cyber-resiliency transformation steps)

- basic aspects of code for HAMR-generated threading

- basic aspects of using the HAMR-generated APIs for communicating over ports

- executing a completed system on Linux

- executing a completed system on seL4 (using Qemu ARM emulator)

The tutorial assumes that 

- the FMIDE customization of the OSATE AADL editor and accompanying CASE tools have already been installed according to the directions above
- the reader is familiar with creating AADL models as necessary to support Collins CASE TA2 activities.

The example uses a simple two-component producer/consumer system -- with periodic threads and event data ports, which is the type of threading/ports that will be used on the Collins TA6 Phase III systems.

- **Video link**
- **Models/code for completed system**
- **Written tutorial**

Consult the examples below for illustration of additional concepts.

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
