# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.13

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.1\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\Kishan Verma\CLionProjects\C+Python"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Kishan Verma\CLionProjects\C+Python\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/2dArrayDemo.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/2dArrayDemo.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/2dArrayDemo.dir/flags.make

CMakeFiles/2dArrayDemo.dir/CPP_File/2dArrayDemo.cpp.obj: CMakeFiles/2dArrayDemo.dir/flags.make
CMakeFiles/2dArrayDemo.dir/CPP_File/2dArrayDemo.cpp.obj: ../CPP_File/2dArrayDemo.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Kishan Verma\CLionProjects\C+Python\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/2dArrayDemo.dir/CPP_File/2dArrayDemo.cpp.obj"
	C:\MingW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\2dArrayDemo.dir\CPP_File\2dArrayDemo.cpp.obj -c "C:\Users\Kishan Verma\CLionProjects\C+Python\CPP_File\2dArrayDemo.cpp"

CMakeFiles/2dArrayDemo.dir/CPP_File/2dArrayDemo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/2dArrayDemo.dir/CPP_File/2dArrayDemo.cpp.i"
	C:\MingW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Kishan Verma\CLionProjects\C+Python\CPP_File\2dArrayDemo.cpp" > CMakeFiles\2dArrayDemo.dir\CPP_File\2dArrayDemo.cpp.i

CMakeFiles/2dArrayDemo.dir/CPP_File/2dArrayDemo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/2dArrayDemo.dir/CPP_File/2dArrayDemo.cpp.s"
	C:\MingW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Kishan Verma\CLionProjects\C+Python\CPP_File\2dArrayDemo.cpp" -o CMakeFiles\2dArrayDemo.dir\CPP_File\2dArrayDemo.cpp.s

# Object files for target 2dArrayDemo
2dArrayDemo_OBJECTS = \
"CMakeFiles/2dArrayDemo.dir/CPP_File/2dArrayDemo.cpp.obj"

# External object files for target 2dArrayDemo
2dArrayDemo_EXTERNAL_OBJECTS =

2dArrayDemo.exe: CMakeFiles/2dArrayDemo.dir/CPP_File/2dArrayDemo.cpp.obj
2dArrayDemo.exe: CMakeFiles/2dArrayDemo.dir/build.make
2dArrayDemo.exe: CMakeFiles/2dArrayDemo.dir/linklibs.rsp
2dArrayDemo.exe: CMakeFiles/2dArrayDemo.dir/objects1.rsp
2dArrayDemo.exe: CMakeFiles/2dArrayDemo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Kishan Verma\CLionProjects\C+Python\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 2dArrayDemo.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\2dArrayDemo.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/2dArrayDemo.dir/build: 2dArrayDemo.exe

.PHONY : CMakeFiles/2dArrayDemo.dir/build

CMakeFiles/2dArrayDemo.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\2dArrayDemo.dir\cmake_clean.cmake
.PHONY : CMakeFiles/2dArrayDemo.dir/clean

CMakeFiles/2dArrayDemo.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Kishan Verma\CLionProjects\C+Python" "C:\Users\Kishan Verma\CLionProjects\C+Python" "C:\Users\Kishan Verma\CLionProjects\C+Python\cmake-build-debug" "C:\Users\Kishan Verma\CLionProjects\C+Python\cmake-build-debug" "C:\Users\Kishan Verma\CLionProjects\C+Python\cmake-build-debug\CMakeFiles\2dArrayDemo.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/2dArrayDemo.dir/depend
