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

# Utility rule file for tool_assessment.

# Include the progress variables for this target.
include apps/case-tool-assessment/CMakeFiles/tool_assessment.dir/progress.make

apps/case-tool-assessment/CMakeFiles/tool_assessment:


tool_assessment: apps/case-tool-assessment/CMakeFiles/tool_assessment
tool_assessment: apps/case-tool-assessment/CMakeFiles/tool_assessment.dir/build.make

.PHONY : tool_assessment

# Rule to build all files generated by this target.
apps/case-tool-assessment/CMakeFiles/tool_assessment.dir/build: tool_assessment

.PHONY : apps/case-tool-assessment/CMakeFiles/tool_assessment.dir/build

apps/case-tool-assessment/CMakeFiles/tool_assessment.dir/clean:
	cd /home/vagrant/git/am-cakeml/build/apps/case-tool-assessment && $(CMAKE_COMMAND) -P CMakeFiles/tool_assessment.dir/cmake_clean.cmake
.PHONY : apps/case-tool-assessment/CMakeFiles/tool_assessment.dir/clean

apps/case-tool-assessment/CMakeFiles/tool_assessment.dir/depend:
	cd /home/vagrant/git/am-cakeml/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/vagrant/git/am-cakeml /home/vagrant/git/am-cakeml/apps/case-tool-assessment /home/vagrant/git/am-cakeml/build /home/vagrant/git/am-cakeml/build/apps/case-tool-assessment /home/vagrant/git/am-cakeml/build/apps/case-tool-assessment/CMakeFiles/tool_assessment.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : apps/case-tool-assessment/CMakeFiles/tool_assessment.dir/depend
