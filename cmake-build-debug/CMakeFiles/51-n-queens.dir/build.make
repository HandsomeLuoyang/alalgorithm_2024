# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.28

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = D:\JetBrainsClints\CLion\bin\cmake\win\x64\bin\cmake.exe

# The command to remove a file.
RM = D:\JetBrainsClints\CLion\bin\cmake\win\x64\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\JetBrainsClints\CLion Nova\alalgorithm_2024"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\JetBrainsClints\CLion Nova\alalgorithm_2024\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/51-n-queens.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/51-n-queens.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/51-n-queens.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/51-n-queens.dir/flags.make

CMakeFiles/51-n-queens.dir/leetcode/51-n-queens.cpp.obj: CMakeFiles/51-n-queens.dir/flags.make
CMakeFiles/51-n-queens.dir/leetcode/51-n-queens.cpp.obj: D:/JetBrainsClints/CLion\ Nova/alalgorithm_2024/leetcode/51-n-queens.cpp
CMakeFiles/51-n-queens.dir/leetcode/51-n-queens.cpp.obj: CMakeFiles/51-n-queens.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="D:\JetBrainsClints\CLion Nova\alalgorithm_2024\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/51-n-queens.dir/leetcode/51-n-queens.cpp.obj"
	D:\JetBrainsClints\CLion\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/51-n-queens.dir/leetcode/51-n-queens.cpp.obj -MF CMakeFiles\51-n-queens.dir\leetcode\51-n-queens.cpp.obj.d -o CMakeFiles\51-n-queens.dir\leetcode\51-n-queens.cpp.obj -c "D:\JetBrainsClints\CLion Nova\alalgorithm_2024\leetcode\51-n-queens.cpp"

CMakeFiles/51-n-queens.dir/leetcode/51-n-queens.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/51-n-queens.dir/leetcode/51-n-queens.cpp.i"
	D:\JetBrainsClints\CLion\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\JetBrainsClints\CLion Nova\alalgorithm_2024\leetcode\51-n-queens.cpp" > CMakeFiles\51-n-queens.dir\leetcode\51-n-queens.cpp.i

CMakeFiles/51-n-queens.dir/leetcode/51-n-queens.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/51-n-queens.dir/leetcode/51-n-queens.cpp.s"
	D:\JetBrainsClints\CLion\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\JetBrainsClints\CLion Nova\alalgorithm_2024\leetcode\51-n-queens.cpp" -o CMakeFiles\51-n-queens.dir\leetcode\51-n-queens.cpp.s

# Object files for target 51-n-queens
51__n__queens_OBJECTS = \
"CMakeFiles/51-n-queens.dir/leetcode/51-n-queens.cpp.obj"

# External object files for target 51-n-queens
51__n__queens_EXTERNAL_OBJECTS =

51-n-queens.exe: CMakeFiles/51-n-queens.dir/leetcode/51-n-queens.cpp.obj
51-n-queens.exe: CMakeFiles/51-n-queens.dir/build.make
51-n-queens.exe: CMakeFiles/51-n-queens.dir/linkLibs.rsp
51-n-queens.exe: CMakeFiles/51-n-queens.dir/objects1.rsp
51-n-queens.exe: CMakeFiles/51-n-queens.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="D:\JetBrainsClints\CLion Nova\alalgorithm_2024\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 51-n-queens.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\51-n-queens.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/51-n-queens.dir/build: 51-n-queens.exe
.PHONY : CMakeFiles/51-n-queens.dir/build

CMakeFiles/51-n-queens.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\51-n-queens.dir\cmake_clean.cmake
.PHONY : CMakeFiles/51-n-queens.dir/clean

CMakeFiles/51-n-queens.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\JetBrainsClints\CLion Nova\alalgorithm_2024" "D:\JetBrainsClints\CLion Nova\alalgorithm_2024" "D:\JetBrainsClints\CLion Nova\alalgorithm_2024\cmake-build-debug" "D:\JetBrainsClints\CLion Nova\alalgorithm_2024\cmake-build-debug" "D:\JetBrainsClints\CLion Nova\alalgorithm_2024\cmake-build-debug\CMakeFiles\51-n-queens.dir\DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/51-n-queens.dir/depend

