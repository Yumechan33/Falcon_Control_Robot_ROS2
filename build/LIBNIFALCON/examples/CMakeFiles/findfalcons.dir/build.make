# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/src/libnifalcon

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/build/LIBNIFALCON

# Include any dependencies generated for this target.
include examples/CMakeFiles/findfalcons.dir/depend.make

# Include the progress variables for this target.
include examples/CMakeFiles/findfalcons.dir/progress.make

# Include the compile flags for this target's objects.
include examples/CMakeFiles/findfalcons.dir/flags.make

examples/CMakeFiles/findfalcons.dir/findfalcons/findfalcons.cpp.o: examples/CMakeFiles/findfalcons.dir/flags.make
examples/CMakeFiles/findfalcons.dir/findfalcons/findfalcons.cpp.o: /home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/src/libnifalcon/examples/findfalcons/findfalcons.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/build/LIBNIFALCON/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object examples/CMakeFiles/findfalcons.dir/findfalcons/findfalcons.cpp.o"
	cd /home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/build/LIBNIFALCON/examples && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/findfalcons.dir/findfalcons/findfalcons.cpp.o -c /home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/src/libnifalcon/examples/findfalcons/findfalcons.cpp

examples/CMakeFiles/findfalcons.dir/findfalcons/findfalcons.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/findfalcons.dir/findfalcons/findfalcons.cpp.i"
	cd /home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/build/LIBNIFALCON/examples && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/src/libnifalcon/examples/findfalcons/findfalcons.cpp > CMakeFiles/findfalcons.dir/findfalcons/findfalcons.cpp.i

examples/CMakeFiles/findfalcons.dir/findfalcons/findfalcons.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/findfalcons.dir/findfalcons/findfalcons.cpp.s"
	cd /home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/build/LIBNIFALCON/examples && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/src/libnifalcon/examples/findfalcons/findfalcons.cpp -o CMakeFiles/findfalcons.dir/findfalcons/findfalcons.cpp.s

# Object files for target findfalcons
findfalcons_OBJECTS = \
"CMakeFiles/findfalcons.dir/findfalcons/findfalcons.cpp.o"

# External object files for target findfalcons
findfalcons_EXTERNAL_OBJECTS =

bin/findfalcons: examples/CMakeFiles/findfalcons.dir/findfalcons/findfalcons.cpp.o
bin/findfalcons: examples/CMakeFiles/findfalcons.dir/build.make
bin/findfalcons: /usr/lib/x86_64-linux-gnu/libusb-1.0.so
bin/findfalcons: lib/libnifalcon.so.1.0.2
bin/findfalcons: /usr/lib/x86_64-linux-gnu/libusb-1.0.so
bin/findfalcons: examples/CMakeFiles/findfalcons.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/build/LIBNIFALCON/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../bin/findfalcons"
	cd /home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/build/LIBNIFALCON/examples && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/findfalcons.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
examples/CMakeFiles/findfalcons.dir/build: bin/findfalcons

.PHONY : examples/CMakeFiles/findfalcons.dir/build

examples/CMakeFiles/findfalcons.dir/clean:
	cd /home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/build/LIBNIFALCON/examples && $(CMAKE_COMMAND) -P CMakeFiles/findfalcons.dir/cmake_clean.cmake
.PHONY : examples/CMakeFiles/findfalcons.dir/clean

examples/CMakeFiles/findfalcons.dir/depend:
	cd /home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/build/LIBNIFALCON && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/src/libnifalcon /home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/src/libnifalcon/examples /home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/build/LIBNIFALCON /home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/build/LIBNIFALCON/examples /home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/build/LIBNIFALCON/examples/CMakeFiles/findfalcons.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : examples/CMakeFiles/findfalcons.dir/depend

