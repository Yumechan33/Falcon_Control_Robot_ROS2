# Install script for directory: /home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/src/libnifalcon/include

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
   "/home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/install/LIBNIFALCON/include/falcon/gmtl;/home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/install/LIBNIFALCON/include/falcon/cpp-optparse;/home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/install/LIBNIFALCON/include/falcon/core;/home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/install/LIBNIFALCON/include/falcon/firmware;/home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/install/LIBNIFALCON/include/falcon/kinematic;/home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/install/LIBNIFALCON/include/falcon/grip")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/install/LIBNIFALCON/include/falcon" TYPE DIRECTORY FILES
    "/home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/src/libnifalcon/include/falcon/gmtl"
    "/home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/src/libnifalcon/include/falcon/cpp-optparse"
    "/home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/src/libnifalcon/include/falcon/core"
    "/home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/src/libnifalcon/include/falcon/firmware"
    "/home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/src/libnifalcon/include/falcon/kinematic"
    "/home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/src/libnifalcon/include/falcon/grip"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/install/LIBNIFALCON/include/falcon/util/FalconFirmwareBinaryTest.h;/home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/install/LIBNIFALCON/include/falcon/util/FalconFirmwareBinaryNvent.h;/home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/install/LIBNIFALCON/include/falcon/util/FalconDeviceThread.h")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/install/LIBNIFALCON/include/falcon/util" TYPE FILE FILES
    "/home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/src/libnifalcon/include/falcon/util/FalconFirmwareBinaryTest.h"
    "/home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/src/libnifalcon/include/falcon/util/FalconFirmwareBinaryNvent.h"
    "/home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/src/libnifalcon/include/falcon/util/FalconDeviceThread.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/install/LIBNIFALCON/include/falcon/comm/FalconCommLibUSB.h")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/install/LIBNIFALCON/include/falcon/comm" TYPE FILE FILES "/home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/src/libnifalcon/include/falcon/comm/FalconCommLibUSB.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/install/LIBNIFALCON/include/falcon/util/FalconCLIBase.h")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/install/LIBNIFALCON/include/falcon/util" TYPE FILE FILES "/home/ayumayume/ROS2_Y3_2/mobile_robot_inclass/src/libnifalcon/include/falcon/util/FalconCLIBase.h")
endif()

