add_definitions(-DCAMKES)

if(TARGET muslc)
  target_link_libraries(RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation
                        muslc)
endif()