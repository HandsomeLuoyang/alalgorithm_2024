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
include CMakeFiles/54-spiral-matrix.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/54-spiral-matrix.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/54-spiral-matrix.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/54-spiral-matrix.dir/flags.make

CMakeFiles/54-spiral-matrix.dir/leetcode/54-spiral-matrix.cpp.obj: CMakeFiles/54-spiral-matrix.dir/flags.make
CMakeFiles/54-spiral-matrix.dir/leetcode/54-spiral-matrix.cpp.obj: D:/JetBrainsClints/CLion\ Nova/alalgorithm_2024/leetcode/54-spiral-matrix.cpp
CMakeFiles/54-spiral-matrix.dir/leetcode/54-spiral-matrix.cpp.obj: CMakeFiles/54-spiral-matrix.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="D:\JetBrainsClints\CLion Nova\alalgorithm_2024\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/54-spiral-matrix.dir/leetcode/54-spiral-matrix.cpp.obj"
	D:\JetBrainsClints\CLion\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/54-spiral-matrix.dir/leetcode/54-spiral-matrix.cpp.obj -MF CMakeFiles\54-spiral-matrix.dir\leetcode\54-spiral-matrix.cpp.obj.d -o CMakeFiles\54-spiral-matrix.dir\leetcode\54-spiral-matrix.cpp.obj -c "D:\JetBrainsClints\CLion Nova\alalgorithm_2024\leetcode\54-spiral-matrix.cpp"

CMakeFiles/54-spiral-matrix.dir/leetcode/54-spiral-matrix.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/54-spiral-matrix.dir/leetcode/54-spiral-matrix.cpp.i"
	D:\JetBrainsClints\CLion\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\JetBrainsClints\CLion Nova\alalgorithm_2024\leetcode\54-spiral-matrix.cpp" > CMakeFiles\54-spiral-matrix.dir\leetcode\54-spiral-matrix.cpp.i

CMakeFiles/54-spiral-matrix.dir/leetcode/54-spiral-matrix.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/54-spiral-matrix.dir/leetcode/54-spiral-matrix.cpp.s"
	D:\JetBrainsClints\CLion\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\JetBrainsClints\CLion Nova\alalgorithm_2024\leetcode\54-spiral-matrix.cpp" -o CMakeFiles\54-spiral-matrix.dir\leetcode\54-spiral-matrix.cpp.s

# Object files for target 54-spiral-matrix
54__spiral__matrix_OBJECTS = \
"CMakeFiles/54-spiral-matrix.dir/leetcode/54-spiral-matrix.cpp.obj"

# External object files for target 54-spiral-matrix
54__spiral__matrix_EXTERNAL_OBJECTS =

54-spiral-matrix.exe: CMakeFiles/54-spiral-matrix.dir/leetcode/54-spiral-matrix.cpp.obj
54-spiral-matrix.exe: CMakeFiles/54-spiral-matrix.dir/build.make
54-spiral-matrix.exe: CMakeFiles/54-spiral-matrix.dir/linkLibs.rsp
54-spiral-matrix.exe: CMakeFiles/54-spiral-matrix.dir/objects1.rsp
54-spiral-matrix.exe: CMakeFiles/54-spiral-matrix.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="D:\JetBrainsClints\CLion Nova\alalgorithm_2024\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 54-spiral-matrix.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\54-spiral-matrix.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/54-spiral-matrix.dir/build: 54-spiral-matrix.exe
.PHONY : CMakeFiles/54-spiral-matrix.dir/build

CMakeFiles/54-spiral-matrix.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\54-spiral-matrix.dir\cmake_clean.cmake
.PHONY : CMakeFiles/54-spiral-matrix.dir/clean

CMakeFiles/54-spiral-matrix.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\JetBrainsClints\CLion Nova\alalgorithm_2024" "D:\JetBrainsClints\CLion Nova\alalgorithm_2024" "D:\JetBrainsClints\CLion Nova\alalgorithm_2024\cmake-build-debug" "D:\JetBrainsClints\CLion Nova\alalgorithm_2024\cmake-build-debug" "D:\JetBrainsClints\CLion Nova\alalgorithm_2024\cmake-build-debug\CMakeFiles\54-spiral-matrix.dir\DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/54-spiral-matrix.dir/depend

