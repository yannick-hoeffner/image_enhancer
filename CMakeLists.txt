cmake_minimum_required(VERSION 3.10)
project(ImageEnhancer)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

find_package(OpenMP REQUIRED)

# first target is the library in src/lib
add_library(ImageEnhancerLib src/lib/image_enhancer_lib.cpp)
target_include_directories(ImageEnhancerLib PUBLIC "include")
target_link_libraries(ImageEnhancerLib PUBLIC OpenMP::OpenMP_CXX)


# second target is the main executable in src/app
add_executable(ImageEnhancer src/app/main.cpp)
target_link_libraries(ImageEnhancer PRIVATE ImageEnhancerLib)


# third targets are tests in src/tests
add_executable(ImageEnhancerTests src/tests/test_image_enhancer_lib.cpp)
target_link_libraries(ImageEnhancerTests PRIVATE ImageEnhancerLib)