cmake_minimum_required(VERSION 2.8)

project(app_project)

#add_subdirectory(headers)

#leave file where main method is in add_exectuble
add_executable(myapp main.cpp)

add_library(myLibrary STATIC test.cpp headers/h1.hpp headers/h2.hpp)

target_link_libraries(myapp myLibrary)

install(TARGETS myapp DESTINATION bin)