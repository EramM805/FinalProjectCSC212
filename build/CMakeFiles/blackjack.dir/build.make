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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.13.4/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.13.4/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/fayeezus/finalprojectcsc212

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/fayeezus/finalprojectcsc212/build

# Include any dependencies generated for this target.
include CMakeFiles/blackjack.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/blackjack.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/blackjack.dir/flags.make

CMakeFiles/blackjack.dir/blackjack.cxx.o: CMakeFiles/blackjack.dir/flags.make
CMakeFiles/blackjack.dir/blackjack.cxx.o: ../blackjack.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/fayeezus/finalprojectcsc212/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/blackjack.dir/blackjack.cxx.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/blackjack.dir/blackjack.cxx.o -c /Users/fayeezus/finalprojectcsc212/blackjack.cxx

CMakeFiles/blackjack.dir/blackjack.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/blackjack.dir/blackjack.cxx.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/fayeezus/finalprojectcsc212/blackjack.cxx > CMakeFiles/blackjack.dir/blackjack.cxx.i

CMakeFiles/blackjack.dir/blackjack.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/blackjack.dir/blackjack.cxx.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/fayeezus/finalprojectcsc212/blackjack.cxx -o CMakeFiles/blackjack.dir/blackjack.cxx.s

# Object files for target blackjack
blackjack_OBJECTS = \
"CMakeFiles/blackjack.dir/blackjack.cxx.o"

# External object files for target blackjack
blackjack_EXTERNAL_OBJECTS =

blackjack: CMakeFiles/blackjack.dir/blackjack.cxx.o
blackjack: CMakeFiles/blackjack.dir/build.make
blackjack: CMakeFiles/blackjack.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/fayeezus/finalprojectcsc212/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable blackjack"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/blackjack.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/blackjack.dir/build: blackjack

.PHONY : CMakeFiles/blackjack.dir/build

CMakeFiles/blackjack.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/blackjack.dir/cmake_clean.cmake
.PHONY : CMakeFiles/blackjack.dir/clean

CMakeFiles/blackjack.dir/depend:
	cd /Users/fayeezus/finalprojectcsc212/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/fayeezus/finalprojectcsc212 /Users/fayeezus/finalprojectcsc212 /Users/fayeezus/finalprojectcsc212/build /Users/fayeezus/finalprojectcsc212/build /Users/fayeezus/finalprojectcsc212/build/CMakeFiles/blackjack.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/blackjack.dir/depend

