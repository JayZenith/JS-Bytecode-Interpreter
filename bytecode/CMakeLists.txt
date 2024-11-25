cmake_minimum_required(VERSION 3.10)

project(bytecode)


set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -g")


add_executable(hello main.cpp Instruction.cpp
                Generator.cpp Interpreter.cpp Block.cpp
                )

