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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.2.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\UFMG\UFMG-DCC204\CPP\Modulo3\VPL1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\UFMG\UFMG-DCC204\CPP\Modulo3\VPL1\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/VPL1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/VPL1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/VPL1.dir/flags.make

CMakeFiles/VPL1.dir/main.cpp.obj: CMakeFiles/VPL1.dir/flags.make
CMakeFiles/VPL1.dir/main.cpp.obj: CMakeFiles/VPL1.dir/includes_CXX.rsp
CMakeFiles/VPL1.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\UFMG\UFMG-DCC204\CPP\Modulo3\VPL1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/VPL1.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\VPL1.dir\main.cpp.obj -c D:\UFMG\UFMG-DCC204\CPP\Modulo3\VPL1\main.cpp

CMakeFiles/VPL1.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/VPL1.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\UFMG\UFMG-DCC204\CPP\Modulo3\VPL1\main.cpp > CMakeFiles\VPL1.dir\main.cpp.i

CMakeFiles/VPL1.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/VPL1.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\UFMG\UFMG-DCC204\CPP\Modulo3\VPL1\main.cpp -o CMakeFiles\VPL1.dir\main.cpp.s

# Object files for target VPL1
VPL1_OBJECTS = \
"CMakeFiles/VPL1.dir/main.cpp.obj"

# External object files for target VPL1
VPL1_EXTERNAL_OBJECTS =

VPL1.exe: CMakeFiles/VPL1.dir/main.cpp.obj
VPL1.exe: CMakeFiles/VPL1.dir/build.make
VPL1.exe: CMakeFiles/VPL1.dir/linklibs.rsp
VPL1.exe: CMakeFiles/VPL1.dir/objects1.rsp
VPL1.exe: CMakeFiles/VPL1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\UFMG\UFMG-DCC204\CPP\Modulo3\VPL1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable VPL1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\VPL1.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/VPL1.dir/build: VPL1.exe

.PHONY : CMakeFiles/VPL1.dir/build

CMakeFiles/VPL1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\VPL1.dir\cmake_clean.cmake
.PHONY : CMakeFiles/VPL1.dir/clean

CMakeFiles/VPL1.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\UFMG\UFMG-DCC204\CPP\Modulo3\VPL1 D:\UFMG\UFMG-DCC204\CPP\Modulo3\VPL1 D:\UFMG\UFMG-DCC204\CPP\Modulo3\VPL1\cmake-build-debug D:\UFMG\UFMG-DCC204\CPP\Modulo3\VPL1\cmake-build-debug D:\UFMG\UFMG-DCC204\CPP\Modulo3\VPL1\cmake-build-debug\CMakeFiles\VPL1.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/VPL1.dir/depend

