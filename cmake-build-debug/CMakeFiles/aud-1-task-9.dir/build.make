# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.23

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
CMAKE_COMMAND = "D:\JetBrains FINKI\CLion 2022.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\JetBrains FINKI\CLion 2022.2.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\Pusoski Hristijan\CLionProjects\SP2022-MID1"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Pusoski Hristijan\CLionProjects\SP2022-MID1\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/aud-1-task-9.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/aud-1-task-9.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/aud-1-task-9.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/aud-1-task-9.dir/flags.make

CMakeFiles/aud-1-task-9.dir/auditory-exercises/aud-ex-1/task9.c.obj: CMakeFiles/aud-1-task-9.dir/flags.make
CMakeFiles/aud-1-task-9.dir/auditory-exercises/aud-ex-1/task9.c.obj: ../auditory-exercises/aud-ex-1/task9.c
CMakeFiles/aud-1-task-9.dir/auditory-exercises/aud-ex-1/task9.c.obj: CMakeFiles/aud-1-task-9.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Pusoski Hristijan\CLionProjects\SP2022-MID1\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/aud-1-task-9.dir/auditory-exercises/aud-ex-1/task9.c.obj"
	"D:\JetBrains FINKI\CLion 2022.2.3\bin\mingw\bin\gcc.exe" $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/aud-1-task-9.dir/auditory-exercises/aud-ex-1/task9.c.obj -MF CMakeFiles\aud-1-task-9.dir\auditory-exercises\aud-ex-1\task9.c.obj.d -o CMakeFiles\aud-1-task-9.dir\auditory-exercises\aud-ex-1\task9.c.obj -c "C:\Users\Pusoski Hristijan\CLionProjects\SP2022-MID1\auditory-exercises\aud-ex-1\task9.c"

CMakeFiles/aud-1-task-9.dir/auditory-exercises/aud-ex-1/task9.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/aud-1-task-9.dir/auditory-exercises/aud-ex-1/task9.c.i"
	"D:\JetBrains FINKI\CLion 2022.2.3\bin\mingw\bin\gcc.exe" $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\Pusoski Hristijan\CLionProjects\SP2022-MID1\auditory-exercises\aud-ex-1\task9.c" > CMakeFiles\aud-1-task-9.dir\auditory-exercises\aud-ex-1\task9.c.i

CMakeFiles/aud-1-task-9.dir/auditory-exercises/aud-ex-1/task9.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/aud-1-task-9.dir/auditory-exercises/aud-ex-1/task9.c.s"
	"D:\JetBrains FINKI\CLion 2022.2.3\bin\mingw\bin\gcc.exe" $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\Pusoski Hristijan\CLionProjects\SP2022-MID1\auditory-exercises\aud-ex-1\task9.c" -o CMakeFiles\aud-1-task-9.dir\auditory-exercises\aud-ex-1\task9.c.s

# Object files for target aud-1-task-9
aud__1__task__9_OBJECTS = \
"CMakeFiles/aud-1-task-9.dir/auditory-exercises/aud-ex-1/task9.c.obj"

# External object files for target aud-1-task-9
aud__1__task__9_EXTERNAL_OBJECTS =

aud-1-task-9.exe: CMakeFiles/aud-1-task-9.dir/auditory-exercises/aud-ex-1/task9.c.obj
aud-1-task-9.exe: CMakeFiles/aud-1-task-9.dir/build.make
aud-1-task-9.exe: CMakeFiles/aud-1-task-9.dir/linklibs.rsp
aud-1-task-9.exe: CMakeFiles/aud-1-task-9.dir/objects1.rsp
aud-1-task-9.exe: CMakeFiles/aud-1-task-9.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Pusoski Hristijan\CLionProjects\SP2022-MID1\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable aud-1-task-9.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\aud-1-task-9.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/aud-1-task-9.dir/build: aud-1-task-9.exe
.PHONY : CMakeFiles/aud-1-task-9.dir/build

CMakeFiles/aud-1-task-9.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\aud-1-task-9.dir\cmake_clean.cmake
.PHONY : CMakeFiles/aud-1-task-9.dir/clean

CMakeFiles/aud-1-task-9.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Pusoski Hristijan\CLionProjects\SP2022-MID1" "C:\Users\Pusoski Hristijan\CLionProjects\SP2022-MID1" "C:\Users\Pusoski Hristijan\CLionProjects\SP2022-MID1\cmake-build-debug" "C:\Users\Pusoski Hristijan\CLionProjects\SP2022-MID1\cmake-build-debug" "C:\Users\Pusoski Hristijan\CLionProjects\SP2022-MID1\cmake-build-debug\CMakeFiles\aud-1-task-9.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/aud-1-task-9.dir/depend

