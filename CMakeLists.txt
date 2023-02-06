cmake_minimum_required(VERSION 3.24)
project(BaseEqsCounter)

set(CMAKE_CXX_STANDARD 14)

include_directories("src/BaseEquation ")

add_executable(BaseEqsCounter
        "src/BaseEquation/Equation.cpp"
        "src/BaseEquation/Equation.h" BaseEqsCounter.cpp src/mainMenu/mainMenu.h src/mainMenu/mainMenu.cpp)
