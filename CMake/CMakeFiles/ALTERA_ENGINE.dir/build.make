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
CMAKE_COMMAND = /home/sam/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/211.7142.21/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/sam/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/211.7142.21/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/sam/CLionProjects/ALTERA-ENGINE

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/sam/CLionProjects/ALTERA-ENGINE/CMake

# Include any dependencies generated for this target.
include CMakeFiles/ALTERA_ENGINE.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ALTERA_ENGINE.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ALTERA_ENGINE.dir/flags.make

CMakeFiles/ALTERA_ENGINE.dir/main.cpp.o: CMakeFiles/ALTERA_ENGINE.dir/flags.make
CMakeFiles/ALTERA_ENGINE.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sam/CLionProjects/ALTERA-ENGINE/CMake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ALTERA_ENGINE.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ALTERA_ENGINE.dir/main.cpp.o -c /home/sam/CLionProjects/ALTERA-ENGINE/main.cpp

CMakeFiles/ALTERA_ENGINE.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ALTERA_ENGINE.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sam/CLionProjects/ALTERA-ENGINE/main.cpp > CMakeFiles/ALTERA_ENGINE.dir/main.cpp.i

CMakeFiles/ALTERA_ENGINE.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ALTERA_ENGINE.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sam/CLionProjects/ALTERA-ENGINE/main.cpp -o CMakeFiles/ALTERA_ENGINE.dir/main.cpp.s

# Object files for target ALTERA_ENGINE
ALTERA_ENGINE_OBJECTS = \
"CMakeFiles/ALTERA_ENGINE.dir/main.cpp.o"

# External object files for target ALTERA_ENGINE
ALTERA_ENGINE_EXTERNAL_OBJECTS =

../Build/ALTERA_ENGINE: CMakeFiles/ALTERA_ENGINE.dir/main.cpp.o
../Build/ALTERA_ENGINE: CMakeFiles/ALTERA_ENGINE.dir/build.make
../Build/ALTERA_ENGINE: CMakeFiles/ALTERA_ENGINE.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/sam/CLionProjects/ALTERA-ENGINE/CMake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../Build/ALTERA_ENGINE"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ALTERA_ENGINE.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ALTERA_ENGINE.dir/build: ../Build/ALTERA_ENGINE

.PHONY : CMakeFiles/ALTERA_ENGINE.dir/build

CMakeFiles/ALTERA_ENGINE.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ALTERA_ENGINE.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ALTERA_ENGINE.dir/clean

CMakeFiles/ALTERA_ENGINE.dir/depend:
	cd /home/sam/CLionProjects/ALTERA-ENGINE/CMake && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sam/CLionProjects/ALTERA-ENGINE /home/sam/CLionProjects/ALTERA-ENGINE /home/sam/CLionProjects/ALTERA-ENGINE/CMake /home/sam/CLionProjects/ALTERA-ENGINE/CMake /home/sam/CLionProjects/ALTERA-ENGINE/CMake/CMakeFiles/ALTERA_ENGINE.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ALTERA_ENGINE.dir/depend
