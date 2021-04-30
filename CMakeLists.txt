cmake_minimum_required(VERSION 3.0)

project(Tetris)

include_directories(${Project_source_dir})

add_executable(Game main.cpp board.h block.h)
