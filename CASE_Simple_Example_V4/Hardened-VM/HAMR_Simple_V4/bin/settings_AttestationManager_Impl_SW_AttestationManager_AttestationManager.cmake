add_definitions(-DCAMKES)

if(TARGET muslc)
  target_link_libraries(AttestationManager_Impl_SW_AttestationManager_AttestationManager
                        muslc)
endif()