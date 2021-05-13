add_definitions(-DCAMKES)

if(TARGET muslc)
  target_link_libraries(CASE_AttestationGate_Impl_SW_AttestationGate_CASE_AttestationGate
                        muslc)
endif()