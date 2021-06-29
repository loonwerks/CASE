add_definitions(-DCAMKES)

if(TARGET muslc)
  target_link_libraries(AttestationTester_Impl_SW_AttestationTester_AttestationTester
                        muslc)
endif()