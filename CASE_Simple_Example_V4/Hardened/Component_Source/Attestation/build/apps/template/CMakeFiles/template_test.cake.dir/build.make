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
include apps/template/CMakeFiles/template_test.cake.dir/depend.make

# Include the progress variables for this target.
include apps/template/CMakeFiles/template_test.cake.dir/progress.make

# Include the compile flags for this target's objects.
include apps/template/CMakeFiles/template_test.cake.dir/flags.make

template_test.cake.cake.S: template_test.cake.cml
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/vagrant/git/am-cakeml/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating ../../template_test.cake.cake.S"
	cd /home/vagrant/git/am-cakeml/build/apps/template && /usr/local/bin/cake-x64-64/cake --stack_size=10 --heap_size=10 < /home/vagrant/git/am-cakeml/build/template_test.cake.cml > /home/vagrant/git/am-cakeml/build/template_test.cake.cake.S
	cd /home/vagrant/git/am-cakeml/build/apps/template && sed -i\".orig\" "s/cdecl(main)/cdecl(main)/g" /home/vagrant/git/am-cakeml/build/template_test.cake.cake.S

template_test.cake.cml: ../apps/template/main.sml
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/vagrant/git/am-cakeml/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating ../../template_test.cake.cml"
	cd /home/vagrant/git/am-cakeml/build/apps/template && cat /home/vagrant/git/am-cakeml/apps/template/main.sml > /home/vagrant/git/am-cakeml/build/template_test.cake.cml

apps/template/CMakeFiles/template_test.cake.dir/__/__/template_test.cake.cake.S.o: apps/template/CMakeFiles/template_test.cake.dir/flags.make
apps/template/CMakeFiles/template_test.cake.dir/__/__/template_test.cake.cake.S.o: template_test.cake.cake.S
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vagrant/git/am-cakeml/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building ASM object apps/template/CMakeFiles/template_test.cake.dir/__/__/template_test.cake.cake.S.o"
	cd /home/vagrant/git/am-cakeml/build/apps/template && /usr/bin/cc $(ASM_DEFINES) $(ASM_INCLUDES) $(ASM_FLAGS) -o CMakeFiles/template_test.cake.dir/__/__/template_test.cake.cake.S.o -c /home/vagrant/git/am-cakeml/build/template_test.cake.cake.S

# Object files for target template_test.cake
template_test_cake_OBJECTS = \
"CMakeFiles/template_test.cake.dir/__/__/template_test.cake.cake.S.o"

# External object files for target template_test.cake
template_test_cake_EXTERNAL_OBJECTS =

apps/template/libtemplate_test.cake.a: apps/template/CMakeFiles/template_test.cake.dir/__/__/template_test.cake.cake.S.o
apps/template/libtemplate_test.cake.a: apps/template/CMakeFiles/template_test.cake.dir/build.make
apps/template/libtemplate_test.cake.a: apps/template/CMakeFiles/template_test.cake.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/vagrant/git/am-cakeml/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking ASM static library libtemplate_test.cake.a"
	cd /home/vagrant/git/am-cakeml/build/apps/template && $(CMAKE_COMMAND) -P CMakeFiles/template_test.cake.dir/cmake_clean_target.cmake
	cd /home/vagrant/git/am-cakeml/build/apps/template && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/template_test.cake.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
apps/template/CMakeFiles/template_test.cake.dir/build: apps/template/libtemplate_test.cake.a

.PHONY : apps/template/CMakeFiles/template_test.cake.dir/build

apps/template/CMakeFiles/template_test.cake.dir/clean:
	cd /home/vagrant/git/am-cakeml/build/apps/template && $(CMAKE_COMMAND) -P CMakeFiles/template_test.cake.dir/cmake_clean.cmake
.PHONY : apps/template/CMakeFiles/template_test.cake.dir/clean

apps/template/CMakeFiles/template_test.cake.dir/depend: template_test.cake.cake.S
apps/template/CMakeFiles/template_test.cake.dir/depend: template_test.cake.cml
	cd /home/vagrant/git/am-cakeml/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/vagrant/git/am-cakeml /home/vagrant/git/am-cakeml/apps/template /home/vagrant/git/am-cakeml/build /home/vagrant/git/am-cakeml/build/apps/template /home/vagrant/git/am-cakeml/build/apps/template/CMakeFiles/template_test.cake.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : apps/template/CMakeFiles/template_test.cake.dir/depend

