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
include CMakeFiles/clear-digits.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/clear-digits.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/clear-digits.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/clear-digits.dir/flags.make

CMakeFiles/clear-digits.dir/leetcode/contest/132_double/clear-digits.cpp.obj: CMakeFiles/clear-digits.dir/flags.make
CMakeFiles/clear-digits.dir/leetcode/contest/132_double/clear-digits.cpp.obj: D:/JetBrainsClints/CLion\ Nova/alalgorithm_2024/leetcode/contest/132_double/clear-digits.cpp
CMakeFiles/clear-digits.dir/leetcode/contest/132_double/clear-digits.cpp.obj: CMakeFiles/clear-digits.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="D:\JetBrainsClints\CLion Nova\alalgorithm_2024\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/clear-digits.dir/leetcode/contest/132_double/clear-digits.cpp.obj"
	D:\JetBrainsClints\CLion\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/clear-digits.dir/leetcode/contest/132_double/clear-digits.cpp.obj -MF CMakeFiles\clear-digits.dir\leetcode\contest\132_double\clear-digits.cpp.obj.d -o CMakeFiles\clear-digits.dir\leetcode\contest\132_double\clear-digits.cpp.obj -c "D:\JetBrainsClints\CLion Nova\alalgorithm_2024\leetcode\contest\132_double\clear-digits.cpp"

CMakeFiles/clear-digits.dir/leetcode/contest/132_double/clear-digits.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/clear-digits.dir/leetcode/contest/132_double/clear-digits.cpp.i"
	D:\JetBrainsClints\CLion\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\JetBrainsClints\CLion Nova\alalgorithm_2024\leetcode\contest\132_double\clear-digits.cpp" > CMakeFiles\clear-digits.dir\leetcode\contest\132_double\clear-digits.cpp.i

CMakeFiles/clear-digits.dir/leetcode/contest/132_double/clear-digits.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/clear-digits.dir/leetcode/contest/132_double/clear-digits.cpp.s"
	D:\JetBrainsClints\CLion\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\JetBrainsClints\CLion Nova\alalgorithm_2024\leetcode\contest\132_double\clear-digits.cpp" -o CMakeFiles\clear-digits.dir\leetcode\contest\132_double\clear-digits.cpp.s

# Object files for target clear-digits
clear__digits_OBJECTS = \
"CMakeFiles/clear-digits.dir/leetcode/contest/132_double/clear-digits.cpp.obj"

# External object files for target clear-digits
clear__digits_EXTERNAL_OBJECTS =

clear-digits.exe: CMakeFiles/clear-digits.dir/leetcode/contest/132_double/clear-digits.cpp.obj
clear-digits.exe: CMakeFiles/clear-digits.dir/build.make
clear-digits.exe: CMakeFiles/clear-digits.dir/linkLibs.rsp
clear-digits.exe: CMakeFiles/clear-digits.dir/objects1.rsp
clear-digits.exe: CMakeFiles/clear-digits.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="D:\JetBrainsClints\CLion Nova\alalgorithm_2024\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable clear-digits.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\clear-digits.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/clear-digits.dir/build: clear-digits.exe
.PHONY : CMakeFiles/clear-digits.dir/build

CMakeFiles/clear-digits.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\clear-digits.dir\cmake_clean.cmake
.PHONY : CMakeFiles/clear-digits.dir/clean

CMakeFiles/clear-digits.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\JetBrainsClints\CLion Nova\alalgorithm_2024" "D:\JetBrainsClints\CLion Nova\alalgorithm_2024" "D:\JetBrainsClints\CLion Nova\alalgorithm_2024\cmake-build-debug" "D:\JetBrainsClints\CLion Nova\alalgorithm_2024\cmake-build-debug" "D:\JetBrainsClints\CLion Nova\alalgorithm_2024\cmake-build-debug\CMakeFiles\clear-digits.dir\DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/clear-digits.dir/depend

