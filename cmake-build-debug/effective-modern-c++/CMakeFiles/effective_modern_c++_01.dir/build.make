# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = /home/gaosm/Downloads/software/clion-2021.1.3/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/gaosm/Downloads/software/clion-2021.1.3/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/gaosm/Downloads/dev/effective-gather

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/gaosm/Downloads/dev/effective-gather/cmake-build-debug

# Include any dependencies generated for this target.
include effective-modern-c++/CMakeFiles/effective_modern_c++_01.dir/depend.make

# Include the progress variables for this target.
include effective-modern-c++/CMakeFiles/effective_modern_c++_01.dir/progress.make

# Include the compile flags for this target's objects.
include effective-modern-c++/CMakeFiles/effective_modern_c++_01.dir/flags.make

effective-modern-c++/CMakeFiles/effective_modern_c++_01.dir/effective_modern_c++_01.cc.o: effective-modern-c++/CMakeFiles/effective_modern_c++_01.dir/flags.make
effective-modern-c++/CMakeFiles/effective_modern_c++_01.dir/effective_modern_c++_01.cc.o: ../effective-modern-c++/effective_modern_c++_01.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gaosm/Downloads/dev/effective-gather/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object effective-modern-c++/CMakeFiles/effective_modern_c++_01.dir/effective_modern_c++_01.cc.o"
	cd /home/gaosm/Downloads/dev/effective-gather/cmake-build-debug/effective-modern-c++ && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/effective_modern_c++_01.dir/effective_modern_c++_01.cc.o -c /home/gaosm/Downloads/dev/effective-gather/effective-modern-c++/effective_modern_c++_01.cc

effective-modern-c++/CMakeFiles/effective_modern_c++_01.dir/effective_modern_c++_01.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/effective_modern_c++_01.dir/effective_modern_c++_01.cc.i"
	cd /home/gaosm/Downloads/dev/effective-gather/cmake-build-debug/effective-modern-c++ && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gaosm/Downloads/dev/effective-gather/effective-modern-c++/effective_modern_c++_01.cc > CMakeFiles/effective_modern_c++_01.dir/effective_modern_c++_01.cc.i

effective-modern-c++/CMakeFiles/effective_modern_c++_01.dir/effective_modern_c++_01.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/effective_modern_c++_01.dir/effective_modern_c++_01.cc.s"
	cd /home/gaosm/Downloads/dev/effective-gather/cmake-build-debug/effective-modern-c++ && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gaosm/Downloads/dev/effective-gather/effective-modern-c++/effective_modern_c++_01.cc -o CMakeFiles/effective_modern_c++_01.dir/effective_modern_c++_01.cc.s

# Object files for target effective_modern_c++_01
effective_modern_c_______01_OBJECTS = \
"CMakeFiles/effective_modern_c++_01.dir/effective_modern_c++_01.cc.o"

# External object files for target effective_modern_c++_01
effective_modern_c_______01_EXTERNAL_OBJECTS =

bin/effective_modern_c++_01: effective-modern-c++/CMakeFiles/effective_modern_c++_01.dir/effective_modern_c++_01.cc.o
bin/effective_modern_c++_01: effective-modern-c++/CMakeFiles/effective_modern_c++_01.dir/build.make
bin/effective_modern_c++_01: effective-modern-c++/CMakeFiles/effective_modern_c++_01.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/gaosm/Downloads/dev/effective-gather/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../bin/effective_modern_c++_01"
	cd /home/gaosm/Downloads/dev/effective-gather/cmake-build-debug/effective-modern-c++ && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/effective_modern_c++_01.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
effective-modern-c++/CMakeFiles/effective_modern_c++_01.dir/build: bin/effective_modern_c++_01

.PHONY : effective-modern-c++/CMakeFiles/effective_modern_c++_01.dir/build

effective-modern-c++/CMakeFiles/effective_modern_c++_01.dir/clean:
	cd /home/gaosm/Downloads/dev/effective-gather/cmake-build-debug/effective-modern-c++ && $(CMAKE_COMMAND) -P CMakeFiles/effective_modern_c++_01.dir/cmake_clean.cmake
.PHONY : effective-modern-c++/CMakeFiles/effective_modern_c++_01.dir/clean

effective-modern-c++/CMakeFiles/effective_modern_c++_01.dir/depend:
	cd /home/gaosm/Downloads/dev/effective-gather/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/gaosm/Downloads/dev/effective-gather /home/gaosm/Downloads/dev/effective-gather/effective-modern-c++ /home/gaosm/Downloads/dev/effective-gather/cmake-build-debug /home/gaosm/Downloads/dev/effective-gather/cmake-build-debug/effective-modern-c++ /home/gaosm/Downloads/dev/effective-gather/cmake-build-debug/effective-modern-c++/CMakeFiles/effective_modern_c++_01.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : effective-modern-c++/CMakeFiles/effective_modern_c++_01.dir/depend

