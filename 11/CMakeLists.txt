cmake_minimum_required(VERSION 3.23)
project(11)

set(CMAKE_CXX_STANDARD 20)

include_directories(/opt/homebrew/Cellar/sfml/2.5.1_2/include)
link_directories(/opt/homebrew/Cellar/sfml/2.5.1_2/lib)

add_executable(11 main.cpp)

target_link_libraries(11 sfml-graphics sfml-window sfml-system)

