cmake_minimum_required(VERSION 3.10 FATAL_ERROR)
project(ImageEnhancer LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED True)

find_package(OpenMP REQUIRED)

add_subdirectory(lib)

add_subdirectory(app)
