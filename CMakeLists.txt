project(GenTest)
cmake_minimum_required(VERSION 3.10)

include_directories(include/modules/BinaryParser)
include_directories(include/modules/FileAssembler)
include_directories(include/modules/TranslationEngine)
include_directories(include/modules/util)

add_executable(GenTest src/main.cpp)

add_library(gentest_binaryparser STATIC src/modules/BinaryParser/BinaryParser.cpp)
add_library(gentest_fileassembler STATIC src/modules/FileAssembler/FileAssembler.cpp)
add_library(gentest_translationengine STATIC src/modules/TranslationEngine/TranslationEngine.cpp)
add_library(gentest_util STATIC src/modules/util/Util.cpp
                                src/modules/util/DataStructures.cpp)

target_link_libraries(GenTest gentest_binaryparser gentest_fileassembler gentest_translationengine gentest_util)