add_definitions(-DCAMKES)

if(TARGET muslc)
  target_link_libraries(RadioDriver_thr_Impl_radio_RadioDriver
                        muslc)
endif()