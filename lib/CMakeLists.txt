cmake_minimum_required(VERSION 3.10 FATAL_ERROR)
project(ImageEnhancerLib LANGUAGES CXX)

# first target is the library
add_library(ImageEnhancerLib STATIC)
file(GLOB_RECURSE LIB_SOURCES "src/*.cpp")
target_sources(ImageEnhancerLib PRIVATE ${LIB_SOURCES})
target_include_directories(ImageEnhancerLib PUBLIC "include")
target_link_libraries(ImageEnhancerLib PUBLIC OpenMP::OpenMP_CXX)


# second target are tests
add_executable(ImageEnhancerTests)
file(GLOB_RECURSE TEST_SOURCES "tests/*.cpp")
target_sources(ImageEnhancerTests PRIVATE ${TEST_SOURCES})
target_include_directories(ImageEnhancerTests PUBLIC "include")
target_link_libraries(ImageEnhancerTests PRIVATE ImageEnhancerLib PRIVATE catch)

add_test(NAME ImageEnhancerTests COMMAND ImageEnhancerTests)