add_definitions(-DCAMKES)

if(TARGET muslc)
  target_link_libraries(AttestationGate_Impl_SW_AttestationGate_AttestationGate
                        muslc)
endif()