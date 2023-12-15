cmake_minimum_required(VERSION 3.23)
project(project)

set(CMAKE_CXX_STANDARD 20)

include_directories(/opt/homebrew/Cellar/sfml/2.5.1_2/include)
link_directories(/opt/homebrew/Cellar/sfml/2.5.1_2/lib)

add_executable(project main.cpp Solar.cpp Solar.hpp)

target_link_libraries(project sfml-graphics sfml-window sfml-system)

