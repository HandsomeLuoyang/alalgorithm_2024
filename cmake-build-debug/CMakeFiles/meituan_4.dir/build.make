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
include CMakeFiles/meituan_4.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/meituan_4.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/meituan_4.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/meituan_4.dir/flags.make

CMakeFiles/meituan_4.dir/meituan/meituan_4.cpp.obj: CMakeFiles/meituan_4.dir/flags.make
CMakeFiles/meituan_4.dir/meituan/meituan_4.cpp.obj: D:/JetBrainsClints/CLion\ Nova/alalgorithm_2024/meituan/meituan_4.cpp
CMakeFiles/meituan_4.dir/meituan/meituan_4.cpp.obj: CMakeFiles/meituan_4.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="D:\JetBrainsClints\CLion Nova\alalgorithm_2024\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/meituan_4.dir/meituan/meituan_4.cpp.obj"
	D:\JetBrainsClints\CLion\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/meituan_4.dir/meituan/meituan_4.cpp.obj -MF CMakeFiles\meituan_4.dir\meituan\meituan_4.cpp.obj.d -o CMakeFiles\meituan_4.dir\meituan\meituan_4.cpp.obj -c "D:\JetBrainsClints\CLion Nova\alalgorithm_2024\meituan\meituan_4.cpp"

CMakeFiles/meituan_4.dir/meituan/meituan_4.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/meituan_4.dir/meituan/meituan_4.cpp.i"
	D:\JetBrainsClints\CLion\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\JetBrainsClints\CLion Nova\alalgorithm_2024\meituan\meituan_4.cpp" > CMakeFiles\meituan_4.dir\meituan\meituan_4.cpp.i

CMakeFiles/meituan_4.dir/meituan/meituan_4.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/meituan_4.dir/meituan/meituan_4.cpp.s"
	D:\JetBrainsClints\CLion\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\JetBrainsClints\CLion Nova\alalgorithm_2024\meituan\meituan_4.cpp" -o CMakeFiles\meituan_4.dir\meituan\meituan_4.cpp.s

# Object files for target meituan_4
meituan_4_OBJECTS = \
"CMakeFiles/meituan_4.dir/meituan/meituan_4.cpp.obj"

# External object files for target meituan_4
meituan_4_EXTERNAL_OBJECTS =

meituan_4.exe: CMakeFiles/meituan_4.dir/meituan/meituan_4.cpp.obj
meituan_4.exe: CMakeFiles/meituan_4.dir/build.make
meituan_4.exe: CMakeFiles/meituan_4.dir/linkLibs.rsp
meituan_4.exe: CMakeFiles/meituan_4.dir/objects1.rsp
meituan_4.exe: CMakeFiles/meituan_4.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="D:\JetBrainsClints\CLion Nova\alalgorithm_2024\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable meituan_4.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\meituan_4.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/meituan_4.dir/build: meituan_4.exe
.PHONY : CMakeFiles/meituan_4.dir/build

CMakeFiles/meituan_4.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\meituan_4.dir\cmake_clean.cmake
.PHONY : CMakeFiles/meituan_4.dir/clean

CMakeFiles/meituan_4.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\JetBrainsClints\CLion Nova\alalgorithm_2024" "D:\JetBrainsClints\CLion Nova\alalgorithm_2024" "D:\JetBrainsClints\CLion Nova\alalgorithm_2024\cmake-build-debug" "D:\JetBrainsClints\CLion Nova\alalgorithm_2024\cmake-build-debug" "D:\JetBrainsClints\CLion Nova\alalgorithm_2024\cmake-build-debug\CMakeFiles\meituan_4.dir\DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/meituan_4.dir/depend

