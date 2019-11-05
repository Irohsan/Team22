project(GenTest)
add_executable(Driver Driver.cpp util/Util.cpp util/Util.h TranslationEngine.h)
set(COMMON_SOURCES util/DataStructures.cpp util/Util.cpp BinaryParser.cpp FileAssembler.cpp TranslationEngine.cpp)
set(TARGET_SOURCES Driver.cpp)
#for when we have tests
set(TEST_SOURCES )

add_executable( GenTest ${COMMON_SOURCES} ${TARGET_SOURCES})

