# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.3.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.3.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\kijpi\CLionProjects\untitled33

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\kijpi\CLionProjects\untitled33\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/untitled33.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/untitled33.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/untitled33.dir/flags.make

CMakeFiles/untitled33.dir/main.cpp.obj: CMakeFiles/untitled33.dir/flags.make
CMakeFiles/untitled33.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\kijpi\CLionProjects\untitled33\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/untitled33.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\untitled33.dir\main.cpp.obj -c C:\Users\kijpi\CLionProjects\untitled33\main.cpp

CMakeFiles/untitled33.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/untitled33.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\kijpi\CLionProjects\untitled33\main.cpp > CMakeFiles\untitled33.dir\main.cpp.i

CMakeFiles/untitled33.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/untitled33.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\kijpi\CLionProjects\untitled33\main.cpp -o CMakeFiles\untitled33.dir\main.cpp.s

CMakeFiles/untitled33.dir/VectoredList.cpp.obj: CMakeFiles/untitled33.dir/flags.make
CMakeFiles/untitled33.dir/VectoredList.cpp.obj: ../VectoredList.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\kijpi\CLionProjects\untitled33\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/untitled33.dir/VectoredList.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\untitled33.dir\VectoredList.cpp.obj -c C:\Users\kijpi\CLionProjects\untitled33\VectoredList.cpp

CMakeFiles/untitled33.dir/VectoredList.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/untitled33.dir/VectoredList.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\kijpi\CLionProjects\untitled33\VectoredList.cpp > CMakeFiles\untitled33.dir\VectoredList.cpp.i

CMakeFiles/untitled33.dir/VectoredList.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/untitled33.dir/VectoredList.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\kijpi\CLionProjects\untitled33\VectoredList.cpp -o CMakeFiles\untitled33.dir\VectoredList.cpp.s

# Object files for target untitled33
untitled33_OBJECTS = \
"CMakeFiles/untitled33.dir/main.cpp.obj" \
"CMakeFiles/untitled33.dir/VectoredList.cpp.obj"

# External object files for target untitled33
untitled33_EXTERNAL_OBJECTS =

untitled33.exe: CMakeFiles/untitled33.dir/main.cpp.obj
untitled33.exe: CMakeFiles/untitled33.dir/VectoredList.cpp.obj
untitled33.exe: CMakeFiles/untitled33.dir/build.make
untitled33.exe: CMakeFiles/untitled33.dir/linklibs.rsp
untitled33.exe: CMakeFiles/untitled33.dir/objects1.rsp
untitled33.exe: CMakeFiles/untitled33.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\kijpi\CLionProjects\untitled33\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable untitled33.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\untitled33.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/untitled33.dir/build: untitled33.exe

.PHONY : CMakeFiles/untitled33.dir/build

CMakeFiles/untitled33.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\untitled33.dir\cmake_clean.cmake
.PHONY : CMakeFiles/untitled33.dir/clean

CMakeFiles/untitled33.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\kijpi\CLionProjects\untitled33 C:\Users\kijpi\CLionProjects\untitled33 C:\Users\kijpi\CLionProjects\untitled33\cmake-build-debug C:\Users\kijpi\CLionProjects\untitled33\cmake-build-debug C:\Users\kijpi\CLionProjects\untitled33\cmake-build-debug\CMakeFiles\untitled33.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/untitled33.dir/depend

