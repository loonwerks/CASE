add_definitions(-DCAMKES)

if(TARGET muslc)
  target_link_libraries(destination_thread_impl_destination_process_component_destination_thread_component
                        muslc)
endif()