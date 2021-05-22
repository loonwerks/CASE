add_definitions(-DCAMKES)

if(TARGET muslc)
  target_link_libraries(CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate
                        muslc)
endif()