# Install script for directory: C:/Users/user/Desktop/Kostin_cpp/StaffDemo/src

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Program Files (x86)/StaffDemo")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
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

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "C:/msys64/mingw64/bin/objdump.exe")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "library" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "C:/Users/user/Desktop/Kostin_cpp/StaffDemo/cmake-build-debug/src/libStaffDemo.dll.a")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "library" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "C:/Users/user/Desktop/Kostin_cpp/StaffDemo/cmake-build-debug/src/StaffDemo.info.exe")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/StaffDemo.info.exe" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/StaffDemo.info.exe")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "C:/msys64/mingw64/bin/strip.exe" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/StaffDemo.info.exe")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES
    "C:/Users/user/Desktop/Kostin_cpp/StaffDemo/include/Interfaces.h"
    "C:/Users/user/Desktop/Kostin_cpp/StaffDemo/include/Employee.h"
    "C:/Users/user/Desktop/Kostin_cpp/StaffDemo/include/Personal.h"
    "C:/Users/user/Desktop/Kostin_cpp/StaffDemo/include/Engineer.h"
    "C:/Users/user/Desktop/Kostin_cpp/StaffDemo/include/Factory.h"
    "C:/Users/user/Desktop/Kostin_cpp/StaffDemo/src/Tester.cpp"
    "C:/Users/user/Desktop/Kostin_cpp/StaffDemo/src/../include/Tester.h"
    "C:/Users/user/Desktop/Kostin_cpp/StaffDemo/src/Programmer.cpp"
    "C:/Users/user/Desktop/Kostin_cpp/StaffDemo/src/../include/Programmer.h"
    "C:/Users/user/Desktop/Kostin_cpp/StaffDemo/src/TeamLeader.cpp"
    "C:/Users/user/Desktop/Kostin_cpp/StaffDemo/src/../include/TeamLeader.h"
    "C:/Users/user/Desktop/Kostin_cpp/StaffDemo/src/SeniorManager.cpp"
    "C:/Users/user/Desktop/Kostin_cpp/StaffDemo/src/../include/SeniorManager.h"
    "C:/Users/user/Desktop/Kostin_cpp/StaffDemo/src/SeniorManager.cpp"
    "C:/Users/user/Desktop/Kostin_cpp/StaffDemo/src/../include/SeniorManager.h"
    )
endif()

