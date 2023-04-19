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
include src/util/CMakeFiles/nifalcon_cli_base_SHARED.dir/depend.make

# Include the progress variables for this target.
include src/util/CMakeFiles/nifalcon_cli_base_SHARED.dir/progress.make

# Include the compile flags for this target's objects.
include src/util/CMakeFiles/nifalcon_cli_base_SHARED.dir/flags.make

src/util/CMakeFiles/nifalcon_cli_base_SHARED.dir/FalconCLIBase.cpp.o: src/util/CMakeFiles/nifalcon_cli_base_SHARED.dir/flags.make
src/util/CMakeFiles/nifalcon_cli_base_SHARED.dir/FalconCLIBase.cpp.o: /home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/src/libnifalcon/src/util/FalconCLIBase.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/build/LIBNIFALCON/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/util/CMakeFiles/nifalcon_cli_base_SHARED.dir/FalconCLIBase.cpp.o"
	cd /home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/build/LIBNIFALCON/src/util && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/nifalcon_cli_base_SHARED.dir/FalconCLIBase.cpp.o -c /home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/src/libnifalcon/src/util/FalconCLIBase.cpp

src/util/CMakeFiles/nifalcon_cli_base_SHARED.dir/FalconCLIBase.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/nifalcon_cli_base_SHARED.dir/FalconCLIBase.cpp.i"
	cd /home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/build/LIBNIFALCON/src/util && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/src/libnifalcon/src/util/FalconCLIBase.cpp > CMakeFiles/nifalcon_cli_base_SHARED.dir/FalconCLIBase.cpp.i

src/util/CMakeFiles/nifalcon_cli_base_SHARED.dir/FalconCLIBase.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/nifalcon_cli_base_SHARED.dir/FalconCLIBase.cpp.s"
	cd /home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/build/LIBNIFALCON/src/util && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/src/libnifalcon/src/util/FalconCLIBase.cpp -o CMakeFiles/nifalcon_cli_base_SHARED.dir/FalconCLIBase.cpp.s

# Object files for target nifalcon_cli_base_SHARED
nifalcon_cli_base_SHARED_OBJECTS = \
"CMakeFiles/nifalcon_cli_base_SHARED.dir/FalconCLIBase.cpp.o"

# External object files for target nifalcon_cli_base_SHARED
nifalcon_cli_base_SHARED_EXTERNAL_OBJECTS =

lib/libnifalcon_cli_base.so.1.0.2: src/util/CMakeFiles/nifalcon_cli_base_SHARED.dir/FalconCLIBase.cpp.o
lib/libnifalcon_cli_base.so.1.0.2: src/util/CMakeFiles/nifalcon_cli_base_SHARED.dir/build.make
lib/libnifalcon_cli_base.so.1.0.2: /usr/lib/x86_64-linux-gnu/libusb-1.0.so
lib/libnifalcon_cli_base.so.1.0.2: lib/libnifalcon.so.1.0.2
lib/libnifalcon_cli_base.so.1.0.2: /usr/lib/x86_64-linux-gnu/libusb-1.0.so
lib/libnifalcon_cli_base.so.1.0.2: src/util/CMakeFiles/nifalcon_cli_base_SHARED.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/build/LIBNIFALCON/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library ../../lib/libnifalcon_cli_base.so"
	cd /home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/build/LIBNIFALCON/src/util && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/nifalcon_cli_base_SHARED.dir/link.txt --verbose=$(VERBOSE)
	cd /home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/build/LIBNIFALCON/src/util && $(CMAKE_COMMAND) -E cmake_symlink_library ../../lib/libnifalcon_cli_base.so.1.0.2 ../../lib/libnifalcon_cli_base.so.1.0.2 ../../lib/libnifalcon_cli_base.so

lib/libnifalcon_cli_base.so: lib/libnifalcon_cli_base.so.1.0.2
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libnifalcon_cli_base.so

# Rule to build all files generated by this target.
src/util/CMakeFiles/nifalcon_cli_base_SHARED.dir/build: lib/libnifalcon_cli_base.so

.PHONY : src/util/CMakeFiles/nifalcon_cli_base_SHARED.dir/build

src/util/CMakeFiles/nifalcon_cli_base_SHARED.dir/clean:
	cd /home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/build/LIBNIFALCON/src/util && $(CMAKE_COMMAND) -P CMakeFiles/nifalcon_cli_base_SHARED.dir/cmake_clean.cmake
.PHONY : src/util/CMakeFiles/nifalcon_cli_base_SHARED.dir/clean

src/util/CMakeFiles/nifalcon_cli_base_SHARED.dir/depend:
	cd /home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/build/LIBNIFALCON && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/src/libnifalcon /home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/src/libnifalcon/src/util /home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/build/LIBNIFALCON /home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/build/LIBNIFALCON/src/util /home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/build/LIBNIFALCON/src/util/CMakeFiles/nifalcon_cli_base_SHARED.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/util/CMakeFiles/nifalcon_cli_base_SHARED.dir/depend

