add_definitions(-DCAMKES)

if(TARGET muslc)
  target_link_libraries(top_impl_Instance_source_process_component_source_thread_component
                        muslc)
endif()