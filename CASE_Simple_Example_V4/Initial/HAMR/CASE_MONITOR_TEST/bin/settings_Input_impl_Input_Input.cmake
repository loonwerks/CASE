add_definitions(-DCAMKES)

if(TARGET muslc)
  target_link_libraries(Input_impl_Input_Input
                        muslc)
endif()