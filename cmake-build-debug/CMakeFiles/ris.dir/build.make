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
include CMakeFiles/ris.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ris.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ris.dir/flags.make

CMakeFiles/ris.dir/codeforces/ris.cpp.obj: CMakeFiles/ris.dir/flags.make
CMakeFiles/ris.dir/codeforces/ris.cpp.obj: ../codeforces/ris.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\rishi\CLionProjects\comp_prog\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ris.dir/codeforces/ris.cpp.obj"
	C:\PROGRA~1\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\ris.dir\codeforces\ris.cpp.obj -c C:\Users\rishi\CLionProjects\comp_prog\codeforces\ris.cpp

CMakeFiles/ris.dir/codeforces/ris.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ris.dir/codeforces/ris.cpp.i"
	C:\PROGRA~1\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\rishi\CLionProjects\comp_prog\codeforces\ris.cpp > CMakeFiles\ris.dir\codeforces\ris.cpp.i

CMakeFiles/ris.dir/codeforces/ris.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ris.dir/codeforces/ris.cpp.s"
	C:\PROGRA~1\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\rishi\CLionProjects\comp_prog\codeforces\ris.cpp -o CMakeFiles\ris.dir\codeforces\ris.cpp.s

# Object files for target ris
ris_OBJECTS = \
"CMakeFiles/ris.dir/codeforces/ris.cpp.obj"

# External object files for target ris
ris_EXTERNAL_OBJECTS =

ris.exe: CMakeFiles/ris.dir/codeforces/ris.cpp.obj
ris.exe: CMakeFiles/ris.dir/build.make
ris.exe: CMakeFiles/ris.dir/linklibs.rsp
ris.exe: CMakeFiles/ris.dir/objects1.rsp
ris.exe: CMakeFiles/ris.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\rishi\CLionProjects\comp_prog\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ris.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\ris.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ris.dir/build: ris.exe

.PHONY : CMakeFiles/ris.dir/build

CMakeFiles/ris.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\ris.dir\cmake_clean.cmake
.PHONY : CMakeFiles/ris.dir/clean

CMakeFiles/ris.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\rishi\CLionProjects\comp_prog C:\Users\rishi\CLionProjects\comp_prog C:\Users\rishi\CLionProjects\comp_prog\cmake-build-debug C:\Users\rishi\CLionProjects\comp_prog\cmake-build-debug C:\Users\rishi\CLionProjects\comp_prog\cmake-build-debug\CMakeFiles\ris.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ris.dir/depend
