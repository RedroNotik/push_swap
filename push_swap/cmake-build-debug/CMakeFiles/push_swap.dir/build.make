# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/ghanh/Dev/push_swap_git/push/push_swap

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/ghanh/Dev/push_swap_git/push/push_swap/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/push_swap.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/push_swap.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/push_swap.dir/flags.make

CMakeFiles/push_swap.dir/main.c.o: CMakeFiles/push_swap.dir/flags.make
CMakeFiles/push_swap.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ghanh/Dev/push_swap_git/push/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/push_swap.dir/main.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/push_swap.dir/main.c.o -c /Users/ghanh/Dev/push_swap_git/push/push_swap/main.c

CMakeFiles/push_swap.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/push_swap.dir/main.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/ghanh/Dev/push_swap_git/push/push_swap/main.c > CMakeFiles/push_swap.dir/main.c.i

CMakeFiles/push_swap.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/push_swap.dir/main.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/ghanh/Dev/push_swap_git/push/push_swap/main.c -o CMakeFiles/push_swap.dir/main.c.s

CMakeFiles/push_swap.dir/src/sort_to_five.c.o: CMakeFiles/push_swap.dir/flags.make
CMakeFiles/push_swap.dir/src/sort_to_five.c.o: ../src/sort_to_five.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ghanh/Dev/push_swap_git/push/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/push_swap.dir/src/sort_to_five.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/push_swap.dir/src/sort_to_five.c.o -c /Users/ghanh/Dev/push_swap_git/push/push_swap/src/sort_to_five.c

CMakeFiles/push_swap.dir/src/sort_to_five.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/push_swap.dir/src/sort_to_five.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/ghanh/Dev/push_swap_git/push/push_swap/src/sort_to_five.c > CMakeFiles/push_swap.dir/src/sort_to_five.c.i

CMakeFiles/push_swap.dir/src/sort_to_five.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/push_swap.dir/src/sort_to_five.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/ghanh/Dev/push_swap_git/push/push_swap/src/sort_to_five.c -o CMakeFiles/push_swap.dir/src/sort_to_five.c.s

CMakeFiles/push_swap.dir/src/new_str.c.o: CMakeFiles/push_swap.dir/flags.make
CMakeFiles/push_swap.dir/src/new_str.c.o: ../src/new_str.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ghanh/Dev/push_swap_git/push/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/push_swap.dir/src/new_str.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/push_swap.dir/src/new_str.c.o -c /Users/ghanh/Dev/push_swap_git/push/push_swap/src/new_str.c

CMakeFiles/push_swap.dir/src/new_str.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/push_swap.dir/src/new_str.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/ghanh/Dev/push_swap_git/push/push_swap/src/new_str.c > CMakeFiles/push_swap.dir/src/new_str.c.i

CMakeFiles/push_swap.dir/src/new_str.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/push_swap.dir/src/new_str.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/ghanh/Dev/push_swap_git/push/push_swap/src/new_str.c -o CMakeFiles/push_swap.dir/src/new_str.c.s

CMakeFiles/push_swap.dir/src/sort_six_plus.c.o: CMakeFiles/push_swap.dir/flags.make
CMakeFiles/push_swap.dir/src/sort_six_plus.c.o: ../src/sort_six_plus.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ghanh/Dev/push_swap_git/push/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/push_swap.dir/src/sort_six_plus.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/push_swap.dir/src/sort_six_plus.c.o -c /Users/ghanh/Dev/push_swap_git/push/push_swap/src/sort_six_plus.c

CMakeFiles/push_swap.dir/src/sort_six_plus.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/push_swap.dir/src/sort_six_plus.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/ghanh/Dev/push_swap_git/push/push_swap/src/sort_six_plus.c > CMakeFiles/push_swap.dir/src/sort_six_plus.c.i

CMakeFiles/push_swap.dir/src/sort_six_plus.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/push_swap.dir/src/sort_six_plus.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/ghanh/Dev/push_swap_git/push/push_swap/src/sort_six_plus.c -o CMakeFiles/push_swap.dir/src/sort_six_plus.c.s

CMakeFiles/push_swap.dir/src/free_list.c.o: CMakeFiles/push_swap.dir/flags.make
CMakeFiles/push_swap.dir/src/free_list.c.o: ../src/free_list.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ghanh/Dev/push_swap_git/push/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/push_swap.dir/src/free_list.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/push_swap.dir/src/free_list.c.o -c /Users/ghanh/Dev/push_swap_git/push/push_swap/src/free_list.c

CMakeFiles/push_swap.dir/src/free_list.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/push_swap.dir/src/free_list.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/ghanh/Dev/push_swap_git/push/push_swap/src/free_list.c > CMakeFiles/push_swap.dir/src/free_list.c.i

CMakeFiles/push_swap.dir/src/free_list.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/push_swap.dir/src/free_list.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/ghanh/Dev/push_swap_git/push/push_swap/src/free_list.c -o CMakeFiles/push_swap.dir/src/free_list.c.s

# Object files for target push_swap
push_swap_OBJECTS = \
"CMakeFiles/push_swap.dir/main.c.o" \
"CMakeFiles/push_swap.dir/src/sort_to_five.c.o" \
"CMakeFiles/push_swap.dir/src/new_str.c.o" \
"CMakeFiles/push_swap.dir/src/sort_six_plus.c.o" \
"CMakeFiles/push_swap.dir/src/free_list.c.o"

# External object files for target push_swap
push_swap_EXTERNAL_OBJECTS =

push_swap: CMakeFiles/push_swap.dir/main.c.o
push_swap: CMakeFiles/push_swap.dir/src/sort_to_five.c.o
push_swap: CMakeFiles/push_swap.dir/src/new_str.c.o
push_swap: CMakeFiles/push_swap.dir/src/sort_six_plus.c.o
push_swap: CMakeFiles/push_swap.dir/src/free_list.c.o
push_swap: CMakeFiles/push_swap.dir/build.make
push_swap: CMakeFiles/push_swap.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/ghanh/Dev/push_swap_git/push/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking C executable push_swap"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/push_swap.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/push_swap.dir/build: push_swap

.PHONY : CMakeFiles/push_swap.dir/build

CMakeFiles/push_swap.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/push_swap.dir/cmake_clean.cmake
.PHONY : CMakeFiles/push_swap.dir/clean

CMakeFiles/push_swap.dir/depend:
	cd /Users/ghanh/Dev/push_swap_git/push/push_swap/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/ghanh/Dev/push_swap_git/push/push_swap /Users/ghanh/Dev/push_swap_git/push/push_swap /Users/ghanh/Dev/push_swap_git/push/push_swap/cmake-build-debug /Users/ghanh/Dev/push_swap_git/push/push_swap/cmake-build-debug /Users/ghanh/Dev/push_swap_git/push/push_swap/cmake-build-debug/CMakeFiles/push_swap.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/push_swap.dir/depend

