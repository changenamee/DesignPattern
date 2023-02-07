cmake_minimum_required(VERSION 3.24)
project(DesignPattern)

set(CMAKE_CXX_STANDARD 20)

add_executable(DesignPattern main.cpp observer/MainForm.cpp observer/MainForm.h observer/FileSplitter.cpp observer/FileSplitter.h observer/ProgressBar.cpp observer/ProgressBar.h observer/FileSplitter1.cpp observer/FileSplitter1.h)
