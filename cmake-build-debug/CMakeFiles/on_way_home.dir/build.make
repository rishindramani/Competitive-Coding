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
include CMakeFiles/on_way_home.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/on_way_home.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/on_way_home.dir/flags.make

CMakeFiles/on_way_home.dir/approach_techn/dp/on_way_home.cpp.obj: CMakeFiles/on_way_home.dir/flags.make
CMakeFiles/on_way_home.dir/approach_techn/dp/on_way_home.cpp.obj: ../approach_techn/dp/on_way_home.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\rishi\CLionProjects\comp_prog\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/on_way_home.dir/approach_techn/dp/on_way_home.cpp.obj"
	C:\PROGRA~1\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\on_way_home.dir\approach_techn\dp\on_way_home.cpp.obj -c C:\Users\rishi\CLionProjects\comp_prog\approach_techn\dp\on_way_home.cpp

CMakeFiles/on_way_home.dir/approach_techn/dp/on_way_home.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/on_way_home.dir/approach_techn/dp/on_way_home.cpp.i"
	C:\PROGRA~1\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\rishi\CLionProjects\comp_prog\approach_techn\dp\on_way_home.cpp > CMakeFiles\on_way_home.dir\approach_techn\dp\on_way_home.cpp.i

CMakeFiles/on_way_home.dir/approach_techn/dp/on_way_home.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/on_way_home.dir/approach_techn/dp/on_way_home.cpp.s"
	C:\PROGRA~1\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\rishi\CLionProjects\comp_prog\approach_techn\dp\on_way_home.cpp -o CMakeFiles\on_way_home.dir\approach_techn\dp\on_way_home.cpp.s

# Object files for target on_way_home
on_way_home_OBJECTS = \
"CMakeFiles/on_way_home.dir/approach_techn/dp/on_way_home.cpp.obj"

# External object files for target on_way_home
on_way_home_EXTERNAL_OBJECTS =

on_way_home.exe: CMakeFiles/on_way_home.dir/approach_techn/dp/on_way_home.cpp.obj
on_way_home.exe: CMakeFiles/on_way_home.dir/build.make
on_way_home.exe: CMakeFiles/on_way_home.dir/linklibs.rsp
on_way_home.exe: CMakeFiles/on_way_home.dir/objects1.rsp
on_way_home.exe: CMakeFiles/on_way_home.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\rishi\CLionProjects\comp_prog\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable on_way_home.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\on_way_home.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/on_way_home.dir/build: on_way_home.exe

.PHONY : CMakeFiles/on_way_home.dir/build

CMakeFiles/on_way_home.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\on_way_home.dir\cmake_clean.cmake
.PHONY : CMakeFiles/on_way_home.dir/clean

CMakeFiles/on_way_home.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\rishi\CLionProjects\comp_prog C:\Users\rishi\CLionProjects\comp_prog C:\Users\rishi\CLionProjects\comp_prog\cmake-build-debug C:\Users\rishi\CLionProjects\comp_prog\cmake-build-debug C:\Users\rishi\CLionProjects\comp_prog\cmake-build-debug\CMakeFiles\on_way_home.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/on_way_home.dir/depend

