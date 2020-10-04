add_definitions(-DCAMKES)

if(TARGET muslc)
  target_link_libraries(source_thread_impl_source_process_component_source_thread_component
                        muslc)
endif()