# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.30

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
include CMakeFiles/377-combination-sum-iv.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/377-combination-sum-iv.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/377-combination-sum-iv.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/377-combination-sum-iv.dir/flags.make

CMakeFiles/377-combination-sum-iv.dir/leetcode/dynamic_programming/377-combination-sum-iv.cpp.obj: CMakeFiles/377-combination-sum-iv.dir/flags.make
CMakeFiles/377-combination-sum-iv.dir/leetcode/dynamic_programming/377-combination-sum-iv.cpp.obj: D:/JetBrainsClints/CLion\ Nova/alalgorithm_2024/leetcode/dynamic_programming/377-combination-sum-iv.cpp
CMakeFiles/377-combination-sum-iv.dir/leetcode/dynamic_programming/377-combination-sum-iv.cpp.obj: CMakeFiles/377-combination-sum-iv.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="D:\JetBrainsClints\CLion Nova\alalgorithm_2024\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/377-combination-sum-iv.dir/leetcode/dynamic_programming/377-combination-sum-iv.cpp.obj"
	D:\JetBrainsClints\CLion\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/377-combination-sum-iv.dir/leetcode/dynamic_programming/377-combination-sum-iv.cpp.obj -MF CMakeFiles\377-combination-sum-iv.dir\leetcode\dynamic_programming\377-combination-sum-iv.cpp.obj.d -o CMakeFiles\377-combination-sum-iv.dir\leetcode\dynamic_programming\377-combination-sum-iv.cpp.obj -c "D:\JetBrainsClints\CLion Nova\alalgorithm_2024\leetcode\dynamic_programming\377-combination-sum-iv.cpp"

CMakeFiles/377-combination-sum-iv.dir/leetcode/dynamic_programming/377-combination-sum-iv.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/377-combination-sum-iv.dir/leetcode/dynamic_programming/377-combination-sum-iv.cpp.i"
	D:\JetBrainsClints\CLion\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\JetBrainsClints\CLion Nova\alalgorithm_2024\leetcode\dynamic_programming\377-combination-sum-iv.cpp" > CMakeFiles\377-combination-sum-iv.dir\leetcode\dynamic_programming\377-combination-sum-iv.cpp.i

CMakeFiles/377-combination-sum-iv.dir/leetcode/dynamic_programming/377-combination-sum-iv.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/377-combination-sum-iv.dir/leetcode/dynamic_programming/377-combination-sum-iv.cpp.s"
	D:\JetBrainsClints\CLion\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\JetBrainsClints\CLion Nova\alalgorithm_2024\leetcode\dynamic_programming\377-combination-sum-iv.cpp" -o CMakeFiles\377-combination-sum-iv.dir\leetcode\dynamic_programming\377-combination-sum-iv.cpp.s

# Object files for target 377-combination-sum-iv
377__combination__sum__iv_OBJECTS = \
"CMakeFiles/377-combination-sum-iv.dir/leetcode/dynamic_programming/377-combination-sum-iv.cpp.obj"

# External object files for target 377-combination-sum-iv
377__combination__sum__iv_EXTERNAL_OBJECTS =

377-combination-sum-iv.exe: CMakeFiles/377-combination-sum-iv.dir/leetcode/dynamic_programming/377-combination-sum-iv.cpp.obj
377-combination-sum-iv.exe: CMakeFiles/377-combination-sum-iv.dir/build.make
377-combination-sum-iv.exe: CMakeFiles/377-combination-sum-iv.dir/linkLibs.rsp
377-combination-sum-iv.exe: CMakeFiles/377-combination-sum-iv.dir/objects1.rsp
377-combination-sum-iv.exe: CMakeFiles/377-combination-sum-iv.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="D:\JetBrainsClints\CLion Nova\alalgorithm_2024\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 377-combination-sum-iv.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\377-combination-sum-iv.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/377-combination-sum-iv.dir/build: 377-combination-sum-iv.exe
.PHONY : CMakeFiles/377-combination-sum-iv.dir/build

CMakeFiles/377-combination-sum-iv.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\377-combination-sum-iv.dir\cmake_clean.cmake
.PHONY : CMakeFiles/377-combination-sum-iv.dir/clean

CMakeFiles/377-combination-sum-iv.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\JetBrainsClints\CLion Nova\alalgorithm_2024" "D:\JetBrainsClints\CLion Nova\alalgorithm_2024" "D:\JetBrainsClints\CLion Nova\alalgorithm_2024\cmake-build-debug" "D:\JetBrainsClints\CLion Nova\alalgorithm_2024\cmake-build-debug" "D:\JetBrainsClints\CLion Nova\alalgorithm_2024\cmake-build-debug\CMakeFiles\377-combination-sum-iv.dir\DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/377-combination-sum-iv.dir/depend

