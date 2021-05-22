# Attestation Gate - CakeML Integration Example

<!--ts-->
   * [Attestation Gate - CakeML Integration Example](#attestation-gate---cakeml-integration-example)
      * [Installing the Tools](#installing-the-tools)
         * [Update Sireum](#update-sireum)
         * [Install/Update osireum](#installupdate-osireum)
         * [Install CakeML](#install-cakeml)
      * [Modify the AADL Model for CakeML Integration](#modify-the-aadl-model-for-cakeml-integration)
         * [Wire Protocol](#wire-protocol)
         * [Specify Monitor/Filter components](#specify-monitorfilter-components)
      * [Prototype Under Linux](#prototype-under-linux)
      * [Deploy to seL4 - Simulate using QEMU](#deploy-to-sel4---simulate-using-qemu)
         * [With the Mocked Up Behavior Code](#with-the-mocked-up-behavior-code)
         * [Integrating CakeML behavior code](#integrating-cakeml-behavior-code)

<!-- Added by: vagrant, at: Tue 13 Apr 2021 09:51:17 PM UTC -->

<!--te-->

## Installing the Tools


The following assumes a case-env is used (see [https://github.com/loonwerks/CASE/tree/master/TA5/case-env](https://github.com/loonwerks/CASE/tree/master/TA5/case-env))

### Update Sireum

Update Sireum if older than 2021.03.08 -- run ``$SIREUM_HOME/bin/sireum`` to see the build date

```
cd $SIREUM_HOME
git pull --recurse-submodules
bin/build.cmd
```

### Install/Update osireum

``osireum`` lets you run Sireum's command line iterface, but via an OSATE cli.  This allows allows an in-memory version of AIR to be passed directly to HAMR codegen rather than the previous method of first running phantom and serializing AIR to a file, and then running codegen on the serialized version.

This step may take several minutes the first time it's run as it will download OSATE 2.9.1 from SEI's servers (or wherever) which are slow.
There is an option to instead use a local copy of OSATE (refer to ``$SIREUM_HOME/bin/sireum hamr phantom -h``).

```
$SIREUM_HOME/bin/sireum hamr phantom -u
```

The phantom ``-u`` update option will suggest setting up an alias for osate-sireum called ``osireum`` like below.
It's suggested you place this in your ``$HOME/.bashrc`` so that it's available in the next steps

```
alias osireum='/home/vagrant/.sireum/phantom/osate-2.9.1-vfinal/osate -nosplash -console -consoleLog -data @user.home/.sireum -application org.sireum.aadl.osate.cli'
```

### Install CakeML

Run ``$HOME/CASE/seL4-CAmkES-L4v-dockerfiles/scripts/cakeml.sh``.  Note that installing HOL takes a long time and is optional <-- *Junaid/Eric feedback*

Once installed, make sure the 64bit version is available from the command line.  E.g. in a directory available in my path I have the symlink ``cake -> /usr/local/bin/cake-x64-64/cake``

**NOTE**: Cake seg faulted the first time I tried to run it from the command line.  Restarting the vagrant VM seemed to fix the issue.

## Modify the AADL Model for CakeML Integration

### Wire Protocol
Only the wire protocol (ie. byte arrays) is supported for CakeML integration.

  - Attach ``HAMR::Bit_Codec_Raw_Connections => true;`` to the top-level system [SysContext.aadl](SysContext.aadl#L111)
  - Use the ``HAMR::Bit_Codec_Max_Size`` property to specify the encoded size of each data component that is used by an event data or data port.  For example, see [AirVehicleState.i](CMASI.aadl#L363) that is used by [UARTDriver_thr.AirVehicleState](SysContext.aadl#L59)

    - This property only needs to be attached to the top level data component (e.g. array subtypes and record field types do not need to be modified if they are not directly used by a port)

    - HAMR will use the ``Memory_Properties::Data_Size`` annotation if present for types defined in [Base_Types](https://github.com/osate/osate2/blob/master/core/org.osate.contribution.sei/resources/packages/Base_Types.aadl).  The following unbounded types are not currently supported: ``Bases_Types::Boolean``, ``Base_Types::Character``, ``Base_Types::String``, ``Base_Types::Integer``, ``Base_Types::Float``

### Specify Monitor/Filter components
Atttach the ``CASE_Properties::Component_Type`` to the filters or monitors - e.g. [CASE_AttesationGate.aadl](CASE_AttesationGate.aadl#L23)

## Prototype Under Linux

CakeML integeration is not currently supported for the Linux platform.  However, the behavior of the CakeML components can be mocked up and then the actual CakeML behavior code can be swapped in when deploying to seL4.

1. Run HAMR codegen targeting Linux via [this](bin/run-hamr-Linux.sh) script.  The script will generate the Slang project and transpile the code to C.  Transpiling only needs to be rerun when Slang files (e.g. *.scala) are modified
  
    ```./bin/run-hamr-Linux.sh```

1. You can immediately compile/run the demo using the following scripts
    ```
    ./CAmkES_seL4_2021/bin/compile-linux.sh
    ./CAmkES_seL4_2021/bin/run-linux.sh
    ./CAmkES_seL4_2021/bin/stop.sh
    ```

    **Development Hint**: the attestation gate and uxas terminals will immediatly close due to them crashing.  To diagnose why, uncomment this [line](CAmkES_seL4_2021/bin/run-linux.sh#L10) in the run script and relaunch.  The output from the crashing app will indicate ``Insufficient maximum for String characters.``.  This is due to the use of the transpiled ``.toString`` pretty print methods being used on the received messages (for eg commented out 
    [here](CAmkES_seL4_2021/src/c/ext-c/CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate/CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate.c#L94)).
    Those require the use of statically allocated strings, but the passed in max size of 256 [here](bin/run-hamr-Linux.sh#L30) is too small.  If you wanted to use the pretty printers then you could increase the max size as needed, however that will increase the stack size usage of the code.  Alternatively you could write your own hexdump method (using printf, loops, etc) to print the byte streams.


1. HAMR Codegen will report that the CMake directory is at ``CAmkES_seL4_2021/src/c/nix``.  Open this in a C-IDE (e.g. CLion)

1. Codegen also indicates the developer code is in the [ext-c](CAmkES_seL4_2021/src/c/ext-c) directory, which will be accessible via the ``nix`` dir.  Add behavior code to the following files:

    - [RadioDriver_thr_Impl_radio_RadioDriver.c](CAmkES_seL4_2021/src/c/ext-c/RadioDriver_thr_Impl_radio_RadioDriver/RadioDriver_thr_Impl_radio_RadioDriver.c)

    - [CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate](CAmkES_seL4_2021/src/c/ext-c/CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate/CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate.c)

    - [UxAS_thr_Impl_uxas_UxAS_thread.c](CAmkES_seL4_2021/src/c/ext-c/UxAS_thr_Impl_uxas_UxAS_thread/UxAS_thr_Impl_uxas_UxAS_thread.c)


## Deploy to seL4 - Simulate using QEMU

### With the Mocked Up Behavior Code
Once you're satisified with the behavior under Linux, you can deploy to seL4 and simulate via QEMU.  First run [this](bin/run-hamr-SeL4.sh) script,

```
./bin/run-hamr-SeL4.sh
```

which generate the CAmkES project and transpiles the Slang project so that it can be used by the CAmkES components.

Then run [this](CAmkES_seL4_2021/src/c/CAmkES_seL4/bin/run-camkes.sh) script to build the CAmkES project and then simulate it via QEMU

```
./CAmkES_seL4_2021/src/c/CAmkES_seL4/bin/run-camkes.sh -s
```

### Integrating CakeML behavior code

After verifying the mocked-up behavior of the CakeML components behave as expected under QEMU, you can then swap in the actual CakeML assemblies.  First run [this](cakeml/compile-cakeml.cmd) Slash script to generate the CakeML assembly -- it will replace the code in 
[this](CAmkES_seL4_2021/src/c/CAmkES_seL4/components/CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate/src/sb_CASE_AttestationGate_thr_Impl.S) file.

```
bash ./cakeml/compile-cakeml.cmd
```

Then pass the ``CAKEML_ASSEMBLIES_PRESENT=ON`` option to the run-camkes.sh script

```
 ./CAmkES_seL4_2021/src/c/CAmkES_seL4/bin/run-camkes.sh -o "-DCAKEML_ASSEMBLIES_PRESENT=ON" -s
```

This will remove the run method generated by HAMR 
[here](CAmkES_seL4_2021/src/c/CAmkES_seL4/components/CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate/src/sb_CASE_AttestationGate_thr_Impl.c#L295) 
so that the run method provided by the CakeML assembly will be used instead.

Refer to [readme_autogen.md](readme_autogen.md#example-output) for example output from simulating the project under QEMU.
