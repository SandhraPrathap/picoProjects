cmake_minimum_required(VERSION 3.12)

# Pull in SDK (must be before project)
include(pico_sdk_import.cmake)

project(dino C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)
pico_sdk_init()
add_executable(dino
        dino.c
        )

# pull in common dependencies
target_link_libraries(dino pico_stdlib hardware_i2c)


pico_add_extra_outputs(dino)
