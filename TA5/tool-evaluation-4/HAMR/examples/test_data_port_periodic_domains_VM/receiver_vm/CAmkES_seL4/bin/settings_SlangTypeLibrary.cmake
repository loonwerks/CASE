add_definitions(-DCAMKES)

if(TARGET muslc)
  target_link_libraries(SlangTypeLibrary
                        muslc)
endif()