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
include CMakeFiles/Solution_Adj_Squre.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Solution_Adj_Squre.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Solution_Adj_Squre.dir/flags.make

CMakeFiles/Solution_Adj_Squre.dir/CPP_File/Solution_Adj_Squre.cpp.obj: CMakeFiles/Solution_Adj_Squre.dir/flags.make
CMakeFiles/Solution_Adj_Squre.dir/CPP_File/Solution_Adj_Squre.cpp.obj: ../CPP_File/Solution_Adj_Squre.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Kishan Verma\CLionProjects\C+Python\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Solution_Adj_Squre.dir/CPP_File/Solution_Adj_Squre.cpp.obj"
	C:\MingW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Solution_Adj_Squre.dir\CPP_File\Solution_Adj_Squre.cpp.obj -c "C:\Users\Kishan Verma\CLionProjects\C+Python\CPP_File\Solution_Adj_Squre.cpp"

CMakeFiles/Solution_Adj_Squre.dir/CPP_File/Solution_Adj_Squre.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Solution_Adj_Squre.dir/CPP_File/Solution_Adj_Squre.cpp.i"
	C:\MingW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Kishan Verma\CLionProjects\C+Python\CPP_File\Solution_Adj_Squre.cpp" > CMakeFiles\Solution_Adj_Squre.dir\CPP_File\Solution_Adj_Squre.cpp.i

CMakeFiles/Solution_Adj_Squre.dir/CPP_File/Solution_Adj_Squre.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Solution_Adj_Squre.dir/CPP_File/Solution_Adj_Squre.cpp.s"
	C:\MingW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Kishan Verma\CLionProjects\C+Python\CPP_File\Solution_Adj_Squre.cpp" -o CMakeFiles\Solution_Adj_Squre.dir\CPP_File\Solution_Adj_Squre.cpp.s

# Object files for target Solution_Adj_Squre
Solution_Adj_Squre_OBJECTS = \
"CMakeFiles/Solution_Adj_Squre.dir/CPP_File/Solution_Adj_Squre.cpp.obj"

# External object files for target Solution_Adj_Squre
Solution_Adj_Squre_EXTERNAL_OBJECTS =

Solution_Adj_Squre.exe: CMakeFiles/Solution_Adj_Squre.dir/CPP_File/Solution_Adj_Squre.cpp.obj
Solution_Adj_Squre.exe: CMakeFiles/Solution_Adj_Squre.dir/build.make
Solution_Adj_Squre.exe: CMakeFiles/Solution_Adj_Squre.dir/linklibs.rsp
Solution_Adj_Squre.exe: CMakeFiles/Solution_Adj_Squre.dir/objects1.rsp
Solution_Adj_Squre.exe: CMakeFiles/Solution_Adj_Squre.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Kishan Verma\CLionProjects\C+Python\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Solution_Adj_Squre.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Solution_Adj_Squre.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Solution_Adj_Squre.dir/build: Solution_Adj_Squre.exe

.PHONY : CMakeFiles/Solution_Adj_Squre.dir/build

CMakeFiles/Solution_Adj_Squre.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Solution_Adj_Squre.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Solution_Adj_Squre.dir/clean

CMakeFiles/Solution_Adj_Squre.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Kishan Verma\CLionProjects\C+Python" "C:\Users\Kishan Verma\CLionProjects\C+Python" "C:\Users\Kishan Verma\CLionProjects\C+Python\cmake-build-debug" "C:\Users\Kishan Verma\CLionProjects\C+Python\cmake-build-debug" "C:\Users\Kishan Verma\CLionProjects\C+Python\cmake-build-debug\CMakeFiles\Solution_Adj_Squre.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Solution_Adj_Squre.dir/depend
