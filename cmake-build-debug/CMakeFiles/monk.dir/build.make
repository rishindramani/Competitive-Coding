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
include CMakeFiles/monk.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/monk.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/monk.dir/flags.make

CMakeFiles/monk.dir/prelude/trees/monk.cpp.obj: CMakeFiles/monk.dir/flags.make
CMakeFiles/monk.dir/prelude/trees/monk.cpp.obj: ../prelude/trees/monk.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\rishi\CLionProjects\comp_prog\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/monk.dir/prelude/trees/monk.cpp.obj"
	C:\PROGRA~1\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\monk.dir\prelude\trees\monk.cpp.obj -c C:\Users\rishi\CLionProjects\comp_prog\prelude\trees\monk.cpp

CMakeFiles/monk.dir/prelude/trees/monk.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/monk.dir/prelude/trees/monk.cpp.i"
	C:\PROGRA~1\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\rishi\CLionProjects\comp_prog\prelude\trees\monk.cpp > CMakeFiles\monk.dir\prelude\trees\monk.cpp.i

CMakeFiles/monk.dir/prelude/trees/monk.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/monk.dir/prelude/trees/monk.cpp.s"
	C:\PROGRA~1\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\rishi\CLionProjects\comp_prog\prelude\trees\monk.cpp -o CMakeFiles\monk.dir\prelude\trees\monk.cpp.s

# Object files for target monk
monk_OBJECTS = \
"CMakeFiles/monk.dir/prelude/trees/monk.cpp.obj"

# External object files for target monk
monk_EXTERNAL_OBJECTS =

monk.exe: CMakeFiles/monk.dir/prelude/trees/monk.cpp.obj
monk.exe: CMakeFiles/monk.dir/build.make
monk.exe: CMakeFiles/monk.dir/linklibs.rsp
monk.exe: CMakeFiles/monk.dir/objects1.rsp
monk.exe: CMakeFiles/monk.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\rishi\CLionProjects\comp_prog\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable monk.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\monk.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/monk.dir/build: monk.exe

.PHONY : CMakeFiles/monk.dir/build

CMakeFiles/monk.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\monk.dir\cmake_clean.cmake
.PHONY : CMakeFiles/monk.dir/clean

CMakeFiles/monk.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\rishi\CLionProjects\comp_prog C:\Users\rishi\CLionProjects\comp_prog C:\Users\rishi\CLionProjects\comp_prog\cmake-build-debug C:\Users\rishi\CLionProjects\comp_prog\cmake-build-debug C:\Users\rishi\CLionProjects\comp_prog\cmake-build-debug\CMakeFiles\monk.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/monk.dir/depend
