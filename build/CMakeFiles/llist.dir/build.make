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
CMAKE_COMMAND = /Applications/CMake.app/Contents/bin/cmake

# The command to remove a file.
RM = /Applications/CMake.app/Contents/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/eram/Documents/CSC212/Final Project/FinalProjectCSC212"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/eram/Documents/CSC212/Final Project/FinalProjectCSC212/build"

# Include any dependencies generated for this target.
include CMakeFiles/llist.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/llist.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/llist.dir/flags.make

CMakeFiles/llist.dir/llist.cpp.o: CMakeFiles/llist.dir/flags.make
CMakeFiles/llist.dir/llist.cpp.o: ../llist.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/eram/Documents/CSC212/Final Project/FinalProjectCSC212/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/llist.dir/llist.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/llist.dir/llist.cpp.o -c "/Users/eram/Documents/CSC212/Final Project/FinalProjectCSC212/llist.cpp"

CMakeFiles/llist.dir/llist.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/llist.dir/llist.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/eram/Documents/CSC212/Final Project/FinalProjectCSC212/llist.cpp" > CMakeFiles/llist.dir/llist.cpp.i

CMakeFiles/llist.dir/llist.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/llist.dir/llist.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/eram/Documents/CSC212/Final Project/FinalProjectCSC212/llist.cpp" -o CMakeFiles/llist.dir/llist.cpp.s

# Object files for target llist
llist_OBJECTS = \
"CMakeFiles/llist.dir/llist.cpp.o"

# External object files for target llist
llist_EXTERNAL_OBJECTS =

libllist.a: CMakeFiles/llist.dir/llist.cpp.o
libllist.a: CMakeFiles/llist.dir/build.make
libllist.a: CMakeFiles/llist.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/eram/Documents/CSC212/Final Project/FinalProjectCSC212/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libllist.a"
	$(CMAKE_COMMAND) -P CMakeFiles/llist.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/llist.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/llist.dir/build: libllist.a

.PHONY : CMakeFiles/llist.dir/build

CMakeFiles/llist.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/llist.dir/cmake_clean.cmake
.PHONY : CMakeFiles/llist.dir/clean

CMakeFiles/llist.dir/depend:
	cd "/Users/eram/Documents/CSC212/Final Project/FinalProjectCSC212/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/eram/Documents/CSC212/Final Project/FinalProjectCSC212" "/Users/eram/Documents/CSC212/Final Project/FinalProjectCSC212" "/Users/eram/Documents/CSC212/Final Project/FinalProjectCSC212/build" "/Users/eram/Documents/CSC212/Final Project/FinalProjectCSC212/build" "/Users/eram/Documents/CSC212/Final Project/FinalProjectCSC212/build/CMakeFiles/llist.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/llist.dir/depend

