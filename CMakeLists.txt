cmake_minimum_required(VERSION 3.26.5)
project(css430_template C)

option(CSS430_BUILD_TESTS "Build the unit tests (requires munit submodule)" OFF)

set(CMAKE_C_STANDARD 11)

add_executable(${PROJECT_NAME} main.c)

if (${CSS430_BUILD_TESTS})
    include(CTest)
    add_executable(${PROJECT_NAME}-test test.c munit/munit.c)
    add_test(${PROJECT_NAME}-test ${PROJECT_NAME}-test)
endif ()
