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
include CMakeFiles/primeNumber.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/primeNumber.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/primeNumber.dir/flags.make

CMakeFiles/primeNumber.dir/CPP_File/primeNumber.cpp.obj: CMakeFiles/primeNumber.dir/flags.make
CMakeFiles/primeNumber.dir/CPP_File/primeNumber.cpp.obj: ../CPP_File/primeNumber.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Kishan Verma\CLionProjects\C+Python\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/primeNumber.dir/CPP_File/primeNumber.cpp.obj"
	C:\MingW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\primeNumber.dir\CPP_File\primeNumber.cpp.obj -c "C:\Users\Kishan Verma\CLionProjects\C+Python\CPP_File\primeNumber.cpp"

CMakeFiles/primeNumber.dir/CPP_File/primeNumber.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/primeNumber.dir/CPP_File/primeNumber.cpp.i"
	C:\MingW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Kishan Verma\CLionProjects\C+Python\CPP_File\primeNumber.cpp" > CMakeFiles\primeNumber.dir\CPP_File\primeNumber.cpp.i

CMakeFiles/primeNumber.dir/CPP_File/primeNumber.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/primeNumber.dir/CPP_File/primeNumber.cpp.s"
	C:\MingW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Kishan Verma\CLionProjects\C+Python\CPP_File\primeNumber.cpp" -o CMakeFiles\primeNumber.dir\CPP_File\primeNumber.cpp.s

# Object files for target primeNumber
primeNumber_OBJECTS = \
"CMakeFiles/primeNumber.dir/CPP_File/primeNumber.cpp.obj"

# External object files for target primeNumber
primeNumber_EXTERNAL_OBJECTS =

primeNumber.exe: CMakeFiles/primeNumber.dir/CPP_File/primeNumber.cpp.obj
primeNumber.exe: CMakeFiles/primeNumber.dir/build.make
primeNumber.exe: CMakeFiles/primeNumber.dir/linklibs.rsp
primeNumber.exe: CMakeFiles/primeNumber.dir/objects1.rsp
primeNumber.exe: CMakeFiles/primeNumber.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Kishan Verma\CLionProjects\C+Python\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable primeNumber.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\primeNumber.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/primeNumber.dir/build: primeNumber.exe

.PHONY : CMakeFiles/primeNumber.dir/build

CMakeFiles/primeNumber.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\primeNumber.dir\cmake_clean.cmake
.PHONY : CMakeFiles/primeNumber.dir/clean

CMakeFiles/primeNumber.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Kishan Verma\CLionProjects\C+Python" "C:\Users\Kishan Verma\CLionProjects\C+Python" "C:\Users\Kishan Verma\CLionProjects\C+Python\cmake-build-debug" "C:\Users\Kishan Verma\CLionProjects\C+Python\cmake-build-debug" "C:\Users\Kishan Verma\CLionProjects\C+Python\cmake-build-debug\CMakeFiles\primeNumber.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/primeNumber.dir/depend

