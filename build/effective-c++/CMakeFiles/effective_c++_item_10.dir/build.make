# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/gaosm/Downloads/dev/effective-gather

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/gaosm/Downloads/dev/effective-gather/build

# Include any dependencies generated for this target.
include effective-c++/CMakeFiles/effective_c++_item_10.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include effective-c++/CMakeFiles/effective_c++_item_10.dir/compiler_depend.make

# Include the progress variables for this target.
include effective-c++/CMakeFiles/effective_c++_item_10.dir/progress.make

# Include the compile flags for this target's objects.
include effective-c++/CMakeFiles/effective_c++_item_10.dir/flags.make

effective-c++/CMakeFiles/effective_c++_item_10.dir/effective_c++_item_10.cc.o: effective-c++/CMakeFiles/effective_c++_item_10.dir/flags.make
effective-c++/CMakeFiles/effective_c++_item_10.dir/effective_c++_item_10.cc.o: ../effective-c++/effective_c++_item_10.cc
effective-c++/CMakeFiles/effective_c++_item_10.dir/effective_c++_item_10.cc.o: effective-c++/CMakeFiles/effective_c++_item_10.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gaosm/Downloads/dev/effective-gather/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object effective-c++/CMakeFiles/effective_c++_item_10.dir/effective_c++_item_10.cc.o"
	cd /home/gaosm/Downloads/dev/effective-gather/build/effective-c++ && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT effective-c++/CMakeFiles/effective_c++_item_10.dir/effective_c++_item_10.cc.o -MF CMakeFiles/effective_c++_item_10.dir/effective_c++_item_10.cc.o.d -o CMakeFiles/effective_c++_item_10.dir/effective_c++_item_10.cc.o -c /home/gaosm/Downloads/dev/effective-gather/effective-c++/effective_c++_item_10.cc

effective-c++/CMakeFiles/effective_c++_item_10.dir/effective_c++_item_10.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/effective_c++_item_10.dir/effective_c++_item_10.cc.i"
	cd /home/gaosm/Downloads/dev/effective-gather/build/effective-c++ && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gaosm/Downloads/dev/effective-gather/effective-c++/effective_c++_item_10.cc > CMakeFiles/effective_c++_item_10.dir/effective_c++_item_10.cc.i

effective-c++/CMakeFiles/effective_c++_item_10.dir/effective_c++_item_10.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/effective_c++_item_10.dir/effective_c++_item_10.cc.s"
	cd /home/gaosm/Downloads/dev/effective-gather/build/effective-c++ && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gaosm/Downloads/dev/effective-gather/effective-c++/effective_c++_item_10.cc -o CMakeFiles/effective_c++_item_10.dir/effective_c++_item_10.cc.s

# Object files for target effective_c++_item_10
effective_c_______item_10_OBJECTS = \
"CMakeFiles/effective_c++_item_10.dir/effective_c++_item_10.cc.o"

# External object files for target effective_c++_item_10
effective_c_______item_10_EXTERNAL_OBJECTS =

bin/effective_c++_item_10: effective-c++/CMakeFiles/effective_c++_item_10.dir/effective_c++_item_10.cc.o
bin/effective_c++_item_10: effective-c++/CMakeFiles/effective_c++_item_10.dir/build.make
bin/effective_c++_item_10: effective-c++/CMakeFiles/effective_c++_item_10.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/gaosm/Downloads/dev/effective-gather/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../bin/effective_c++_item_10"
	cd /home/gaosm/Downloads/dev/effective-gather/build/effective-c++ && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/effective_c++_item_10.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
effective-c++/CMakeFiles/effective_c++_item_10.dir/build: bin/effective_c++_item_10
.PHONY : effective-c++/CMakeFiles/effective_c++_item_10.dir/build

effective-c++/CMakeFiles/effective_c++_item_10.dir/clean:
	cd /home/gaosm/Downloads/dev/effective-gather/build/effective-c++ && $(CMAKE_COMMAND) -P CMakeFiles/effective_c++_item_10.dir/cmake_clean.cmake
.PHONY : effective-c++/CMakeFiles/effective_c++_item_10.dir/clean

effective-c++/CMakeFiles/effective_c++_item_10.dir/depend:
	cd /home/gaosm/Downloads/dev/effective-gather/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/gaosm/Downloads/dev/effective-gather /home/gaosm/Downloads/dev/effective-gather/effective-c++ /home/gaosm/Downloads/dev/effective-gather/build /home/gaosm/Downloads/dev/effective-gather/build/effective-c++ /home/gaosm/Downloads/dev/effective-gather/build/effective-c++/CMakeFiles/effective_c++_item_10.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : effective-c++/CMakeFiles/effective_c++_item_10.dir/depend

