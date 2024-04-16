cmake_minimum_required(VERSION 3.5)
project(DP_01_02 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(HEADERS_LIST sqlselectquerybuilder.h)
set(SRC_LIST sqlselectquerybuilder.cpp)

add_executable(${PROJECT_NAME} main.cpp ${HEADERS_LIST} ${SRC_LIST})
