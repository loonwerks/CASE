add_definitions(-DCAMKES)

if(TARGET muslc)
  target_link_libraries(top_impl_Instance_destination_process_component_destination_thread_component
                        muslc)
endif()