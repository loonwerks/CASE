cmake_minimum_required(VERSION 3.10.2)
# cmake_policy(SET CMP0076 NEW)
set(CMAKE_USER_MAKE_RULES_OVERRIDE "DefaultConfig.cmake")
project(CakemlAM C ASM)

include(CakeMLHelper.cmake)

function(get_real_file file real_name)
    if(EXISTS ${file})
        set(${real_name} ${file} PARENT_SCOPE)
    elseif(EXISTS ${CMAKE_CURRENT_LIST_DIR}/${file})
        set(${real_name} "${CMAKE_CURRENT_LIST_DIR}/${file}" PARENT_SCOPE)
    endif()
endfunction()

# Gets absolute paths, and preserves order
function(get_files list_name)
    set(get_files_list "")
    foreach (file ${ARGN})
#        file(REAL_PATH ${file} temp)
        get_real_file(${file} temp)
        list(APPEND get_files_list ${temp})
    endforeach()
    set(${list_name} ${get_files_list} PARENT_SCOPE)
endfunction()

get_files(util_src util/Json.sml util/Extra.sml util/ByteString.sml util/Misc.sml util/CoqDefaults.sml)
get_files(cop_src ${util_src} copland/Instr.sml copland/AM.sml copland/VM.sml
    copland/json/CoplandToJson.sml copland/json/JsonToCopland.sml)
get_files(crypto_src system/crypto/CryptoFFI.sml system/crypto/Random.sml)
get_files(posix_src ${crypto_src} system/posix/sockets/SocketFFI.sml system/posix/time/TimeFFI.sml system/posix/meas/MeasFFI.sml)
get_files(server_am_src ${cop_src} ${posix_src} am/Measurements.sml am/CommTypes.sml am/ServerAm.sml)

get_files(posix_c_files
    # system/basis_ffi.c system/misc_ffi.c system/crypto/crypto_ffi.c system/posix/sockets/socket_ffi.c
    system/basis_ffi.c system/misc_ffi.c system/posix/sockets/socket_ffi.c
    system/posix/time/time_ffi.c system/posix/meas/meas_ffi.c
)

# OS Config
if(${APPLE})
    set(default_os "macOS")
else()
    set(default_os "linux")
endif()
set(TARGET_OS ${default_os} CACHE STRING "Options are: linux, macOS. Affects which system calls are performed.")
string(TOLOWER ${TARGET_OS} target_os_lower)
if(NOT (${target_os_lower} STREQUAL "linux" OR ${target_os_lower} STREQUAL "macos"))
    message(FATAL_ERROR "TARGET_OS value \"${TARGET_OS}\" is invalid. Please select from: linux, macOS.")
endif()

# Arch Config
set(TARGET_ARCH "native" CACHE STRING "Options: \"native\", \"armv7\", or \"other\".")
string(TOLOWER ${TARGET_ARCH} target_arch_lower)
if("${target_arch_lower}" STREQUAL "armv7")
    set(CMAKE_C_FLAGS "-mfloat-abi=hard ${CMAKE_C_FLAGS}")
    find_program (arm-hf-gcc arm-linux-gnueabihf-gcc)
    if("${arm-hf-gcc}" STREQUAL "arm-hf-gcc-NOTFOUND")
        message(WARNING "Cross-compiling to the armv7 architecture requires hard-float support. Please ensure your C compiler supports this.")
    else()
        set(CMAKE_C_COMPILER ${arm-hf-gcc})
    endif()
    unset(arm-hf-gcc)
elseif(NOT(("${target_arch_lower}" STREQUAL "native") OR ("${target_arch_lower}" STREQUAL "other")))
    message(FATAL_ERROR "TARGET_ARCH value \"${TARGET_ARCH}\" is invalid. Please select from: \"native\", \"armv7\", or \"other\".")
endif()

string(COMPARE NOTEQUAL "${target_arch_lower}" "native" default_static_linking)
set(STATIC_LINKING default_static_linking CACHE BOOL "")

mark_as_advanced(FORCE CMAKE_INSTALL_PREFIX)
mark_as_advanced(CLEAR
    CMAKE_C_COMPILER CMAKE_ASM_COMPILER CMAKE_C_FLAGS CMAKE_C_FLAGS_DEBUG
    CMAKE_C_FLAGS_RELEASE CMAKE_EXE_LINKER_FLAGS CMAKE_VERBOSE_MAKEFILE
)

add_subdirectory(system/crypto)

function(build_posix_am name)
    build_cake("${name}.cake" SOURCES "${ARGN}")
    add_executable(${name} ${posix_c_files})
    add_hacl(${name})
    if(${STATIC_LINKING})
        set(link_flags "-static-libgcc -static")
    endif()
    target_link_libraries(${name} "${name}.cake" ${link_flags})
endfunction()

file(GLOB appdirs apps/*)
foreach(appdir ${appdirs})
    if(EXISTS "${appdir}/CMakeLists.txt")
        add_subdirectory(${appdir})
    endif()
endforeach()
