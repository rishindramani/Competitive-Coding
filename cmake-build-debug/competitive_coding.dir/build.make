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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.2.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.2.1\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Rishi\CLionProjects\competitive_coding

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Rishi\CLionProjects\competitive_coding\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/competitive_coding.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/competitive_coding.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/competitive_coding.dir/flags.make

CMakeFiles/competitive_coding.dir/main.cpp.obj: CMakeFiles/competitive_coding.dir/flags.make
CMakeFiles/competitive_coding.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Rishi\CLionProjects\competitive_coding\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/competitive_coding.dir/main.cpp.obj"
	C:\PROGRA~2\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\competitive_coding.dir\main.cpp.obj -c C:\Users\Rishi\CLionProjects\competitive_coding\main.cpp

CMakeFiles/competitive_coding.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/competitive_coding.dir/main.cpp.i"
	C:\PROGRA~2\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Rishi\CLionProjects\competitive_coding\main.cpp > CMakeFiles\competitive_coding.dir\main.cpp.i

CMakeFiles/competitive_coding.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/competitive_coding.dir/main.cpp.s"
	C:\PROGRA~2\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Rishi\CLionProjects\competitive_coding\main.cpp -o CMakeFiles\competitive_coding.dir\main.cpp.s

# Object files for target competitive_coding
competitive_coding_OBJECTS = \
"CMakeFiles/competitive_coding.dir/main.cpp.obj"

# External object files for target competitive_coding
competitive_coding_EXTERNAL_OBJECTS =

competitive_coding.exe: CMakeFiles/competitive_coding.dir/main.cpp.obj
competitive_coding.exe: CMakeFiles/competitive_coding.dir/build.make
competitive_coding.exe: CMakeFiles/competitive_coding.dir/linklibs.rsp
competitive_coding.exe: CMakeFiles/competitive_coding.dir/objects1.rsp
competitive_coding.exe: CMakeFiles/competitive_coding.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Rishi\CLionProjects\competitive_coding\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable competitive_coding.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\competitive_coding.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/competitive_coding.dir/build: competitive_coding.exe

.PHONY : CMakeFiles/competitive_coding.dir/build

CMakeFiles/competitive_coding.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\competitive_coding.dir\cmake_clean.cmake
.PHONY : CMakeFiles/competitive_coding.dir/clean

CMakeFiles/competitive_coding.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Rishi\CLionProjects\competitive_coding C:\Users\Rishi\CLionProjects\competitive_coding C:\Users\Rishi\CLionProjects\competitive_coding\cmake-build-debug C:\Users\Rishi\CLionProjects\competitive_coding\cmake-build-debug C:\Users\Rishi\CLionProjects\competitive_coding\cmake-build-debug\CMakeFiles\competitive_coding.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/competitive_coding.dir/depend
