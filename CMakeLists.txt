cmake_minimum_required(VERSION 3.20)
project(CPP_DataStructures)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Individual data structures can be added as separate executables
add_executable(main main.cpp)
# Future additions can follow this pattern:
# add_executable(linked_list src/linked_list.cpp)
