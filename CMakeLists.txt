cmake_minimum_required(VERSION 3.26.5)
project(css430_template C)

set(CMAKE_C_STANDARD 11)

add_executable(${PROJECT_NAME} main.c)

find_package(PkgConfig REQUIRED)
pkg_check_modules(CUNIT REQUIRED cunit)
add_executable(${PROJECT_NAME}-test test.c)
target_include_directories(${PROJECT_NAME}-test PRIVATE ${CUNIT_INCLUDE_DIRS})
target_link_libraries(${PROJECT_NAME}-test PRIVATE ${CUNIT_LIBRARIES})
add_test(${PROJECT_NAME}-test ${PROJECT_NAME}-test)
