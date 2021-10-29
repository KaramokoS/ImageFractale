cmake_minimum_required(VERSION 3.10)

project(E_MOSAIC)

include_directories(bitmap)
add_subdirectory(bitmap)

include_directories(mandelbrot)
add_subdirectory(mandelbrot)


add_executable(E_MOSAIC main.cpp)

target_link_libraries(E_MOSAIC bitmap)
target_link_libraries(E_MOSAIC mandelbrot)

