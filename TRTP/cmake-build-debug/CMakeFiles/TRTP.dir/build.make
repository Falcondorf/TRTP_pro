# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.2.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.2.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\pikir\CLionProjects\TRTP

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\pikir\CLionProjects\TRTP\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/TRTP.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/TRTP.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TRTP.dir/flags.make

CMakeFiles/TRTP.dir/database.c.obj: CMakeFiles/TRTP.dir/flags.make
CMakeFiles/TRTP.dir/database.c.obj: ../database.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\pikir\CLionProjects\TRTP\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/TRTP.dir/database.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\TRTP.dir\database.c.obj   -c C:\Users\pikir\CLionProjects\TRTP\database.c

CMakeFiles/TRTP.dir/database.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/TRTP.dir/database.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\pikir\CLionProjects\TRTP\database.c > CMakeFiles\TRTP.dir\database.c.i

CMakeFiles/TRTP.dir/database.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/TRTP.dir/database.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\pikir\CLionProjects\TRTP\database.c -o CMakeFiles\TRTP.dir\database.c.s

CMakeFiles/TRTP.dir/record.c.obj: CMakeFiles/TRTP.dir/flags.make
CMakeFiles/TRTP.dir/record.c.obj: ../record.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\pikir\CLionProjects\TRTP\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/TRTP.dir/record.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\TRTP.dir\record.c.obj   -c C:\Users\pikir\CLionProjects\TRTP\record.c

CMakeFiles/TRTP.dir/record.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/TRTP.dir/record.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\pikir\CLionProjects\TRTP\record.c > CMakeFiles\TRTP.dir\record.c.i

CMakeFiles/TRTP.dir/record.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/TRTP.dir/record.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\pikir\CLionProjects\TRTP\record.c -o CMakeFiles\TRTP.dir\record.c.s

# Object files for target TRTP
TRTP_OBJECTS = \
"CMakeFiles/TRTP.dir/database.c.obj" \
"CMakeFiles/TRTP.dir/record.c.obj"

# External object files for target TRTP
TRTP_EXTERNAL_OBJECTS =

TRTP.exe: CMakeFiles/TRTP.dir/database.c.obj
TRTP.exe: CMakeFiles/TRTP.dir/record.c.obj
TRTP.exe: CMakeFiles/TRTP.dir/build.make
TRTP.exe: CMakeFiles/TRTP.dir/linklibs.rsp
TRTP.exe: CMakeFiles/TRTP.dir/objects1.rsp
TRTP.exe: CMakeFiles/TRTP.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\pikir\CLionProjects\TRTP\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable TRTP.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\TRTP.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TRTP.dir/build: TRTP.exe

.PHONY : CMakeFiles/TRTP.dir/build

CMakeFiles/TRTP.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\TRTP.dir\cmake_clean.cmake
.PHONY : CMakeFiles/TRTP.dir/clean

CMakeFiles/TRTP.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\pikir\CLionProjects\TRTP C:\Users\pikir\CLionProjects\TRTP C:\Users\pikir\CLionProjects\TRTP\cmake-build-debug C:\Users\pikir\CLionProjects\TRTP\cmake-build-debug C:\Users\pikir\CLionProjects\TRTP\cmake-build-debug\CMakeFiles\TRTP.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/TRTP.dir/depend

