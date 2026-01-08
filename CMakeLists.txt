cmake_minimum_required(VERSION 3.26.5)
project(css430_template C)

set(CMAKE_C_STANDARD 11)

add_executable(${PROJECT_NAME} main.c)

include(CTest)
add_executable(${PROJECT_NAME}-test test.c munit/munit.c)
add_test(${PROJECT_NAME}-test ${PROJECT_NAME}-test)
