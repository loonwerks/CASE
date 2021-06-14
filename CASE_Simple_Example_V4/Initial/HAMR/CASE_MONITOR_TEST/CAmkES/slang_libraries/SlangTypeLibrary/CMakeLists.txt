cmake_minimum_required(VERSION 3.5.1)

project(SlangTypeLibrary)

set(CMAKE_C_STANDARD 99)

add_compile_options(-Werror)

function(to_hex DEC HEX)
  while(DEC GREATER 0)
    math(EXPR _val "${DEC} % 16")
    math(EXPR DEC "${DEC} / 16")
    if(_val EQUAL 10)
      set(_val "A")
    elseif(_val EQUAL 11)
      set(_val "B")
    elseif(_val EQUAL 12)
      set(_val "C")
    elseif(_val EQUAL 13)
      set(_val "D")
    elseif(_val EQUAL 14)
      set(_val "E")
    elseif(_val EQUAL 15)
      set(_val "F")
    endif()
    set(_res "${_val}${_res}")
  endwhile()
  set(${HEX} "0x${_res}" PARENT_SCOPE)
endfunction()

if ("${CMAKE_CXX_COMPILER_ID}" MATCHES "(C|c?)lang")
  to_hex("16777216" stack_size)
  set(CMAKE_EXE_LINKER_FLAGS "-Wl,-stack_size -Wl,${stack_size}")
  add_compile_options("$<$<CONFIG:Release>:-Oz>")
elseif ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")
  if (WIN32 OR MINGW OR MSYS OR CYGWIN)
    to_hex("16777216" stack_size)
    set(CMAKE_EXE_LINKER_FLAGS "-Wl,--stack,${stack_size}")
  endif()
  add_compile_options(-fstack-usage)
  add_compile_options("$<$<CONFIG:Release>:-Os>")
endif()

option(BOUND_CHECK
  "Build the program with sequence bound checking."
  OFF)

if(BOUND_CHECK)
  add_definitions(-DSIREUM_BOUND_CHECK)
endif(BOUND_CHECK)

option(RANGE_CHECK
  "Build the program with range checking."
  OFF)

if(RANGE_CHECK)
  add_definitions(-DSIREUM_RANGE_CHECK)
endif(RANGE_CHECK)

option(NO_PRINT
  "Build the program without console output."
  OFF)

if(NO_PRINT)
  add_definitions(-DSIREUM_NO_PRINT)
endif(NO_PRINT)

option(WITH_LOC
  "Build the program with Slang location info."
  OFF)

if(WITH_LOC)
  add_definitions(-DSIREUM_LOC)
endif(WITH_LOC)


add_library(SlangTypeLibrary STATIC
        runtime/type.h
        runtime/lib.h
        runtime/type.c
        runtime/misc.h
        runtime/stackframe.h
        runtime/stackframe.c
        runtime/misc.c
        runtime/ztype.h
        runtime/type-composite.h
        runtime/types.h
        runtime/types.c
        runtime/all.h
        runtime/all.c
        library/CASE_MONITOR_TEST/type-CASE_MONITOR_TEST_Base_Types.h
        library/CASE_MONITOR_TEST/CASE_MONITOR_TEST_Base_Types.h
        library/CASE_MONITOR_TEST/CASE_MONITOR_TEST_Base_Types.c
        library/CASE_MONITOR_TEST/Base_Types/type-CASE_MONITOR_TEST_Base_Types_Bits_Payload.h
        library/CASE_MONITOR_TEST/Base_Types/CASE_MONITOR_TEST_Base_Types_Bits_Payload.h
        library/CASE_MONITOR_TEST/Base_Types/CASE_MONITOR_TEST_Base_Types_Bits_Payload.c
        library/CASE_MONITOR_TEST/SlangTypeLibrary/type-CASE_MONITOR_TEST_SlangTypeLibrary_SlangTypeLibrary.h
        library/CASE_MONITOR_TEST/SlangTypeLibrary/CASE_MONITOR_TEST_SlangTypeLibrary_SlangTypeLibrary.h
        library/CASE_MONITOR_TEST/SlangTypeLibrary/CASE_MONITOR_TEST_SlangTypeLibrary_SlangTypeLibrary.c
        library/art/type-art_DataContent.h
        library/art/art_DataContent.h
        library/art/art_DataContent.c
        library/art/type-art_Empty.h
        library/art/art_Empty.h
        library/art/art_Empty.c
        library/org/sireum/type-org_sireum_IS_948B60.h
        library/org/sireum/org_sireum_IS_948B60.h
        library/org/sireum/org_sireum_IS_948B60.c
        library/org/sireum/type-org_sireum_IS_C4F575.h
        library/org/sireum/org_sireum_IS_C4F575.h
        library/org/sireum/org_sireum_IS_C4F575.c
        library/org/sireum/type-org_sireum_U8.h
        library/org/sireum/org_sireum_U8.h
        library/org/sireum/org_sireum_U8.c)

target_include_directories(SlangTypeLibrary
        PUBLIC PUBLIC app-SlangTypeLibrary
        PUBLIC PUBLIC runtime
        PUBLIC PUBLIC library/CASE_MONITOR_TEST
        PUBLIC PUBLIC library/CASE_MONITOR_TEST/Base_Types
        PUBLIC PUBLIC library/CASE_MONITOR_TEST/SlangTypeLibrary
        PUBLIC PUBLIC library/art
        PUBLIC PUBLIC library/org/sireum)


add_definitions(-DCAMKES)

if(TARGET muslc)
  target_link_libraries(SlangTypeLibrary
                        muslc)
endif()