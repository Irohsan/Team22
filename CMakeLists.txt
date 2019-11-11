project(GenTest)
cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 11)

include_directories(include/modules/BinaryParser)
include_directories(include/modules/FileAssembler)
include_directories(include/modules/TranslationEngine)
include_directories(include/modules/util)

add_executable(GenTest src/main.cpp)

add_compile_options( "-Wall" "-std=c++11" "-Wextra"
                     "$<$<CONFIG:DEBUG>:-O0;-g>" 
					 "$<$<CONFIG:RELEASE>:-O3>")

if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Release)
endif()

add_library(gentest_binaryparser STATIC src/modules/BinaryParser/BinaryParser.cpp)
add_library(gentest_fileassembler STATIC src/modules/FileAssembler/FileAssembler.cpp)
add_library(gentest_translationengine STATIC src/modules/TranslationEngine/TranslationEngine.cpp)
add_library(gentest_util STATIC src/modules/util/Util.cpp
                                src/modules/util/DataStructures.cpp
           )

option( BUILD_TESTS "Determines whether to build tests." ON )
if(BUILD_TESTS)
  include_directories(test lib)
  add_library( test_lib STATIC test/modules/TestBinaryParser.cpp
               test/modules/TestFileAssembler.cpp
               test/modules/TestTranslationEngine.cpp
               test/modules/TestUtil.cpp
  )  
  add_executable(gentest_test test/TestMain.cpp)
  enable_testing()

  target_link_libraries(gentest_test PUBLIC
                        test_lib
                        gentest_binaryparser
                        gentest_fileassembler
                        gentest_translationengine
                        gentest_util
                       )

  add_test( NAME test COMMAND gentest_test ) 
endif()

target_link_libraries(GenTest gentest_binaryparser gentest_fileassembler gentest_translationengine gentest_util)
