cmake_minimum_required(VERSION 2.8 FATAL_ERROR)

SET(CMAKE_INCLUDE_CURRENT_DIR TRUE)
IF (NOT CMAKE_BUILD_TYPE)
    MESSAGE(STATUS "No build type selected, default to Release (Note that it will not work in Visual Studio)")
    SET(CMAKE_BUILD_TYPE "Release")
ENDIF()

IF (${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION} GREATER 3.1)
    CHECK_INCLUDE_FILE_CXX("shlwapi.h" FATAL_ERROR)
ENDIF()

SET(PROJECT_NAME relative)
project(${PROJECT_NAME} CXX)
SET(RHEADERS
)
set(RSRC_FILES
    relative.cpp
)
add_executable(${PROJECT_NAME} ${RSRC_FILES} ${RHEADERS})
TARGET_LINK_LIBRARIES(${PROJECT_NAME} shlwapi.lib)

SET(APROJECT_NAME absolute)
project(${APROJECT_NAME} CXX)
SET(AHEADERS
)
set(ASRC_FILES
    absolute.cpp
)
add_executable(${APROJECT_NAME} ${ASRC_FILES} ${AHEADERS})
