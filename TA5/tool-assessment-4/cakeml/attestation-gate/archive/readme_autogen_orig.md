# attestation-gate

 Table of Contents
  * [Diagrams](#diagrams)
    * [AADL Arch](#aadl-arch)
    * [SeL4](#sel4)
      * [SeL4 CAmkES Arch](#sel4-camkes-arch)
      * [SeL4 CAmkES HAMR Arch](#sel4-camkes-hamr-arch)
  * [Example Output](#example-output)
    * [SeL4 Expected Output: Timeout = 18 seconds](#sel4-expected-output-timeout--18-seconds)

## Diagrams
### AADL Arch
![AADL Arch](diagrams/aadl-arch.png)

### SeL4
#### SeL4 CAmkES Arch
![SeL4 CAmkES Arch](diagrams/CAmkES-arch-SeL4.svg)

#### SeL4 CAmkES HAMR Arch
![SeL4 CAmkES HAMR Arch](diagrams/CAmkES-HAMR-arch-SeL4.svg)

## Example Output
*NOTE:* actual output may differ due to issues related to thread interleaving
### SeL4 Expected Output: Timeout = 18 seconds

  |HAMR Codegen Configuration| |
  |--|--|
  | package-name | attestation-gate |
  | exclude-component-impl | true |
  | bit-width | 32 |
  | max-string-size | 256 |
  | max-array-size | 1 |


  **How To Run**
  ```
  attestation-gate/CAmkES_seL4/bin/compile-cakeml.sh
  attestation-gate/CAmkES_seL4/bin/transpile-sel4.sh
  attestation-gate/CAmkES_seL4/src/c/CAmkES_seL4/bin/run-camkes.sh -s -o -DCAKEML_ASSEMBLIES_PRESENT=ON
  ```

  ```
  Booting all finished, dropped to user space
  Entering pre-init of RadioDriver_thr_Impl_radio_RadioDriver
  Art: Registered component: top_Impl_Instance_radio_RadioDriver (periodic: 500)
  Art: - Registered port: top_Impl_Instance_radio_RadioDriver_trusted_ids_out (data out)
  Art: - Registered port: top_Impl_Instance_radio_RadioDriver_automation_request_out (event out)
  Art: -Entering pre-init of CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate
  Art: Registered component: top_Impl_Instance_am_gate_CASE_AttestationGate (periodic: 500)
  Art: - Registered port: top_Impl_Instance_am_gate_CASE_AttestationGate_trusted_ids (data in)
  Art: - Registered port: top_Impl_Instance_am_gate_CASE_AttestationGate_AutomationRequEntering pre-init of UxAS_thr_Impl_uxas_UxAS_thread
  Art: Registered component: top_Impl_Instance_uxas_UxAS_thread (periodic: 1000)
  Art: - Registered port: top_Impl_Instance_uxas_UxAS_thread_AutomationRequest (event in)
  Art: - Registered port: top_Impl_Instance_uxas_UxAS_thread_OperatingRegion (event in)
  Art: - Registered port: top_Impl_Instance_uxas_UxAS_thread_LineSearchTask (event in)
  Leaving pre-init of UxAS_thr_Impl_uxas_UxAS_thread
   Registered port: top_Impl_Instance_radio_RadioDriver_operating_region_out (event out)
  Art: - Registered port: top_Impl_Instance_radio_RadioDriver_line_search_task_out (event out)
  Leaving pre-init of RadioDriver_thr_Impl_radio_RadioDriver
  est_in (event in)
  Art: - Registered port: top_Impl_Instance_am_gate_CASE_AttestationGate_AutomationRequest_out (event out)
  Art: - Registered port: top_Impl_Instance_am_gate_CASE_AttestationGate_OperatingRegion_in (event in)
  Art: - Registered port: top_Impl_Instance_am_gate_CASE_AttestationGate_OperatingRegion_out (event out)
  Art: - Registered port: top_Impl_Instance_am_gate_CASE_AttestationGate_LineSearchTask_in (event in)
  Art: - Registered port: top_Impl_Instance_am_gate_CASE_AttestationGate_LineSearchTask_out (event out)
  Leaving pre-init of CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate
  top_Impl_Instance_am_gate_CASE_AttestationGate: 
  	tidArray = ()
  	opregionID = 
  	lstID = 
  	autorqtID = 400
  top_Impl_Instance_am_gate_CASE_AttestationGate: 
  	tidArray = ()
  	opregionID = 
  	lstID = 400
  	autorqtID = 
  top_Impl_Instance_am_gate_CASE_AttestationGate: 
  	tidArray = ()
  	opregionID = 
  	lstID = 
  	autorqtID = 400
  top_Impl_Instance_am_gate_CASE_AttestationGate: 
  	tidArray = ()
  	opregionID = 
  	lstID = 400
  	autorqtID = 
  top_Impl_Instance_am_gate_CASE_AttestationGate: 
  	tidArray = ()
  	opregionID = 400
  	lstID = 
  	autorqtID = 
  top_Impl_Instance_am_gate_CASE_AttestationGate: 
  	tidArray = ()
  	opregionID = 
  	lstID = 400
  	autorqtID = 400
  top_Impl_Instance_am_gate_CASE_AttestationGate: 
  	tidArray = ()
  	opregionID = 400
  	lstID = 
  	autorqtID = 

  ```