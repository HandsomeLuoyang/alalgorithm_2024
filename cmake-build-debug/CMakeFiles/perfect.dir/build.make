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
include CMakeFiles/perfect.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/perfect.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/perfect.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/perfect.dir/flags.make

CMakeFiles/perfect.dir/tanch25/perfect.cpp.obj: CMakeFiles/perfect.dir/flags.make
CMakeFiles/perfect.dir/tanch25/perfect.cpp.obj: D:/JetBrainsClints/CLion\ Nova/alalgorithm_2024/tanch25/perfect.cpp
CMakeFiles/perfect.dir/tanch25/perfect.cpp.obj: CMakeFiles/perfect.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="D:\JetBrainsClints\CLion Nova\alalgorithm_2024\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/perfect.dir/tanch25/perfect.cpp.obj"
	D:\JetBrainsClints\CLion\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/perfect.dir/tanch25/perfect.cpp.obj -MF CMakeFiles\perfect.dir\tanch25\perfect.cpp.obj.d -o CMakeFiles\perfect.dir\tanch25\perfect.cpp.obj -c "D:\JetBrainsClints\CLion Nova\alalgorithm_2024\tanch25\perfect.cpp"

CMakeFiles/perfect.dir/tanch25/perfect.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/perfect.dir/tanch25/perfect.cpp.i"
	D:\JetBrainsClints\CLion\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\JetBrainsClints\CLion Nova\alalgorithm_2024\tanch25\perfect.cpp" > CMakeFiles\perfect.dir\tanch25\perfect.cpp.i

CMakeFiles/perfect.dir/tanch25/perfect.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/perfect.dir/tanch25/perfect.cpp.s"
	D:\JetBrainsClints\CLion\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\JetBrainsClints\CLion Nova\alalgorithm_2024\tanch25\perfect.cpp" -o CMakeFiles\perfect.dir\tanch25\perfect.cpp.s

# Object files for target perfect
perfect_OBJECTS = \
"CMakeFiles/perfect.dir/tanch25/perfect.cpp.obj"

# External object files for target perfect
perfect_EXTERNAL_OBJECTS =

perfect.exe: CMakeFiles/perfect.dir/tanch25/perfect.cpp.obj
perfect.exe: CMakeFiles/perfect.dir/build.make
perfect.exe: CMakeFiles/perfect.dir/linkLibs.rsp
perfect.exe: CMakeFiles/perfect.dir/objects1.rsp
perfect.exe: CMakeFiles/perfect.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="D:\JetBrainsClints\CLion Nova\alalgorithm_2024\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable perfect.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\perfect.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/perfect.dir/build: perfect.exe
.PHONY : CMakeFiles/perfect.dir/build

CMakeFiles/perfect.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\perfect.dir\cmake_clean.cmake
.PHONY : CMakeFiles/perfect.dir/clean

CMakeFiles/perfect.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\JetBrainsClints\CLion Nova\alalgorithm_2024" "D:\JetBrainsClints\CLion Nova\alalgorithm_2024" "D:\JetBrainsClints\CLion Nova\alalgorithm_2024\cmake-build-debug" "D:\JetBrainsClints\CLion Nova\alalgorithm_2024\cmake-build-debug" "D:\JetBrainsClints\CLion Nova\alalgorithm_2024\cmake-build-debug\CMakeFiles\perfect.dir\DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/perfect.dir/depend

