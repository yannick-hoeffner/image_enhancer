cmake_minimum_required(VERSION 3.10 FATAL_ERROR)
project(ImageEnhancerApp LANGUAGES CXX)

add_executable(ImageEnhancerApp)
file(GLOB_RECURSE APP_SOURCES "src/*.cpp") 
target_sources(ImageEnhancerApp PRIVATE ${APP_SOURCES})
target_include_directories(ImageEnhancerApp PUBLIC "include")
target_link_libraries(ImageEnhancerApp PRIVATE ImageEnhancerLib)