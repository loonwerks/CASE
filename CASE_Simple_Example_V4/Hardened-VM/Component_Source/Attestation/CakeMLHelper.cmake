# Config variables
set(CAKE_FLAGS "--stack_size=10 --heap_size=10" CACHE STRING "Arguments passed to the CakeML compiler")
string(REGEX REPLACE "[ \t\r\n]+" ";" cakeflag_list "${CAKE_FLAGS}")

# Find/determine cake compiler
if(${CAmkES})
    if("${KernelSel4Arch}" STREQUAL "aarch32" OR "${KernelSel4Arch}" STREQUAL "arm_hyp")
        find_program(CAKE32 NAMES cake32 PATHS "~/cake-x64-x32/" "/cake-x64-x32/" DOC "32-bit targeting CakeML compiler")
        if("${cake32}" STREQUAL "cake32-NOTFOUND")
            message(FATAL_ERROR "Could not find a 32-bit targeting CakeML compiler. Please ensure cake32 is on the system path.")
        endif()
        set(cakec ${CAKE32})
    elseif("${KernelSel4Arch}" STREQUAL "x86_64")
        find_program(CAKE64 NAMES cake64 PATHS "~/cake-x64-x64/" "/cake-x64-x64/" DOC "64-bit targeting CakeML compiler")
        if("${cake64}" STREQUAL "cake64-NOTFOUND")
            message(FATAL_ERROR "Could not find a 64-bit targeting CakeML compiler. Please ensure cake64 is on the system path.")
        endif()
        set(cakec ${CAKE64})
    else()
        message(FATAL_ERROR "No CakeML compiler support for architecture ${KernelSel4Arch}")
    endif()
else()
    # TODO only look for cake64 if on a 64-bit arch, cake32 if on a 32-bit arch
    set(vagrant_cake "/usr/local/bin/cake-x64-64/cake")
    if(EXISTS ${vagrant_cake})
        set(CAKE ${vagrant_cake} CACHE FILEPATH "CakeML compiler")
    else()
	message(WARNING "Could not find CakeML compiler in the expected location ${vagrant_cake}. Searching elsewhere...")
        find_program(CAKE NAMES cake cake64 cake32 PATHS "~/cake-x64-64/" "~/cake-x64-32/" DOC "CakeML compiler")
        if("${CAKE}" STREQUAL "CAKE-NOTFOUND")
            message(FATAL_ERROR "No CakeML compiler found! Please place the compiler on the system path, or set the \"CAKE\" variable manually.")
	else()
	    message(STATUS "CakeML compiler found in alternate location.")
        endif()
    endif()
    set(cakec ${CAKE})
endif()

# Compile a list of CakeML source files. Creates a build target for library ${name}
# Args: name - name of the resulting library
#       SOURCES - CakeML source files, in order (they'll be concatenated together)
#       ENTRY_NAME - Name of assembly symbol denoting start of the CakeML code. Defaults to "main"
#           Note: This only has any effect on older version of the compiler where the entry symbol was baked-in
#           (as opposed to the current implementation, which defines it in basis_ffi.c)
function(build_cake name)
    cmake_parse_arguments(
        PARSE_ARGV
        1
        PARSED_ARGS
        ""
        "SOURCES;C_SOURCES"
        "ENTRY_NAME"
    )
    if(NOT "${PARSED_ARGS_UNPARSED_ARGUMENTS}" STREQUAL "")
        message(FATAL_ERROR "Unknown arguments to build_cake ${PARSED_ARGS_UNPARSED_ARGUMENTS}")
    endif()
    if("${PARSED_ARGS_SOURCES}" STREQUAL "")
        message(FATAL_ERROR "Must provide at least one CakeML source file to build_cake")
    endif()
    if("${PARSED_ARGS_ENTRY_NAME}" STREQUAL "")
        set(PARSED_ARGS_ENTRY_NAME "main")
    endif()

    cat("${name}.cml" ${PARSED_ARGS_SOURCES})
    set(abs_bin_prefix "${CMAKE_BINARY_DIR}/${name}")
    add_custom_command(
        OUTPUT ${abs_bin_prefix}.cake.S
        COMMAND ${cakec} ${cakeflag_list} < ${abs_bin_prefix}.cml > ${abs_bin_prefix}.cake.S
        COMMAND sed -i".orig" "s/cdecl(main)/cdecl(${PARSED_ARGS_ENTRY_NAME})/g" ${abs_bin_prefix}.cake.S
        DEPENDS ${abs_bin_prefix}.cml
        VERBATIM
    )
    add_library(${name} STATIC "${abs_bin_prefix}.cake.S" "${PARSED_ARGS_C_SOURCES}")
endfunction()

function(build_cake_S name)
    cmake_parse_arguments(
        PARSE_ARGV
        1
        PARSED_ARGS
        ""
        "SOURCES"
        "ENTRY_NAME"
    )
    if(NOT "${PARSED_ARGS_UNPARSED_ARGUMENTS}" STREQUAL "")
        message(FATAL_ERROR "Unknown arguments to build_cake ${PARSED_ARGS_UNPARSED_ARGUMENTS}")
    endif()
    if("${PARSED_ARGS_SOURCES}" STREQUAL "")
        message(FATAL_ERROR "Must provide at least one CakeML source file to build_cake")
    endif()
    if("${PARSED_ARGS_ENTRY_NAME}" STREQUAL "")
        set(PARSED_ARGS_ENTRY_NAME "main")
    endif()

    cat("${name}.cml" ${PARSED_ARGS_SOURCES})
    set(abs_bin_prefix "${CMAKE_BINARY_DIR}/${name}")
    add_custom_command(
        OUTPUT ${abs_bin_prefix}.S
        COMMAND ${cakec} ${cakeflag_list} < ${abs_bin_prefix}.cml > ${abs_bin_prefix}.S
        COMMAND sed -i".orig" "s/cdecl(main)/cdecl(${PARSED_ARGS_ENTRY_NAME})/g" ${abs_bin_prefix}.S
        DEPENDS ${abs_bin_prefix}.cml
        VERBATIM
    )
    add_custom_target(${name}.cake DEPENDS ${abs_bin_prefix}.S)
endfunction()


# Builds a CAmkES component from CakeML and C sourse files.
# Args: name - name of the component
#       CML_SOURCES - CakeML source files, in order (they'll be concatenated together)
#       C_SOURCES - C source files
#       LIBS - Libraries to link. Defaults to "camkescakeml"
#       ENTRY_NAME - Name of assembly symbol denoting start of the CakeML code. Defaults to "run" (CAmkES component entry point)
function(cakeml_component name)
    cmake_parse_arguments(
        PARSE_ARGV
        1
        PARSED_ARGS
        ""
        "CML_SOURCES;C_SOURCES;LIBS"
        "ENTRY_NAME"
    )
    if(NOT "${PARSED_ARGS_UNPARSED_ARGUMENTS}" STREQUAL "")
        message(FATAL_ERROR "Unknown arguments to cakeml_component ${PARSED_ARGS_UNPARSED_ARGUMENTS}")
    endif()
    if("${PARSED_ARGS_LIBS}" STREQUAL "")
        set(PARSED_ARGS_LIBS "camkescakeml")
    endif()
    if("${PARSED_ARGS_ENTRY_NAME}" STREQUAL "")
        set(PARSED_ARGS_ENTRY_NAME "run")
    endif()

    build_cake("${name}.cake" SOURCES "${PARSED_ARGS_CML_SOURCES}" ENTRY_NAME "${PARSED_ARGS_ENTRY_NAME}")
    DeclareCAmkESComponent(${name}
        SOURCES "${PARSED_ARGS_C_SOURCES}"
        LIBS "${PARSED_ARGS_LIBS}" "${name}.cake"
    )
endfunction()

# Concatenates files with unix "cat" program
function(cat name file)
    set(abs_name "${CMAKE_BINARY_DIR}/${name}")
    add_custom_command(
        OUTPUT ${abs_name}
        COMMAND cat ${file} ${ARGN} > ${abs_name}
        DEPENDS ${file} ${ARGN}
    )
endfunction()

# cat using relative filepaths
function(cat_rel name file)
    set(abs_name "${CMAKE_BINARY_DIR}/${name}")
    foreach(filepath ${file} ${ARGN})
        list(APPEND abs_files "${CMAKE_CURRENT_SOURCE_DIR}/${filepath}")
    endforeach(filepath)

    add_custom_command(
        OUTPUT ${abs_name}
        COMMAND cat ${abs_files} > ${abs_name}
        DEPENDS ${abs_files}
    )
endfunction()
