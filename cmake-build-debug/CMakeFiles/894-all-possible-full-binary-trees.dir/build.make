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
include CMakeFiles/894-all-possible-full-binary-trees.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/894-all-possible-full-binary-trees.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/894-all-possible-full-binary-trees.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/894-all-possible-full-binary-trees.dir/flags.make

CMakeFiles/894-all-possible-full-binary-trees.dir/leetcode/894-all-possible-full-binary-trees.cpp.obj: CMakeFiles/894-all-possible-full-binary-trees.dir/flags.make
CMakeFiles/894-all-possible-full-binary-trees.dir/leetcode/894-all-possible-full-binary-trees.cpp.obj: D:/JetBrainsClints/CLion\ Nova/alalgorithm_2024/leetcode/894-all-possible-full-binary-trees.cpp
CMakeFiles/894-all-possible-full-binary-trees.dir/leetcode/894-all-possible-full-binary-trees.cpp.obj: CMakeFiles/894-all-possible-full-binary-trees.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="D:\JetBrainsClints\CLion Nova\alalgorithm_2024\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/894-all-possible-full-binary-trees.dir/leetcode/894-all-possible-full-binary-trees.cpp.obj"
	D:\JetBrainsClints\CLion\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/894-all-possible-full-binary-trees.dir/leetcode/894-all-possible-full-binary-trees.cpp.obj -MF CMakeFiles\894-all-possible-full-binary-trees.dir\leetcode\894-all-possible-full-binary-trees.cpp.obj.d -o CMakeFiles\894-all-possible-full-binary-trees.dir\leetcode\894-all-possible-full-binary-trees.cpp.obj -c "D:\JetBrainsClints\CLion Nova\alalgorithm_2024\leetcode\894-all-possible-full-binary-trees.cpp"

CMakeFiles/894-all-possible-full-binary-trees.dir/leetcode/894-all-possible-full-binary-trees.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/894-all-possible-full-binary-trees.dir/leetcode/894-all-possible-full-binary-trees.cpp.i"
	D:\JetBrainsClints\CLion\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\JetBrainsClints\CLion Nova\alalgorithm_2024\leetcode\894-all-possible-full-binary-trees.cpp" > CMakeFiles\894-all-possible-full-binary-trees.dir\leetcode\894-all-possible-full-binary-trees.cpp.i

CMakeFiles/894-all-possible-full-binary-trees.dir/leetcode/894-all-possible-full-binary-trees.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/894-all-possible-full-binary-trees.dir/leetcode/894-all-possible-full-binary-trees.cpp.s"
	D:\JetBrainsClints\CLion\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\JetBrainsClints\CLion Nova\alalgorithm_2024\leetcode\894-all-possible-full-binary-trees.cpp" -o CMakeFiles\894-all-possible-full-binary-trees.dir\leetcode\894-all-possible-full-binary-trees.cpp.s

# Object files for target 894-all-possible-full-binary-trees
894__all__possible__full__binary__trees_OBJECTS = \
"CMakeFiles/894-all-possible-full-binary-trees.dir/leetcode/894-all-possible-full-binary-trees.cpp.obj"

# External object files for target 894-all-possible-full-binary-trees
894__all__possible__full__binary__trees_EXTERNAL_OBJECTS =

894-all-possible-full-binary-trees.exe: CMakeFiles/894-all-possible-full-binary-trees.dir/leetcode/894-all-possible-full-binary-trees.cpp.obj
894-all-possible-full-binary-trees.exe: CMakeFiles/894-all-possible-full-binary-trees.dir/build.make
894-all-possible-full-binary-trees.exe: CMakeFiles/894-all-possible-full-binary-trees.dir/linkLibs.rsp
894-all-possible-full-binary-trees.exe: CMakeFiles/894-all-possible-full-binary-trees.dir/objects1.rsp
894-all-possible-full-binary-trees.exe: CMakeFiles/894-all-possible-full-binary-trees.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="D:\JetBrainsClints\CLion Nova\alalgorithm_2024\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 894-all-possible-full-binary-trees.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\894-all-possible-full-binary-trees.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/894-all-possible-full-binary-trees.dir/build: 894-all-possible-full-binary-trees.exe
.PHONY : CMakeFiles/894-all-possible-full-binary-trees.dir/build

CMakeFiles/894-all-possible-full-binary-trees.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\894-all-possible-full-binary-trees.dir\cmake_clean.cmake
.PHONY : CMakeFiles/894-all-possible-full-binary-trees.dir/clean

CMakeFiles/894-all-possible-full-binary-trees.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\JetBrainsClints\CLion Nova\alalgorithm_2024" "D:\JetBrainsClints\CLion Nova\alalgorithm_2024" "D:\JetBrainsClints\CLion Nova\alalgorithm_2024\cmake-build-debug" "D:\JetBrainsClints\CLion Nova\alalgorithm_2024\cmake-build-debug" "D:\JetBrainsClints\CLion Nova\alalgorithm_2024\cmake-build-debug\CMakeFiles\894-all-possible-full-binary-trees.dir\DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/894-all-possible-full-binary-trees.dir/depend

