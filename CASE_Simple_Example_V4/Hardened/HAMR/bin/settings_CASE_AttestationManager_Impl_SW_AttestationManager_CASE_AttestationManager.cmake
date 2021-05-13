add_definitions(-DCAMKES)

if(TARGET muslc)
  target_link_libraries(CASE_AttestationManager_Impl_SW_AttestationManager_CASE_AttestationManager
                        muslc)
endif()