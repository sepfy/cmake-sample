cmake_minimum_required(VERSION 3.1)
project(func)

add_library(func func.c)


option(UNITTEST_ENABLE "Build the unittest code" OFF)

file(GLOB func_SRC "*.c")
file(GLOB unittest_SRC "*unittest*")

list(REMOVE_ITEM func_SRC ${unittest_SRC})

if(UNITTEST_ENABLE)
  add_executable(unittest ${unittest_SRC})
endif(UNITTEST_ENABLE)
