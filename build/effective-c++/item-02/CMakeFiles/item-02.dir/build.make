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
include effective-c++/item-02/CMakeFiles/item-02.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include effective-c++/item-02/CMakeFiles/item-02.dir/compiler_depend.make

# Include the progress variables for this target.
include effective-c++/item-02/CMakeFiles/item-02.dir/progress.make

# Include the compile flags for this target's objects.
include effective-c++/item-02/CMakeFiles/item-02.dir/flags.make

effective-c++/item-02/CMakeFiles/item-02.dir/item-02.cc.o: effective-c++/item-02/CMakeFiles/item-02.dir/flags.make
effective-c++/item-02/CMakeFiles/item-02.dir/item-02.cc.o: ../effective-c++/item-02/item-02.cc
effective-c++/item-02/CMakeFiles/item-02.dir/item-02.cc.o: effective-c++/item-02/CMakeFiles/item-02.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gaosm/Downloads/dev/effective-gather/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object effective-c++/item-02/CMakeFiles/item-02.dir/item-02.cc.o"
	cd /home/gaosm/Downloads/dev/effective-gather/build/effective-c++/item-02 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT effective-c++/item-02/CMakeFiles/item-02.dir/item-02.cc.o -MF CMakeFiles/item-02.dir/item-02.cc.o.d -o CMakeFiles/item-02.dir/item-02.cc.o -c /home/gaosm/Downloads/dev/effective-gather/effective-c++/item-02/item-02.cc

effective-c++/item-02/CMakeFiles/item-02.dir/item-02.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/item-02.dir/item-02.cc.i"
	cd /home/gaosm/Downloads/dev/effective-gather/build/effective-c++/item-02 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gaosm/Downloads/dev/effective-gather/effective-c++/item-02/item-02.cc > CMakeFiles/item-02.dir/item-02.cc.i

effective-c++/item-02/CMakeFiles/item-02.dir/item-02.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/item-02.dir/item-02.cc.s"
	cd /home/gaosm/Downloads/dev/effective-gather/build/effective-c++/item-02 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gaosm/Downloads/dev/effective-gather/effective-c++/item-02/item-02.cc -o CMakeFiles/item-02.dir/item-02.cc.s

# Object files for target item-02
item__02_OBJECTS = \
"CMakeFiles/item-02.dir/item-02.cc.o"

# External object files for target item-02
item__02_EXTERNAL_OBJECTS =

bin/item-02: effective-c++/item-02/CMakeFiles/item-02.dir/item-02.cc.o
bin/item-02: effective-c++/item-02/CMakeFiles/item-02.dir/build.make
bin/item-02: effective-c++/item-02/CMakeFiles/item-02.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/gaosm/Downloads/dev/effective-gather/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../bin/item-02"
	cd /home/gaosm/Downloads/dev/effective-gather/build/effective-c++/item-02 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/item-02.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
effective-c++/item-02/CMakeFiles/item-02.dir/build: bin/item-02
.PHONY : effective-c++/item-02/CMakeFiles/item-02.dir/build

effective-c++/item-02/CMakeFiles/item-02.dir/clean:
	cd /home/gaosm/Downloads/dev/effective-gather/build/effective-c++/item-02 && $(CMAKE_COMMAND) -P CMakeFiles/item-02.dir/cmake_clean.cmake
.PHONY : effective-c++/item-02/CMakeFiles/item-02.dir/clean

effective-c++/item-02/CMakeFiles/item-02.dir/depend:
	cd /home/gaosm/Downloads/dev/effective-gather/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/gaosm/Downloads/dev/effective-gather /home/gaosm/Downloads/dev/effective-gather/effective-c++/item-02 /home/gaosm/Downloads/dev/effective-gather/build /home/gaosm/Downloads/dev/effective-gather/build/effective-c++/item-02 /home/gaosm/Downloads/dev/effective-gather/build/effective-c++/item-02/CMakeFiles/item-02.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : effective-c++/item-02/CMakeFiles/item-02.dir/depend

