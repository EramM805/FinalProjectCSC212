# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_SOURCE_DIR = /mnt/c/Users/peter_92culm0/FinalProjectCSC212

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/Users/peter_92culm0/FinalProjectCSC212/build

# Include any dependencies generated for this target.
include CMakeFiles/node.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/node.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/node.dir/flags.make

CMakeFiles/node.dir/node.cpp.o: CMakeFiles/node.dir/flags.make
CMakeFiles/node.dir/node.cpp.o: ../node.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/peter_92culm0/FinalProjectCSC212/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/node.dir/node.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/node.dir/node.cpp.o -c /mnt/c/Users/peter_92culm0/FinalProjectCSC212/node.cpp

CMakeFiles/node.dir/node.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/node.dir/node.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/peter_92culm0/FinalProjectCSC212/node.cpp > CMakeFiles/node.dir/node.cpp.i

CMakeFiles/node.dir/node.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/node.dir/node.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/peter_92culm0/FinalProjectCSC212/node.cpp -o CMakeFiles/node.dir/node.cpp.s

CMakeFiles/node.dir/node.cpp.o.requires:

.PHONY : CMakeFiles/node.dir/node.cpp.o.requires

CMakeFiles/node.dir/node.cpp.o.provides: CMakeFiles/node.dir/node.cpp.o.requires
	$(MAKE) -f CMakeFiles/node.dir/build.make CMakeFiles/node.dir/node.cpp.o.provides.build
.PHONY : CMakeFiles/node.dir/node.cpp.o.provides

CMakeFiles/node.dir/node.cpp.o.provides.build: CMakeFiles/node.dir/node.cpp.o


# Object files for target node
node_OBJECTS = \
"CMakeFiles/node.dir/node.cpp.o"

# External object files for target node
node_EXTERNAL_OBJECTS =

libnode.a: CMakeFiles/node.dir/node.cpp.o
libnode.a: CMakeFiles/node.dir/build.make
libnode.a: CMakeFiles/node.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/c/Users/peter_92culm0/FinalProjectCSC212/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libnode.a"
	$(CMAKE_COMMAND) -P CMakeFiles/node.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/node.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/node.dir/build: libnode.a

.PHONY : CMakeFiles/node.dir/build

CMakeFiles/node.dir/requires: CMakeFiles/node.dir/node.cpp.o.requires

.PHONY : CMakeFiles/node.dir/requires

CMakeFiles/node.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/node.dir/cmake_clean.cmake
.PHONY : CMakeFiles/node.dir/clean

CMakeFiles/node.dir/depend:
	cd /mnt/c/Users/peter_92culm0/FinalProjectCSC212/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Users/peter_92culm0/FinalProjectCSC212 /mnt/c/Users/peter_92culm0/FinalProjectCSC212 /mnt/c/Users/peter_92culm0/FinalProjectCSC212/build /mnt/c/Users/peter_92culm0/FinalProjectCSC212/build /mnt/c/Users/peter_92culm0/FinalProjectCSC212/build/CMakeFiles/node.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/node.dir/depend
