# CASE Tool Assessment #4
<!--table-of-contents_start-->
* [Tool Installation](#tool-installation)
* [Background](#background)
* [Tutorial Example](#tutorial-example)
* [Additional Examples](#additional-examples)
  * [Producer-Consumer Illustrating AADL Port Kinds](#producer-consumer-illustrating-aadl-port-kinds)
  * [Bit-Codec](#bit-codec)
  * [Virtual Machine](#virtual-machine)
  * [CakeML](#cakeml)
<!--table-of-contents_end-->

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

- The [CASE-Tool-Assessment-AADL-Guide](https://github.com/loonwerks/CASE/tree/master/TA5/tool-assessment-4/doc/CASE-Tool-Assessment-Guide.pdf) summarizes the currently supported CASE-supported AADL subset as well as CASE-specific AADL properties that are used to configure and direct CASE tools.

- The CASE Resolint tool (essentially, a rule-based linter for AADL models) is used to check that models conform to the supported AADL subset.  Refer to the [Resolint User's Guide](https://github.com/loonwerks/formal-methods-workbench/blob/master/documentation/resolute/Resolint_Users_Guide.pdf) for more information.

Developers should follow the CASE style guidelines when building models, and Resolint should be run before HAMR code generation is performed.  There may be additional model restrictions that not enforced by Resolint that are indicated by warnings/errors during HAMR code generation.

In CASE Phase II and III, Collins systems are focusing on using *periodic* AADL threads and *event data* ports.  This allows HAMR supported systems to align with ARINC 653 style real-time tasking and communication used in Collins product groups.   Thus, the deliverable documentation will focus on this type of tasking/communication.

AADL supports modeling data types for data flowing across AADL ports.  Due to the fact that HAMR development is in the middle of switching from the data type strategy used on Phase II to the one to the used on Phase III, this deliverable only supports raw data (byte array) communication between components.  The size of the communicated byte array for each port is specified as an AADL port property (** TODO: see Tutorial and examples**).  In the current state of the tool, developers can use their preferred data type encoding scheme.  One approach using the Kansas State Sireum Bit-Codec framework is illustrated in [Bit-Codec](bit-codec/producer-filter-consumer) example below.  The final Phase III deliverable will support types specified using the AADL Data Model in addition to raw byte arrays.

## Tutorial Example

This tutorial will illustrate:

- how to invoke the Resolint tool to help ensure that a given model is in the AADL subset processed by HAMR
- how to invoke the HAMR code generation framework to generate infrastructure code from AADL models (as one would do after Collins CASE TA2 system models and cyber-resiliency transformation steps)
- basic aspects of code for HAMR-generated threading
- basic aspects of using the HAMR-generated APIs for communicating over ports
- executing a completed system on Linux
- executing a completed system on seL4 (using Qemu ARM emulator)

The tutorial assumes that 

- the FMIDE customization of the OSATE AADL editor and accompanying CASE tools have already been installed according to the directions above
- the reader is familiar with creating AADL models as necessary to support Collins CASE TA2 activities.

The example uses a simple two-component producer/consumer system -- with periodic threads and event data ports, which is the type of threading/ports that will be used on the Collins TA6 Phase III systems.

- [Tutorial Video](https://youtu.be/zkhgn7jcXXE)
- [Written tutorial](basic/tutorial)
- [AADL Model for the system](basic/tutorial/aadl)
- [Initial HAMR generated code (w/ application code skeletons)](basic/tutorial/hamr-initial/c/ext-c) (see written tutorial for explanation/discussion)
- [Completed application code](basic/tutorial/hamr/c/ext-c) (see written tutorial for explanation/discussion)

Consult the examples below for illustration of additional concepts.

## Additional Examples

A brief description of each example is given below.  Click through to the example files to get a more detailed summary.

### Producer-Consumer Illustrating AADL Port Kinds

The following examples illustrate the basics of HAMR-generated threading and port-based communication for AADL's three port categories (data, event data, and event).  The **Event Data Ports** is the example used in the tutorial above.  The examples use on AADL **Periodic** (time-triggered) threads, which is what will be used on Collins TA6 systems.   AADL **Sporadic** (event-triggered) threads are explained in other HAMR documentation.

- [Data Ports](basic/test_data_port_periodic_domains)
- [Event Data Ports](basic/test_event_data_port_periodic_domains) 
- [Event Ports](basic/test_event_port_periodic_domains)

### Bit-Codec 

This example uses a three-component producer/filter/consumer structure to illustrate how the Sireum Bit-Codec framework can be used to encode/decode data into "wire formatted" data that can be communicated between components using HAMR "raw" byte arrays.   Bit-Codec is an expressive framework that enables complex data formats to be specified declaratively.  The framework also supports/enforces complex data constraints and dependences.  Given a Bit-Codec data specification, the Bit-Codec tools can automatically generate encoders and decoders that can be called by application code.   To help support cyber-resiliency, data formats and specified constraints are enforced in the encoding and decoding process.

- [Producer-Filter-Consumer](bit-codec/producer-filter-consumer)


### Virtual Machine 

These examples extend the producer/consumer examples above to illustrate the use of seL4-hosted Linux virtual machines (VMs).   HAMR provides support for auto-generating seL4 configuration for VMs and configuration of the VMs themselves.

- [Data Ports](vm/test_data_port_periodic_domains_VM) - includes example illustrating a Native producer and VM for consumer.
- [Event Data Ports](vm/test_event_data_port_periodic_domains_VM) - includes three examples illustrating (1) VMs for both producer and consumer, (2) VM for producer and native consumer, and (3) Native producer and VM consumer.

### CakeML 

This example illustrates use of the high assurance CakeML programming language to program AADL component application logic.  HAMR can integrate CakeML-programmed components with C-programmed components.   This concept is illustrated with a simple example that incorporates CakeML-programmed components that utilize the Collins CASE Attestation Framework from the University of Kansas.   The Collins CASE SPLAT framework which auto-generates cyber-resiliency filters and monitors also generates CakeML-implemented components.  Thus, this example illustrates the basic CakeML integration strategy used in several ways within the Collins CASE tools.

[Attestation Gate](cakeml/attestation-gate)

