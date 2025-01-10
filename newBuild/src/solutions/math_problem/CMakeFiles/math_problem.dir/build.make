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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/eternal/projects/LeetCode

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/eternal/projects/LeetCode/newBuild

# Include any dependencies generated for this target.
include src/solutions/math_problem/CMakeFiles/math_problem.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/solutions/math_problem/CMakeFiles/math_problem.dir/compiler_depend.make

# Include the progress variables for this target.
include src/solutions/math_problem/CMakeFiles/math_problem.dir/progress.make

# Include the compile flags for this target's objects.
include src/solutions/math_problem/CMakeFiles/math_problem.dir/flags.make

src/solutions/math_problem/CMakeFiles/math_problem.dir/PalindromeNumber9.cpp.o: src/solutions/math_problem/CMakeFiles/math_problem.dir/flags.make
src/solutions/math_problem/CMakeFiles/math_problem.dir/PalindromeNumber9.cpp.o: ../src/solutions/math_problem/PalindromeNumber9.cpp
src/solutions/math_problem/CMakeFiles/math_problem.dir/PalindromeNumber9.cpp.o: src/solutions/math_problem/CMakeFiles/math_problem.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/eternal/projects/LeetCode/newBuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/solutions/math_problem/CMakeFiles/math_problem.dir/PalindromeNumber9.cpp.o"
	cd /home/eternal/projects/LeetCode/newBuild/src/solutions/math_problem && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/solutions/math_problem/CMakeFiles/math_problem.dir/PalindromeNumber9.cpp.o -MF CMakeFiles/math_problem.dir/PalindromeNumber9.cpp.o.d -o CMakeFiles/math_problem.dir/PalindromeNumber9.cpp.o -c /home/eternal/projects/LeetCode/src/solutions/math_problem/PalindromeNumber9.cpp

src/solutions/math_problem/CMakeFiles/math_problem.dir/PalindromeNumber9.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/math_problem.dir/PalindromeNumber9.cpp.i"
	cd /home/eternal/projects/LeetCode/newBuild/src/solutions/math_problem && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/eternal/projects/LeetCode/src/solutions/math_problem/PalindromeNumber9.cpp > CMakeFiles/math_problem.dir/PalindromeNumber9.cpp.i

src/solutions/math_problem/CMakeFiles/math_problem.dir/PalindromeNumber9.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/math_problem.dir/PalindromeNumber9.cpp.s"
	cd /home/eternal/projects/LeetCode/newBuild/src/solutions/math_problem && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/eternal/projects/LeetCode/src/solutions/math_problem/PalindromeNumber9.cpp -o CMakeFiles/math_problem.dir/PalindromeNumber9.cpp.s

# Object files for target math_problem
math_problem_OBJECTS = \
"CMakeFiles/math_problem.dir/PalindromeNumber9.cpp.o"

# External object files for target math_problem
math_problem_EXTERNAL_OBJECTS =

bin/lib/libmath_problem.a: src/solutions/math_problem/CMakeFiles/math_problem.dir/PalindromeNumber9.cpp.o
bin/lib/libmath_problem.a: src/solutions/math_problem/CMakeFiles/math_problem.dir/build.make
bin/lib/libmath_problem.a: src/solutions/math_problem/CMakeFiles/math_problem.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/eternal/projects/LeetCode/newBuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library ../../../bin/lib/libmath_problem.a"
	cd /home/eternal/projects/LeetCode/newBuild/src/solutions/math_problem && $(CMAKE_COMMAND) -P CMakeFiles/math_problem.dir/cmake_clean_target.cmake
	cd /home/eternal/projects/LeetCode/newBuild/src/solutions/math_problem && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/math_problem.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/solutions/math_problem/CMakeFiles/math_problem.dir/build: bin/lib/libmath_problem.a
.PHONY : src/solutions/math_problem/CMakeFiles/math_problem.dir/build

src/solutions/math_problem/CMakeFiles/math_problem.dir/clean:
	cd /home/eternal/projects/LeetCode/newBuild/src/solutions/math_problem && $(CMAKE_COMMAND) -P CMakeFiles/math_problem.dir/cmake_clean.cmake
.PHONY : src/solutions/math_problem/CMakeFiles/math_problem.dir/clean

src/solutions/math_problem/CMakeFiles/math_problem.dir/depend:
	cd /home/eternal/projects/LeetCode/newBuild && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/eternal/projects/LeetCode /home/eternal/projects/LeetCode/src/solutions/math_problem /home/eternal/projects/LeetCode/newBuild /home/eternal/projects/LeetCode/newBuild/src/solutions/math_problem /home/eternal/projects/LeetCode/newBuild/src/solutions/math_problem/CMakeFiles/math_problem.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/solutions/math_problem/CMakeFiles/math_problem.dir/depend
