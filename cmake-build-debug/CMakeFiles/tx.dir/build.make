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
include CMakeFiles/tx.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/tx.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/tx.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/tx.dir/flags.make

CMakeFiles/tx.dir/tx/tx.cpp.obj: CMakeFiles/tx.dir/flags.make
CMakeFiles/tx.dir/tx/tx.cpp.obj: D:/JetBrainsClints/CLion\ Nova/alalgorithm_2024/tx/tx.cpp
CMakeFiles/tx.dir/tx/tx.cpp.obj: CMakeFiles/tx.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="D:\JetBrainsClints\CLion Nova\alalgorithm_2024\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/tx.dir/tx/tx.cpp.obj"
	D:\JetBrainsClints\CLion\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/tx.dir/tx/tx.cpp.obj -MF CMakeFiles\tx.dir\tx\tx.cpp.obj.d -o CMakeFiles\tx.dir\tx\tx.cpp.obj -c "D:\JetBrainsClints\CLion Nova\alalgorithm_2024\tx\tx.cpp"

CMakeFiles/tx.dir/tx/tx.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/tx.dir/tx/tx.cpp.i"
	D:\JetBrainsClints\CLion\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\JetBrainsClints\CLion Nova\alalgorithm_2024\tx\tx.cpp" > CMakeFiles\tx.dir\tx\tx.cpp.i

CMakeFiles/tx.dir/tx/tx.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/tx.dir/tx/tx.cpp.s"
	D:\JetBrainsClints\CLion\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\JetBrainsClints\CLion Nova\alalgorithm_2024\tx\tx.cpp" -o CMakeFiles\tx.dir\tx\tx.cpp.s

# Object files for target tx
tx_OBJECTS = \
"CMakeFiles/tx.dir/tx/tx.cpp.obj"

# External object files for target tx
tx_EXTERNAL_OBJECTS =

tx.exe: CMakeFiles/tx.dir/tx/tx.cpp.obj
tx.exe: CMakeFiles/tx.dir/build.make
tx.exe: CMakeFiles/tx.dir/linkLibs.rsp
tx.exe: CMakeFiles/tx.dir/objects1.rsp
tx.exe: CMakeFiles/tx.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="D:\JetBrainsClints\CLion Nova\alalgorithm_2024\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable tx.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\tx.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/tx.dir/build: tx.exe
.PHONY : CMakeFiles/tx.dir/build

CMakeFiles/tx.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\tx.dir\cmake_clean.cmake
.PHONY : CMakeFiles/tx.dir/clean

CMakeFiles/tx.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\JetBrainsClints\CLion Nova\alalgorithm_2024" "D:\JetBrainsClints\CLion Nova\alalgorithm_2024" "D:\JetBrainsClints\CLion Nova\alalgorithm_2024\cmake-build-debug" "D:\JetBrainsClints\CLion Nova\alalgorithm_2024\cmake-build-debug" "D:\JetBrainsClints\CLion Nova\alalgorithm_2024\cmake-build-debug\CMakeFiles\tx.dir\DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/tx.dir/depend

