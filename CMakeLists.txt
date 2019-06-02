cmake_minimum_required (VERSION 3.8)
set(CMAKE_CXX_STANDARD 17)
project(pat-to-chart)

#set(SFML_STATIC_LIBRARIES TRUE)
find_package(SFML COMPONENTS graphics window)

set(SRC src/main.cpp)
add_executable(pat-to-chart ${SRC})

target_link_libraries(pat-to-chart sfml-graphics)
