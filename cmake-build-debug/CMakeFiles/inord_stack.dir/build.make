# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.2.5\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.2.5\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\rishi\CLionProjects\comp_prog

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\rishi\CLionProjects\comp_prog\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/inord_stack.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/inord_stack.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/inord_stack.dir/flags.make

CMakeFiles/inord_stack.dir/prelude/trees/inord_stack.cpp.obj: CMakeFiles/inord_stack.dir/flags.make
CMakeFiles/inord_stack.dir/prelude/trees/inord_stack.cpp.obj: ../prelude/trees/inord_stack.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\rishi\CLionProjects\comp_prog\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/inord_stack.dir/prelude/trees/inord_stack.cpp.obj"
	C:\PROGRA~1\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\inord_stack.dir\prelude\trees\inord_stack.cpp.obj -c C:\Users\rishi\CLionProjects\comp_prog\prelude\trees\inord_stack.cpp

CMakeFiles/inord_stack.dir/prelude/trees/inord_stack.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/inord_stack.dir/prelude/trees/inord_stack.cpp.i"
	C:\PROGRA~1\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\rishi\CLionProjects\comp_prog\prelude\trees\inord_stack.cpp > CMakeFiles\inord_stack.dir\prelude\trees\inord_stack.cpp.i

CMakeFiles/inord_stack.dir/prelude/trees/inord_stack.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/inord_stack.dir/prelude/trees/inord_stack.cpp.s"
	C:\PROGRA~1\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\rishi\CLionProjects\comp_prog\prelude\trees\inord_stack.cpp -o CMakeFiles\inord_stack.dir\prelude\trees\inord_stack.cpp.s

# Object files for target inord_stack
inord_stack_OBJECTS = \
"CMakeFiles/inord_stack.dir/prelude/trees/inord_stack.cpp.obj"

# External object files for target inord_stack
inord_stack_EXTERNAL_OBJECTS =

inord_stack.exe: CMakeFiles/inord_stack.dir/prelude/trees/inord_stack.cpp.obj
inord_stack.exe: CMakeFiles/inord_stack.dir/build.make
inord_stack.exe: CMakeFiles/inord_stack.dir/linklibs.rsp
inord_stack.exe: CMakeFiles/inord_stack.dir/objects1.rsp
inord_stack.exe: CMakeFiles/inord_stack.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\rishi\CLionProjects\comp_prog\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable inord_stack.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\inord_stack.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/inord_stack.dir/build: inord_stack.exe

.PHONY : CMakeFiles/inord_stack.dir/build

CMakeFiles/inord_stack.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\inord_stack.dir\cmake_clean.cmake
.PHONY : CMakeFiles/inord_stack.dir/clean

CMakeFiles/inord_stack.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\rishi\CLionProjects\comp_prog C:\Users\rishi\CLionProjects\comp_prog C:\Users\rishi\CLionProjects\comp_prog\cmake-build-debug C:\Users\rishi\CLionProjects\comp_prog\cmake-build-debug C:\Users\rishi\CLionProjects\comp_prog\cmake-build-debug\CMakeFiles\inord_stack.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/inord_stack.dir/depend

