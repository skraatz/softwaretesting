set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/modules/")

message( ${CMAKE_MODULE_PATH} ) 


find_package(CppUnit REQUIRED)
include_directories(${CPPUNIT_INCLUDE_DIR})
include_directories("${CMAKE_BINARY_DIR}/../demo-code/src")
LIST(APPEND UnitTestLibs ${CPPUNIT_LIBRARY})

#Find all source files in unit test
FILE(GLOB_RECURSE UNIT_TEST "*.cpp" "*.hpp" "*.h")

#Add all unit tests in addition to all source files.
add_executable(UnitTests ${UNIT_TEST} )# $<TARGET_OBJECTS:SRCFILES>)

#Link this executable.
target_link_libraries (UnitTests ${LibraryList} ${UnitTestLibs} "${CMAKE_BINARY_DIR}/../build/demo-code/libdemo.a")

set(UNIT_TEST UnitTests)
add_custom_command(
     TARGET ${UNIT_TEST}
     COMMENT "Run tests after build completed"
     POST_BUILD 
     COMMAND ${UNIT_TEST}
)
