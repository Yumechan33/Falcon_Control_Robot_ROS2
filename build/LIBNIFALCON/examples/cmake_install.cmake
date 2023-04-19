# Install script for directory: /home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/src/libnifalcon/examples

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/install/LIBNIFALCON")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/install/LIBNIFALCON/bin/barrow_mechanics")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/install/LIBNIFALCON/bin" TYPE EXECUTABLE FILES "/home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/build/LIBNIFALCON/bin/barrow_mechanics")
  if(EXISTS "$ENV{DESTDIR}/home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/install/LIBNIFALCON/bin/barrow_mechanics" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/install/LIBNIFALCON/bin/barrow_mechanics")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/install/LIBNIFALCON/bin/barrow_mechanics")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/install/LIBNIFALCON/bin/findfalcons")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/install/LIBNIFALCON/bin" TYPE EXECUTABLE FILES "/home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/build/LIBNIFALCON/bin/findfalcons")
  if(EXISTS "$ENV{DESTDIR}/home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/install/LIBNIFALCON/bin/findfalcons" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/install/LIBNIFALCON/bin/findfalcons")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/install/LIBNIFALCON/bin/findfalcons")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/install/LIBNIFALCON/bin/findfalcons_multi")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/install/LIBNIFALCON/bin" TYPE EXECUTABLE FILES "/home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/build/LIBNIFALCON/bin/findfalcons_multi")
  if(EXISTS "$ENV{DESTDIR}/home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/install/LIBNIFALCON/bin/findfalcons_multi" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/install/LIBNIFALCON/bin/findfalcons_multi")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/install/LIBNIFALCON/bin/findfalcons_multi")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/install/LIBNIFALCON/bin/falcon_led")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/install/LIBNIFALCON/bin" TYPE EXECUTABLE FILES "/home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/build/LIBNIFALCON/bin/falcon_led")
  if(EXISTS "$ENV{DESTDIR}/home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/install/LIBNIFALCON/bin/falcon_led" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/install/LIBNIFALCON/bin/falcon_led")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/install/LIBNIFALCON/bin/falcon_led")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/install/LIBNIFALCON/bin/falcon_test_cli")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/install/LIBNIFALCON/bin" TYPE EXECUTABLE FILES "/home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/build/LIBNIFALCON/bin/falcon_test_cli")
  if(EXISTS "$ENV{DESTDIR}/home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/install/LIBNIFALCON/bin/falcon_test_cli" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/install/LIBNIFALCON/bin/falcon_test_cli")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/install/LIBNIFALCON/bin/falcon_test_cli")
    endif()
  endif()
endif()

