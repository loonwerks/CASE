add_definitions(-DCAMKES)

if(TARGET muslc)
  target_link_libraries(CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate
                        muslc)
endif()