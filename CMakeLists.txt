cmake_minimum_required(VERSION 3.20.0)
get_filename_component(SAY_HELLO_PATH
    "${CMAKE_SOURCE_DIR}/modules/say_hello"
    REALPATH
)

message(STATUS "Resolved path = ${SAY_HELLO_PATH}")
set(ZEPHYR_EXTRA_MODULES "${SAY_HELLO_PATH}")
find_package(
    Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE}
)
project(module_demo)
target_sources(app PRIVATE src/main.c)
