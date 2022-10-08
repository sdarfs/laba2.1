cmake_minimum_required(VERSION 3.23)
project(task1 C)

set(CMAKE_C_STANDARD 11)

add_executable(task1 main.c POINTS.c POINTS.h LINES.c LINES.h SQUARE.c SQUARE.h TRIANGLE.c TRIANGLE.h CIRCLES.c CIRCLES.h)
