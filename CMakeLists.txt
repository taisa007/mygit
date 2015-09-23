cmake_minimum_required(VERSION 3.3)
project(mygit)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES mygit.c cache.h init-db.c builtin.h)
add_executable(mygit ${SOURCE_FILES})