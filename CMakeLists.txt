cmake_minimum_required(VERSION 4.3)
project(Projet_2)

set(CMAKE_CXX_STANDARD 20)

add_executable(Projet_2 src/main.cpp
        src/Tournament.cpp
        src/Tournament.h
        src/Agent.cpp
        src/Agent.h
        src/Strategy.h
        src/AllD.cpp
        src/AllD.h
        src/ScoreCalculator.cpp
        src/ScoreCalculator.h
)
