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
include CMakeFiles/NumberConversion.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/NumberConversion.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/NumberConversion.dir/flags.make

CMakeFiles/NumberConversion.dir/CPP_File/NumberConversion.cpp.obj: CMakeFiles/NumberConversion.dir/flags.make
CMakeFiles/NumberConversion.dir/CPP_File/NumberConversion.cpp.obj: ../CPP_File/NumberConversion.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Kishan Verma\CLionProjects\C+Python\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/NumberConversion.dir/CPP_File/NumberConversion.cpp.obj"
	C:\MingW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\NumberConversion.dir\CPP_File\NumberConversion.cpp.obj -c "C:\Users\Kishan Verma\CLionProjects\C+Python\CPP_File\NumberConversion.cpp"

CMakeFiles/NumberConversion.dir/CPP_File/NumberConversion.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/NumberConversion.dir/CPP_File/NumberConversion.cpp.i"
	C:\MingW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Kishan Verma\CLionProjects\C+Python\CPP_File\NumberConversion.cpp" > CMakeFiles\NumberConversion.dir\CPP_File\NumberConversion.cpp.i

CMakeFiles/NumberConversion.dir/CPP_File/NumberConversion.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/NumberConversion.dir/CPP_File/NumberConversion.cpp.s"
	C:\MingW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Kishan Verma\CLionProjects\C+Python\CPP_File\NumberConversion.cpp" -o CMakeFiles\NumberConversion.dir\CPP_File\NumberConversion.cpp.s

# Object files for target NumberConversion
NumberConversion_OBJECTS = \
"CMakeFiles/NumberConversion.dir/CPP_File/NumberConversion.cpp.obj"

# External object files for target NumberConversion
NumberConversion_EXTERNAL_OBJECTS =

NumberConversion.exe: CMakeFiles/NumberConversion.dir/CPP_File/NumberConversion.cpp.obj
NumberConversion.exe: CMakeFiles/NumberConversion.dir/build.make
NumberConversion.exe: CMakeFiles/NumberConversion.dir/linklibs.rsp
NumberConversion.exe: CMakeFiles/NumberConversion.dir/objects1.rsp
NumberConversion.exe: CMakeFiles/NumberConversion.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Kishan Verma\CLionProjects\C+Python\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable NumberConversion.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\NumberConversion.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/NumberConversion.dir/build: NumberConversion.exe

.PHONY : CMakeFiles/NumberConversion.dir/build

CMakeFiles/NumberConversion.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\NumberConversion.dir\cmake_clean.cmake
.PHONY : CMakeFiles/NumberConversion.dir/clean

CMakeFiles/NumberConversion.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Kishan Verma\CLionProjects\C+Python" "C:\Users\Kishan Verma\CLionProjects\C+Python" "C:\Users\Kishan Verma\CLionProjects\C+Python\cmake-build-debug" "C:\Users\Kishan Verma\CLionProjects\C+Python\cmake-build-debug" "C:\Users\Kishan Verma\CLionProjects\C+Python\cmake-build-debug\CMakeFiles\NumberConversion.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/NumberConversion.dir/depend
