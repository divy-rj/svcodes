# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.1.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.1.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\Divyr\OneDrive\Desktop\summervacation codes"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Divyr\OneDrive\Desktop\summervacation codes\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/summervacation_codes.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/summervacation_codes.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/summervacation_codes.dir/flags.make

CMakeFiles/summervacation_codes.dir/graph/bfs.cpp.obj: CMakeFiles/summervacation_codes.dir/flags.make
CMakeFiles/summervacation_codes.dir/graph/bfs.cpp.obj: ../graph/bfs.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Divyr\OneDrive\Desktop\summervacation codes\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/summervacation_codes.dir/graph/bfs.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\summervacation_codes.dir\graph\bfs.cpp.obj -c "C:\Users\Divyr\OneDrive\Desktop\summervacation codes\graph\bfs.cpp"

CMakeFiles/summervacation_codes.dir/graph/bfs.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/summervacation_codes.dir/graph/bfs.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Divyr\OneDrive\Desktop\summervacation codes\graph\bfs.cpp" > CMakeFiles\summervacation_codes.dir\graph\bfs.cpp.i

CMakeFiles/summervacation_codes.dir/graph/bfs.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/summervacation_codes.dir/graph/bfs.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Divyr\OneDrive\Desktop\summervacation codes\graph\bfs.cpp" -o CMakeFiles\summervacation_codes.dir\graph\bfs.cpp.s

# Object files for target summervacation_codes
summervacation_codes_OBJECTS = \
"CMakeFiles/summervacation_codes.dir/graph/bfs.cpp.obj"

# External object files for target summervacation_codes
summervacation_codes_EXTERNAL_OBJECTS =

summervacation_codes.exe: CMakeFiles/summervacation_codes.dir/graph/bfs.cpp.obj
summervacation_codes.exe: CMakeFiles/summervacation_codes.dir/build.make
summervacation_codes.exe: CMakeFiles/summervacation_codes.dir/linklibs.rsp
summervacation_codes.exe: CMakeFiles/summervacation_codes.dir/objects1.rsp
summervacation_codes.exe: CMakeFiles/summervacation_codes.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Divyr\OneDrive\Desktop\summervacation codes\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable summervacation_codes.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\summervacation_codes.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/summervacation_codes.dir/build: summervacation_codes.exe

.PHONY : CMakeFiles/summervacation_codes.dir/build

CMakeFiles/summervacation_codes.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\summervacation_codes.dir\cmake_clean.cmake
.PHONY : CMakeFiles/summervacation_codes.dir/clean

CMakeFiles/summervacation_codes.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Divyr\OneDrive\Desktop\summervacation codes" "C:\Users\Divyr\OneDrive\Desktop\summervacation codes" "C:\Users\Divyr\OneDrive\Desktop\summervacation codes\cmake-build-debug" "C:\Users\Divyr\OneDrive\Desktop\summervacation codes\cmake-build-debug" "C:\Users\Divyr\OneDrive\Desktop\summervacation codes\cmake-build-debug\CMakeFiles\summervacation_codes.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/summervacation_codes.dir/depend
