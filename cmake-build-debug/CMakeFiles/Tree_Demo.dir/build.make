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
include CMakeFiles/Tree_Demo.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Tree_Demo.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Tree_Demo.dir/flags.make

CMakeFiles/Tree_Demo.dir/CPP_File/BinaryTree.cpp.obj: CMakeFiles/Tree_Demo.dir/flags.make
CMakeFiles/Tree_Demo.dir/CPP_File/BinaryTree.cpp.obj: ../CPP_File/BinaryTree.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Kishan Verma\CLionProjects\C+Python\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Tree_Demo.dir/CPP_File/BinaryTree.cpp.obj"
	C:\MingW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Tree_Demo.dir\CPP_File\BinaryTree.cpp.obj -c "C:\Users\Kishan Verma\CLionProjects\C+Python\CPP_File\BinaryTree.cpp"

CMakeFiles/Tree_Demo.dir/CPP_File/BinaryTree.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Tree_Demo.dir/CPP_File/BinaryTree.cpp.i"
	C:\MingW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Kishan Verma\CLionProjects\C+Python\CPP_File\BinaryTree.cpp" > CMakeFiles\Tree_Demo.dir\CPP_File\BinaryTree.cpp.i

CMakeFiles/Tree_Demo.dir/CPP_File/BinaryTree.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Tree_Demo.dir/CPP_File/BinaryTree.cpp.s"
	C:\MingW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Kishan Verma\CLionProjects\C+Python\CPP_File\BinaryTree.cpp" -o CMakeFiles\Tree_Demo.dir\CPP_File\BinaryTree.cpp.s

# Object files for target Tree_Demo
Tree_Demo_OBJECTS = \
"CMakeFiles/Tree_Demo.dir/CPP_File/BinaryTree.cpp.obj"

# External object files for target Tree_Demo
Tree_Demo_EXTERNAL_OBJECTS =

Tree_Demo.exe: CMakeFiles/Tree_Demo.dir/CPP_File/BinaryTree.cpp.obj
Tree_Demo.exe: CMakeFiles/Tree_Demo.dir/build.make
Tree_Demo.exe: CMakeFiles/Tree_Demo.dir/linklibs.rsp
Tree_Demo.exe: CMakeFiles/Tree_Demo.dir/objects1.rsp
Tree_Demo.exe: CMakeFiles/Tree_Demo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Kishan Verma\CLionProjects\C+Python\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Tree_Demo.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Tree_Demo.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Tree_Demo.dir/build: Tree_Demo.exe

.PHONY : CMakeFiles/Tree_Demo.dir/build

CMakeFiles/Tree_Demo.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Tree_Demo.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Tree_Demo.dir/clean

CMakeFiles/Tree_Demo.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Kishan Verma\CLionProjects\C+Python" "C:\Users\Kishan Verma\CLionProjects\C+Python" "C:\Users\Kishan Verma\CLionProjects\C+Python\cmake-build-debug" "C:\Users\Kishan Verma\CLionProjects\C+Python\cmake-build-debug" "C:\Users\Kishan Verma\CLionProjects\C+Python\cmake-build-debug\CMakeFiles\Tree_Demo.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Tree_Demo.dir/depend

