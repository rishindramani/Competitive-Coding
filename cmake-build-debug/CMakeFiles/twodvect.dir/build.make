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
include CMakeFiles/twodvect.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/twodvect.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/twodvect.dir/flags.make

CMakeFiles/twodvect.dir/hackerrank/twodvect.cpp.obj: CMakeFiles/twodvect.dir/flags.make
CMakeFiles/twodvect.dir/hackerrank/twodvect.cpp.obj: ../hackerrank/twodvect.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\rishi\CLionProjects\comp_prog\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/twodvect.dir/hackerrank/twodvect.cpp.obj"
	C:\PROGRA~1\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\twodvect.dir\hackerrank\twodvect.cpp.obj -c C:\Users\rishi\CLionProjects\comp_prog\hackerrank\twodvect.cpp

CMakeFiles/twodvect.dir/hackerrank/twodvect.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/twodvect.dir/hackerrank/twodvect.cpp.i"
	C:\PROGRA~1\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\rishi\CLionProjects\comp_prog\hackerrank\twodvect.cpp > CMakeFiles\twodvect.dir\hackerrank\twodvect.cpp.i

CMakeFiles/twodvect.dir/hackerrank/twodvect.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/twodvect.dir/hackerrank/twodvect.cpp.s"
	C:\PROGRA~1\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\rishi\CLionProjects\comp_prog\hackerrank\twodvect.cpp -o CMakeFiles\twodvect.dir\hackerrank\twodvect.cpp.s

# Object files for target twodvect
twodvect_OBJECTS = \
"CMakeFiles/twodvect.dir/hackerrank/twodvect.cpp.obj"

# External object files for target twodvect
twodvect_EXTERNAL_OBJECTS =

twodvect.exe: CMakeFiles/twodvect.dir/hackerrank/twodvect.cpp.obj
twodvect.exe: CMakeFiles/twodvect.dir/build.make
twodvect.exe: CMakeFiles/twodvect.dir/linklibs.rsp
twodvect.exe: CMakeFiles/twodvect.dir/objects1.rsp
twodvect.exe: CMakeFiles/twodvect.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\rishi\CLionProjects\comp_prog\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable twodvect.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\twodvect.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/twodvect.dir/build: twodvect.exe

.PHONY : CMakeFiles/twodvect.dir/build

CMakeFiles/twodvect.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\twodvect.dir\cmake_clean.cmake
.PHONY : CMakeFiles/twodvect.dir/clean

CMakeFiles/twodvect.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\rishi\CLionProjects\comp_prog C:\Users\rishi\CLionProjects\comp_prog C:\Users\rishi\CLionProjects\comp_prog\cmake-build-debug C:\Users\rishi\CLionProjects\comp_prog\cmake-build-debug C:\Users\rishi\CLionProjects\comp_prog\cmake-build-debug\CMakeFiles\twodvect.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/twodvect.dir/depend
