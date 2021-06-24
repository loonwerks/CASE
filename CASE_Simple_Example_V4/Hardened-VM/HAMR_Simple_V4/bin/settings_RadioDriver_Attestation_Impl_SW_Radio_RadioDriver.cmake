add_definitions(-DCAMKES)

if(TARGET muslc)
  target_link_libraries(RadioDriver_Attestation_Impl_SW_Radio_RadioDriver
                        muslc)
endif()