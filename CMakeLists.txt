cmake_minimum_required(VERSION 2.8 FATAL_ERROR)

SET(PROJECT_NAME relative)
SET(CMAKE_INCLUDE_CURRENT_DIR TRUE)
IF (NOT CMAKE_BUILD_TYPE)
    MESSAGE(STATUS "No build type selected, default to Release (Note that it will not work in Visual Studio)")
    SET(CMAKE_BUILD_TYPE "Release")
ENDIF()

SET(HEADERS
)
set(SRC_FILES 
    main.cpp
)

IF (${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION} GREATER 3.1)
    CHECK_INCLUDE_FILE_CXX("shlwapi.h" FATAL_ERROR)
ENDIF()

project(${PROJECT_NAME} CXX)

add_executable(${PROJECT_NAME} ${SRC_FILES} ${HEADERS})
TARGET_LINK_LIBRARIES(${PROJECT_NAME} shlwapi.lib)
