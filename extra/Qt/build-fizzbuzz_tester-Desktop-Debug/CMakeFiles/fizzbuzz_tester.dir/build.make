# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.23

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ion/Documents/Projects/C++/extra/Qt/fizzbuzz_tester

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ion/Documents/Projects/C++/extra/Qt/build-fizzbuzz_tester-Desktop-Debug

# Include any dependencies generated for this target.
include CMakeFiles/fizzbuzz_tester.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/fizzbuzz_tester.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/fizzbuzz_tester.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/fizzbuzz_tester.dir/flags.make

CMakeFiles/fizzbuzz_tester.dir/fizzbuzz_tester_autogen/mocs_compilation.cpp.o: CMakeFiles/fizzbuzz_tester.dir/flags.make
CMakeFiles/fizzbuzz_tester.dir/fizzbuzz_tester_autogen/mocs_compilation.cpp.o: fizzbuzz_tester_autogen/mocs_compilation.cpp
CMakeFiles/fizzbuzz_tester.dir/fizzbuzz_tester_autogen/mocs_compilation.cpp.o: CMakeFiles/fizzbuzz_tester.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ion/Documents/Projects/C++/extra/Qt/build-fizzbuzz_tester-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/fizzbuzz_tester.dir/fizzbuzz_tester_autogen/mocs_compilation.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/fizzbuzz_tester.dir/fizzbuzz_tester_autogen/mocs_compilation.cpp.o -MF CMakeFiles/fizzbuzz_tester.dir/fizzbuzz_tester_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/fizzbuzz_tester.dir/fizzbuzz_tester_autogen/mocs_compilation.cpp.o -c /home/ion/Documents/Projects/C++/extra/Qt/build-fizzbuzz_tester-Desktop-Debug/fizzbuzz_tester_autogen/mocs_compilation.cpp

CMakeFiles/fizzbuzz_tester.dir/fizzbuzz_tester_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/fizzbuzz_tester.dir/fizzbuzz_tester_autogen/mocs_compilation.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ion/Documents/Projects/C++/extra/Qt/build-fizzbuzz_tester-Desktop-Debug/fizzbuzz_tester_autogen/mocs_compilation.cpp > CMakeFiles/fizzbuzz_tester.dir/fizzbuzz_tester_autogen/mocs_compilation.cpp.i

CMakeFiles/fizzbuzz_tester.dir/fizzbuzz_tester_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/fizzbuzz_tester.dir/fizzbuzz_tester_autogen/mocs_compilation.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ion/Documents/Projects/C++/extra/Qt/build-fizzbuzz_tester-Desktop-Debug/fizzbuzz_tester_autogen/mocs_compilation.cpp -o CMakeFiles/fizzbuzz_tester.dir/fizzbuzz_tester_autogen/mocs_compilation.cpp.s

CMakeFiles/fizzbuzz_tester.dir/main.cpp.o: CMakeFiles/fizzbuzz_tester.dir/flags.make
CMakeFiles/fizzbuzz_tester.dir/main.cpp.o: /home/ion/Documents/Projects/C++/extra/Qt/fizzbuzz_tester/main.cpp
CMakeFiles/fizzbuzz_tester.dir/main.cpp.o: CMakeFiles/fizzbuzz_tester.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ion/Documents/Projects/C++/extra/Qt/build-fizzbuzz_tester-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/fizzbuzz_tester.dir/main.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/fizzbuzz_tester.dir/main.cpp.o -MF CMakeFiles/fizzbuzz_tester.dir/main.cpp.o.d -o CMakeFiles/fizzbuzz_tester.dir/main.cpp.o -c /home/ion/Documents/Projects/C++/extra/Qt/fizzbuzz_tester/main.cpp

CMakeFiles/fizzbuzz_tester.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/fizzbuzz_tester.dir/main.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ion/Documents/Projects/C++/extra/Qt/fizzbuzz_tester/main.cpp > CMakeFiles/fizzbuzz_tester.dir/main.cpp.i

CMakeFiles/fizzbuzz_tester.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/fizzbuzz_tester.dir/main.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ion/Documents/Projects/C++/extra/Qt/fizzbuzz_tester/main.cpp -o CMakeFiles/fizzbuzz_tester.dir/main.cpp.s

CMakeFiles/fizzbuzz_tester.dir/mainwindow.cpp.o: CMakeFiles/fizzbuzz_tester.dir/flags.make
CMakeFiles/fizzbuzz_tester.dir/mainwindow.cpp.o: /home/ion/Documents/Projects/C++/extra/Qt/fizzbuzz_tester/mainwindow.cpp
CMakeFiles/fizzbuzz_tester.dir/mainwindow.cpp.o: CMakeFiles/fizzbuzz_tester.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ion/Documents/Projects/C++/extra/Qt/build-fizzbuzz_tester-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/fizzbuzz_tester.dir/mainwindow.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/fizzbuzz_tester.dir/mainwindow.cpp.o -MF CMakeFiles/fizzbuzz_tester.dir/mainwindow.cpp.o.d -o CMakeFiles/fizzbuzz_tester.dir/mainwindow.cpp.o -c /home/ion/Documents/Projects/C++/extra/Qt/fizzbuzz_tester/mainwindow.cpp

CMakeFiles/fizzbuzz_tester.dir/mainwindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/fizzbuzz_tester.dir/mainwindow.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ion/Documents/Projects/C++/extra/Qt/fizzbuzz_tester/mainwindow.cpp > CMakeFiles/fizzbuzz_tester.dir/mainwindow.cpp.i

CMakeFiles/fizzbuzz_tester.dir/mainwindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/fizzbuzz_tester.dir/mainwindow.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ion/Documents/Projects/C++/extra/Qt/fizzbuzz_tester/mainwindow.cpp -o CMakeFiles/fizzbuzz_tester.dir/mainwindow.cpp.s

# Object files for target fizzbuzz_tester
fizzbuzz_tester_OBJECTS = \
"CMakeFiles/fizzbuzz_tester.dir/fizzbuzz_tester_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/fizzbuzz_tester.dir/main.cpp.o" \
"CMakeFiles/fizzbuzz_tester.dir/mainwindow.cpp.o"

# External object files for target fizzbuzz_tester
fizzbuzz_tester_EXTERNAL_OBJECTS =

fizzbuzz_tester: CMakeFiles/fizzbuzz_tester.dir/fizzbuzz_tester_autogen/mocs_compilation.cpp.o
fizzbuzz_tester: CMakeFiles/fizzbuzz_tester.dir/main.cpp.o
fizzbuzz_tester: CMakeFiles/fizzbuzz_tester.dir/mainwindow.cpp.o
fizzbuzz_tester: CMakeFiles/fizzbuzz_tester.dir/build.make
fizzbuzz_tester: /usr/lib/libQt5Widgets.so.5.15.3
fizzbuzz_tester: /usr/lib/libQt5Gui.so.5.15.3
fizzbuzz_tester: /usr/lib/libQt5Core.so.5.15.3
fizzbuzz_tester: CMakeFiles/fizzbuzz_tester.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ion/Documents/Projects/C++/extra/Qt/build-fizzbuzz_tester-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable fizzbuzz_tester"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/fizzbuzz_tester.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/fizzbuzz_tester.dir/build: fizzbuzz_tester
.PHONY : CMakeFiles/fizzbuzz_tester.dir/build

CMakeFiles/fizzbuzz_tester.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/fizzbuzz_tester.dir/cmake_clean.cmake
.PHONY : CMakeFiles/fizzbuzz_tester.dir/clean

CMakeFiles/fizzbuzz_tester.dir/depend:
	cd /home/ion/Documents/Projects/C++/extra/Qt/build-fizzbuzz_tester-Desktop-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ion/Documents/Projects/C++/extra/Qt/fizzbuzz_tester /home/ion/Documents/Projects/C++/extra/Qt/fizzbuzz_tester /home/ion/Documents/Projects/C++/extra/Qt/build-fizzbuzz_tester-Desktop-Debug /home/ion/Documents/Projects/C++/extra/Qt/build-fizzbuzz_tester-Desktop-Debug /home/ion/Documents/Projects/C++/extra/Qt/build-fizzbuzz_tester-Desktop-Debug/CMakeFiles/fizzbuzz_tester.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/fizzbuzz_tester.dir/depend

