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
CMAKE_SOURCE_DIR = /home/vagrant/git/CASE/CASE_Simple_Example_V4/Initial/HAMR_Simple_V4/src/c/nix

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/vagrant/git/CASE/CASE_Simple_Example_V4/Initial/HAMR_Simple_V4/src/c/nix/linux-build

# Include any dependencies generated for this target.
include CMakeFiles/RadioDriver_Impl_SW_Radio_App-bin.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/RadioDriver_Impl_SW_Radio_App-bin.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/RadioDriver_Impl_SW_Radio_App-bin.dir/flags.make

CMakeFiles/RadioDriver_Impl_SW_Radio_App-bin.dir/app-RadioDriver_Impl_SW_Radio_App/RadioDriver_Impl_SW_Radio_App.c.o: CMakeFiles/RadioDriver_Impl_SW_Radio_App-bin.dir/flags.make
CMakeFiles/RadioDriver_Impl_SW_Radio_App-bin.dir/app-RadioDriver_Impl_SW_Radio_App/RadioDriver_Impl_SW_Radio_App.c.o: ../app-RadioDriver_Impl_SW_Radio_App/RadioDriver_Impl_SW_Radio_App.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vagrant/git/CASE/CASE_Simple_Example_V4/Initial/HAMR_Simple_V4/src/c/nix/linux-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/RadioDriver_Impl_SW_Radio_App-bin.dir/app-RadioDriver_Impl_SW_Radio_App/RadioDriver_Impl_SW_Radio_App.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/RadioDriver_Impl_SW_Radio_App-bin.dir/app-RadioDriver_Impl_SW_Radio_App/RadioDriver_Impl_SW_Radio_App.c.o   -c /home/vagrant/git/CASE/CASE_Simple_Example_V4/Initial/HAMR_Simple_V4/src/c/nix/app-RadioDriver_Impl_SW_Radio_App/RadioDriver_Impl_SW_Radio_App.c

CMakeFiles/RadioDriver_Impl_SW_Radio_App-bin.dir/app-RadioDriver_Impl_SW_Radio_App/RadioDriver_Impl_SW_Radio_App.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/RadioDriver_Impl_SW_Radio_App-bin.dir/app-RadioDriver_Impl_SW_Radio_App/RadioDriver_Impl_SW_Radio_App.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/vagrant/git/CASE/CASE_Simple_Example_V4/Initial/HAMR_Simple_V4/src/c/nix/app-RadioDriver_Impl_SW_Radio_App/RadioDriver_Impl_SW_Radio_App.c > CMakeFiles/RadioDriver_Impl_SW_Radio_App-bin.dir/app-RadioDriver_Impl_SW_Radio_App/RadioDriver_Impl_SW_Radio_App.c.i

CMakeFiles/RadioDriver_Impl_SW_Radio_App-bin.dir/app-RadioDriver_Impl_SW_Radio_App/RadioDriver_Impl_SW_Radio_App.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/RadioDriver_Impl_SW_Radio_App-bin.dir/app-RadioDriver_Impl_SW_Radio_App/RadioDriver_Impl_SW_Radio_App.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/vagrant/git/CASE/CASE_Simple_Example_V4/Initial/HAMR_Simple_V4/src/c/nix/app-RadioDriver_Impl_SW_Radio_App/RadioDriver_Impl_SW_Radio_App.c -o CMakeFiles/RadioDriver_Impl_SW_Radio_App-bin.dir/app-RadioDriver_Impl_SW_Radio_App/RadioDriver_Impl_SW_Radio_App.c.s

# Object files for target RadioDriver_Impl_SW_Radio_App-bin
RadioDriver_Impl_SW_Radio_App__bin_OBJECTS = \
"CMakeFiles/RadioDriver_Impl_SW_Radio_App-bin.dir/app-RadioDriver_Impl_SW_Radio_App/RadioDriver_Impl_SW_Radio_App.c.o"

# External object files for target RadioDriver_Impl_SW_Radio_App-bin
RadioDriver_Impl_SW_Radio_App__bin_EXTERNAL_OBJECTS =

RadioDriver_Impl_SW_Radio_App: CMakeFiles/RadioDriver_Impl_SW_Radio_App-bin.dir/app-RadioDriver_Impl_SW_Radio_App/RadioDriver_Impl_SW_Radio_App.c.o
RadioDriver_Impl_SW_Radio_App: CMakeFiles/RadioDriver_Impl_SW_Radio_App-bin.dir/build.make
RadioDriver_Impl_SW_Radio_App: libmain.a
RadioDriver_Impl_SW_Radio_App: CMakeFiles/RadioDriver_Impl_SW_Radio_App-bin.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/vagrant/git/CASE/CASE_Simple_Example_V4/Initial/HAMR_Simple_V4/src/c/nix/linux-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable RadioDriver_Impl_SW_Radio_App"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/RadioDriver_Impl_SW_Radio_App-bin.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/RadioDriver_Impl_SW_Radio_App-bin.dir/build: RadioDriver_Impl_SW_Radio_App

.PHONY : CMakeFiles/RadioDriver_Impl_SW_Radio_App-bin.dir/build

CMakeFiles/RadioDriver_Impl_SW_Radio_App-bin.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/RadioDriver_Impl_SW_Radio_App-bin.dir/cmake_clean.cmake
.PHONY : CMakeFiles/RadioDriver_Impl_SW_Radio_App-bin.dir/clean

CMakeFiles/RadioDriver_Impl_SW_Radio_App-bin.dir/depend:
	cd /home/vagrant/git/CASE/CASE_Simple_Example_V4/Initial/HAMR_Simple_V4/src/c/nix/linux-build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/vagrant/git/CASE/CASE_Simple_Example_V4/Initial/HAMR_Simple_V4/src/c/nix /home/vagrant/git/CASE/CASE_Simple_Example_V4/Initial/HAMR_Simple_V4/src/c/nix /home/vagrant/git/CASE/CASE_Simple_Example_V4/Initial/HAMR_Simple_V4/src/c/nix/linux-build /home/vagrant/git/CASE/CASE_Simple_Example_V4/Initial/HAMR_Simple_V4/src/c/nix/linux-build /home/vagrant/git/CASE/CASE_Simple_Example_V4/Initial/HAMR_Simple_V4/src/c/nix/linux-build/CMakeFiles/RadioDriver_Impl_SW_Radio_App-bin.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/RadioDriver_Impl_SW_Radio_App-bin.dir/depend

