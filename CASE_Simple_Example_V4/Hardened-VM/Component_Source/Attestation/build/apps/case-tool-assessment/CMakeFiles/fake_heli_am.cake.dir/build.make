# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/vagrant/git/am-cakeml

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/vagrant/git/am-cakeml/build

# Include any dependencies generated for this target.
include apps/case-tool-assessment/CMakeFiles/fake_heli_am.cake.dir/depend.make

# Include the progress variables for this target.
include apps/case-tool-assessment/CMakeFiles/fake_heli_am.cake.dir/progress.make

# Include the compile flags for this target's objects.
include apps/case-tool-assessment/CMakeFiles/fake_heli_am.cake.dir/flags.make

fake_heli_am.cake.cake.S: fake_heli_am.cake.cml
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/vagrant/git/am-cakeml/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating ../../fake_heli_am.cake.cake.S"
	cd /home/vagrant/git/am-cakeml/build/apps/case-tool-assessment && /usr/local/bin/cake-x64-64/cake --stack_size=10 --heap_size=10 < /home/vagrant/git/am-cakeml/build/fake_heli_am.cake.cml > /home/vagrant/git/am-cakeml/build/fake_heli_am.cake.cake.S
	cd /home/vagrant/git/am-cakeml/build/apps/case-tool-assessment && sed -i\".orig\" "s/cdecl(main)/cdecl(main)/g" /home/vagrant/git/am-cakeml/build/fake_heli_am.cake.cake.S

fake_heli_am.cake.cml: ../apps/case-tool-assessment/Config.sml
fake_heli_am.cake.cml: ../util/Json.sml
fake_heli_am.cake.cml: ../util/Extra.sml
fake_heli_am.cake.cml: ../util/ByteString.sml
fake_heli_am.cake.cml: ../util/Misc.sml
fake_heli_am.cake.cml: ../util/CoqDefaults.sml
fake_heli_am.cake.cml: ../copland/Instr.sml
fake_heli_am.cake.cml: ../copland/AM.sml
fake_heli_am.cake.cml: ../copland/VM.sml
fake_heli_am.cake.cml: ../copland/json/CoplandToJson.sml
fake_heli_am.cake.cml: ../copland/json/JsonToCopland.sml
fake_heli_am.cake.cml: ../system/crypto/CryptoFFI.sml
fake_heli_am.cake.cml: ../system/crypto/Random.sml
fake_heli_am.cake.cml: ../apps/case-tool-assessment/HamrStandard.sml
fake_heli_am.cake.cml: ../apps/case-tool-assessment/GoldenHashes.sml
fake_heli_am.cake.cml: ../apps/case-tool-assessment/RealCrypto.sml
fake_heli_am.cake.cml: ../apps/case-tool-assessment/Heli.sml
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/vagrant/git/am-cakeml/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating ../../fake_heli_am.cake.cml"
	cd /home/vagrant/git/am-cakeml/build/apps/case-tool-assessment && cat /home/vagrant/git/am-cakeml/apps/case-tool-assessment/Config.sml /home/vagrant/git/am-cakeml/util/Json.sml /home/vagrant/git/am-cakeml/util/Extra.sml /home/vagrant/git/am-cakeml/util/ByteString.sml /home/vagrant/git/am-cakeml/util/Misc.sml /home/vagrant/git/am-cakeml/util/CoqDefaults.sml /home/vagrant/git/am-cakeml/copland/Instr.sml /home/vagrant/git/am-cakeml/copland/AM.sml /home/vagrant/git/am-cakeml/copland/VM.sml /home/vagrant/git/am-cakeml/copland/json/CoplandToJson.sml /home/vagrant/git/am-cakeml/copland/json/JsonToCopland.sml /home/vagrant/git/am-cakeml/system/crypto/CryptoFFI.sml /home/vagrant/git/am-cakeml/system/crypto/Random.sml /home/vagrant/git/am-cakeml/apps/case-tool-assessment/HamrStandard.sml /home/vagrant/git/am-cakeml/apps/case-tool-assessment/GoldenHashes.sml /home/vagrant/git/am-cakeml/apps/case-tool-assessment/RealCrypto.sml /home/vagrant/git/am-cakeml/apps/case-tool-assessment/Heli.sml > /home/vagrant/git/am-cakeml/build/fake_heli_am.cake.cml

apps/case-tool-assessment/CMakeFiles/fake_heli_am.cake.dir/__/__/fake_heli_am.cake.cake.S.o: apps/case-tool-assessment/CMakeFiles/fake_heli_am.cake.dir/flags.make
apps/case-tool-assessment/CMakeFiles/fake_heli_am.cake.dir/__/__/fake_heli_am.cake.cake.S.o: fake_heli_am.cake.cake.S
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vagrant/git/am-cakeml/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building ASM object apps/case-tool-assessment/CMakeFiles/fake_heli_am.cake.dir/__/__/fake_heli_am.cake.cake.S.o"
	cd /home/vagrant/git/am-cakeml/build/apps/case-tool-assessment && /usr/bin/cc $(ASM_DEFINES) $(ASM_INCLUDES) $(ASM_FLAGS) -o CMakeFiles/fake_heli_am.cake.dir/__/__/fake_heli_am.cake.cake.S.o -c /home/vagrant/git/am-cakeml/build/fake_heli_am.cake.cake.S

# Object files for target fake_heli_am.cake
fake_heli_am_cake_OBJECTS = \
"CMakeFiles/fake_heli_am.cake.dir/__/__/fake_heli_am.cake.cake.S.o"

# External object files for target fake_heli_am.cake
fake_heli_am_cake_EXTERNAL_OBJECTS =

apps/case-tool-assessment/libfake_heli_am.cake.a: apps/case-tool-assessment/CMakeFiles/fake_heli_am.cake.dir/__/__/fake_heli_am.cake.cake.S.o
apps/case-tool-assessment/libfake_heli_am.cake.a: apps/case-tool-assessment/CMakeFiles/fake_heli_am.cake.dir/build.make
apps/case-tool-assessment/libfake_heli_am.cake.a: apps/case-tool-assessment/CMakeFiles/fake_heli_am.cake.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/vagrant/git/am-cakeml/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking ASM static library libfake_heli_am.cake.a"
	cd /home/vagrant/git/am-cakeml/build/apps/case-tool-assessment && $(CMAKE_COMMAND) -P CMakeFiles/fake_heli_am.cake.dir/cmake_clean_target.cmake
	cd /home/vagrant/git/am-cakeml/build/apps/case-tool-assessment && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/fake_heli_am.cake.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
apps/case-tool-assessment/CMakeFiles/fake_heli_am.cake.dir/build: apps/case-tool-assessment/libfake_heli_am.cake.a

.PHONY : apps/case-tool-assessment/CMakeFiles/fake_heli_am.cake.dir/build

apps/case-tool-assessment/CMakeFiles/fake_heli_am.cake.dir/clean:
	cd /home/vagrant/git/am-cakeml/build/apps/case-tool-assessment && $(CMAKE_COMMAND) -P CMakeFiles/fake_heli_am.cake.dir/cmake_clean.cmake
.PHONY : apps/case-tool-assessment/CMakeFiles/fake_heli_am.cake.dir/clean

apps/case-tool-assessment/CMakeFiles/fake_heli_am.cake.dir/depend: fake_heli_am.cake.cake.S
apps/case-tool-assessment/CMakeFiles/fake_heli_am.cake.dir/depend: fake_heli_am.cake.cml
	cd /home/vagrant/git/am-cakeml/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/vagrant/git/am-cakeml /home/vagrant/git/am-cakeml/apps/case-tool-assessment /home/vagrant/git/am-cakeml/build /home/vagrant/git/am-cakeml/build/apps/case-tool-assessment /home/vagrant/git/am-cakeml/build/apps/case-tool-assessment/CMakeFiles/fake_heli_am.cake.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : apps/case-tool-assessment/CMakeFiles/fake_heli_am.cake.dir/depend

