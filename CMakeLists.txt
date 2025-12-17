cmake_minimum_required(VERSION 3.20.0)
set(ZEPHYR_MODULES ${CMAKE_SOURCE_DIR}/../../module/say_hello)
find_package(
    Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE}
)
project(6kconfig_demo C)
target_sources(app PRIVATE src/main.c)
